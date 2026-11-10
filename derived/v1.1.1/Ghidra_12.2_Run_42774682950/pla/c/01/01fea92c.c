/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01fea92c; name: FUN_01fea92c
 */


void FUN_01fea92c(undefined8 param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  byte *pbStack_38;
  
  lVar6 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar7 = FUN_001511d0(param_1,1);
  lVar7 = *(long *)(lVar7 + ((ulong)(uint)-(int)lVar7 & 7));
  if ((*PTR_DAT_04380d08 != '\0') && (iVar2 = FUN_00155630(param_1,1,"class_cast"), iVar2 != 0)) {
    pcVar8 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar3 = FUN_01756c9c();
    lVar7 = (*pcVar8)(lVar7,uVar3);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  uVar3 = FUN_00150ba0(param_1,2,0);
  pcVar8 = *(code **)(lVar6 + 0x98);
  plVar1 = (long *)(lVar7 + ((long)*(ulong *)(lVar6 + 0xa0) >> 1));
  if ((*(ulong *)(lVar6 + 0xa0) & 1) != 0) {
    pcVar8 = *(code **)(pcVar8 + *plVar1);
  }
  (*pcVar8)(&uStack_80,plVar1,uVar3);
  FUN_0014ff10(param_1,0);
  pbVar4 = (byte *)FUN_01755be4();
  pbStack_38 = *(byte **)(pbVar4 + 0x10);
  if ((*pbVar4 & 1) == 0) {
    pbStack_38 = pbVar4 + 1;
  }
  uStack_40 = param_1;
  puVar5 = (undefined8 *)FUN_01755e20(param_1);
  puVar5[2] = uStack_70;
  puVar5[3] = uStack_68;
  *puVar5 = uStack_80;
  puVar5[1] = uStack_78;
  puVar5[6] = uStack_50;
  puVar5[7] = uStack_48;
  puVar5[4] = uStack_60;
  puVar5[5] = uStack_58;
  FUN_01756034(&uStack_40);
  return;
}


