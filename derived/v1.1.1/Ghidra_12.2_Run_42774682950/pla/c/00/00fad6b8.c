/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fad6b8; name: FUN_00fad6b8
 */


void FUN_00fad6b8(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  byte *pbVar5;
  undefined1 (*pauVar6) [16];
  undefined1 auVar7 [16];
  undefined8 local_40;
  byte *pbStack_38;
  
  lVar2 = FUN_001511d0(param_1,1);
  lVar2 = *(long *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_0437da50 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar3 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar4 = FUN_00fad1e8();
    lVar2 = (*pcVar3)(lVar2,uVar4);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  pcVar3 = (code *)*param_2;
  if ((param_2[1] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(lVar2 + (param_2[1] >> 1)));
  }
  auVar7 = (*pcVar3)();
  FUN_0014ff10(param_1,0);
  pbVar5 = (byte *)FUN_00e9ffa0();
  pbStack_38 = *(byte **)(pbVar5 + 0x10);
  if ((*pbVar5 & 1) == 0) {
    pbStack_38 = pbVar5 + 1;
  }
  local_40 = param_1;
  pauVar6 = (undefined1 (*) [16])FUN_00ea01f0(param_1);
  *pauVar6 = auVar7;
  FUN_00ea0408(&local_40);
  return;
}


