/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00305000; name: FUN_00305000
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00305000(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = _UNK_038897e8;
  lVar1 = _DAT_038897e0;
  param_1[4] = 0;
  *param_1 = (long)(param_1 + 5);
  param_1[1] = (long)(param_1 + 5);
  param_1[3] = lVar2;
  param_1[2] = lVar1;
  return;
}


