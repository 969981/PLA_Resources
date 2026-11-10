/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0100dd60; name: FUN_0100dd60
 */


void FUN_0100dd60(undefined8 param_1)

{
  byte *pbVar1;
  undefined1 (*pauVar2) [16];
  undefined1 auVar3 [16];
  undefined8 local_40;
  byte *pbStack_38;
  
  auVar3 = FUN_0100ddd0();
  FUN_0014ff10(param_1,0);
  pbVar1 = (byte *)FUN_00ebd554();
  pbStack_38 = *(byte **)(pbVar1 + 0x10);
  if ((*pbVar1 & 1) == 0) {
    pbStack_38 = pbVar1 + 1;
  }
  local_40 = param_1;
  pauVar2 = (undefined1 (*) [16])FUN_00ebd7b0(param_1);
  *pauVar2 = auVar3;
  FUN_00ebd9c8(&local_40);
  return;
}


