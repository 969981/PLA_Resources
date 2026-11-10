/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0220c780; name: FUN_0220c780
 */


void FUN_0220c780(undefined8 param_1,long *param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  undefined1 (*pauVar5) [16];
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined8 local_40;
  byte *pbStack_38;
  
  lVar3 = FUN_001511d0(param_1,2);
  uVar7 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_0437c708 != '\0') && (iVar2 = FUN_00155630(param_1,2,"class_cast"), iVar2 != 0)) {
    pcVar8 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar6 = FUN_00ea12ac();
    uVar7 = (*pcVar8)(uVar7,uVar6);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  pcVar8 = (code *)*param_2;
  plVar1 = (long *)(param_3 + (param_2[1] >> 1));
  if ((param_2[1] & 1U) != 0) {
    pcVar8 = *(code **)(pcVar8 + *plVar1);
  }
  auVar9 = (*pcVar8)(plVar1,uVar7);
  FUN_0014ff10(param_1,0);
  pbVar4 = (byte *)FUN_00e9ffa0();
  pbStack_38 = *(byte **)(pbVar4 + 0x10);
  if ((*pbVar4 & 1) == 0) {
    pbStack_38 = pbVar4 + 1;
  }
  local_40 = param_1;
  pauVar5 = (undefined1 (*) [16])FUN_00ea01f0(param_1);
  *pauVar5 = auVar9;
  FUN_00ea0408(&local_40);
  return;
}


