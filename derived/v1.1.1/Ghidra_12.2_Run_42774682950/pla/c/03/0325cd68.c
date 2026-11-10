/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0325cd68; name: FUN_0325cd68
 */


void FUN_0325cd68(float param_1,long *param_2)

{
  float *pfVar1;
  ulong uVar2;
  undefined1 (*pauVar3) [16];
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auVar12 [12];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar21 [12];
  undefined1 auVar22 [16];
  
  lVar10 = tpidr_el0;
  if (*(long *)(lVar10 + 0x38d490) == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar10 + 0x38d490) = lVar9;
    lVar10 = *(long *)(lVar9 + 0x10);
  }
  else {
    lVar10 = *(long *)(*(long *)(lVar10 + 0x38d490) + 0x10);
  }
  if (lVar10 != 0) {
    FUN_032d5af0(lVar10,"TtremoveColinear",0x10);
  }
  iVar5 = (int)param_2[1];
  if (iVar5 < 1) {
    auVar12._8_4_ = 0xff7fffee;
    auVar12._0_8_ = 0xff7fffeeff7fffee;
    auVar21._8_4_ = 0x7f7fffee;
    auVar21._0_8_ = 0x7f7fffee7f7fffee;
  }
  else {
    uVar7 = (long)iVar5 & 1;
    if (iVar5 == 1) {
      auVar22._8_4_ = 0x7f7fffee;
      auVar22._0_8_ = 0x7f7fffee7f7fffee;
      auVar22._12_4_ = 0x7f7fffee;
      lVar9 = 0;
      auVar17._8_4_ = 0xff7fffee;
      auVar17._0_8_ = 0xff7fffeeff7fffee;
      auVar17._12_4_ = 0xff7fffee;
    }
    else {
      auVar22._8_4_ = 0x7f7fffee;
      auVar22._0_8_ = 0x7f7fffee7f7fffee;
      auVar22._12_4_ = 0x7f7fffee;
      lVar9 = 0;
      auVar17._8_4_ = 0xff7fffee;
      auVar17._0_8_ = 0xff7fffeeff7fffee;
      auVar17._12_4_ = 0xff7fffee;
      do {
        pauVar3 = (undefined1 (*) [16])(*param_2 + lVar9 * 0x10);
        lVar9 = lVar9 + 2;
        auVar13 = *pauVar3;
        auVar14 = pauVar3[1];
        auVar22 = NEON_fmin(auVar22,auVar13,4);
        auVar17 = NEON_fmax(auVar17,auVar13,4);
        auVar22 = NEON_fmin(auVar22,auVar14,4);
        auVar21 = auVar22._0_12_;
        auVar17 = NEON_fmax(auVar17,auVar14,4);
        auVar12 = auVar17._0_12_;
      } while ((long)iVar5 - uVar7 != lVar9);
      if (uVar7 == 0) goto joined_r0x0325ce10;
    }
    auVar13 = *(undefined1 (*) [16])(*param_2 + lVar9 * 0x10);
    auVar17 = NEON_fmax(auVar17,auVar13,4);
    auVar12 = auVar17._0_12_;
    auVar17 = NEON_fmin(auVar22,auVar13,4);
    auVar21 = auVar17._0_12_;
  }
