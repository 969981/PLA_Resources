/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 022e3a20; name: FUN_022e3a20
 */


void FUN_022e3a20(undefined8 param_1,long *param_2,long param_3)

{
  long lVar1;
  byte *pbVar2;
  long *plVar3;
  code *pcVar4;
  undefined8 local_30;
  byte *pbStack_28;
  
  pcVar4 = (code *)*param_2;
  if ((param_2[1] & 1U) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_3 + (param_2[1] >> 1)));
  }
  lVar1 = (*pcVar4)();
  FUN_0014ff10(param_1,0);
  pbVar2 = (byte *)FUN_00fb7358();
  pbStack_28 = *(byte **)(pbVar2 + 0x10);
  if ((*pbVar2 & 1) == 0) {
    pbStack_28 = pbVar2 + 1;
  }
  local_30 = param_1;
  if (lVar1 == 0) {
    FUN_00151490(param_1);
  }
  else {
    plVar3 = (long *)FUN_00fc1700();
    *plVar3 = lVar1;
    FUN_00fc1848(&local_30);
  }
  return;
}


