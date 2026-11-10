/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001bf184; name: FUN_001bf184
 */


void FUN_001bf184(float param_1,long param_2,long *param_3)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar22;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  int iVar23;
  int iVar25;
  undefined1 auVar24 [16];
  float fVar26;
  undefined8 uVar27;
  float fVar29;
  undefined1 auVar28 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auStack_290 [16];
  undefined1 auStack_280 [528];
  
  if (*(char *)(param_2 + 0x1fe) == '\0') {
    FUN_0331fefc(auStack_290,auStack_280,0x200);
    uVar7 = FUN_0332448c(auStack_290,"No index available (");
    uVar7 = FUN_033245a4(uVar7,*(undefined4 *)(param_2 + 0x1f8));
    FUN_0332448c(uVar7,") hkgpConvexHull::buildIndices need to be called before this operation.");
    iVar23 = FUN_03320b30(0x79f9d886,auStack_280,
                          "../..\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                          ,0x189);
    if (iVar23 != 0) {
      CallSupervisor(0x26);
    }
    FUN_0331ff7c(auStack_290);
    iVar23 = *(int *)(param_2 + 0x1f0);
  }
  else {
    iVar23 = *(int *)(param_2 + 0x1f0);
  }
  if ((iVar23 == 3) && (plVar13 = *(long **)(param_2 + 0x70), plVar13 != (long *)0x0)) {
    uVar7 = *(undefined8 *)PTR_PTR_04372408;
    do {
      lVar12 = 0;
      do {
        uVar10 = plVar13[lVar12 + 5];
        lVar8 = plVar13[lVar12 + 2];
        lVar11 = plVar13[(ulong)(9U >> (ulong)(((uint)lVar12 & 0xf) << 1) & 3) + 2];
        if (*(int *)(lVar8 + 0x20) < *(int *)(lVar11 + 0x20)) {
LAB_001bf270:
          iVar23 = *(int *)((uVar10 & 0xfffffffffffffffc) + 0x58);
          if ((int)plVar13[0xb] != iVar23) {
            puVar4 = (undefined8 *)(*(long *)(param_2 + 0x90) + (long)(int)plVar13[0xb] * 0x10);
            uVar19 = puVar4[1];
            fVar16 = (float)uVar19;
            fVar17 = (float)((ulong)uVar19 >> 0x20);
            uVar19 = *puVar4;
            fVar14 = (float)uVar19;
            fVar15 = (float)((ulong)uVar19 >> 0x20);
            auVar30 = *(undefined1 (*) [16])(*(long *)(param_2 + 0x90) + (long)iVar23 * 0x10);
            auVar21._0_4_ = fVar14 * auVar30._0_4_;
            auVar21._4_4_ = fVar15 * auVar30._4_4_;
            auVar21._8_4_ = fVar16 * auVar30._8_4_;
            auVar21._12_4_ = fVar17 * auVar30._12_4_;
            auVar28 = NEON_ext(auVar21,auVar21,8,1);
            if (auVar21._0_4_ + auVar21._4_4_ + auVar28._0_4_ < param_1) {
              fVar14 = fVar14 + auVar30._0_4_;
              fVar15 = fVar15 + auVar30._4_4_;
              fVar16 = fVar16 + auVar30._8_4_;
              fVar17 = fVar17 + auVar30._12_4_;
              fVar18 = fVar16 * fVar16 + fVar14 * fVar14 + fVar15 * fVar15;
              fVar22 = fVar16 * fVar16 + fVar14 * fVar14 + fVar15 * fVar15;
              uVar19 = CONCAT44(fVar22,fVar18);
              auVar30._0_8_ = CONCAT44(-(uint)(0.0 < fVar22),-(uint)(0.0 < fVar18));
              if (-(uint)(0.0 < fVar18) != 0 || -(uint)(0.0 < fVar22) != 0) {
                uVar27 = NEON_frsqrte(uVar19,4);
                fVar26 = (float)uVar27;
                fVar29 = (float)((ulong)uVar27 >> 0x20);
                iVar23 = -(uint)(fVar18 <= 0.0);
                iVar25 = -(uint)(fVar22 <= 0.0);
                auVar30._8_8_ = auVar30._0_8_;
                uVar27 = NEON_frsqrts(uVar19,CONCAT44(fVar29 * fVar29,fVar26 * fVar26),4);
                fVar26 = fVar26 * (float)uVar27;
                fVar29 = fVar29 * (float)((ulong)uVar27 >> 0x20);
                uVar19 = NEON_frsqrts(uVar19,CONCAT44(fVar29 * fVar29,fVar26 * fVar26),4);
                fVar26 = (float)uVar19 * fVar26;
                fVar29 = (float)((ulong)uVar19 >> 0x20) * fVar29;
                fVar18 = (float)CONCAT13((byte)((uint)fVar26 >> 0x18) &
                                         ~(byte)((uint)iVar23 >> 0x18),
                                         CONCAT12((byte)((uint)fVar26 >> 0x10) &
                                                  ~(byte)((uint)iVar23 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar26 >> 8) &
                                                           ~(byte)((uint)iVar23 >> 8),
                                                           SUB41(fVar26,0) & ~(byte)iVar23)));
                auVar20._0_4_ = fVar14 * fVar18;
                fVar22 = (float)(CONCAT17((byte)((uint)fVar29 >> 0x18) &
                                          ~(byte)((uint)iVar25 >> 0x18),
                                          CONCAT16((byte)((uint)fVar29 >> 0x10) &
                                                   ~(byte)((uint)iVar25 >> 0x10),
                                                   CONCAT15((byte)((uint)fVar29 >> 8) &
                                                            ~(byte)((uint)iVar25 >> 8),
                                                            CONCAT14(SUB41(fVar29,0) & ~(byte)iVar25
                                                                     ,fVar18)))) >> 0x20);
                auVar20._4_4_ = fVar15 * fVar22;
                auVar20._8_4_ = fVar16 * fVar18;
                auVar20._12_4_ = fVar17 * fVar22;
                auVar28._4_4_ = fVar15;
                auVar28._0_4_ = fVar14;
                auVar28._8_4_ = fVar16;
                auVar28._12_4_ = fVar17;
                auVar31._4_4_ = fVar15;
                auVar31._0_4_ = fVar14;
                auVar31._8_4_ = fVar16;
                auVar31._12_4_ = fVar17;
                auVar31 = auVar31 ^ (auVar28 ^ auVar20) & auVar30;
                auVar5._12_4_ = (int)((ulong)*(undefined8 *)(lVar8 + 0x28) >> 0x20);
                auVar5._0_12_ = *(undefined1 (*) [12])(lVar8 + 0x20);
                auVar21 = NEON_scvtf(auVar5,4);
                fVar16 = (float)*(undefined8 *)(param_2 + 0x158);
                fVar14 = (float)*(undefined8 *)(param_2 + 0x150);
                fVar15 = (float)((ulong)*(undefined8 *)(param_2 + 0x150) >> 0x20);
                auVar30 = *(undefined1 (*) [16])(param_2 + 0x130);
                auVar24._0_4_ = auVar31._0_4_ * (auVar30._0_4_ + fVar14 * auVar21._0_4_);
                auVar24._4_4_ = auVar31._4_4_ * (auVar30._4_4_ + fVar15 * auVar21._4_4_);
                auVar24._8_4_ = auVar31._8_4_ * (auVar30._8_4_ + fVar16 * auVar21._8_4_);
                auVar24._12_4_ =
                     auVar31._12_4_ *
                     (auVar30._12_4_ +
                     (float)((ulong)*(undefined8 *)(param_2 + 0x158) >> 0x20) * 0.0);
                auVar21 = NEON_ext(auVar24,auVar24,8,1);
                auVar32._0_12_ = auVar31._0_12_;
                auVar32._12_4_ = auVar24._0_4_ + auVar24._4_4_ + auVar21._0_4_;
                if (*(char *)(param_2 + 0xe) != '\0') {
                  plVar9 = *(long **)(param_2 + 0x58);
                  while (plVar9 != (long *)0x0) {
                    pauVar1 = (undefined1 (*) [16])(plVar9 + 4);
                    plVar9 = (long *)*plVar9;
                    auVar21 = NEON_scvtf(*pauVar1,4);
                    fVar17 = auVar32._0_4_ * (auVar30._0_4_ + fVar14 * auVar21._0_4_);
                    fVar18 = auVar32._4_4_ * (auVar30._4_4_ + fVar15 * auVar21._4_4_);
                    fVar22 = auVar32._8_4_ * (auVar30._8_4_ + fVar16 * auVar21._8_4_);
                    uVar19 = NEON_fmax(CONCAT44(auVar32._12_4_,auVar32._12_4_),
                                       CONCAT44(fVar17 + fVar18 + fVar22,fVar17 + fVar18 + fVar22),4
                                      );
                    auVar32._12_4_ = (int)uVar19;
                  }
                }
                iVar23 = (int)param_3[1];
                uVar6 = *(uint *)((long)param_3 + 0xc);
                auVar33._0_12_ = auVar32._0_12_;
                auVar33._12_4_ = -auVar32._12_4_;
                uVar2 = iVar23 + 1;
                if (iVar23 < (int)(uVar6 & 0x3fffffff)) {
                  lVar8 = *param_3;
                }
                else {
                  lVar8 = *param_3;
                  if (0x3ffffffe < iVar23) {
                    FUN_032bd0a8(uVar2);
                    uVar6 = *(uint *)((long)param_3 + 0xc);
                  }
                  uVar6 = (uVar6 & 0x3fffffff) << 1;
                  if (0x3ffffffe < uVar6) {
                    uVar6 = 0x3fffffff;
                  }
                  uVar3 = uVar2;
                  if ((int)uVar2 <= (int)uVar6) {
                    uVar3 = uVar6;
                  }
                  lVar8 = FUN_032bd1d4(uVar7,uVar3,0x10,lVar8,iVar23,(uint *)((long)param_3 + 0xc));
                  auVar33._8_8_ = auVar33._8_8_;
                  auVar33._0_8_ = auVar32._0_8_;
                  *param_3 = lVar8;
                  iVar23 = (int)param_3[1];
                }
                puVar4 = (undefined8 *)(lVar8 + (long)iVar23 * 0x10);
                puVar4[1] = auVar33._8_8_;
                *puVar4 = auVar33._0_8_;
                *(uint *)(param_3 + 1) = uVar2;
              }
            }
          }
        }
        else if (*(int *)(lVar11 + 0x20) < *(int *)(lVar8 + 0x20)) {
LAB_001bf254:
          if (uVar10 < 4) goto LAB_001bf270;
        }
        else {
          if (*(int *)(lVar8 + 0x24) < *(int *)(lVar11 + 0x24)) goto LAB_001bf270;
          if (*(int *)(lVar11 + 0x24) < *(int *)(lVar8 + 0x24)) goto LAB_001bf254;
          if ((uVar10 < 4) || (*(int *)(lVar8 + 0x28) <= *(int *)(lVar11 + 0x28)))
          goto LAB_001bf270;
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 != 3);
      plVar13 = (long *)*plVar13;
    } while (plVar13 != (long *)0x0);
  }
  return;
}


