/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0194d760; name: FUN_0194d760
 */


int FUN_0194d760(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5,
                undefined8 *param_6)

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
  undefined1 auVar18 [16];
  int iVar19;
  long lVar20;
  int iVar21;
  float *pfVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  long *local_58;
  
  iVar19 = FUN_0194d410();
  pfVar22 = (float *)*param_6;
  FUN_00956dac(&local_58,*param_5 + 0x1a8);
  fVar23 = *pfVar22 - (float)local_58[0x1a];
  fVar24 = pfVar22[1] - (float)((ulong)local_58[0x1a] >> 0x20);
  fVar25 = pfVar22[2] - (float)local_58[0x1b];
  fVar27 = pfVar22[3] - (float)((ulong)local_58[0x1b] >> 0x20);
  fVar23 = fVar23 * fVar23;
  fVar24 = fVar24 * fVar24;
  fVar25 = fVar25 * fVar25;
  fVar27 = fVar27 * fVar27;
  auVar29._4_4_ = fVar24;
  auVar29._0_4_ = fVar23;
  auVar29._8_4_ = fVar25;
  auVar29._12_4_ = fVar27;
  auVar30._4_4_ = fVar24;
  auVar30._0_4_ = fVar23;
  auVar30._8_4_ = fVar25;
  auVar30._12_4_ = fVar27;
  auVar29 = NEON_ext(auVar29,auVar30,8,1);
  if (local_58 != (long *)0x0) {
    lVar20 = local_58[0xb];
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      iVar21 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar21 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar21 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
  }
  pfVar22 = (float *)*param_6;
  FUN_00956dac(&local_58,*param_4 + 0x1a8);
  fVar25 = *pfVar22 - (float)local_58[0x1a];
  fVar27 = pfVar22[1] - (float)((ulong)local_58[0x1a] >> 0x20);
  fVar26 = pfVar22[2] - (float)local_58[0x1b];
  fVar28 = pfVar22[3] - (float)((ulong)local_58[0x1b] >> 0x20);
  fVar25 = fVar25 * fVar25;
  fVar27 = fVar27 * fVar27;
  fVar26 = fVar26 * fVar26;
  fVar28 = fVar28 * fVar28;
  auVar5._4_4_ = fVar27;
  auVar5._0_4_ = fVar25;
  auVar5._8_4_ = fVar26;
  auVar5._12_4_ = fVar28;
  auVar6._4_4_ = fVar27;
  auVar6._0_4_ = fVar25;
  auVar6._8_4_ = fVar26;
  auVar6._12_4_ = fVar28;
  auVar30 = NEON_ext(auVar5,auVar6,8,1);
  if (local_58 != (long *)0x0) {
    lVar20 = local_58[0xb];
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      iVar21 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar21 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar21 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
  }
  iVar21 = iVar19;
  if (auVar29._0_4_ + fVar23 + auVar29._4_4_ + fVar24 <
      auVar30._0_4_ + fVar25 + auVar30._4_4_ + fVar27) {
    FUN_0194cf60(param_4,param_5);
    pfVar22 = (float *)*param_6;
    FUN_00956dac(&local_58,*param_4 + 0x1a8);
    fVar23 = *pfVar22 - (float)local_58[0x1a];
    fVar24 = pfVar22[1] - (float)((ulong)local_58[0x1a] >> 0x20);
    fVar25 = pfVar22[2] - (float)local_58[0x1b];
    fVar27 = pfVar22[3] - (float)((ulong)local_58[0x1b] >> 0x20);
    fVar23 = fVar23 * fVar23;
    fVar24 = fVar24 * fVar24;
    fVar25 = fVar25 * fVar25;
    fVar27 = fVar27 * fVar27;
    auVar7._4_4_ = fVar24;
    auVar7._0_4_ = fVar23;
    auVar7._8_4_ = fVar25;
    auVar7._12_4_ = fVar27;
    auVar8._4_4_ = fVar24;
    auVar8._0_4_ = fVar23;
    auVar8._8_4_ = fVar25;
    auVar8._12_4_ = fVar27;
    auVar29 = NEON_ext(auVar7,auVar8,8,1);
    if (local_58 != (long *)0x0) {
      lVar20 = local_58[0xb];
      piVar1 = (int *)(lVar20 + 0xc);
      do {
        iVar21 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar21 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar21 + -1 == 0) {
        *(undefined8 *)(lVar20 + 0x18) = 0;
        (**(code **)(*local_58 + 0x20))();
      }
    }
    pfVar22 = (float *)*param_6;
    iVar21 = iVar19 + 1;
    FUN_00956dac(&local_58,*param_3 + 0x1a8);
    fVar25 = *pfVar22 - (float)local_58[0x1a];
    fVar27 = pfVar22[1] - (float)((ulong)local_58[0x1a] >> 0x20);
    fVar26 = pfVar22[2] - (float)local_58[0x1b];
    fVar28 = pfVar22[3] - (float)((ulong)local_58[0x1b] >> 0x20);
    fVar25 = fVar25 * fVar25;
    fVar27 = fVar27 * fVar27;
    fVar26 = fVar26 * fVar26;
    fVar28 = fVar28 * fVar28;
    auVar9._4_4_ = fVar27;
    auVar9._0_4_ = fVar25;
    auVar9._8_4_ = fVar26;
    auVar9._12_4_ = fVar28;
    auVar10._4_4_ = fVar27;
    auVar10._0_4_ = fVar25;
    auVar10._8_4_ = fVar26;
    auVar10._12_4_ = fVar28;
    auVar30 = NEON_ext(auVar9,auVar10,8,1);
    if (local_58 != (long *)0x0) {
      lVar20 = local_58[0xb];
      piVar1 = (int *)(lVar20 + 0xc);
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
        *(undefined8 *)(lVar20 + 0x18) = 0;
        (**(code **)(*local_58 + 0x20))();
      }
    }
    if (auVar29._0_4_ + fVar23 + auVar29._4_4_ + fVar24 <
        auVar30._0_4_ + fVar25 + auVar30._4_4_ + fVar27) {
      FUN_0194cf60(param_3,param_4);
      pfVar22 = (float *)*param_6;
      FUN_00956dac(&local_58,*param_3 + 0x1a8);
      fVar23 = *pfVar22 - (float)local_58[0x1a];
      fVar24 = pfVar22[1] - (float)((ulong)local_58[0x1a] >> 0x20);
      fVar25 = pfVar22[2] - (float)local_58[0x1b];
      fVar27 = pfVar22[3] - (float)((ulong)local_58[0x1b] >> 0x20);
      fVar23 = fVar23 * fVar23;
      fVar24 = fVar24 * fVar24;
      fVar25 = fVar25 * fVar25;
      fVar27 = fVar27 * fVar27;
      auVar11._4_4_ = fVar24;
      auVar11._0_4_ = fVar23;
      auVar11._8_4_ = fVar25;
      auVar11._12_4_ = fVar27;
      auVar12._4_4_ = fVar24;
      auVar12._0_4_ = fVar23;
      auVar12._8_4_ = fVar25;
      auVar12._12_4_ = fVar27;
      auVar29 = NEON_ext(auVar11,auVar12,8,1);
      if (local_58 != (long *)0x0) {
        lVar20 = local_58[0xb];
        piVar1 = (int *)(lVar20 + 0xc);
        do {
          iVar21 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar21 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar21 + -1 == 0) {
          *(undefined8 *)(lVar20 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))();
        }
      }
      pfVar22 = (float *)*param_6;
      iVar21 = iVar19 + 2;
      FUN_00956dac(&local_58,*param_2 + 0x1a8);
      fVar25 = *pfVar22 - (float)local_58[0x1a];
      fVar27 = pfVar22[1] - (float)((ulong)local_58[0x1a] >> 0x20);
      fVar26 = pfVar22[2] - (float)local_58[0x1b];
      fVar28 = pfVar22[3] - (float)((ulong)local_58[0x1b] >> 0x20);
      fVar25 = fVar25 * fVar25;
      fVar27 = fVar27 * fVar27;
      fVar26 = fVar26 * fVar26;
      fVar28 = fVar28 * fVar28;
      auVar13._4_4_ = fVar27;
      auVar13._0_4_ = fVar25;
      auVar13._8_4_ = fVar26;
      auVar13._12_4_ = fVar28;
      auVar14._4_4_ = fVar27;
      auVar14._0_4_ = fVar25;
      auVar14._8_4_ = fVar26;
      auVar14._12_4_ = fVar28;
      auVar30 = NEON_ext(auVar13,auVar14,8,1);
      if (local_58 != (long *)0x0) {
        lVar20 = local_58[0xb];
        piVar1 = (int *)(lVar20 + 0xc);
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
          *(undefined8 *)(lVar20 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))();
        }
      }
      if (auVar29._0_4_ + fVar23 + auVar29._4_4_ + fVar24 <
          auVar30._0_4_ + fVar25 + auVar30._4_4_ + fVar27) {
        FUN_0194cf60(param_2,param_3);
        pfVar22 = (float *)*param_6;
        FUN_00956dac(&local_58,*param_2 + 0x1a8);
        fVar23 = *pfVar22 - (float)local_58[0x1a];
        fVar24 = pfVar22[1] - (float)((ulong)local_58[0x1a] >> 0x20);
        fVar25 = pfVar22[2] - (float)local_58[0x1b];
        fVar27 = pfVar22[3] - (float)((ulong)local_58[0x1b] >> 0x20);
        fVar23 = fVar23 * fVar23;
        fVar24 = fVar24 * fVar24;
        fVar25 = fVar25 * fVar25;
        fVar27 = fVar27 * fVar27;
        auVar15._4_4_ = fVar24;
        auVar15._0_4_ = fVar23;
        auVar15._8_4_ = fVar25;
        auVar15._12_4_ = fVar27;
        auVar16._4_4_ = fVar24;
        auVar16._0_4_ = fVar23;
        auVar16._8_4_ = fVar25;
        auVar16._12_4_ = fVar27;
        auVar29 = NEON_ext(auVar15,auVar16,8,1);
        if (local_58 != (long *)0x0) {
          lVar20 = local_58[0xb];
          piVar1 = (int *)(lVar20 + 0xc);
          do {
            iVar21 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar21 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar21 + -1 == 0) {
            *(undefined8 *)(lVar20 + 0x18) = 0;
            (**(code **)(*local_58 + 0x20))();
          }
        }
        pfVar22 = (float *)*param_6;
        iVar21 = iVar19 + 3;
        FUN_00956dac(&local_58,*param_1 + 0x1a8);
        fVar25 = *pfVar22 - (float)local_58[0x1a];
        fVar27 = pfVar22[1] - (float)((ulong)local_58[0x1a] >> 0x20);
        fVar26 = pfVar22[2] - (float)local_58[0x1b];
        fVar28 = pfVar22[3] - (float)((ulong)local_58[0x1b] >> 0x20);
        fVar25 = fVar25 * fVar25;
        fVar27 = fVar27 * fVar27;
        fVar26 = fVar26 * fVar26;
        fVar28 = fVar28 * fVar28;
        auVar17._4_4_ = fVar27;
        auVar17._0_4_ = fVar25;
        auVar17._8_4_ = fVar26;
        auVar17._12_4_ = fVar28;
        auVar18._4_4_ = fVar27;
        auVar18._0_4_ = fVar25;
        auVar18._8_4_ = fVar26;
        auVar18._12_4_ = fVar28;
        auVar30 = NEON_ext(auVar17,auVar18,8,1);
        if (local_58 != (long *)0x0) {
          lVar20 = local_58[0xb];
          piVar1 = (int *)(lVar20 + 0xc);
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
            *(undefined8 *)(lVar20 + 0x18) = 0;
            (**(code **)(*local_58 + 0x20))();
          }
        }
        if (auVar29._0_4_ + fVar23 + auVar29._4_4_ + fVar24 <
            auVar30._0_4_ + fVar25 + auVar30._4_4_ + fVar27) {
          FUN_0194cf60(param_1,param_2);
          iVar21 = iVar19 + 4;
        }
      }
    }
  }
  return iVar21;
}


