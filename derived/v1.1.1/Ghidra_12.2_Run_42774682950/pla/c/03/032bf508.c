/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032bf508; name: FUN_032bf508
 */


void FUN_032bf508(long *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = **(long **)(param_3 + 0x10);
  *param_1 = param_3;
  param_1[1] = param_2;
  param_1[2] = lVar1;
  param_1[3] = 0;
  Hint_Prefetch(lVar1,0,0,0);
  Hint_Prefetch(lVar1 + 0x40,0,0,0);
  return;
}


