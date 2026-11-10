/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0194d410; name: FUN_0194d410
 */


int FUN_0194d410(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 *param_5)

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
  int iVar15;
  long lVar16;
  int iVar17;
  float *pfVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  long *local_48;
  
  iVar15 = FUN_0194cfd0();
  pfVar18 = (float *)*param_5;
  FUN_00956dac(&local_48,*param_4 + 0x1a8);
  fVar19 = *pfVar18 - (float)local_48[0x1a];
  fVar20 = pfVar18[1] - (float)((ulong)local_48[0x1a] >> 0x20);
  fVar21 = pfVar18[2] - (float)local_48[0x1b];
  fVar23 = pfVar18[3] - (float)((ulong)local_48[0x1b] >> 0x20);
  fVar19 = fVar19 * fVar19;
  fVar20 = fVar20 * fVar20;
  fVar21 = fVar21 * fVar21;
  fVar23 = fVar23 * fVar23;
  auVar25._4_4_ = fVar20;
  auVar25._0_4_ = fVar19;
  auVar25._8_4_ = fVar21;
  auVar25._12_4_ = fVar23;
  auVar26._4_4_ = fVar20;
  auVar26._0_4_ = fVar19;
  auVar26._8_4_ = fVar21;
  auVar26._12_4_ = fVar23;
  auVar25 = NEON_ext(auVar25,auVar26,8,1);
  if (local_48 != (long *)0x0) {
    lVar16 = local_48[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar17 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar17 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar17 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  pfVar18 = (float *)*param_5;
  FUN_00956dac(&local_48,*param_3 + 0x1a8);
  fVar21 = *pfVar18 - (float)local_48[0x1a];
  fVar23 = pfVar18[1] - (float)((ulong)local_48[0x1a] >> 0x20);
  fVar22 = pfVar18[2] - (float)local_48[0x1b];
  fVar24 = pfVar18[3] - (float)((ulong)local_48[0x1b] >> 0x20);
  fVar21 = fVar21 * fVar21;
  fVar23 = fVar23 * fVar23;
  fVar22 = fVar22 * fVar22;
  fVar24 = fVar24 * fVar24;
  auVar5._4_4_ = fVar23;
  auVar5._0_4_ = fVar21;
  auVar5._8_4_ = fVar22;
  auVar5._12_4_ = fVar24;
  auVar6._4_4_ = fVar23;
  auVar6._0_4_ = fVar21;
  auVar6._8_4_ = fVar22;
  auVar6._12_4_ = fVar24;
  auVar26 = NEON_ext(auVar5,auVar6,8,1);
  if (local_48 != (long *)0x0) {
    lVar16 = local_48[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar17 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar17 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar17 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  iVar17 = iVar15;
  if (auVar25._0_4_ + fVar19 + auVar25._4_4_ + fVar20 <
      auVar26._0_4_ + fVar21 + auVar26._4_4_ + fVar23) {
    FUN_0194cf60(param_3,param_4);
    pfVar18 = (float *)*param_5;
    FUN_00956dac(&local_48,*param_3 + 0x1a8);
    fVar19 = *pfVar18 - (float)local_48[0x1a];
    fVar20 = pfVar18[1] - (float)((ulong)local_48[0x1a] >> 0x20);
    fVar21 = pfVar18[2] - (float)local_48[0x1b];
    fVar23 = pfVar18[3] - (float)((ulong)local_48[0x1b] >> 0x20);
    fVar19 = fVar19 * fVar19;
    fVar20 = fVar20 * fVar20;
    fVar21 = fVar21 * fVar21;
    fVar23 = fVar23 * fVar23;
    auVar7._4_4_ = fVar20;
    auVar7._0_4_ = fVar19;
    auVar7._8_4_ = fVar21;
    auVar7._12_4_ = fVar23;
    auVar8._4_4_ = fVar20;
    auVar8._0_4_ = fVar19;
    auVar8._8_4_ = fVar21;
    auVar8._12_4_ = fVar23;
    auVar25 = NEON_ext(auVar7,auVar8,8,1);
    if (local_48 != (long *)0x0) {
      lVar16 = local_48[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar17 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar17 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
    }
    pfVar18 = (float *)*param_5;
    iVar17 = iVar15 + 1;
    FUN_00956dac(&local_48,*param_2 + 0x1a8);
    fVar21 = *pfVar18 - (float)local_48[0x1a];
    fVar23 = pfVar18[1] - (float)((ulong)local_48[0x1a] >> 0x20);
    fVar22 = pfVar18[2] - (float)local_48[0x1b];
    fVar24 = pfVar18[3] - (float)((ulong)local_48[0x1b] >> 0x20);
    fVar21 = fVar21 * fVar21;
    fVar23 = fVar23 * fVar23;
    fVar22 = fVar22 * fVar22;
    fVar24 = fVar24 * fVar24;
    auVar9._4_4_ = fVar23;
    auVar9._0_4_ = fVar21;
    auVar9._8_4_ = fVar22;
    auVar9._12_4_ = fVar24;
    auVar10._4_4_ = fVar23;
    auVar10._0_4_ = fVar21;
    auVar10._8_4_ = fVar22;
    auVar10._12_4_ = fVar24;
    auVar26 = NEON_ext(auVar9,auVar10,8,1);
    if (local_48 != (long *)0x0) {
      lVar16 = local_48[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
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
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
    }
    if (auVar25._0_4_ + fVar19 + auVar25._4_4_ + fVar20 <
        auVar26._0_4_ + fVar21 + auVar26._4_4_ + fVar23) {
      FUN_0194cf60(param_2,param_3);
      pfVar18 = (float *)*param_5;
      FUN_00956dac(&local_48,*param_2 + 0x1a8);
      fVar19 = *pfVar18 - (float)local_48[0x1a];
      fVar20 = pfVar18[1] - (float)((ulong)local_48[0x1a] >> 0x20);
      fVar21 = pfVar18[2] - (float)local_48[0x1b];
      fVar23 = pfVar18[3] - (float)((ulong)local_48[0x1b] >> 0x20);
      fVar19 = fVar19 * fVar19;
      fVar20 = fVar20 * fVar20;
      fVar21 = fVar21 * fVar21;
      fVar23 = fVar23 * fVar23;
      auVar11._4_4_ = fVar20;
      auVar11._0_4_ = fVar19;
      auVar11._8_4_ = fVar21;
      auVar11._12_4_ = fVar23;
      auVar12._4_4_ = fVar20;
      auVar12._0_4_ = fVar19;
      auVar12._8_4_ = fVar21;
      auVar12._12_4_ = fVar23;
      auVar25 = NEON_ext(auVar11,auVar12,8,1);
      if (local_48 != (long *)0x0) {
        lVar16 = local_48[0xb];
        piVar1 = (int *)(lVar16 + 0xc);
        do {
          iVar17 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar17 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar17 + -1 == 0) {
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*local_48 + 0x20))();
        }
      }
      pfVar18 = (float *)*param_5;
      iVar17 = iVar15 + 2;
      FUN_00956dac(&local_48,*param_1 + 0x1a8);
      fVar21 = *pfVar18 - (float)local_48[0x1a];
      fVar23 = pfVar18[1] - (float)((ulong)local_48[0x1a] >> 0x20);
      fVar22 = pfVar18[2] - (float)local_48[0x1b];
      fVar24 = pfVar18[3] - (float)((ulong)local_48[0x1b] >> 0x20);
      fVar21 = fVar21 * fVar21;
      fVar23 = fVar23 * fVar23;
      fVar22 = fVar22 * fVar22;
      fVar24 = fVar24 * fVar24;
      auVar13._4_4_ = fVar23;
      auVar13._0_4_ = fVar21;
      auVar13._8_4_ = fVar22;
      auVar13._12_4_ = fVar24;
      auVar14._4_4_ = fVar23;
      auVar14._0_4_ = fVar21;
      auVar14._8_4_ = fVar22;
      auVar14._12_4_ = fVar24;
      auVar26 = NEON_ext(auVar13,auVar14,8,1);
      if (local_48 != (long *)0x0) {
        lVar16 = local_48[0xb];
        piVar1 = (int *)(lVar16 + 0xc);
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
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*local_48 + 0x20))();
        }
      }
      if (auVar25._0_4_ + fVar19 + auVar25._4_4_ + fVar20 <
          auVar26._0_4_ + fVar21 + auVar26._4_4_ + fVar23) {
        FUN_0194cf60(param_1,param_2);
        iVar17 = iVar15 + 3;
      }
    }
  }
  return iVar17;
}


