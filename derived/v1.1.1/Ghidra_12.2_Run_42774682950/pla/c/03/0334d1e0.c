/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0334d1e0; name: FUN_0334d1e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0334d1e0(long param_1,long param_2,long param_3,long param_4,int param_5)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  undefined1 auVar21 [12];
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uVar26;
  undefined1 auVar27 [12];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  uint local_90;
  undefined1 auStack_8c [12];
  undefined1 local_80 [16];
  
  lVar14 = *(long *)(param_1 + 0x20);
  iVar19 = *(int *)(param_2 + 0x20);
  uVar3 = *(uint *)(param_2 + 0x24);
  lVar2 = lVar14 + (long)iVar19 * 0x10;
  fVar36 = 3.40282e+38;
  if ((int)uVar3 < 1) {
    auVar21._8_4_ = 0xff7fffee;
    auVar21._0_8_ = 0xff7fffeeff7fffee;
    auVar27._8_4_ = 0x7f7fffee;
    auVar27._0_8_ = 0x7f7fffee7f7fffee;
    if (1 < (int)uVar3) goto LAB_0334d2a4;
LAB_0334d48c:
    if (uVar3 != 1) {
      lVar13 = 0;
      local_90 = uVar3;
      uVar10 = 0x80000000;
      uVar26 = _DAT_03889f30;
      uVar11 = _UNK_03889f38;
      plVar12 = (long *)PTR_PTR_0434a080;
      goto joined_r0x0334d4b0;
    }
  }
  else {
    auVar28._8_4_ = 0x7f7fffee;
    auVar28._0_8_ = 0x7f7fffee7f7fffee;
    auVar28._12_4_ = 0x7f7fffee;
    auVar31._8_4_ = 0xff7fffee;
    auVar31._0_8_ = 0xff7fffeeff7fffee;
    auVar31._12_4_ = 0xff7fffee;
    lVar13 = lVar2;
    uVar15 = (ulong)uVar3;
    do {
      (**(code **)(**(long **)(param_1 + 0x40) + 0x10))
                (*(long **)(param_1 + 0x40),*(undefined4 *)(lVar13 + 0xc),&local_90);
      uVar15 = uVar15 - 1;
      lVar13 = lVar13 + 0x10;
      auVar7._4_12_ = auStack_8c;
      auVar7._0_4_ = local_90;
      auVar28 = NEON_fmin(auVar28,auVar7,4);
      auVar27 = auVar28._0_12_;
      auVar31 = NEON_fmax(auVar31,local_80,4);
      auVar21 = auVar31._0_12_;
    } while (uVar15 != 0);
    if ((int)uVar3 < 2) goto LAB_0334d48c;
LAB_0334d2a4:
    fVar20 = auVar21._0_4_ - auVar27._0_4_;
    fVar24 = auVar21._4_4_ - auVar27._4_4_;
    uVar26 = CONCAT44(fVar24,fVar20);
    fVar25 = auVar21._8_4_ - auVar27._8_4_;
    uVar26 = NEON_fmaxp(uVar26,uVar26,4);
    uVar26 = NEON_fmax(CONCAT44(fVar25,fVar25),uVar26,4);
    FUN_033511b0(lVar2,0,uVar3 - 1,
                 (int)(char)(&DAT_03aadfd0)
                            [-(uint)((float)((ulong)uVar26 >> 0x20) <= fVar24) & 2 |
                             -(uint)((float)uVar26 <= fVar20) & 1 |
                             -(uint)((float)uVar26 <= fVar25) & 4]);
  }
  plVar12 = (long *)PTR_PTR_0434a080;
  local_90 = uVar3;
  lVar13 = FUN_032cf190(PTR_PTR_0434a080,4,&local_90);
  uVar10 = local_90;
  uVar26 = _DAT_03889f30;
  uVar11 = _UNK_03889f38;
