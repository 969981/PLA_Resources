/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02520a70; name: FUN_02520a70
 */


void FUN_02520a70(undefined8 param_1,long *param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 local_28;
  
  local_28 = 0;
  uVar2 = FUN_02520ac4(param_1,2,&local_28);
  pcVar3 = (code *)*param_2;
  plVar1 = (long *)(param_3 + (param_2[1] >> 1));
  if ((param_2[1] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar1);
  }
  (*pcVar3)(plVar1,uVar2);
  return;
}


