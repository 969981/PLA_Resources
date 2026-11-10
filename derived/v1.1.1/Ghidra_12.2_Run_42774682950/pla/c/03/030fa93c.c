/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030fa93c; name: FUN_030fa93c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_030fa93c(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined1 (*pauVar1) [12];
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  long lVar7;
  undefined *puVar8;
  uint uVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  int iVar12;
  long lVar13;
  float fVar17;
  undefined1 auVar14 [16];
  float fVar19;
  undefined1 auVar15 [16];
  float fVar18;
  float fVar20;
  undefined1 auVar16 [16];
  float fVar21;
  float fVar23;
  float fVar24;
  undefined1 auVar22 [16];
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 local_a0;
  ushort local_98 [4];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulong uStack_78;
  undefined1 (*local_70) [16];
  ushort local_68;
  
  puVar8 = PTR_PTR_0434a080;
  if ((ulong)*(ushort *)((long)param_1 + 0x1c) != 0) {
    lVar7 = param_2[1];
    lVar13 = 0;
    if (*param_1 != 0) {
      lVar13 = *param_1 + (long)param_1;
    }
    pauVar11 = (undefined1 (*) [16])(lVar13 + (ulong)*(ushort *)((long)param_1 + 0x1c) * 0x20);
    auVar26._0_12_ = SUB1612(pauVar11[1],0);
    auVar26._12_4_ = 0;
    auVar28 = *(undefined1 (*) [16])(param_3 + 2);
    auVar22 = NEON_fmax(*pauVar11,auVar28,4);
    auVar22 = NEON_fmin(auVar26,auVar22,4);
    fVar21 = auVar28._0_4_ - auVar22._0_4_;
    fVar23 = auVar28._4_4_ - auVar22._4_4_;
    fVar24 = auVar28._8_4_ - auVar22._8_4_;
    fVar25 = auVar28._12_4_ - auVar22._12_4_;
    auVar28._0_4_ = fVar21 * fVar21;
    auVar28._4_4_ = fVar23 * fVar23;
    auVar28._8_4_ = fVar24 * fVar24;
    auVar28._12_4_ = fVar25 * fVar25;
    auVar22 = NEON_ext(auVar28,auVar28,8,1);
    if (auVar28._0_4_ + auVar28._4_4_ + auVar22._0_4_ <= (float)param_3[4]) {
      uVar4 = *(ushort *)(pauVar11[1] + 0xc);
joined_r0x030fa9d8:
      do {
        if ((ulong)uVar4 == 0) {
          FUN_02f7d4d4(*param_3,*(undefined2 *)(pauVar11[1] + 0xe),param_3 + 4);
        }
        else {
          local_98[0] = uVar4;
          lVar13 = 0;
          if (*param_1 != 0) {
            lVar13 = *param_1 + (long)param_1;
          }
          pauVar10 = (undefined1 (*) [16])(lVar13 + (ulong)uVar4 * 0x20);
          auVar14._0_12_ = SUB1612(pauVar10[1],0);
          auVar14._12_4_ = 0;
          local_68 = *(ushort *)(pauVar11[1] + 0xe);
          local_70 = (undefined1 (*) [16])(lVar13 + (ulong)*(ushort *)(pauVar11[1] + 0xe) * 0x20);
          auVar28 = local_70[1];
          auVar27._0_12_ = auVar28._0_12_;
          auVar27._12_4_ = 0;
          uStack_78 = (ulong)auVar28._8_4_;
          local_80 = auVar28._0_8_;
          auVar28 = *local_70;
          uStack_88 = auVar28._8_8_;
          local_90 = auVar28._0_8_;
          pauVar1 = (undefined1 (*) [12])(param_3 + 2);
          fVar18 = (float)param_3[3];
          fVar20 = (float)((ulong)param_3[3] >> 0x20);
          fVar23 = (float)*(undefined8 *)*pauVar1;
          fVar25 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
          auVar22._12_4_ = fVar20;
          auVar22._0_12_ = *pauVar1;
          auVar22 = NEON_fmax(*pauVar10,auVar22,4);
          auVar22 = NEON_fmin(auVar14,auVar22,4);
          auVar5._12_4_ = fVar20;
          auVar5._0_12_ = *pauVar1;
          auVar28 = NEON_fmax(auVar28,auVar5,4);
          fVar21 = fVar23 - auVar22._0_4_;
          fVar24 = fVar25 - auVar22._4_4_;
          fVar17 = fVar18 - auVar22._8_4_;
          fVar19 = fVar20 - auVar22._12_4_;
          auVar22 = NEON_fmin(auVar27,auVar28,4);
          auVar15._0_4_ = fVar21 * fVar21;
          auVar15._4_4_ = fVar24 * fVar24;
          auVar15._8_4_ = fVar17 * fVar17;
          auVar15._12_4_ = fVar19 * fVar19;
          auVar28 = NEON_ext(auVar15,auVar15,8,1);
          fVar24 = auVar15._0_4_ + auVar15._4_4_ + auVar28._0_4_;
          fVar23 = fVar23 - auVar22._0_4_;
          fVar25 = fVar25 - auVar22._4_4_;
          fVar18 = fVar18 - auVar22._8_4_;
          fVar20 = fVar20 - auVar22._12_4_;
          auVar16._0_4_ = fVar23 * fVar23;
          auVar16._4_4_ = fVar25 * fVar25;
          auVar16._8_4_ = fVar18 * fVar18;
          auVar16._12_4_ = fVar20 * fVar20;
          auVar28 = NEON_ext(auVar16,auVar16,8,1);
          fVar21 = auVar16._0_4_ + auVar16._4_4_ + auVar28._0_4_;
          bVar3 = fVar24 <= (float)param_3[4] | (fVar21 <= (float)param_3[4]) << 1;
          if ((bVar3 == 1) || (pauVar10 = local_70, bVar3 == 2)) {
            uVar4 = *(ushort *)(pauVar10[1] + 0xc);
            pauVar11 = pauVar10;
            goto joined_r0x030fa9d8;
          }
          if (bVar3 == 3) {
            *(uint *)(param_3 + 5) = (uint)(fVar21 < fVar24);
            iVar12 = (int)param_2[1];
            uVar9 = *(uint *)((long)param_2 + 0xc);
            uVar2 = iVar12 + 1;
            if (iVar12 < (int)(uVar9 & 0x3fffffff)) {
              lVar13 = *param_2;
            }
            else {
              lVar13 = *param_2;
              if (0x3ffffffe < iVar12) {
                FUN_032bd0a8(uVar2);
                uVar9 = *(uint *)((long)param_2 + 0xc);
              }
              uVar9 = (uVar9 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar9) {
                uVar9 = 0x3fffffff;
              }
              uVar6 = uVar2;
              if ((int)uVar2 <= (int)uVar9) {
                uVar6 = uVar9;
              }
              lVar13 = FUN_032bd1d4(puVar8,uVar6,2,lVar13,iVar12,(uint *)((long)param_2 + 0xc));
              *param_2 = lVar13;
              iVar12 = (int)param_2[1];
            }
            *(uint *)(param_2 + 1) = uVar2;
            *(ushort *)(lVar13 + (long)iVar12 * 2) = local_98[(ulong)(fVar21 >= fVar24) * 0x18];
            pauVar11 = *(undefined1 (**) [16])(local_98 + ((ulong)(fVar21 < fVar24) * 6 + -1) * 4);
            uVar4 = *(ushort *)(pauVar11[1] + 0xc);
            goto joined_r0x030fa9d8;
          }
        }
        if ((int)param_2[1] <= (int)lVar7) {
          return;
        }
        iVar12 = (int)param_2[1] + -1;
        *(int *)(param_2 + 1) = iVar12;
        lVar13 = 0;
        if (*param_1 != 0) {
          lVar13 = *param_1 + (long)param_1;
        }
        pauVar11 = (undefined1 (*) [16])
                   (lVar13 + (ulong)*(ushort *)(*param_2 + (long)iVar12 * 2) * 0x20);
        uVar4 = *(ushort *)(pauVar11[1] + 0xc);
      } while( true );
    }
  }
  return;
}


