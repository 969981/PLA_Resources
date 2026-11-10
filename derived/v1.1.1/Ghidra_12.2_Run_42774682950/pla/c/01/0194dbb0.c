/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0194dbb0; name: FUN_0194dbb0
 */


void FUN_0194dbb0(long *param_1,long *param_2,undefined8 *param_3)

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
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  float *pfVar17;
  long *plVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  long *local_58;
  
  FUN_0194cfd0(param_1,param_1 + 1,param_1 + 2,param_3);
  plVar13 = param_1 + 2;
  plVar11 = param_1 + 3;
  do {
    if (plVar11 == param_2) {
      return;
    }
    pfVar17 = (float *)*param_3;
    FUN_00956dac(&local_58,*plVar11 + 0x1a8);
    fVar19 = *pfVar17 - (float)local_58[0x1a];
    fVar20 = pfVar17[1] - (float)((ulong)local_58[0x1a] >> 0x20);
    fVar21 = pfVar17[2] - (float)local_58[0x1b];
    fVar23 = pfVar17[3] - (float)((ulong)local_58[0x1b] >> 0x20);
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
    if (local_58 != (long *)0x0) {
      lVar14 = local_58[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
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
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*local_58 + 0x20))();
      }
    }
    pfVar17 = (float *)*param_3;
    FUN_00956dac(&local_58,*plVar13 + 0x1a8);
    fVar21 = *pfVar17 - (float)local_58[0x1a];
    fVar23 = pfVar17[1] - (float)((ulong)local_58[0x1a] >> 0x20);
    fVar22 = pfVar17[2] - (float)local_58[0x1b];
    fVar24 = pfVar17[3] - (float)((ulong)local_58[0x1b] >> 0x20);
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
    if (local_58 != (long *)0x0) {
      lVar14 = local_58[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
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
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*local_58 + 0x20))();
      }
    }
    if (auVar25._0_4_ + fVar19 + auVar25._4_4_ + fVar20 <
        auVar26._0_4_ + fVar21 + auVar26._4_4_ + fVar23) {
      lVar14 = *plVar11;
      *plVar11 = 0;
      *plVar11 = 0;
      plVar18 = plVar11;
      while( true ) {
        plVar16 = plVar13;
        lVar15 = *plVar16;
        *plVar16 = 0;
        *plVar18 = lVar15;
        if (plVar16 == param_1) break;
        pfVar17 = (float *)*param_3;
        plVar13 = plVar16 + -1;
        FUN_00956dac(&local_58,lVar14 + 0x1a8);
        fVar19 = *pfVar17 - (float)local_58[0x1a];
        fVar20 = pfVar17[1] - (float)((ulong)local_58[0x1a] >> 0x20);
        fVar21 = pfVar17[2] - (float)local_58[0x1b];
        fVar23 = pfVar17[3] - (float)((ulong)local_58[0x1b] >> 0x20);
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
        if (local_58 != (long *)0x0) {
          lVar15 = local_58[0xb];
          piVar1 = (int *)(lVar15 + 0xc);
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
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*local_58 + 0x20))();
          }
        }
        pfVar17 = (float *)*param_3;
        FUN_00956dac(&local_58,*plVar13 + 0x1a8);
        fVar21 = *pfVar17 - (float)local_58[0x1a];
        fVar23 = pfVar17[1] - (float)((ulong)local_58[0x1a] >> 0x20);
        fVar22 = pfVar17[2] - (float)local_58[0x1b];
        fVar24 = pfVar17[3] - (float)((ulong)local_58[0x1b] >> 0x20);
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
        if (local_58 != (long *)0x0) {
          lVar15 = local_58[0xb];
          piVar1 = (int *)(lVar15 + 0xc);
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
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*local_58 + 0x20))();
          }
        }
        if (auVar26._0_4_ + fVar21 + auVar26._4_4_ + fVar23 <=
            auVar25._0_4_ + fVar19 + auVar25._4_4_ + fVar20) goto LAB_0194ddf0;
        plVar12 = (long *)*plVar16;
        *plVar16 = 0;
        plVar18 = plVar16;
        if (plVar12 != (long *)0x0) {
          lVar15 = plVar12[0xb];
          piVar1 = (int *)(lVar15 + 0xc);
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
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*plVar12 + 0x20))();
          }
        }
      }
      plVar16 = param_1;
LAB_0194ddf0:
      plVar13 = (long *)*plVar16;
      *plVar16 = 0;
      if (plVar13 != (long *)0x0) {
        lVar15 = plVar13[0xb];
        piVar1 = (int *)(lVar15 + 0xc);
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
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*plVar13 + 0x20))();
        }
      }
      *plVar16 = lVar14;
    }
    plVar13 = plVar11;
    plVar11 = plVar11 + 1;
  } while( true );
}


