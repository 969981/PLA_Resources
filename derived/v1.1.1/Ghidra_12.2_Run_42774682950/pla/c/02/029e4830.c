/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029e4830; name: FUN_029e4830
 */


void FUN_029e4830(long param_1,undefined8 param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined1 auVar2 [8];
  undefined1 uVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 local_b0;
  undefined8 local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined1 local_58 [8];
  undefined1 *local_50;
  undefined1 local_48;
  undefined4 local_44;
  uint local_38 [2];
  
  local_60 = 0;
  uStack_5c = 0;
  local_58 = (undefined1  [8])0x5400000;
  local_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  local_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  local_b0 = 0;
  local_a0 = (ulong)*(uint *)((long)param_3 + 0x34);
  cVar4 = *(char *)(param_3 + 7);
  local_a8._0_5_ = CONCAT14(cVar4,1);
  local_a8 = (ulong)(uint5)local_a8;
  if (cVar4 != '\x06') {
    puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 8);
    FUN_02947b84(*puVar8,cVar4,&local_50,local_38);
    uVar5 = (ulong)local_50 & 0xff;
    if (((uVar5 != 5) && ((local_38[0] & 0xff) < (uint)*(byte *)(puVar8 + uVar5 * 7 + 7))) &&
       (puVar8[uVar5 * 7 + (ulong)(byte)local_38[0] + 1] != 0)) {
      uVar3 = *(undefined1 *)(puVar8[uVar5 * 7 + (ulong)(byte)local_38[0] + 1] + 0x7d);
      goto LAB_029e48ec;
    }
  }
  uVar3 = 0x1f;
LAB_029e48ec:
  auVar2 = local_58;
  local_a8._0_6_ = CONCAT15(uVar3,(uint5)local_a8);
  bVar1 = *(byte *)(param_3 + 6);
  local_b0 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)bVar1 * 8 + 0x120);
  if ((ulong)bVar1 < 6) {
    cVar4 = '\0';
  }
  else if (bVar1 < 0xc) {
    cVar4 = '\x02';
  }
  else if (bVar1 < 0x12) {
    cVar4 = '\x01';
  }
  else if (bVar1 < 0x18) {
    cVar4 = '\x03';
  }
  else {
    cVar4 = (bVar1 < 0x1e) << 2;
  }
  local_58[4] = cVar4;
  local_58[7] = auVar2[7];
  local_58._5_2_ = 0;
  local_88 = *param_3;
  local_80 = CONCAT31(local_80._1_3_,*(undefined1 *)(param_3 + 1));
  uStack_7c = (undefined4)*(undefined8 *)((long)param_3 + 0xc);
  uStack_78 = (undefined4)((ulong)*(undefined8 *)((long)param_3 + 0xc) >> 0x20);
  uStack_5c = *(undefined4 *)((long)param_3 + 0x2c);
  uStack_74 = (undefined4)*(undefined8 *)((long)param_3 + 0x14);
  local_70 = (undefined4)((ulong)*(undefined8 *)((long)param_3 + 0x14) >> 0x20);
  local_44 = 1;
  uStack_6c = (undefined4)*(undefined8 *)((long)param_3 + 0x1c);
  uStack_68 = (undefined4)((ulong)*(undefined8 *)((long)param_3 + 0x1c) >> 0x20);
  uStack_64 = (undefined4)*(undefined8 *)((long)param_3 + 0x24);
  local_60 = (undefined4)((ulong)*(undefined8 *)((long)param_3 + 0x24) >> 0x20);
  local_48 = 3;
  local_50 = (undefined1 *)&local_b0;
  FUN_029d176c(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x140),local_38,&local_50);
  local_58._0_4_ = local_38[0];
  lVar6 = *(long *)(param_1 + 0x48);
  uVar5 = (ulong)*(byte *)(lVar6 + 0xd88);
  if (uVar5 < 0x24) {
    lVar7 = lVar6 + uVar5 * 0x60;
    *(undefined8 *)(lVar7 + 8) = local_b0;
    *(undefined8 *)(lVar7 + 0x20) = local_98;
    *(undefined8 *)(lVar7 + 0x28) = local_90;
    *(ulong *)(lVar7 + 0x10) = local_a8;
    *(ulong *)(lVar7 + 0x18) = local_a0;
    *(undefined8 *)(lVar7 + 0x30) = local_88;
    *(undefined1 *)(lVar7 + 0x38) = (undefined1)local_80;
    *(ulong *)(lVar7 + 0x3c) = CONCAT44(uStack_78,uStack_7c);
    *(undefined4 *)(lVar7 + 0x5c) = uStack_5c;
    *(ulong *)(lVar7 + 0x54) = CONCAT44(local_60,uStack_64);
    *(ulong *)(lVar7 + 0x4c) = CONCAT44(uStack_68,uStack_6c);
    *(ulong *)(lVar7 + 0x44) = CONCAT44(local_70,uStack_74);
    *(undefined1 (*) [8])(lVar7 + 0x60) = local_58;
    *(char *)(lVar6 + 0xd88) = *(char *)(lVar6 + 0xd88) + '\x01';
  }
  *(bool *)param_2 = uVar5 < 0x24;
  return;
}


