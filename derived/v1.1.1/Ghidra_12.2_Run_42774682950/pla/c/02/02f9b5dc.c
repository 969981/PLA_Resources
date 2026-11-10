/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f9b5dc; name: FUN_02f9b5dc
 */


void FUN_02f9b5dc(long param_1,long param_2,uint param_3)

{
  long *plVar1;
  undefined1 (*pauVar2) [16];
  undefined8 *puVar3;
  unkbyte9 *pVar4;
  long lVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  float fVar20;
  int iVar21;
  int iVar22;
  float fVar23;
  undefined1 auVar19 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  undefined8 uVar30;
  undefined8 local_c0 [2];
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 local_70;
  ulong uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  if (*(char *)(param_1 + 0x100) == '\x02') {
    FUN_02f9a080();
    return;
  }
  if (0 < (int)param_3) {
    uVar30 = NEON_fmov(0x3f800000,4);
    uVar12 = 0;
    plVar1 = (long *)(param_1 + 200);
    do {
      pauVar2 = (undefined1 (*) [16])
                (param_1 + 0x48 +
                (ulong)*(ushort *)(param_2 + uVar12 * 2) * 0x40 + *(long *)(param_1 + 0x48));
      auVar19 = *pauVar2;
      uStack_60 = *(undefined8 *)pauVar2[1];
      uStack_58 = *(ulong *)(pauVar2[1] + 8) & 0xffffffff;
      fVar16 = auVar19._0_4_;
      auVar27._0_4_ = fVar16 + fVar16;
      fVar20 = auVar19._4_4_;
      auVar27._4_4_ = fVar20 + fVar20;
      auVar27._8_4_ = auVar19._8_4_ + auVar19._8_4_;
      fVar23 = auVar19._12_4_;
      auVar27._12_4_ = fVar23 + fVar23;
      auVar19 = NEON_ext(auVar19,auVar19,8,1);
      auVar24 = NEON_ext(auVar27,auVar27,8,1);
      fVar17 = auVar19._0_4_ * auVar24._0_4_;
      fVar29 = (float)uVar30;
      uStack_80 = CONCAT44(fVar29 - (auVar27._0_4_ * fVar16 + fVar17),
                           auVar27._4_4_ * fVar16 - auVar27._8_4_ * fVar23);
      local_90 = CONCAT44(auVar27._4_4_ * fVar16 + auVar27._8_4_ * fVar23,
                          fVar29 - (auVar27._4_4_ * fVar20 + fVar17));
      uStack_88 = (ulong)(uint)(auVar27._8_4_ * fVar16 - auVar27._4_4_ * fVar23);
      uStack_78 = (ulong)(uint)(auVar27._8_4_ * fVar20 + auVar27._0_4_ * fVar23);
      uStack_68 = (ulong)(uint)(fVar29 - (auVar27._0_4_ * fVar16 + auVar27._4_4_ * fVar20));
      local_70 = CONCAT44(auVar27._8_4_ * fVar20 - auVar27._0_4_ * fVar23,
                          auVar27._8_4_ * fVar16 + auVar27._4_4_ * fVar23);
      lVar13 = *(long *)pauVar2[3];
      bVar6 = pauVar2[1][0xe];
      if (lVar13 == 0) {
        puVar11 = (undefined1 *)0x0;
        if ((bVar6 >> 3 & 1) == 0) goto LAB_02f9b73c;
LAB_02f9b83c:
        local_a0 = *(undefined8 *)pauVar2[2];
        uStack_98 = CONCAT44(0x3f800000,(int)*(undefined8 *)(pauVar2[2] + 8));
        FUN_02ffe574(puVar11,&local_90,&local_a0,(bVar6 >> 5 ^ 0xff) & 1,local_c0);
      }
      else {
        puVar11 = pauVar2[3] + lVar13;
        if ((bVar6 >> 3 & 1) != 0) goto LAB_02f9b83c;
LAB_02f9b73c:
        (**(code **)(DAT_0442d3b0 + (ulong)(byte)puVar11[0x18] * 0x200 + 0x18))
                  (puVar11,&local_90,local_c0);
      }
      lVar13 = *plVar1;
      if (lVar13 != 0) {
        lVar13 = lVar13 + (long)plVar1;
      }
      puVar3 = (undefined8 *)(lVar13 + (ulong)*(ushort *)(pauVar2[1] + 0xc) * 0x20);
      uVar15 = *(uint *)((long)puVar3 + 0xc);
      puVar3[1] = CONCAT44(uVar15,(int)local_c0[1]);
      *puVar3 = local_c0[0];
      *(undefined4 *)(puVar3 + 3) = uStack_a8;
      *(undefined4 *)((long)puVar3 + 0x1c) = *(undefined4 *)((long)puVar3 + 0x1c);
      *(undefined4 *)(puVar3 + 2) = local_b0;
      *(undefined4 *)((long)puVar3 + 0x14) = uStack_ac;
      if ((uVar15 & 0xffff) != 0) {
        lVar13 = *plVar1;
        do {
          lVar5 = 0;
          if (lVar13 != 0) {
            lVar5 = lVar13 + (long)plVar1;
          }
          puVar3 = (undefined8 *)(lVar5 + ((ulong)uVar15 & 0xffff) * 0x20);
          pauVar2 = (undefined1 (*) [16])(lVar5 + (ulong)*(ushort *)((long)puVar3 + 0x1c) * 0x20);
          pVar4 = (unkbyte9 *)(lVar5 + (ulong)*(ushort *)((long)puVar3 + 0x1e) * 0x20);
          auVar25._0_12_ = SUB1612(pauVar2[1],0);
          auVar25._12_4_ = 0;
          uVar10 = *(undefined8 *)((long)pVar4 + 8);
          auVar24[9] = (char)((ulong)uVar10 >> 8);
          auVar24._0_9_ = *pVar4;
          auVar24[10] = (char)((ulong)uVar10 >> 0x10);
          auVar24[0xb] = (char)((ulong)uVar10 >> 0x18);
          auVar24[0xc] = (char)((ulong)uVar10 >> 0x20);
          auVar24[0xd] = (char)((ulong)uVar10 >> 0x28);
          auVar24[0xe] = (char)((ulong)uVar10 >> 0x30);
          auVar24[0xf] = (char)((ulong)uVar10 >> 0x38);
          auVar27 = NEON_fmin(*pauVar2,auVar24,4);
          auVar19._12_4_ = 0;
          auVar19._0_12_ = *(undefined1 (*) [12])(pVar4 + 1);
          auVar19 = NEON_fmax(auVar25,auVar19,4);
          iVar7 = -(uint)((float)*puVar3 == auVar27._0_4_);
          iVar8 = -(uint)((float)((ulong)*puVar3 >> 0x20) == auVar27._4_4_);
          iVar9 = -(uint)((float)puVar3[1] == auVar27._8_4_);
          iVar18 = -(uint)(*(float *)(puVar3 + 2) == auVar19._0_4_);
          iVar21 = -(uint)(*(float *)((long)puVar3 + 0x14) == auVar19._4_4_);
          iVar22 = -(uint)(*(float *)(puVar3 + 3) == auVar19._8_4_);
          auVar28._0_12_ = auVar27._0_12_;
          auVar28._12_4_ = (int)((ulong)puVar3[1] >> 0x20);
          auVar26._0_12_ = auVar19._0_12_;
          auVar26._12_4_ = (int)((ulong)puVar3[3] >> 0x20);
          uVar14 = CONCAT13((byte)((uint)iVar18 >> 0x18) & (byte)((uint)iVar7 >> 0x18),
                            CONCAT12((byte)((uint)iVar18 >> 0x10) & (byte)((uint)iVar7 >> 0x10),
                                     CONCAT11((byte)((uint)iVar18 >> 8) & (byte)((uint)iVar7 >> 8),
                                              (byte)iVar18 & (byte)iVar7)));
          puVar3[1] = auVar28._8_8_;
          *puVar3 = auVar27._0_8_;
          puVar3[3] = auVar26._8_8_;
          puVar3[2] = auVar19._0_8_;
          if ((uVar14 & (uint)(CONCAT17((byte)((uint)iVar21 >> 0x18) & (byte)((uint)iVar8 >> 0x18),
                                        CONCAT16((byte)((uint)iVar21 >> 0x10) &
                                                 (byte)((uint)iVar8 >> 0x10),
                                                 CONCAT15((byte)((uint)iVar21 >> 8) &
                                                          (byte)((uint)iVar8 >> 8),
                                                          CONCAT14((byte)iVar21 & (byte)iVar8,uVar14
                                                                  )))) >> 0x20) &
              CONCAT13((byte)((uint)iVar22 >> 0x18) & (byte)((uint)iVar9 >> 0x18),
                       CONCAT12((byte)((uint)iVar22 >> 0x10) & (byte)((uint)iVar9 >> 0x10),
                                CONCAT11((byte)((uint)iVar22 >> 8) & (byte)((uint)iVar9 >> 8),
                                         (byte)iVar22 & (byte)iVar9)))) != 0) break;
          lVar13 = *plVar1;
          lVar5 = 0;
          if (lVar13 != 0) {
            lVar5 = lVar13 + (long)plVar1;
          }
          uVar15 = *(uint *)(lVar5 + ((ulong)uVar15 & 0xffff) * 0x20 + 0xc);
        } while ((uVar15 & 0xffff) != 0);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != param_3);
  }
  return;
}


