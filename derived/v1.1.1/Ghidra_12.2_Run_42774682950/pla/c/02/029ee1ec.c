/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029ee1ec; name: FUN_029ee1ec
 */


undefined8 FUN_029ee1ec(long param_1,long param_2,undefined2 param_3,long param_4)

{
  byte bVar1;
  uint3 uVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined1 local_a0 [4];
  byte local_9c [4];
  undefined1 auStack_98 [8];
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined7 uStack_70;
  undefined1 local_69;
  undefined7 uStack_68;
  
  lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  bVar1 = *(byte *)(param_2 + 0x7d);
  if (bVar1 < 6) {
    uVar6 = 0;
  }
  else if (bVar1 < 0xc) {
    uVar6 = 2;
  }
  else if (bVar1 < 0x12) {
    uVar6 = 1;
  }
  else {
    uVar4 = 3;
    if (0x17 < bVar1) {
      uVar4 = (uint)(bVar1 < 0x1e) << 2;
    }
    uVar6 = (ulong)uVar4;
  }
  uVar4 = (uint)*(byte *)(lVar8 + uVar6 * 0x38 + 0x38);
  if (uVar4 != 0) {
    uVar7 = 0;
    do {
      if (*(byte *)(*(long *)(lVar8 + uVar6 * 0x38 + (ulong)(uVar7 & 0xff) * 8 + 8) + 0x7d) == bVar1
         ) {
        uVar4 = FUN_0294753c(*(undefined8 *)(param_1 + 8));
        if ((uVar4 & 0xff) != 6) goto LAB_029ee2a4;
        break;
      }
      uVar7 = uVar7 + 1;
    } while (uVar4 != uVar7);
  }
  uVar4 = 6;
LAB_029ee2a4:
  FUN_02947b84(*(undefined8 *)(param_1 + 8),uVar4,local_9c,local_a0);
  uVar6 = (ulong)local_9c[0];
  lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  bVar1 = *(byte *)(lVar8 + uVar6 * 0x38 + 0x38);
  bVar3 = FUN_0294da60(*(undefined4 *)(*(long *)(param_1 + 8) + 0x110),
                       *(undefined1 *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x55),uVar6);
  if (bVar3 < bVar1) {
    uVar11 = 0;
    uVar4 = (uint)bVar3;
    do {
      lVar10 = *(long *)(lVar8 + uVar6 * 0x38 + (ulong)(uVar4 & 0xff) * 8 + 8);
      lVar9 = *(long *)(lVar10 + 0x60);
      uVar5 = FUN_02c6cf3c(*(undefined8 *)(lVar9 + 0x98));
      if ((((uVar5 & 1) == 0) &&
          ((*(ushort *)(*(long *)(*(long *)(lVar9 + 0x98) + 0x10) + 4) >> 2 & 1) == 0)) &&
         (*(short *)(lVar10 + 0x74) != 0)) {
        *(char *)((long)&local_88 + uVar11) = (char)uVar4;
        uVar11 = (ulong)((int)uVar11 + 1);
      }
      uVar4 = uVar4 + 1;
    } while (bVar1 != uVar4);
    if ((int)uVar11 != 0) {
      uVar11 = FUN_02954744(DAT_043ecde0,uVar11);
      bVar1 = *(byte *)((long)&local_88 + (uVar11 & 0xffffffff));
      local_80 = CONCAT62(local_80._2_6_,param_3);
      local_88 = (undefined **)param_2;
      FUN_029ebce4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1460),&local_90,&local_88);
      if (param_4 != 0) {
        FUN_02a3a6c4(*(undefined8 *)(param_1 + 0x20),param_4);
      }
      lVar8 = (long)local_88;
      local_88._0_2_ = CONCAT11(local_a0[0],local_9c[0]);
      uVar2 = CONCAT12(bVar1,(undefined2)local_88);
      local_88._4_4_ = SUB84(lVar8,4);
      local_88._0_4_ = (uint)uVar2;
      FUN_029eb3e0(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1400),&local_90,&local_88);
      lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 8);
      if ((bVar1 < *(byte *)(lVar8 + uVar6 * 0x38 + 0x38)) &&
         (lVar8 = *(long *)(lVar8 + uVar6 * 0x38 + (ulong)bVar1 * 8 + 8), lVar8 != 0)) {
        FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9d,0x10f,
                     *(undefined1 *)(lVar8 + 0x7d),0xffff0000);
      }
      local_88 = &PTR_LAB_04277240;
      local_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_69 = 0;
      uStack_68 = 0;
      if ((byte)local_90 < 0x1e) {
        local_80 = CONCAT71((uint7)(byte)local_90,1);
      }
      local_90 = &local_88;
      FUN_029d07c4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x80),auStack_98,&local_90);
      return 1;
    }
  }
  return 0;
}


