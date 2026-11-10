/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e04e00; name: FUN_00e04e00
 */


void FUN_00e04e00(undefined8 param_1,long *param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  code *pcVar3;
  
  iVar2 = FUN_00150cc0(param_1,2);
  pcVar3 = (code *)*param_2;
  plVar1 = (long *)(param_3 + (param_2[1] >> 1));
  if ((param_2[1] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar1);
  }
  (*pcVar3)(plVar1,iVar2 != 0);
  FUN_0014ff10(param_1,0);
  return;
}


