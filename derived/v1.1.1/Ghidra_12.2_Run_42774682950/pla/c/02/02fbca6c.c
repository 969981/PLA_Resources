/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fbca6c; name: FUN_02fbca6c
 */


void FUN_02fbca6c(long param_1,long param_2,int param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 (*pauVar3) [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  undefined2 uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined2 *puVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  undefined8 uVar21;
  int iVar22;
  int iVar25;
  int iVar26;
  undefined1 auVar23 [12];
  undefined1 auVar24 [16];
  int local_b4;
  float local_b0;
  float fStack_ac;
  float afStack_a8 [4];
  float fStack_98;
  float fStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined8 local_70;
  undefined4 local_68;
  
  fVar4 = *(float *)*(undefined1 (*) [16])(param_4 + 0x170);
  fVar5 = *(float *)(param_4 + 0x174);
  fVar6 = *(float *)(param_4 + 0x178);
  fVar7 = *(float *)(param_4 + 0x17c);
  auVar24 = *(undefined1 (*) [16])(param_4 + 0x170);
  auVar20 = NEON_fmov(0x3f800000,4);
  *(long *)(param_4 + 0x178) = auVar20._8_8_;
  *(long *)(param_4 + 0x170) = auVar20._0_8_;
  iVar22 = -(uint)(fVar4 == auVar20._0_4_);
  iVar25 = -(uint)(fVar5 == auVar20._4_4_);
  iVar26 = -(uint)(fVar6 == auVar20._8_4_);
  iVar22 = CONCAT13(~(byte)((uint)iVar22 >> 0x18),
                    CONCAT12(~(byte)((uint)iVar22 >> 0x10),
                             CONCAT11(~(byte)((uint)iVar22 >> 8),~(byte)iVar22)));
  auVar23._0_8_ =
       CONCAT17(~(byte)((uint)iVar25 >> 0x18),
                CONCAT16(~(byte)((uint)iVar25 >> 0x10),
                         CONCAT15(~(byte)((uint)iVar25 >> 8),CONCAT14(~(byte)iVar25,iVar22))));
  auVar23[8] = ~(byte)iVar26;
  auVar23[9] = ~(byte)((uint)iVar26 >> 8);
  auVar23[10] = ~(byte)((uint)iVar26 >> 0x10);
  auVar23[0xb] = ~(byte)((uint)iVar26 >> 0x18);
  *(uint *)(param_4 + 0x160) = *(uint *)(param_4 + 0x160) & 0xffffffe7 | 0x10;
  bVar8 = false;
  *(long *)(param_4 + 0x50) = param_1;
  *(undefined4 *)(param_4 + 0xc0c) = 0;
  if ((iVar22 != 0 || (int)((ulong)auVar23._0_8_ >> 0x20) != 0) || auVar23._8_4_ != 0) {
    auVar20 = NEON_ext(auVar24,auVar24,8,1);
    bVar8 = auVar20._0_4_ * auVar24._0_4_ * auVar24._4_4_ < 0.0;
  }
  iVar22 = param_3;
  if (9 < param_3) {
    iVar22 = 10;
  }
  if (0 < param_3) {
    plVar16 = *(long **)(param_1 + 0x50);
    uVar19 = 0;
    lVar15 = 0x5c8;
    local_b4 = -1;
    puVar17 = (undefined8 *)(param_4 + 0xba8);
    puVar18 = (undefined2 *)(param_4 + 0xbf8);
    do {
      uVar11 = *(uint *)(param_2 + uVar19) >> (ulong)(-(uint)*(byte *)(param_1 + 0x1c) & 0x1f);
      iVar25 = (int)uVar11 >> 1;
      uVar10 = (**(code **)(*plVar16 + 0x78))(plVar16,iVar25);
      uVar1 = uVar10 & 7;
      uVar2 = 0;
      if (uVar1 != 7) {
        uVar2 = uVar11 & 1;
      }
      if (local_b4 == iVar25) {
      }
      else {
        (**(code **)(*plVar16 + 0x68))(plVar16,iVar25,&local_b0);
        afStack_a8[0] = fVar6 * afStack_a8[0];
        afStack_a8[1] = fVar7 * afStack_a8[1];
        local_b0 = fVar4 * local_b0;
        fStack_ac = fVar5 * fStack_ac;
        fStack_98 = fVar6 * fStack_98;
        fStack_94 = fVar7 * fStack_94;
        afStack_a8[2] = fVar4 * afStack_a8[2];
        afStack_a8[3] = fVar5 * afStack_a8[3];
        local_80 = fVar4 * local_80;
        fStack_7c = fVar5 * fStack_7c;
        auVar24._8_4_ = fVar6 * fStack_78;
        auVar24._0_8_ = _local_80;
        auVar24._12_4_ = fVar7 * fStack_74;
        uStack_88 = CONCAT44(fVar7 * (float)((ulong)uStack_88 >> 0x20),fVar6 * (float)uStack_88);
        local_90 = CONCAT44(fVar5 * (float)((ulong)local_90 >> 0x20),fVar4 * (float)local_90);
        _fStack_78 = auVar24._8_8_;
        local_b4 = iVar25;
      }
      lVar13 = param_4 + (uVar19 & 0xfffffffc) * 0xc;
      *(float *)(lVar13 + 0x9b0) = local_b0;
      *(float *)(lVar13 + 0x9b4) = fStack_ac;
      *(float *)(lVar13 + 0x9b8) = afStack_a8[0];
      uVar21 = *(undefined8 *)(afStack_a8 + (ulong)(uVar2 + 1) * 4);
      puVar12 = (undefined8 *)(lVar13 + 0x9bc);
      *puVar12 = *(undefined8 *)((undefined1 (*) [16])&local_b0)[uVar2 + 1];
      uVar11 = 0x6c3;
      if (uVar1 != 7) {
        uVar11 = 0x2c3;
      }
      *(int *)(lVar13 + 0x9c4) = (int)uVar21;
      uVar21 = *(undefined8 *)(afStack_a8 + (ulong)(uVar2 | 2) * 4);
      pauVar3 = (undefined1 (*) [16])&local_80;
      if (uVar1 != 7) {
        pauVar3 = (undefined1 (*) [16])&local_b0;
      }
      *(undefined8 *)(lVar13 + 0x9c8) = *(undefined8 *)((undefined1 (*) [16])&local_b0)[uVar2 | 2];
      *(int *)(lVar13 + 0x9d0) = (int)uVar21;
      auVar24 = *pauVar3;
      puVar14 = (undefined8 *)(lVar13 + 0x9d4);
      *puVar14 = auVar24._0_8_;
      *(int *)(lVar13 + 0x9dc) = auVar24._8_4_;
      if (bVar8) {
        if (uVar11 >> 10 == 0) {
          local_70 = *puVar12;
          local_68 = *(undefined4 *)(lVar13 + 0x9c4);
          *(undefined4 *)(lVar13 + 0x9c4) = *(undefined4 *)(lVar13 + 0x9d0);
          *puVar12 = *(undefined8 *)(lVar13 + 0x9c8);
          *(undefined4 *)(lVar13 + 0x9d0) = local_68;
          *(undefined8 *)(lVar13 + 0x9c8) = local_70;
        }
        else {
          local_70 = *puVar12;
          local_68 = *(undefined4 *)(lVar13 + 0x9c4);
          *(undefined4 *)(lVar13 + 0x9c4) = *(undefined4 *)(lVar13 + 0x9dc);
          *puVar12 = *puVar14;
          *(undefined4 *)(lVar13 + 0x9dc) = local_68;
          *puVar14 = local_70;
        }
      }
      puVar18[-0x34] =
           (ushort)uVar11 & 0xffc0 | (ushort)uVar11 & 0x3f | (ushort)((uVar10 >> 4 & 1) << 5);
      uVar9 = (**(code **)(*plVar16 + 0x70))(plVar16,iVar25);
      *puVar18 = uVar9;
      lVar13 = lVar15 + -0x5c7;
      lVar15 = lVar15 + 1;
      *puVar17 = *(undefined8 *)(param_1 + 0x28);
      uVar19 = uVar19 + 4;
      puVar17 = puVar17 + 1;
      puVar18 = puVar18 + 1;
    } while (lVar13 < iVar22);
  }
  *(int *)(param_4 + 0x164) = iVar22;
  return;
}


