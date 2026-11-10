/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 023f525c; name: FUN_023f525c
 */


void FUN_023f525c(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_28;
  
  local_28 = 0;
  lVar1 = FUN_023f4704(param_1,1,&local_28);
  local_28 = 0;
  puVar2 = (undefined8 *)FUN_023e932c(param_1,3,&local_28);
  *(undefined8 *)(lVar1 + *param_2) = *puVar2;
  FUN_0014ff10(param_1,0);
  return;
}


