/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0185924c; name: FUN_0185924c
 */


undefined4 FUN_0185924c(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar2 = *param_1;
  uVar3 = 2;
  if (lVar2 != -0x7afa371b5cc2d8db) {
    uVar3 = 0;
  }
  uVar1 = 3;
  if (lVar2 != -0x6034c566b8a5ad85) {
    uVar1 = uVar3;
  }
  uVar3 = 1;
  if (lVar2 != -0x6862c6fa26b0f4ca) {
    uVar3 = uVar1;
  }
  return uVar3;
}


