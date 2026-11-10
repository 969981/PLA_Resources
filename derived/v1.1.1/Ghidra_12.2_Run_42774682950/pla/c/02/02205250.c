/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02205250; name: FUN_02205250
 */


uint FUN_02205250(undefined8 param_1,undefined4 *param_2,long *param_3,long param_4)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  undefined4 local_24;
  
  iVar2 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar2 + 1;
  local_24 = FUN_00150ba0(param_1,iVar2 + 2,0);
  pcVar4 = (code *)*param_3;
  plVar1 = (long *)(param_4 + (param_3[1] >> 1));
  if ((param_3[1] & 1U) != 0) {
    pcVar4 = *(code **)(pcVar4 + *plVar1);
  }
  uVar3 = (*pcVar4)(plVar1,&local_24);
  return uVar3 & 1;
}


