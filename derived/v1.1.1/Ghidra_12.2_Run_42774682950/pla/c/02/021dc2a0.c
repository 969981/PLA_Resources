/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021dc2a0; name: FUN_021dc2a0
 */


void FUN_021dc2a0(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  undefined1 (*pauVar2) [16];
  undefined1 auVar3 [16];
  undefined8 local_30;
  byte *pbStack_28;
  
  local_30 = 0;
  auVar3 = FUN_021dc314(param_1,&local_30,param_2);
  FUN_0014ff10(param_1,0);
  pbVar1 = (byte *)FUN_00e9ffa0();
  pbStack_28 = *(byte **)(pbVar1 + 0x10);
  if ((*pbVar1 & 1) == 0) {
    pbStack_28 = pbVar1 + 1;
  }
  local_30 = param_1;
  pauVar2 = (undefined1 (*) [16])FUN_00ea01f0(param_1);
  *pauVar2 = auVar3;
  FUN_00ea0408(&local_30);
  return;
}


