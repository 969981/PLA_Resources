/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e3de4; name: FUN_002e3de4
 */


void FUN_002e3de4(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1] - lVar1;
  *param_2 = lVar2 >> 5;
  if (lVar2 != 0) {
    param_2[1] = lVar1;
  }
  return;
}


