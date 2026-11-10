/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003bfe68; name: FUN_003bfe68
 */


long FUN_003bfe68(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = FUN_002e2e80(PTR_FUN_04373078,0xe8);
    if (lVar1 != 0) {
      FUN_003a824c(lVar1,0);
    }
    return lVar1;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_0032cf88(param_1,0,0xe8);
  }
  lVar1 = FUN_0032cea0(param_1,0xe8);
  FUN_003a824c(lVar1,param_1);
  return lVar1;
}


