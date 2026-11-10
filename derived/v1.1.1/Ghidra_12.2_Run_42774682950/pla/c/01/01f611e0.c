/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f611e0; name: FUN_01f611e0
 */


void FUN_01f611e0(long param_1,long *param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  bool bVar8;
  char cVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  float *pfVar13;
  long lVar14;
  undefined8 uVar15;
  float *pfVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  int iVar20;
  float *pfVar21;
  float *pfVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  double dVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar43 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
  pfVar21 = (float *)(param_1 + 0x40);
  pfVar21[0] = 0.0;
  pfVar21[1] = 0.0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  pfVar22 = (float *)(param_1 + 0x60);
  pfVar22[0] = 0.0;
  pfVar22[1] = 0.0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  iVar20 = *(int *)((long)param_2 + 0xc);
  *(int *)(param_1 + 0x88) = iVar20;
  lVar14 = param_2[2];
  *(char *)(param_1 + 0x8c) = (char)lVar14;
  bVar7 = *(char *)((long)param_2 + 0x11) != '\0';
  bVar8 = (char)lVar14 == '\0';
  cVar9 = bVar8 && bVar7;
  *(char *)(param_1 + 0x8d) = cVar9;
  if (iVar20 == 1) {
    iVar20 = (int)param_2[1];
    if ((bool)cVar9) {
      iVar20 = iVar20 + -2;
    }
    if (2 < iVar20) goto LAB_01f61274;
    *(undefined4 *)(param_1 + 0x88) = 0;
    iVar20 = (int)param_2[1];
    if (bVar8 && bVar7) goto LAB_01f61600;
LAB_01f6127c:
    uVar19 = 0;
  }
  else {
LAB_01f61274:
    iVar20 = (int)param_2[1];
    if (!bVar8 || !bVar7) goto LAB_01f6127c;
LAB_01f61600:
    iVar20 = iVar20 + -2;
    uVar19 = 1;
    uVar11 = ((undefined8 *)*param_2)[1];
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)*param_2;
    *(undefined8 *)(param_1 + 0x48) = uVar11;
  }
  if (0 < iVar20) {
    uVar18 = (uint)uVar19;
    uVar2 = iVar20 + uVar18;
    FUN_01f6166c(*param_2,param_1,uVar19);
    if (iVar20 != 1) {
      uVar4 = uVar18 | 2;
      FUN_01f6166c(*param_2,param_1,uVar18 + 1);
      if (uVar4 != uVar2) {
        FUN_01f6166c(*param_2,param_1,uVar4);
        while (uVar4 = uVar4 + 1, uVar4 != uVar2) {
          FUN_01f6166c(*param_2,param_1,uVar4);
        }
      }
    }
    cVar9 = *(char *)(param_1 + 0x8d);
    uVar19 = (ulong)uVar2;
  }
  if (cVar9 == '\0') {
    if (*(char *)(param_1 + 0x8c) != '\0') {
      FUN_01f6166c(*param_2,param_1,0);
    }
  }
  else {
    puVar3 = (undefined8 *)(*param_2 + uVar19 * 0x10);
    uVar11 = puVar3[1];
    *(undefined8 *)(param_1 + 0x60) = *puVar3;
    *(undefined8 *)(param_1 + 0x68) = uVar11;
  }
  if (*(int *)(param_1 + 0x88) == 1) {
    pfVar13 = *(float **)(param_1 + 8);
    lVar14 = *(long *)(param_1 + 0x10) - (long)pfVar13;
    uVar12 = lVar14 >> 5;
    uVar19 = uVar12 - 1;
    if (*(char *)(param_1 + 0x8c) == '\0') {
      if (*(char *)(param_1 + 0x8d) == '\0') {
        if ((lVar14 == 0) || (uVar12 < 2)) goto LAB_01f615e0;
        fVar33 = *pfVar13;
        fVar35 = pfVar13[1];
        fVar37 = pfVar13[2];
        fVar39 = pfVar13[3];
        pfVar16 = pfVar13 + uVar19 * 8;
        fVar27 = pfVar13[8];
        fVar28 = pfVar13[9];
        fVar29 = pfVar13[10];
        fVar30 = pfVar13[0xb];
        uVar26 = *(undefined8 *)(pfVar13 + uVar12 * 8 + -0xe);
        uVar25 = *(undefined8 *)(pfVar13 + uVar12 * 8 + -0x10);
        uVar15 = *(undefined8 *)pfVar13;
        fVar32 = *pfVar16;
        fVar34 = pfVar16[1];
        fVar36 = pfVar16[2];
        fVar38 = pfVar16[3];
        uVar11 = *(undefined8 *)(pfVar13 + 2);
        *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(pfVar13 + 4);
        *(undefined8 *)pfVar21 = uVar15;
        *(undefined8 *)(param_1 + 0x48) = uVar11;
        uVar15 = *(undefined8 *)(param_1 + 0x48);
        uVar11 = *(undefined8 *)pfVar21;
        *(float *)(param_1 + 0x48) = (fVar37 - fVar29) + (float)uVar15;
        *(float *)(param_1 + 0x4c) = (fVar39 - fVar30) + (float)((ulong)uVar15 >> 0x20);
        *pfVar21 = (fVar33 - fVar27) + (float)uVar11;
        *(float *)(param_1 + 0x44) = (fVar35 - fVar28) + (float)((ulong)uVar11 >> 0x20);
        *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(pfVar16 + 2);
        uVar11 = *(undefined8 *)(pfVar16 + 4);
        *(undefined8 *)pfVar22 = *(undefined8 *)pfVar16;
        *(undefined8 *)(param_1 + 0x70) = uVar11;
        *(float *)(param_1 + 0x68) = (fVar36 - (float)uVar26) + *(float *)(param_1 + 0x68);
        *(float *)(param_1 + 0x6c) =
             (fVar38 - (float)((ulong)uVar26 >> 0x20)) + *(float *)(param_1 + 0x6c);
        *pfVar22 = (fVar32 - (float)uVar25) + *pfVar22;
        *(float *)(param_1 + 100) =
             (fVar34 - (float)((ulong)uVar25 >> 0x20)) + *(float *)(param_1 + 100);
      }
      *(undefined8 *)(param_1 + 0x80) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(pfVar13 + uVar12 * 8 + -0xe);
      uVar11 = *(undefined8 *)(pfVar13 + uVar12 * 8 + -0x10);
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(pfVar13 + uVar12 * 8 + -0xc);
      *(undefined8 *)pfVar21 = uVar11;
      uVar11 = *(undefined8 *)(pfVar13 + 8);
      uVar15 = *(undefined8 *)(pfVar13 + 0xc);
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(pfVar13 + 10);
      *(undefined8 *)(param_1 + 0x70) = uVar15;
      *(undefined8 *)pfVar22 = uVar11;
      *(undefined8 *)(param_1 + 0x80) = 0;
    }
    if (uVar19 != 0) {
      auVar23 = NEON_fmov(0xc0400000,4);
      auVar24 = NEON_fmov(0x40400000,4);
      uVar12 = 0;
      do {
        if (uVar12 == 0) {
          lVar14 = *(long *)(param_1 + 8);
          uVar17 = *(long *)(param_1 + 0x10) - lVar14 >> 5;
          pfVar13 = pfVar21;
          if (uVar17 == 0) goto LAB_01f615e0;
        }
        else {
          lVar14 = *(long *)(param_1 + 8);
          uVar17 = *(long *)(param_1 + 0x10) - lVar14 >> 5;
          if ((uVar17 <= uVar12 - 1) ||
             (pfVar13 = (float *)(lVar14 + (uVar12 - 1) * 0x20), uVar17 <= uVar12))
          goto LAB_01f615e0;
        }
        uVar1 = uVar12 + 1;
        if (uVar17 <= uVar1) goto LAB_01f615e0;
        pfVar16 = pfVar22;
        if (uVar1 < uVar17 - 1) {
          if (uVar17 <= uVar12 + 2) goto LAB_01f615e0;
          pfVar16 = (float *)(lVar14 + (uVar12 + 2) * 0x20);
        }
        puVar3 = (undefined8 *)(lVar14 + uVar12 * 0x20);
        puVar3[2] = 0.0;
        fVar36 = (float)puVar3[1];
        fVar38 = (float)((ulong)puVar3[1] >> 0x20);
        fVar32 = (float)*puVar3;
        fVar34 = (float)((ulong)*puVar3 >> 0x20);
        puVar5 = (undefined8 *)(lVar14 + uVar1 * 0x20);
        uVar15 = puVar5[1];
        uVar11 = *puVar5;
        iVar20 = 1;
        fVar27 = (float)uVar11;
        fVar28 = (float)((ulong)uVar11 >> 0x20);
        fVar29 = (float)uVar15;
        fVar30 = (float)((ulong)uVar15 >> 0x20);
        dVar31 = 0.0;
        fVar33 = fVar32;
        fVar35 = fVar34;
        fVar37 = fVar36;
        fVar39 = fVar38;
        do {
          fVar42 = (fVar27 - *pfVar13) * 0.5;
          fVar44 = (fVar28 - pfVar13[1]) * 0.5;
          fVar45 = (fVar29 - pfVar13[2]) * 0.5;
          fVar46 = (fVar30 - pfVar13[3]) * 0.5;
          fVar40 = (float)iVar20 * 0.0625;
          iVar20 = iVar20 + 1;
          fVar47 = ((float)*(undefined8 *)pfVar16 - fVar32) * 0.5;
          fVar48 = ((float)((ulong)*(undefined8 *)pfVar16 >> 0x20) - fVar34) * 0.5;
          fVar49 = ((float)*(undefined8 *)(pfVar16 + 2) - fVar36) * 0.5;
          fVar50 = ((float)((ulong)*(undefined8 *)(pfVar16 + 2) >> 0x20) - fVar38) * 0.5;
          fVar51 = fVar40 * fVar40;
          fVar41 = fVar40 * fVar51;
          fVar42 = fVar32 + fVar42 * fVar40 +
                            (fVar47 + ((fVar32 + fVar32) - (fVar27 + fVar27)) + fVar42) * fVar41 +
                            (((fVar32 * auVar23._0_4_ + fVar27 * auVar24._0_4_) - (fVar42 + fVar42))
                            - fVar47) * fVar51;
          fVar44 = fVar34 + fVar44 * fVar40 +
                            (fVar48 + ((fVar34 + fVar34) - (fVar28 + fVar28)) + fVar44) * fVar41 +
                            (((fVar34 * auVar23._4_4_ + fVar28 * auVar24._4_4_) - (fVar44 + fVar44))
                            - fVar48) * fVar51;
          fVar45 = fVar36 + fVar45 * fVar40 +
                            (fVar49 + ((fVar36 + fVar36) - (fVar29 + fVar29)) + fVar45) * fVar41 +
                            (((fVar36 * auVar23._8_4_ + fVar29 * auVar24._8_4_) - (fVar45 + fVar45))
                            - fVar49) * fVar51;
          fVar40 = fVar38 + fVar46 * fVar40 +
                            (fVar50 + ((fVar38 + fVar38) - (fVar30 + fVar30)) + fVar46) * fVar41 +
                            (((fVar38 * auVar23._12_4_ + fVar30 * auVar24._12_4_) -
                             (fVar46 + fVar46)) - fVar50) * fVar51;
          fVar33 = fVar42 - fVar33;
          fVar35 = fVar44 - fVar35;
          fVar37 = fVar45 - fVar37;
          fVar39 = fVar40 - fVar39;
          fVar33 = fVar33 * fVar33;
          fVar35 = fVar35 * fVar35;
          fVar37 = fVar37 * fVar37;
          fVar39 = fVar39 * fVar39;
          auVar43._4_4_ = fVar35;
          auVar43._0_4_ = fVar33;
          auVar43._8_4_ = fVar37;
          auVar43._12_4_ = fVar39;
          auVar6._4_4_ = fVar35;
          auVar6._0_4_ = fVar33;
          auVar6._8_4_ = fVar37;
          auVar6._12_4_ = fVar39;
          auVar43 = NEON_ext(auVar43,auVar6,8,1);
          dVar31 = dVar31 + (double)SQRT(auVar43._0_4_ + fVar33 + auVar43._4_4_ + fVar35);
          puVar3[2] = dVar31;
          fVar33 = fVar42;
          fVar35 = fVar44;
          fVar37 = fVar45;
          fVar39 = fVar40;
        } while (iVar20 != 0x11);
        *(double *)(param_1 + 0x80) = dVar31 + *(double *)(param_1 + 0x80);
        uVar12 = uVar1;
      } while (uVar1 != uVar19);
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x80) = 0;
    if (*(int *)(param_1 + 0x88) == 0) {
      lVar14 = *(long *)(param_1 + 8);
      lVar10 = *(long *)(param_1 + 0x10) - lVar14;
      uVar19 = lVar10 >> 5;
      if (uVar19 != 1) {
        if (lVar10 != 0) {
          lVar10 = 0;
          uVar17 = uVar19 - 2;
          uVar12 = 0;
          do {
            uVar1 = uVar12 + 1;
            if (uVar19 <= uVar1) break;
            pfVar21 = (float *)(lVar14 + lVar10);
            auVar23._0_4_ = (pfVar21[8] - *pfVar21) * (pfVar21[8] - *pfVar21);
            auVar23._4_4_ = (pfVar21[9] - pfVar21[1]) * (pfVar21[9] - pfVar21[1]);
            auVar23._8_4_ = (pfVar21[10] - pfVar21[2]) * (pfVar21[10] - pfVar21[2]);
            auVar23._12_4_ = (pfVar21[0xb] - pfVar21[3]) * (pfVar21[0xb] - pfVar21[3]);
            auVar24 = NEON_ext(auVar23,auVar23,8,1);
            dVar31 = (double)SQRT(auVar24._0_4_ + auVar23._0_4_ + auVar24._4_4_ + auVar23._4_4_);
            *(double *)(pfVar21 + 4) = dVar31;
            *(double *)(param_1 + 0x80) = *(double *)(param_1 + 0x80) + dVar31;
            if (uVar17 == uVar12) {
              return;
            }
            lVar14 = *(long *)(param_1 + 8);
            uVar19 = *(long *)(param_1 + 0x10) - lVar14 >> 5;
            lVar10 = lVar10 + 0x20;
            uVar12 = uVar1;
          } while (uVar1 < uVar19);
        }
LAB_01f615e0:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
    }
  }
  return;
}