joined_r0x0334d4b0:
  _DAT_03889f30 = uVar26;
  _UNK_03889f38 = uVar11;
  if (0 < (int)uVar3) {
    auVar32._8_4_ = 0xff7fffee;
    auVar32._0_8_ = 0xff7fffeeff7fffee;
    auVar32._12_4_ = 0xff7fffee;
    auVar33._8_4_ = 0x7f7fffee;
    auVar33._0_8_ = 0x7f7fffee7f7fffee;
    auVar33._12_4_ = 0x7f7fffee;
    uVar15 = 0;
    do {
      (**(code **)(**(long **)(param_1 + 0x40) + 0x10))
                (*(long **)(param_1 + 0x40),*(undefined4 *)(lVar2 + uVar15 * 0x10 + 0xc),&local_90);
      uVar1 = uVar15 + 1;
      auVar8._4_12_ = auStack_8c;
      auVar8._0_4_ = local_90;
      auVar33 = NEON_fmin(auVar33,auVar8,4);
      auVar32 = NEON_fmax(auVar32,local_80,4);
      auVar5._8_8_ = uVar11;
      auVar5._0_8_ = uVar26;
      auVar22._0_4_ = auVar32._0_4_ - auVar33._0_4_;
      auVar22._4_4_ = auVar32._4_4_ - auVar33._4_4_;
      auVar22._8_4_ = auVar32._8_4_ - auVar33._8_4_;
      auVar22._12_4_ = auVar32._12_4_ - auVar33._12_4_;
      auVar31 = a64_TBL(ZEXT816(0),auVar22,auVar5);
      auVar23._0_4_ = (auVar22._0_4_ + auVar22._0_4_) * auVar31._0_4_;
      auVar23._4_4_ = (auVar22._4_4_ + auVar22._4_4_) * auVar31._4_4_;
      auVar23._8_4_ = (auVar22._8_4_ + auVar22._8_4_) * auVar31._8_4_;
      auVar23._12_4_ = (auVar22._12_4_ + auVar22._12_4_) * auVar31._12_4_;
      auVar31 = NEON_ext(auVar23,auVar23,8,1);
      *(float *)(lVar13 + uVar15 * 4) =
           (float)(int)uVar1 * (auVar23._0_4_ + auVar23._4_4_ + auVar31._0_4_);
      uVar15 = uVar1;
    } while (uVar3 != uVar1);
  }
  uVar11 = _UNK_03889f38;
  uVar26 = _DAT_03889f30;
  iVar17 = uVar3 - 1;
  if (iVar17 < 1) {
    iVar19 = -1;
  }
  else {
    auVar35._8_4_ = 0x7f7fffee;
    auVar35._0_8_ = 0x7f7fffee7f7fffee;
    auVar35._12_4_ = 0x7f7fffee;
    lVar14 = lVar14 + ((long)iVar19 + (long)iVar17) * 0x10;
    auVar34._8_4_ = 0xff7fffee;
    auVar34._0_8_ = 0xff7fffeeff7fffee;
    auVar34._12_4_ = 0xff7fffee;
    iVar16 = 1;
    iVar18 = -1;
    do {
      (**(code **)(**(long **)(param_1 + 0x40) + 0x10))
                (*(long **)(param_1 + 0x40),*(undefined4 *)(lVar14 + 0xc),&local_90);
      iVar4 = iVar17 + -1;
      lVar14 = lVar14 + -0x10;
      auVar9._4_12_ = auStack_8c;
      auVar9._0_4_ = local_90;
      auVar35 = NEON_fmin(auVar35,auVar9,4);
      auVar34 = NEON_fmax(auVar34,local_80,4);
      auVar6._8_8_ = uVar11;
      auVar6._0_8_ = uVar26;
      fVar20 = (float)iVar16;
      iVar16 = iVar16 + 1;
      auVar29._0_4_ = auVar34._0_4_ - auVar35._0_4_;
      auVar29._4_4_ = auVar34._4_4_ - auVar35._4_4_;
      auVar29._8_4_ = auVar34._8_4_ - auVar35._8_4_;
      auVar29._12_4_ = auVar34._12_4_ - auVar35._12_4_;
      auVar31 = a64_TBL(ZEXT816(0),auVar29,auVar6);
      auVar30._0_4_ = (auVar29._0_4_ + auVar29._0_4_) * auVar31._0_4_;
      auVar30._4_4_ = (auVar29._4_4_ + auVar29._4_4_) * auVar31._4_4_;
      auVar30._8_4_ = (auVar29._8_4_ + auVar29._8_4_) * auVar31._8_4_;
      auVar30._12_4_ = (auVar29._12_4_ + auVar29._12_4_) * auVar31._12_4_;
      auVar31 = NEON_ext(auVar30,auVar30,8,1);
      fVar20 = *(float *)(lVar13 + (long)iVar4 * 4) +
               fVar20 * (auVar30._0_4_ + auVar30._4_4_ + auVar31._0_4_);
      iVar19 = iVar17;
      if (fVar36 <= fVar20) {
        iVar19 = iVar18;
        fVar20 = fVar36;
      }
      fVar36 = fVar20;
      iVar17 = iVar4;
      iVar18 = iVar19;
    } while (iVar4 != 0);
  }
  iVar17 = *(int *)(param_2 + 0x20);
  *(int *)(param_3 + 0x20) = iVar17;
  *(int *)(param_3 + 0x24) = iVar19;
  *(int *)(param_4 + 0x20) = iVar17 + iVar19;
  iVar16 = *(int *)(param_2 + 0x24);
  iVar18 = iVar16 - iVar19;
  *(int *)(param_4 + 0x24) = iVar18;
  if (iVar19 < param_5 || iVar18 < param_5) {
    if ((int)uVar3 < 0) {
      uVar3 = uVar3 + 1;
    }
    iVar19 = (int)uVar3 >> 1;
    *(int *)(param_3 + 0x20) = iVar17;
    *(int *)(param_3 + 0x24) = iVar19;
    *(int *)(param_4 + 0x20) = iVar17 + iVar19;
    *(int *)(param_4 + 0x24) = iVar16 - iVar19;
  }
  if ((lVar13 != 0) && (-1 < (int)uVar10)) {
    (**(code **)(*plVar12 + 0x18))(plVar12,lVar13,uVar10 << 2);
  }
  return;
}


