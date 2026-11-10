/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ed42c; name: FUN_003ed42c
 */


void FUN_003ed42c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_LAB_04373088;
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    while (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + 0x38);
      FUN_003ed308(lVar1);
      FUN_002e2ea0(puVar2,lVar1);
      lVar1 = lVar3;
    }
                    /* try { // try from 003ed474 to 003ed47b has its CatchHandler @ 003ed48c */
    FUN_002ef710(param_1);
  }
  return;
}


