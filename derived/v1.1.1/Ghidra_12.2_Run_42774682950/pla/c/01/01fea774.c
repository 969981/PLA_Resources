/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01fea774; name: FUN_01fea774
 */


void FUN_01fea774(undefined8 param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  byte *pbStack_38;
  
  lVar3 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar4 = FUN_001511d0(param_1,1);
  lVar4 = *(long *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7));
  if ((*PTR_DAT_04380d08 != '\0') && (iVar2 = FUN_00155630(param_1,1,"class_cast"), iVar2 != 0)) {
    pcVar8 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar5 = FUN_01756c9c();
    lVar4 = (*pcVar8)(lVar4,uVar5);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  uVar5 = FUN_00150ba0(param_1,2,0);
  pcVar8 = *(code **)(lVar3 + 0x98);
  plVar1 = (long *)(lVar4 + ((long)*(ulong *)(lVar3 + 0xa0) >> 1));
  if ((*(ulong *)(lVar3 + 0xa0) & 1) != 0) {
    pcVar8 = *(code **)(pcVar8 + *plVar1);
  }
  (*pcVar8)(&local_80,plVar1,uVar5);
  FUN_0014ff10(param_1,0);
  pbVar6 = (byte *)FUN_01755be4();
  pbStack_38 = *(byte **)(pbVar6 + 0x10);
  if ((*pbVar6 & 1) == 0) {
    pbStack_38 = pbVar6 + 1;
  }
  local_40 = param_1;
  puVar7 = (undefined8 *)FUN_01755e20(param_1);
  puVar7[2] = local_70;
  puVar7[3] = uStack_68;
  *puVar7 = local_80;
  puVar7[1] = uStack_78;
  puVar7[6] = local_50;
  puVar7[7] = uStack_48;
  puVar7[4] = local_60;
  puVar7[5] = uStack_58;
  FUN_01756034(&local_40);
  return;
}


