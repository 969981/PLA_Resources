/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b5ab10; name: FUN_02b5ab10
 */


void FUN_02b5ab10(long *param_1,long param_2,undefined8 *param_3,int param_4,int param_5)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  char *pcVar7;
  float *pfVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  ulong local_a8 [2];
  undefined4 local_98;
  long local_90;
  undefined1 auStack_88 [8];
  
  local_a8[0]._0_4_ = 0x22;
  local_90._0_4_ = 1;
  FUN_02b76540(param_2,&local_90,local_a8);
  iVar9 = *(int *)(param_2 + 0x40) + 0xc;
  *(int *)(param_2 + 0x40) = iVar9;
  uVar11 = (uint)*param_3;
  if ((uVar11 >> 1 & 1) != 0) {
    local_a8[0]._0_4_ = 0x22;
    local_90._0_4_ = 2;
    FUN_02b76540(param_2,&local_90,local_a8);
    iVar9 = *(int *)(param_2 + 0x40) + 0xc;
    *(int *)(param_2 + 0x40) = iVar9;
    uVar11 = (uint)*param_3;
  }
  if ((uVar11 >> 2 & 1) != 0) {
    local_a8[0] = CONCAT44(local_a8[0]._4_4_,0x16);
    local_90 = CONCAT44(local_90._4_4_,0x18);
    FUN_02b76540(param_2,&local_90,local_a8);
    iVar9 = *(int *)(param_2 + 0x40) + 8;
    *(int *)(param_2 + 0x40) = iVar9;
  }
  iVar13 = (param_5 + 1) * (param_4 + 1);
  local_a8[0] = (ulong)(uint)(iVar9 * iVar13);
  *(int *)(param_2 + 0x44) = iVar13;
  local_98 = 0;
  local_a8[1] = 4;
  local_90 = *param_1;
  lVar5 = FUN_01b34908(auStack_88,*(undefined8 *)(local_90 + 8),&local_90);
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_02bbfe84(lVar5,local_a8,1,0,0);
  plVar6 = *(long **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 10;
    do {
      iVar9 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  *(long *)(param_2 + 0x38) = lVar5;
  uVar11 = *(uint *)(lVar5 + 0xa0);
  uVar12 = *(ulong *)(*(long *)(lVar5 + 0x98) + 0x138);
  uVar10 = (uint)uVar12;
  if (uVar11 < 3) {
    uVar10 = uVar10 & uVar11 - 1;
  }
  else {
    iVar9 = 0;
    if ((ulong)uVar11 != 0) {
      iVar9 = (int)(uVar12 / uVar11);
    }
    uVar10 = uVar10 - iVar9 * uVar11;
  }
  pcVar7 = (char *)FUN_02bc0470((long)(int)uVar10,lVar5 + 0x58);
  if (*pcVar7 == '\0' || *(long *)(pcVar7 + 8) == 0) {
    pfVar8 = (float *)0x0;
  }
  else {
    if (*(long *)(*(long *)(pcVar7 + 8) + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    pfVar8 = (float *)(*DAT_043f0470)();
  }
  if (-1 < param_5) {
    fVar14 = *(float *)PTR_FloatPi_04372cf0;
    fVar15 = *(float *)PTR_Float1Divided2Pi_04372d20;
    fVar16 = *(float *)PTR_Float2Pi_04372d30;
    fVar17 = *(float *)PTR_FloatPiDivided2_04372d38;
    fVar19 = *(float *)PTR_CosCoefficients_04372d40;
    fVar27 = *(float *)((long)PTR_CosCoefficients_04372d40 + 4);
    fVar30 = *(float *)((long)PTR_CosCoefficients_04372d40 + 0x10);
    fVar28 = *(float *)((long)PTR_CosCoefficients_04372d40 + 8);
    fVar29 = *(float *)((long)PTR_CosCoefficients_04372d40 + 0xc);
    fVar31 = *(float *)PTR_SinCoefficients_04372d28;
    fVar32 = *(float *)((long)PTR_SinCoefficients_04372d28 + 4);
    fVar33 = *(float *)((long)PTR_SinCoefficients_04372d28 + 8);
    fVar34 = *(float *)((long)PTR_SinCoefficients_04372d28 + 0xc);
    fVar35 = *(float *)((long)PTR_SinCoefficients_04372d28 + 0x10);
    fVar18 = -fVar17;
    iVar9 = 0;
    do {
      fVar20 = fVar14 * ((float)iVar9 / (float)param_5);
      fVar21 = 0.5;
      if (fVar20 < 0.0) {
        fVar21 = -0.5;
      }
      fVar20 = fVar20 - fVar16 * (float)(int)(fVar15 * fVar20 + fVar21);
      fVar23 = -fVar14 - fVar20;
      fVar24 = fVar14 - fVar20;
      fVar21 = 1.0;
      fVar22 = fVar20;
      if (fVar20 < fVar18) {
        fVar21 = -1.0;
        fVar22 = fVar23;
      }
      if (fVar17 < fVar20) {
        fVar21 = -1.0;
        fVar20 = fVar24;
        fVar22 = fVar24;
      }
      else if (fVar20 < fVar18) {
        fVar20 = fVar23;
      }
      if (-1 < param_4) {
        fVar22 = fVar22 * fVar22;
        fVar21 = fVar21 * (fVar22 * (fVar22 * (fVar29 + fVar22 * (fVar22 * (fVar27 - fVar19 * fVar22
                                                                           ) - fVar28)) - fVar30) +
                          1.0);
        fVar22 = fVar20 * fVar20;
        fVar20 = fVar20 * (fVar22 * (fVar22 * (fVar34 + fVar22 * (fVar22 * (fVar32 - fVar31 * fVar22
                                                                           ) - fVar33)) - fVar35) +
                          1.0);
        iVar13 = 0;
        do {
          fVar22 = 0.0;
          if (param_4 != iVar13) {
            fVar22 = -(fVar16 * ((float)iVar13 / (float)param_4));
          }
          fVar23 = 0.5;
          if (fVar22 < 0.0) {
            fVar23 = -0.5;
          }
          fVar22 = fVar22 - fVar16 * (float)(int)(fVar15 * fVar22 + fVar23);
          fVar25 = -fVar14 - fVar22;
          fVar26 = fVar14 - fVar22;
          fVar24 = 1.0;
          fVar23 = fVar22;
          if (fVar22 < fVar18) {
            fVar24 = -1.0;
            fVar23 = fVar25;
          }
          if (fVar17 < fVar22) {
            fVar23 = fVar26;
          }
          fVar23 = fVar23 * fVar23;
          if (fVar17 < fVar22) {
            fVar24 = -1.0;
          }
          if ((fVar22 <= fVar17) && (fVar26 = fVar22, fVar22 < fVar18)) {
            fVar26 = fVar25;
          }
          fVar22 = fVar26 * fVar26;
          fVar23 = fVar20 * fVar24 * (fVar23 * (fVar23 * (fVar29 + fVar23 * (fVar23 * (fVar27 - 
                                                  fVar19 * fVar23) - fVar28)) - fVar30) + 1.0);
          fVar22 = fVar20 * fVar26 * (fVar22 * (fVar22 * (fVar34 + fVar22 * (fVar22 * (fVar32 - 
                                                  fVar31 * fVar22) - fVar33)) - fVar35) + 1.0);
          *pfVar8 = fVar23;
          pfVar8[1] = fVar21;
          pfVar8[2] = fVar22;
          uVar11 = (uint)*param_3;
          if ((uVar11 >> 1 & 1) == 0) {
            pfVar8 = pfVar8 + 3;
          }
          else {
            pfVar8[3] = fVar23;
            pfVar8[4] = fVar21;
            pfVar8[5] = fVar22;
            pfVar8 = pfVar8 + 6;
            uVar11 = (uint)*param_3;
          }
          if ((uVar11 >> 2 & 1) != 0) {
            *pfVar8 = (float)iVar13 / (float)param_4;
            pfVar8[1] = (float)iVar9 / (float)param_5;
            pfVar8 = pfVar8 + 2;
          }
          iVar13 = iVar13 + 1;
        } while (param_4 + 1 != iVar13);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != param_5 + 1);
  }
  return;
}


