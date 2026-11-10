/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eef860; name: FUN_02eef860
 */


long FUN_02eef860(long param_1)

{
  long lVar1;
  
  if (((*(uint *)(param_1 + 0x40) < 2) ||
      (lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 8), lVar1 == 0)) &&
     (lVar1 = DAT_0440a410, DAT_0440a410 == 0)) {
    FUN_02e43d1c();
    lVar1 = DAT_0440a410;
  }
  return lVar1 + 0xa0;
}


