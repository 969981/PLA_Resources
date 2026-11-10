/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024f2cb0; name: FUN_024f2cb0
 */


void FUN_024f2cb0(undefined8 param_1,long *param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  uVar3 = FUN_00150ba0(param_1,2,0);
  pcVar4 = (code *)*param_2;
  plVar1 = (long *)(param_3 + (param_2[1] >> 1));
  if ((param_2[1] & 1U) != 0) {
    pcVar4 = *(code **)(pcVar4 + *plVar1);
  }
  iVar2 = (*pcVar4)(plVar1,uVar3);
  FUN_0014ff10(param_1,0);
  FUN_001514d0(param_1,(long)iVar2);
  return;
}


