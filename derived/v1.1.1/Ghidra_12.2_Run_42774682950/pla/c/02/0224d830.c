/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0224d830; name: FUN_0224d830
 */


uint FUN_0224d830(undefined8 param_1,long *param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 local_28;
  
  local_28 = 0;
  uVar3 = FUN_02241d00(param_1,2,&local_28);
  pcVar4 = (code *)*param_2;
  plVar1 = (long *)(param_3 + (param_2[1] >> 1));
  if ((param_2[1] & 1U) != 0) {
    pcVar4 = *(code **)(pcVar4 + *plVar1);
  }
  uVar2 = (*pcVar4)(plVar1,uVar3);
  return uVar2 & 1;
}


