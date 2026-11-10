/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01071c10; name: FUN_01071c10
 */


void FUN_01071c10(undefined8 param_1,long *param_2,long param_3)

{
  byte *pbVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_30;
  byte *pbStack_28;
  
  lVar3 = *param_2;
  FUN_0014ff10(param_1,0);
  pbVar1 = (byte *)FUN_00ea1364();
  pbStack_28 = *(byte **)(pbVar1 + 0x10);
  if ((*pbVar1 & 1) == 0) {
    pbStack_28 = pbVar1 + 1;
  }
  local_30 = param_1;
  plVar2 = (long *)FUN_01051f00(param_1);
  *plVar2 = param_3 + lVar3;
  FUN_01052048(&local_30);
  return;
}


