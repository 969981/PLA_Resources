/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f57a60; name: FUN_02f57a60
 */


long FUN_02f57a60(int param_1)

{
  long lVar1;
  
  lVar1 = FUN_02f59d90(*(undefined4 *)(&DAT_0442d120 + (long)param_1 * 4));
  if ((lVar1 == 0) && (lVar1 = FUN_02f58710(param_1), lVar1 != 0)) {
    FUN_02f59da0(*(undefined4 *)(&DAT_0442d120 + (long)param_1 * 4),lVar1);
  }
  return lVar1;
}


