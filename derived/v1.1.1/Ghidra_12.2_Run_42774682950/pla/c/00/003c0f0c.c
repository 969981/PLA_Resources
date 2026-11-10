/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c0f0c; name: FUN_003c0f0c
 */


long FUN_003c0f0c(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = FUN_002e2e80(PTR_FUN_04373078,0x60);
    if (lVar1 != 0) {
      FUN_003bb340(lVar1,0);
    }
    return lVar1;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_0032cf88(param_1,0,0x60);
  }
  lVar1 = FUN_0032cea0(param_1,0x60);
  FUN_003bb340(lVar1,param_1);
  return lVar1;
}


