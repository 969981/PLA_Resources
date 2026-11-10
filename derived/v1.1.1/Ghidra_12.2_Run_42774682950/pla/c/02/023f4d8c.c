/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 023f4d8c; name: FUN_023f4d8c
 */


void FUN_023f4d8c(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long local_28;
  
  local_28 = 0;
  lVar1 = FUN_023f4704(param_1,1,&local_28);
  lVar2 = *param_2;
  FUN_0014ff10(param_1,0);
  local_28 = lVar1 + lVar2;
  FUN_023f4e14(param_1,&local_28);
  return;
}