joined_r0x0325ce10:
  if (2 < iVar5) {
    uVar11 = CONCAT44(auVar12._4_4_ - auVar21._4_4_,auVar12._0_4_ - auVar21._0_4_);
    fVar20 = auVar12._8_4_ - auVar21._8_4_;
    uVar7 = 0;
    uVar11 = NEON_fmaxp(uVar11,uVar11,4);
    uVar11 = NEON_fmax(CONCAT44(fVar20,fVar20),uVar11,4);
    param_1 = (float)uVar11 * param_1;
    param_1 = param_1 * param_1;
    do {
      uVar2 = (long)(int)uVar7 + 1;
      if (iVar5 < 5) {
LAB_0325ce38:
        uVar7 = uVar2 & 0xffffffff;
      }
      else {
        pfVar8 = (float *)(*param_2 + uVar2 * 0x10);
        pfVar1 = (float *)(*param_2 + (long)(int)uVar7 * 0x10);
        auVar13._0_4_ = *pfVar8 - *pfVar1;
        auVar13._4_4_ = pfVar8[1] - pfVar1[1];
        auVar13._8_4_ = pfVar8[2] - pfVar1[2];
        auVar13._12_4_ = pfVar8[3] - pfVar1[3];
        auVar22 = NEON_ext(auVar13,auVar13,4,1);
        auVar18._0_4_ = pfVar1[8] - *pfVar1;
        auVar18._4_4_ = pfVar1[9] - pfVar1[1];
        auVar18._8_4_ = pfVar1[10] - pfVar1[2];
        auVar18._12_4_ = pfVar1[0xb] - pfVar1[3];
        auVar17 = NEON_ext(auVar18,auVar18,4,1);
        auVar14._0_4_ = auVar18._0_4_ * auVar22._0_4_ - auVar13._0_4_ * auVar17._0_4_;
        auVar14._4_4_ = auVar18._4_4_ * auVar22._4_4_ - auVar13._4_4_ * auVar17._4_4_;
        auVar14._8_4_ = auVar18._8_4_ * auVar13._0_4_ - auVar13._8_4_ * auVar18._0_4_;
        auVar14._12_4_ = auVar18._12_4_ * auVar13._4_4_ - auVar13._12_4_ * auVar18._4_4_;
        auVar17 = NEON_ext(auVar14,auVar14,4,1);
        if (param_1 <=
            auVar17._0_4_ * auVar17._0_4_ + auVar17._4_4_ * auVar17._4_4_ +
            auVar14._0_4_ * auVar14._0_4_) goto LAB_0325ce38;
        iVar5 = iVar5 + -1;
        uVar4 = iVar5 - (int)uVar2;
        *(int *)(param_2 + 1) = iVar5;
        if ((uVar4 != 0) && (0 < (int)uVar4)) {
          lVar9 = 0;
          pfVar8 = pfVar8 + 4;
          do {
            lVar9 = (lVar9 << 0x20) + 0x800000000 >> 0x20;
            *(undefined8 *)(pfVar8 + -4) = *(undefined8 *)pfVar8;
            pfVar8 = pfVar8 + 2;
          } while (lVar9 < (long)(-(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar4 << 4))
          ;
          iVar5 = (int)param_2[1];
        }
      }
    } while ((int)uVar7 < iVar5 + -2);
    if (4 < iVar5) {
      lVar9 = *param_2;
      pfVar1 = (float *)(lVar9 + (long)(int)uVar7 * 0x10);
      pfVar8 = (float *)(lVar9 + 0x10);
      auVar19._0_4_ = *pfVar1 - pfVar1[4];
      auVar19._4_4_ = pfVar1[1] - pfVar1[5];
      auVar19._8_4_ = pfVar1[2] - pfVar1[6];
      auVar19._12_4_ = pfVar1[3] - pfVar1[7];
      auVar22 = NEON_ext(auVar19,auVar19,4,1);
      auVar15._0_4_ = *pfVar8 - *pfVar1;
      auVar15._4_4_ = *(float *)(lVar9 + 0x14) - pfVar1[1];
      auVar15._8_4_ = *(float *)(lVar9 + 0x18) - pfVar1[2];
      auVar15._12_4_ = *(float *)(lVar9 + 0x1c) - pfVar1[3];
      auVar17 = NEON_ext(auVar15,auVar15,4,1);
      auVar16._0_4_ = auVar15._0_4_ * auVar22._0_4_ - auVar19._0_4_ * auVar17._0_4_;
      auVar16._4_4_ = auVar15._4_4_ * auVar22._4_4_ - auVar19._4_4_ * auVar17._4_4_;
      auVar16._8_4_ = auVar15._8_4_ * auVar19._0_4_ - auVar19._8_4_ * auVar15._0_4_;
      auVar16._12_4_ = auVar15._12_4_ * auVar19._4_4_ - auVar19._12_4_ * auVar15._4_4_;
      auVar17 = NEON_ext(auVar16,auVar16,4,1);
      if (auVar17._0_4_ * auVar17._0_4_ + auVar17._4_4_ * auVar17._4_4_ +
          auVar16._0_4_ * auVar16._0_4_ < param_1) {
        uVar4 = iVar5 - 1;
        lVar9 = 0;
        *(uint *)(param_2 + 1) = uVar4;
        do {
          lVar9 = (lVar9 << 0x20) + 0x800000000 >> 0x20;
          *(undefined8 *)(pfVar8 + -4) = *(undefined8 *)pfVar8;
          pfVar8 = pfVar8 + 2;
        } while (lVar9 < (long)(-(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar4 << 4));
        iVar5 = (int)param_2[1];
      }
    }
  }
  puVar6 = (undefined8 *)*param_2;
  uVar11 = *puVar6;
  puVar6[(long)iVar5 * 2 + -1] = puVar6[1];
  puVar6[(long)iVar5 * 2 + -2] = uVar11;
  if (lVar10 != 0) {
    FUN_032d5b34(lVar10,&DAT_0390f40e);
  }
  return;
}


