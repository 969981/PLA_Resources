/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01078e44; name: FUN_01078e44
 */


void FUN_01078e44(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  double dVar2;
  float local_24;
  
  iVar1 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar1 + 1;
  dVar2 = (double)FUN_00150a90(param_1,iVar1 + 1,0);
  local_24 = (float)dVar2;
  FUN_01078ea8(param_1,param_2,param_3,&local_24);
  return;
}


