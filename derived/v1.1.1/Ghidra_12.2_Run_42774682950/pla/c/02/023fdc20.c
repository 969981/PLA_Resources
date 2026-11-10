/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 023fdc20; name: FUN_023fdc20
 */


void FUN_023fdc20(undefined8 param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 local_28;
  
  pcVar2 = (code *)*param_2;
  if ((param_2[1] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_3 + (param_2[1] >> 1)));
  }
  uVar1 = (*pcVar2)();
  FUN_0014ff10(param_1,0);
  local_28 = uVar1;
  FUN_023fdc7c(param_1,&local_28);
  return;
}


