/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0194cfd0; name: FUN_0194cfd0
 */


undefined8 FUN_0194cfd0(long *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  long lVar18;
  float *pfVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  long *local_48;
  
  pfVar19 = (float *)*param_4;
  FUN_00956dac(&local_48,*param_2 + 0x1a8);
  fVar20 = *pfVar19 - (float)local_48[0x1a];
  fVar21 = pfVar19[1] - (float)((ulong)local_48[0x1a] >> 0x20);
  fVar22 = pfVar19[2] - (float)local_48[0x1b];
  fVar25 = pfVar19[3] - (float)((ulong)local_48[0x1b] >> 0x20);
  fVar20 = fVar20 * fVar20;
  fVar21 = fVar21 * fVar21;
  fVar22 = fVar22 * fVar22;
  fVar25 = fVar25 * fVar25;
  auVar29._4_4_ = fVar21;
  auVar29._0_4_ = fVar20;
  auVar29._8_4_ = fVar22;
  auVar29._12_4_ = fVar25;
  auVar30._4_4_ = fVar21;
  auVar30._0_4_ = fVar20;
  auVar30._8_4_ = fVar22;
  auVar30._12_4_ = fVar25;
  auVar29 = NEON_ext(auVar29,auVar30,8,1);
  if (local_48 != (long *)0x0) {
    lVar18 = local_48[0xb];
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  pfVar19 = (float *)*param_4;
  FUN_00956dac(&local_48,*param_1 + 0x1a8);
  fVar22 = *pfVar19 - (float)local_48[0x1a];
  fVar25 = pfVar19[1] - (float)((ulong)local_48[0x1a] >> 0x20);
  fVar23 = pfVar19[2] - (float)local_48[0x1b];
  fVar26 = pfVar19[3] - (float)((ulong)local_48[0x1b] >> 0x20);
  fVar22 = fVar22 * fVar22;
  fVar25 = fVar25 * fVar25;
  fVar23 = fVar23 * fVar23;
  fVar26 = fVar26 * fVar26;
  auVar31._4_4_ = fVar25;
  auVar31._0_4_ = fVar22;
  auVar31._8_4_ = fVar23;
  auVar31._12_4_ = fVar26;
  auVar5._4_4_ = fVar25;
  auVar5._0_4_ = fVar22;
  auVar5._8_4_ = fVar23;
  auVar5._12_4_ = fVar26;
  auVar30 = NEON_ext(auVar31,auVar5,8,1);
  if (local_48 != (long *)0x0) {
    lVar18 = local_48[0xb];
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  pfVar19 = (float *)*param_4;
  FUN_00956dac(&local_48,*param_3 + 0x1a8);
  fVar23 = *pfVar19 - (float)local_48[0x1a];
  fVar26 = pfVar19[1] - (float)((ulong)local_48[0x1a] >> 0x20);
  fVar24 = pfVar19[2] - (float)local_48[0x1b];
  fVar27 = pfVar19[3] - (float)((ulong)local_48[0x1b] >> 0x20);
  fVar23 = fVar23 * fVar23;
  fVar26 = fVar26 * fVar26;
  fVar24 = fVar24 * fVar24;
  fVar27 = fVar27 * fVar27;
  auVar6._4_4_ = fVar26;
  auVar6._0_4_ = fVar23;
  auVar6._8_4_ = fVar24;
  auVar6._12_4_ = fVar27;
  auVar7._4_4_ = fVar26;
  auVar7._0_4_ = fVar23;
  auVar7._8_4_ = fVar24;
  auVar7._12_4_ = fVar27;
  auVar31 = NEON_ext(auVar6,auVar7,8,1);
  fVar23 = auVar31._0_4_ + fVar23 + auVar31._4_4_ + fVar26;
  if (local_48 != (long *)0x0) {
    lVar18 = local_48[0xb];
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  pfVar19 = (float *)*param_4;
  FUN_00956dac(&local_48,*param_2 + 0x1a8);
  fVar26 = *pfVar19 - (float)local_48[0x1a];
  fVar24 = pfVar19[1] - (float)((ulong)local_48[0x1a] >> 0x20);
  fVar27 = pfVar19[2] - (float)local_48[0x1b];
  fVar28 = pfVar19[3] - (float)((ulong)local_48[0x1b] >> 0x20);
  fVar26 = fVar26 * fVar26;
  fVar24 = fVar24 * fVar24;
  fVar27 = fVar27 * fVar27;
  fVar28 = fVar28 * fVar28;
  auVar8._4_4_ = fVar24;
  auVar8._0_4_ = fVar26;
  auVar8._8_4_ = fVar27;
  auVar8._12_4_ = fVar28;
  auVar9._4_4_ = fVar24;
  auVar9._0_4_ = fVar26;
  auVar9._8_4_ = fVar27;
  auVar9._12_4_ = fVar28;
  auVar31 = NEON_ext(auVar8,auVar9,8,1);
  fVar26 = auVar31._0_4_ + fVar26 + auVar31._4_4_ + fVar24;
  if (local_48 != (long *)0x0) {
    lVar18 = local_48[0xb];
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (auVar29._0_4_ + fVar20 + auVar29._4_4_ + fVar21 <
      auVar30._0_4_ + fVar22 + auVar30._4_4_ + fVar25) {
    if (fVar26 <= fVar23) {
      FUN_0194cf60(param_1,param_2);
      pfVar19 = (float *)*param_4;
      FUN_00956dac(&local_48,*param_3 + 0x1a8);
      fVar20 = *pfVar19 - (float)local_48[0x1a];
      fVar21 = pfVar19[1] - (float)((ulong)local_48[0x1a] >> 0x20);
      fVar22 = pfVar19[2] - (float)local_48[0x1b];
      fVar25 = pfVar19[3] - (float)((ulong)local_48[0x1b] >> 0x20);
      fVar20 = fVar20 * fVar20;
      fVar21 = fVar21 * fVar21;
      fVar22 = fVar22 * fVar22;
      fVar25 = fVar25 * fVar25;
      auVar14._4_4_ = fVar21;
      auVar14._0_4_ = fVar20;
      auVar14._8_4_ = fVar22;
      auVar14._12_4_ = fVar25;
      auVar15._4_4_ = fVar21;
      auVar15._0_4_ = fVar20;
      auVar15._8_4_ = fVar22;
      auVar15._12_4_ = fVar25;
      auVar29 = NEON_ext(auVar14,auVar15,8,1);
      if (local_48 != (long *)0x0) {
        lVar18 = local_48[0xb];
        piVar1 = (int *)(lVar18 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar18 + 0x18) = 0;
          (**(code **)(*local_48 + 0x20))();
        }
      }
      pfVar19 = (float *)*param_4;
      FUN_00956dac(&local_48,*param_2 + 0x1a8);
      fVar22 = *pfVar19 - (float)local_48[0x1a];
      fVar25 = pfVar19[1] - (float)((ulong)local_48[0x1a] >> 0x20);
      fVar23 = pfVar19[2] - (float)local_48[0x1b];
      fVar26 = pfVar19[3] - (float)((ulong)local_48[0x1b] >> 0x20);
      fVar22 = fVar22 * fVar22;
      fVar25 = fVar25 * fVar25;
      fVar23 = fVar23 * fVar23;
      fVar26 = fVar26 * fVar26;
      auVar16._4_4_ = fVar25;
      auVar16._0_4_ = fVar22;
      auVar16._8_4_ = fVar23;
      auVar16._12_4_ = fVar26;
      auVar17._4_4_ = fVar25;
      auVar17._0_4_ = fVar22;
      auVar17._8_4_ = fVar23;
      auVar17._12_4_ = fVar26;
      auVar30 = NEON_ext(auVar16,auVar17,8,1);
      if (local_48 != (long *)0x0) {
        lVar18 = local_48[0xb];
        piVar1 = (int *)(lVar18 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar18 + 0x18) = 0;
          (**(code **)(*local_48 + 0x20))();
        }
      }
      if (auVar29._0_4_ + fVar20 + auVar29._4_4_ + fVar21 <
          auVar30._0_4_ + fVar22 + auVar30._4_4_ + fVar25) {
        param_1 = param_2;
        goto LAB_0194d34c;
      }
    }
    else {
      FUN_0194cf60(param_1,param_3);
    }
  }
  else {
    if (fVar26 <= fVar23) {
      return 0;
    }
    FUN_0194cf60(param_2,param_3);
    pfVar19 = (float *)*param_4;
    FUN_00956dac(&local_48,*param_2 + 0x1a8);
    fVar20 = *pfVar19 - (float)local_48[0x1a];
    fVar21 = pfVar19[1] - (float)((ulong)local_48[0x1a] >> 0x20);
    fVar22 = pfVar19[2] - (float)local_48[0x1b];
    fVar25 = pfVar19[3] - (float)((ulong)local_48[0x1b] >> 0x20);
    fVar20 = fVar20 * fVar20;
    fVar21 = fVar21 * fVar21;
    fVar22 = fVar22 * fVar22;
    fVar25 = fVar25 * fVar25;
    auVar10._4_4_ = fVar21;
    auVar10._0_4_ = fVar20;
    auVar10._8_4_ = fVar22;
    auVar10._12_4_ = fVar25;
    auVar11._4_4_ = fVar21;
    auVar11._0_4_ = fVar20;
    auVar11._8_4_ = fVar22;
    auVar11._12_4_ = fVar25;
    auVar29 = NEON_ext(auVar10,auVar11,8,1);
    if (local_48 != (long *)0x0) {
      lVar18 = local_48[0xb];
      piVar1 = (int *)(lVar18 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar18 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
    }
    pfVar19 = (float *)*param_4;
    FUN_00956dac(&local_48,*param_1 + 0x1a8);
    fVar22 = *pfVar19 - (float)local_48[0x1a];
    fVar25 = pfVar19[1] - (float)((ulong)local_48[0x1a] >> 0x20);
    fVar23 = pfVar19[2] - (float)local_48[0x1b];
    fVar26 = pfVar19[3] - (float)((ulong)local_48[0x1b] >> 0x20);
    fVar22 = fVar22 * fVar22;
    fVar25 = fVar25 * fVar25;
    fVar23 = fVar23 * fVar23;
    fVar26 = fVar26 * fVar26;
    auVar12._4_4_ = fVar25;
    auVar12._0_4_ = fVar22;
    auVar12._8_4_ = fVar23;
    auVar12._12_4_ = fVar26;
    auVar13._4_4_ = fVar25;
    auVar13._0_4_ = fVar22;
    auVar13._8_4_ = fVar23;
    auVar13._12_4_ = fVar26;
    auVar30 = NEON_ext(auVar12,auVar13,8,1);
    if (local_48 != (long *)0x0) {
      lVar18 = local_48[0xb];
      piVar1 = (int *)(lVar18 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar18 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
    }
    if (auVar29._0_4_ + fVar20 + auVar29._4_4_ + fVar21 <
        auVar30._0_4_ + fVar22 + auVar30._4_4_ + fVar25) {
      param_3 = param_2;
LAB_0194d34c:
      FUN_0194cf60(param_1,param_3);
      return 2;
    }
  }
  return 1;
}


