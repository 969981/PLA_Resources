/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0325cb78; name: FUN_0325cb78
 */


void FUN_0325cb78(float param_1,long *param_2)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  ulong uVar12;
  undefined8 *puVar13;
  float *pfVar14;
  long lVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  
  lVar16 = tpidr_el0;
  if (*(long *)(lVar16 + 0x38d490) == 0) {
    lVar15 = FUN_0333d16c(0,1);
    *(long *)(lVar16 + 0x38d490) = lVar15;
    lVar16 = *(long *)(lVar15 + 0x10);
  }
  else {
    lVar16 = *(long *)(*(long *)(lVar16 + 0x38d490) + 0x10);
  }
  if (lVar16 != 0) {
    FUN_032d5af0(lVar16,"Ttweld",6);
  }
  iVar9 = (int)param_2[1];
  bVar1 = 4 < iVar9;
  if (iVar9 < 3) {
    iVar11 = 0;
  }
  else {
    uVar12 = 0;
    do {
      if (!bVar1) goto LAB_0325cd04;
      uVar2 = (long)(int)uVar12 + 1;
      pfVar10 = (float *)(*param_2 + uVar2 * 0x10);
      puVar13 = (undefined8 *)(*param_2 + (long)(int)uVar12 * 0x10);
      uVar8 = puVar13[1];
      uVar7 = *puVar13;
      fVar17 = (float)uVar7 - *pfVar10;
      fVar18 = (float)((ulong)uVar7 >> 0x20) - pfVar10[1];
      fVar19 = (float)uVar8 - pfVar10[2];
      fVar20 = (float)((ulong)uVar8 >> 0x20) - pfVar10[3];
      fVar17 = fVar17 * fVar17;
      fVar18 = fVar18 * fVar18;
      fVar19 = fVar19 * fVar19;
      fVar20 = fVar20 * fVar20;
      auVar21._4_4_ = fVar18;
      auVar21._0_4_ = fVar17;
      auVar21._8_4_ = fVar19;
      auVar21._12_4_ = fVar20;
      auVar4._4_4_ = fVar18;
      auVar4._0_4_ = fVar17;
      auVar4._8_4_ = fVar19;
      auVar4._12_4_ = fVar20;
      auVar21 = NEON_ext(auVar21,auVar4,8,1);
      if (param_1 <= fVar17 + fVar18 + auVar21._0_4_) {
        uVar12 = uVar2 & 0xffffffff;
      }
      else {
        iVar9 = iVar9 + -1;
        uVar3 = iVar9 - (int)uVar2;
        *(int *)(param_2 + 1) = iVar9;
        if ((uVar3 != 0) && (0 < (int)uVar3)) {
          lVar15 = 0;
          pfVar10 = pfVar10 + 4;
          do {
            lVar15 = (lVar15 << 0x20) + 0x800000000 >> 0x20;
            *(undefined8 *)(pfVar10 + -4) = *(undefined8 *)pfVar10;
            pfVar10 = pfVar10 + 2;
          } while (lVar15 < (long)(-(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar3 << 4)
                  );
          iVar9 = (int)param_2[1];
        }
      }
      bVar1 = 4 < iVar9;
      iVar11 = (int)uVar12;
    } while (iVar11 < iVar9 + -2);
  }
  if (bVar1) {
    pfVar14 = (float *)*param_2;
    pfVar10 = pfVar14 + (long)iVar11 * 4;
    fVar17 = (float)*(undefined8 *)pfVar10 - *pfVar14;
    fVar18 = (float)((ulong)*(undefined8 *)pfVar10 >> 0x20) - pfVar14[1];
    fVar19 = (float)*(undefined8 *)(pfVar10 + 2) - pfVar14[2];
    fVar20 = (float)((ulong)*(undefined8 *)(pfVar10 + 2) >> 0x20) - pfVar14[3];
    fVar17 = fVar17 * fVar17;
    fVar18 = fVar18 * fVar18;
    fVar19 = fVar19 * fVar19;
    fVar20 = fVar20 * fVar20;
    auVar5._4_4_ = fVar18;
    auVar5._0_4_ = fVar17;
    auVar5._8_4_ = fVar19;
    auVar5._12_4_ = fVar20;
    auVar6._4_4_ = fVar18;
    auVar6._0_4_ = fVar17;
    auVar6._8_4_ = fVar19;
    auVar6._12_4_ = fVar20;
    auVar21 = NEON_ext(auVar5,auVar6,8,1);
    if (fVar17 + fVar18 + auVar21._0_4_ < param_1) {
      iVar9 = iVar9 + -1;
      uVar3 = iVar9 - iVar11;
      *(int *)(param_2 + 1) = iVar9;
      if ((uVar3 != 0) && (0 < (int)uVar3)) {
        lVar15 = 0;
        pfVar10 = pfVar10 + 4;
        do {
          lVar15 = (lVar15 << 0x20) + 0x800000000 >> 0x20;
          *(undefined8 *)(pfVar10 + -4) = *(undefined8 *)pfVar10;
          pfVar10 = pfVar10 + 2;
        } while (lVar15 < (long)(-(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar3 << 4));
        iVar9 = (int)param_2[1];
      }
    }
  }
LAB_0325cd04:
  puVar13 = (undefined8 *)*param_2;
  uVar7 = *puVar13;
  puVar13[(long)iVar9 * 2 + -1] = puVar13[1];
  puVar13[(long)iVar9 * 2 + -2] = uVar7;
  if (lVar16 != 0) {
    FUN_032d5b34(lVar16,&DAT_0390f40e);
  }
  return;
}


