/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ebe00; name: FUN_002ebe00
 */


ulong FUN_002ebe00(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_2 & param_2 - 1) == 0) {
    lVar1 = 0;
    if ((param_2 + 7 + param_1 == 0) || (lVar1 = (*(code *)PTR_malloc_04152f78)(), lVar1 != 0)) {
      uVar2 = param_2 + 7 + lVar1 & -param_2;
      *(long *)(uVar2 - 8) = lVar1;
      return uVar2;
    }
  }
  else {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/gpr/alloc.cc",0x5b,2,
                 "assertion failed: %s","((alignment - 1) & alignment) == 0");
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


