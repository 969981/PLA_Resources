/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea9008; name: FUN_02ea9008
 */


long FUN_02ea9008(undefined4 param_1)

{
  long lVar1;
  
  lVar1 = FUN_02f59e30(1,0x40);
  if (lVar1 != 0) {
    FUN_02ea92e0(lVar1,param_1);
    FUN_02ea94e0(DAT_0440a120 + 0x1f8,lVar1);
  }
  return lVar1;
}


