/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016cc7b0; name: FUN_016cc7b0
 */


void FUN_016cc7b0(undefined8 param_1,long *param_2,long param_3)

{
  byte *pbVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_30;
  byte *pbStack_28;
  
  lVar3 = *param_2;
  FUN_0014ff10(param_1,0);
  pbVar1 = (byte *)FUN_00e18178();
  pbStack_28 = *(byte **)(pbVar1 + 0x10);
  if ((*pbVar1 & 1) == 0) {
    pbStack_28 = pbVar1 + 1;
  }
  local_30 = param_1;
  plVar2 = (long *)FUN_00f37f60(param_1);
  *plVar2 = param_3 + lVar3;
  FUN_00e184bc(&local_30);
  return;
}


