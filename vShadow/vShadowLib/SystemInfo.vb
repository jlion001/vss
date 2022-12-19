Imports System.Runtime.InteropServices

Friend Class SystemInfo
    'By Joe Lynds, 2008
    'http://www.jlion.com

    <StructLayout(LayoutKind.Sequential)> _
    Private Structure SYSTEM_INFO
        Dim wProcessorArchitecture As Int16
        Dim wReserved As Int16
        Dim dwPageSize As Integer
        Dim lpMinimumApplicationAddress As Integer
        Dim lpMaximumApplicationAddress As Integer
        Dim dwActiveProcessorMask As Integer
        Dim dwNumberOfProcessors As Integer
        Dim dwProcessorType As Integer
        Dim dwAllocationGranularity As Integer
        Dim wProcessorLevel As Int16
        Dim wProcessorRevision As Int16
    End Structure

    Private Declare Sub GetNativeSystemInfo Lib "kernel32" (<MarshalAs(UnmanagedType.Struct)> ByRef lpSystemInfo As SYSTEM_INFO)

    Public Enum PROCESSOR_ARCHITECTURE As UShort
        PROCESSOR_ARCHITECTURE_INTEL = 0
        PROCESSOR_ARCHITECTURE_IA64as = 6
        PROCESSOR_ARCHITECTURE_AMD64 = 9
        PROCESSOR_ARCHITECTURE_UNKNOWN = &HFFFF
    End Enum

    Public Enum PROCESSOR As Long
        PROCESSOR_INTEL_386 = 386
        PROCESSOR_INTEL_486 = 486
        PROCESSOR_INTEL_PENTIUM = 586
        PROCESSOR_INTEL_IA64 = 2200
        PROCESSOR_AMD_X8664 = 8664
    End Enum

    Private miProcessorArchitecture As PROCESSOR_ARCHITECTURE
    Private miProcessorType As PROCESSOR

    Public Sub New()
        Dim oInfo As SYSTEM_INFO
        GetNativeSystemInfo(oInfo)

        With oInfo
            miProcessorArchitecture = .wProcessorArchitecture
            miProcessorType = .dwProcessorType
        End With
    End Sub

    Public ReadOnly Property ProcessorArchitecture() As PROCESSOR_ARCHITECTURE
        Get
            Return miProcessorArchitecture
        End Get
    End Property

    Public ReadOnly Property ProcessorType() As PROCESSOR
        Get
            Return miProcessorType
        End Get
    End Property

    Public ReadOnly Property Is64Bit() As Boolean
        Get
            If miProcessorArchitecture = SystemInfo.PROCESSOR_ARCHITECTURE.PROCESSOR_ARCHITECTURE_AMD64 _
                OrElse miProcessorArchitecture = SystemInfo.PROCESSOR_ARCHITECTURE.PROCESSOR_ARCHITECTURE_IA64as Then
                '---64-bit
                Return True
            Else
                '--32-bit
                Return False
            End If
        End Get
    End Property
End Class
