/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02338b40; name: FUN_02338b40
 */


void FUN_02338b40(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  code *pcVar2;
  
  pcVar2 = (code *)*param_2;
  if ((param_2[1] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_3 + (param_2[1] >> 1)));
  }
  iVar1 = (*pcVar2)();
  FUN_0014ff10(param_1,0);
  FUN_001514d0(param_1,(long)iVar1);
  return;
}


