/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029dc674; name: FUN_029dc674
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_029dc674(long param_1)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  byte bVar11;
  ulong uVar12;
  long lVar13;
  long *local_f0;
  undefined1 auStack_e8 [8];
  undefined **local_e0;
  long local_d8;
  long local_d0;
  undefined2 local_c8;
  char local_c6;
  long local_c0 [6];
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined6 uStack_70;
  undefined2 local_6a;
  undefined2 uStack_68;
  byte bStack_66;
  byte bStack_65;
  byte bStack_64;
  undefined1 uStack_63;
  
  uStack_68 = 0;
  bStack_66 = 0;
  bStack_65 = 0;
  bStack_64 = 0;
  uStack_63 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_6a = 0;
  local_c0[0] = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_c0[5] = 0;
  uStack_90 = 0;
  local_c0[3] = 0;
  local_c0[4] = 0;
  local_c0[1] = 0;
  local_c0[2] = 0;
  local_d8 = *(long *)(param_1 + 8);
  local_d0 = *(long *)(param_1 + 0x10);
  local_c8 = 0;
  local_e0 = &PTR_LAB_04277078;
  local_c6 = '\x01';
  FUN_0299d494(&local_e0);
  lVar3 = local_d0;
  lVar6 = local_d8;
  if (local_c6 == '\0') {
    uVar12 = (ulong)(byte)local_c8;
    if (local_c8._1_1_ < *(byte *)(*(long *)(local_d0 + 8) + uVar12 * 0x38 + 0x38)) {
      lVar13 = *(long *)(*(long *)(local_d0 + 8) + uVar12 * 0x38 + (ulong)local_c8._1_1_ * 8 + 8);
    }
    else {
      lVar13 = 0;
    }
    bVar11 = local_c8._1_1_ + 1;
    local_c8 = CONCAT11(bVar11,(byte)local_c8);
    if ((byte)local_c8 < 5) {
      do {
        bVar4 = FUN_0294da60(*(undefined4 *)(lVar6 + 0x110),
                             *(undefined1 *)(*(long *)(lVar6 + 0x58) + 0x55),(uint)uVar12 & 0xff);
        if (bVar11 < bVar4) {
          do {
            if (((bVar11 < *(byte *)(*(long *)(lVar3 + 8) + (uVar12 & 0xff) * 0x38 + 0x38)) &&
                (lVar9 = *(long *)(*(long *)(lVar3 + 8) + (uVar12 & 0xff) * 0x38 + (ulong)bVar11 * 8
                                  + 8), lVar9 != 0)) && (*(short *)(lVar9 + 0x74) != 0)) {
              bVar2 = false;
              local_c8 = CONCAT11(bVar11,(char)uVar12);
              goto LAB_029dc7d8;
            }
            bVar11 = bVar11 + 1;
          } while (bVar11 < bVar4);
        }
        uVar1 = (uint)uVar12 + 1;
        uVar12 = (ulong)uVar1;
        bVar11 = 0;
      } while ((uVar1 & 0xff) < 5);
      bVar11 = 0;
      local_c8 = (ushort)(byte)uVar1;
    }
    bVar2 = true;
    local_c6 = '\x01';
LAB_029dc7d8:
    bVar4 = 0;
    uVar10 = uVar12 & 0xff;
joined_r0x029dc7e8:
    if ((lVar13 != 0) && (bVar4 < 6)) {
      if (bVar4 != 0) {
        plVar7 = local_c0;
        uVar8 = (ulong)bVar4;
        do {
          if (*plVar7 == lVar13) goto LAB_029dc890;
          uVar8 = uVar8 - 1;
          plVar7 = plVar7 + 1;
        } while (uVar8 != 0);
      }
      local_c0[bVar4] = lVar13;
      *(undefined1 *)((long)&local_78 + (ulong)bStack_66) = 0;
      *(undefined2 *)((long)local_c0 + (ulong)bStack_66 * 2 + 0x30) = 0;
      *(undefined2 *)((long)&local_88 + (ulong)bStack_66 * 2 + 4) = 0;
      bVar4 = bStack_66 + 1;
      bStack_66 = bVar4;
      if (bStack_65 < bVar4) {
        bStack_65 = bVar4;
      }
    }
LAB_029dc890:
    if (!bVar2) {
      if (bVar11 < *(byte *)(*(long *)(lVar3 + 8) + uVar10 * 0x38 + 0x38)) {
        lVar13 = *(long *)(*(long *)(lVar3 + 8) + uVar10 * 0x38 + (ulong)bVar11 * 8 + 8);
      }
      else {
        lVar13 = 0;
      }
      bVar11 = bVar11 + 1;
      bVar2 = true;
      if (((uint)uVar12 & 0xff) < 5) {
        do {
          bVar5 = FUN_0294da60(*(undefined4 *)(lVar6 + 0x110),
                               *(undefined1 *)(*(long *)(lVar6 + 0x58) + 0x55),uVar10 & 0xffffffff);
          if (bVar11 < bVar5) {
            do {
              if (((bVar11 < *(byte *)(*(long *)(lVar3 + 8) + uVar10 * 0x38 + 0x38)) &&
                  (lVar9 = *(long *)(*(long *)(lVar3 + 8) + uVar10 * 0x38 + (ulong)bVar11 * 8 + 8),
                  lVar9 != 0)) && (*(short *)(lVar9 + 0x74) != 0)) {
                bVar2 = false;
                uVar12 = uVar10 & 0xffffffff;
                uVar10 = uVar10 & 0xff;
                goto joined_r0x029dc7e8;
              }
              bVar11 = bVar11 + 1;
            } while (bVar11 < bVar5);
          }
          uVar10 = uVar10 + 1;
          bVar11 = 0;
        } while (uVar10 != 5);
        bVar2 = true;
        uVar10 = 5;
        uVar12 = uVar10;
      }
      goto joined_r0x029dc7e8;
    }
    local_c8 = CONCAT11(bVar11,(char)uVar12);
    local_c6 = '\x01';
  }
  local_f0 = local_c0;
  FUN_029f7874(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x17e0),auStack_e8,&local_f0);
  if (bStack_66 != 0) {
    bStack_64 = 1;
    lVar6 = local_c0[0];
    while (lVar6 != 0) {
      FUN_02973d0c(*(undefined8 *)(param_1 + 0x38),*(undefined1 *)(lVar6 + 0x7d));
      uVar12 = (ulong)bStack_64;
      if (bStack_66 <= bStack_64) {
        return;
      }
      bStack_64 = bStack_64 + 1;
      lVar6 = local_c0[uVar12];
    }
  }
  return;
}


