/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020f8948; name: FUN_020f8948
 */


void FUN_020f8948(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined1 (*pauVar2) [16];
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined8 local_30;
  byte *pbStack_28;
  
  local_30 = 0;
  lVar1 = FUN_020ecf68(param_1,1,&local_30);
  pcVar3 = (code *)*param_2;
  if ((param_2[1] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(lVar1 + (param_2[1] >> 1)));
  }
  auVar4 = (*pcVar3)();
  FUN_0014ff10(param_1,0);
  pbStack_28 = (byte *)FUN_00e9ffa0();
  if ((*pbStack_28 & 1) == 0) {
    pbStack_28 = pbStack_28 + 1;
  }
  else {
    pbStack_28 = *(byte **)(pbStack_28 + 0x10);
  }
  local_30 = param_1;
  pauVar2 = (undefined1 (*) [16])FUN_00ea01f0(param_1);
  *pauVar2 = auVar4;
  FUN_00ea0408(&local_30);
  return;
}


