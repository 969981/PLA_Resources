/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030fb39c; name: FUN_030fb39c
 */


void FUN_030fb39c(long *param_1,long *param_2,long *param_3)

{
  undefined1 (*pauVar1) [12];
  uint uVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  long lVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  long *plVar14;
  long lVar15;
  long lVar16;
  byte bVar17;
  int iVar18;
  long lVar19;
  float fVar20;
  float fVar24;
  float fVar25;
  undefined1 auVar21 [16];
  float fVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar27;
  float fVar31;
  float fVar32;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar33;
  undefined1 auVar30 [16];
  undefined1 auVar34 [16];
  undefined8 local_a0;
  ushort local_98 [4];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulong uStack_78;
  undefined1 (*local_70) [16];
  ushort local_68;
  
  puVar7 = PTR_PTR_0434a080;
  uVar3 = *(ushort *)((long)param_1 + 0x1c);
  uVar10 = (ulong)uVar3;
  if (uVar10 != 0) {
    lVar6 = param_2[1];
    lVar19 = 0;
    if (*param_1 != 0) {
      lVar19 = *param_1 + (long)param_1;
    }
    plVar14 = (long *)(*(long *)(*param_3 + 8) + 0x38);
    lVar15 = *plVar14;
    lVar16 = 0;
    if (lVar15 != 0) {
      lVar16 = lVar15 + (long)plVar14;
    }
    if ((*(uint *)(lVar16 + ((ulong)(uVar3 >> 3) & 0x1ffc)) & 1 << (ulong)(uVar3 & 0x1f)) != 0) {
      pauVar13 = (undefined1 (*) [16])(lVar19 + uVar10 * 0x20);
      auVar28._0_12_ = SUB1612(pauVar13[1],0);
      auVar28._12_4_ = 0;
      auVar29 = *(undefined1 (*) [16])(param_3 + 2);
      auVar21 = NEON_fmax(*pauVar13,auVar29,4);
      auVar21 = NEON_fmin(auVar28,auVar21,4);
      fVar20 = auVar29._0_4_ - auVar21._0_4_;
      fVar24 = auVar29._4_4_ - auVar21._4_4_;
      fVar25 = auVar29._8_4_ - auVar21._8_4_;
      fVar26 = auVar29._12_4_ - auVar21._12_4_;
      auVar29._0_4_ = fVar20 * fVar20;
      auVar29._4_4_ = fVar24 * fVar24;
      auVar29._8_4_ = fVar25 * fVar25;
      auVar29._12_4_ = fVar26 * fVar26;
      auVar21 = NEON_ext(auVar29,auVar29,8,1);
      if (auVar29._0_4_ + auVar29._4_4_ + auVar21._0_4_ <= (float)param_3[4]) {
        uVar3 = *(ushort *)(pauVar13[1] + 0xc);
joined_r0x030fb470:
        while (uVar11 = (ulong)uVar3, uVar11 == 0) {
          plVar14 = (long *)(*(long *)(*param_3 + 8) + 0x38);
          lVar16 = *plVar14;
          lVar19 = 0;
          if (lVar16 != 0) {
            lVar19 = lVar16 + (long)plVar14;
          }
          if ((*(uint *)(lVar19 + (uVar10 >> 3 & 0x1ffc)) & 1 << (ulong)((uint)uVar10 & 0x1f)) != 0)
          {
            FUN_02f7e564(*param_3,*(undefined2 *)(pauVar13[1] + 0xe),param_3 + 4);
          }
LAB_030fb6ac:
          if ((int)param_2[1] <= (int)lVar6) {
            return;
          }
          iVar18 = (int)param_2[1] + -1;
          *(int *)(param_2 + 1) = iVar18;
          uVar10 = (ulong)*(ushort *)(*param_2 + (long)iVar18 * 2);
          lVar19 = 0;
          if (*param_1 != 0) {
            lVar19 = *param_1 + (long)param_1;
          }
          pauVar13 = (undefined1 (*) [16])(lVar19 + uVar10 * 0x20);
          uVar3 = *(ushort *)(pauVar13[1] + 0xc);
        }
        local_98[0] = uVar3;
        lVar19 = 0;
        if (*param_1 != 0) {
          lVar19 = *param_1 + (long)param_1;
        }
        pauVar12 = (undefined1 (*) [16])(lVar19 + uVar11 * 0x20);
        auVar22._0_12_ = SUB1612(pauVar12[1],0);
        auVar22._12_4_ = 0;
        local_68 = *(ushort *)(pauVar13[1] + 0xe);
        local_70 = (undefined1 (*) [16])(lVar19 + (ulong)local_68 * 0x20);
        auVar29 = local_70[1];
        auVar34._0_12_ = auVar29._0_12_;
        auVar34._12_4_ = 0;
        uStack_78 = (ulong)auVar29._8_4_;
        local_80 = auVar29._0_8_;
        uStack_88 = *(undefined8 *)(*local_70 + 8);
        local_90 = *(undefined8 *)*local_70;
        pauVar1 = (undefined1 (*) [12])(param_3 + 2);
        fVar32 = (float)param_3[3];
        fVar33 = (float)((ulong)param_3[3] >> 0x20);
        fVar27 = (float)*(undefined8 *)*pauVar1;
        fVar31 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
        auVar21._12_4_ = fVar33;
        auVar21._0_12_ = *pauVar1;
        auVar29 = NEON_fmax(*pauVar12,auVar21,4);
        auVar29 = NEON_fmin(auVar22,auVar29,4);
        auVar4._12_4_ = fVar33;
        auVar4._0_12_ = *pauVar1;
        auVar21 = NEON_fmax(*local_70,auVar4,4);
        fVar20 = fVar27 - auVar29._0_4_;
        fVar24 = fVar31 - auVar29._4_4_;
        fVar25 = fVar32 - auVar29._8_4_;
        fVar26 = fVar33 - auVar29._12_4_;
        auVar29 = NEON_fmin(auVar34,auVar21,4);
        auVar23._0_4_ = fVar20 * fVar20;
        auVar23._4_4_ = fVar24 * fVar24;
        auVar23._8_4_ = fVar25 * fVar25;
        auVar23._12_4_ = fVar26 * fVar26;
        auVar21 = NEON_ext(auVar23,auVar23,8,1);
        fVar27 = fVar27 - auVar29._0_4_;
        fVar31 = fVar31 - auVar29._4_4_;
        fVar32 = fVar32 - auVar29._8_4_;
        fVar33 = fVar33 - auVar29._12_4_;
        auVar30._0_4_ = fVar27 * fVar27;
        auVar30._4_4_ = fVar31 * fVar31;
        auVar30._8_4_ = fVar32 * fVar32;
        auVar30._12_4_ = fVar33 * fVar33;
        fVar25 = auVar23._0_4_ + auVar23._4_4_ + auVar21._0_4_;
        auVar29 = NEON_ext(auVar30,auVar30,8,1);
        fVar24 = auVar30._0_4_ + auVar30._4_4_ + auVar29._0_4_;
        fVar20 = (float)param_3[4];
        if (fVar25 <= fVar20) {
          plVar14 = (long *)(*(long *)(*param_3 + 8) + 0x38);
          lVar16 = *plVar14;
          lVar19 = 0;
          if (lVar16 != 0) {
            lVar19 = lVar16 + (long)plVar14;
          }
          bVar8 = (*(uint *)(lVar19 + ((ulong)(uVar3 >> 3) & 0x1ffc)) & 1 << (ulong)(uVar3 & 0x1f))
                  != 0;
          if (fVar24 <= fVar20) goto LAB_030fb538;
LAB_030fb5a8:
          bVar17 = 0;
        }
        else {
          bVar8 = false;
          if (fVar20 < fVar24) goto LAB_030fb5a8;
LAB_030fb538:
          plVar14 = (long *)(*(long *)(*param_3 + 8) + 0x38);
          lVar16 = *plVar14;
          lVar19 = 0;
          if (lVar16 != 0) {
            lVar19 = lVar16 + (long)plVar14;
          }
          bVar17 = ((*(uint *)(lVar19 + ((ulong)(local_68 >> 3) & 0x1ffc)) &
                    1 << (ulong)(local_68 & 0x1f)) != 0) << 1;
        }
        bVar17 = bVar17 | bVar8;
        if (bVar17 != 1) {
          uVar11 = (ulong)local_68;
          pauVar12 = local_70;
          if (bVar17 != 2) {
            if (bVar17 != 3) goto LAB_030fb6ac;
            *(uint *)(param_3 + 5) = (uint)(fVar24 < fVar25);
            iVar18 = (int)param_2[1];
            uVar9 = *(uint *)((long)param_2 + 0xc);
            uVar2 = iVar18 + 1;
            if (iVar18 < (int)(uVar9 & 0x3fffffff)) {
              lVar19 = *param_2;
            }
            else {
              lVar19 = *param_2;
              if (0x3ffffffe < iVar18) {
                FUN_032bd0a8(uVar2);
                uVar9 = *(uint *)((long)param_2 + 0xc);
              }
              uVar9 = (uVar9 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar9) {
                uVar9 = 0x3fffffff;
              }
              uVar5 = uVar2;
              if ((int)uVar2 <= (int)uVar9) {
                uVar5 = uVar9;
              }
              lVar19 = FUN_032bd1d4(puVar7,uVar5,2,lVar19,iVar18,(uint *)((long)param_2 + 0xc));
              *param_2 = lVar19;
              iVar18 = (int)param_2[1];
            }
            *(uint *)(param_2 + 1) = uVar2;
            *(ushort *)(lVar19 + (long)iVar18 * 2) = local_98[(ulong)(fVar24 >= fVar25) * 0x18];
            pauVar13 = *(undefined1 (**) [16])(local_98 + (ulong)(fVar24 < fVar25) * 0x18 + -4);
            uVar10 = (ulong)local_98[(ulong)(fVar24 < fVar25) * 0x18];
            uVar3 = *(ushort *)(pauVar13[1] + 0xc);
            goto joined_r0x030fb470;
          }
        }
        uVar3 = *(ushort *)(pauVar12[1] + 0xc);
        uVar10 = uVar11;
        pauVar13 = pauVar12;
        goto joined_r0x030fb470;
      }
    }
  }
  return;
}


