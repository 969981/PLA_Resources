/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0208ab80; name: FUN_0208ab80
 */


void FUN_0208ab80(undefined8 param_1,undefined8 param_2,long *param_3,long param_4)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 local_28;
  
  local_28 = 0;
  uVar2 = FUN_0179209c(param_2,2,&local_28);
  pcVar3 = (code *)*param_3;
  plVar1 = (long *)(param_4 + (param_3[1] >> 1));
  if ((param_3[1] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar1);
  }
  (*pcVar3)(param_1,plVar1,uVar2);
  return;
}


