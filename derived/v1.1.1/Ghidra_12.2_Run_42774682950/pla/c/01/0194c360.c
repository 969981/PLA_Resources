/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0194c360; name: FUN_0194c360
 */


void FUN_0194c360(long *param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
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
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  long *plVar44;
  int iVar45;
  ulong uVar46;
  ulong uVar47;
  long lVar48;
  long *plVar49;
  long *plVar50;
  long *plVar51;
  long *plVar52;
  float *pfVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  long *local_68;
  
LAB_0194c390:
  plVar49 = param_2 + -1;
  plVar50 = param_1;
LAB_0194c398:
  while( true ) {
    param_1 = plVar50;
    lVar48 = (long)param_2 - (long)param_1;
    uVar47 = lVar48 >> 3;
    if (uVar47 < 2) {
      return;
    }
    switch(uVar47) {
    case 2:
      pfVar53 = (float *)*param_3;
      FUN_00956dac(&local_68,*plVar49 + 0x1a8);
      fVar54 = *pfVar53 - (float)local_68[0x1a];
      fVar55 = pfVar53[1] - (float)((ulong)local_68[0x1a] >> 0x20);
      fVar56 = pfVar53[2] - (float)local_68[0x1b];
      fVar58 = pfVar53[3] - (float)((ulong)local_68[0x1b] >> 0x20);
      fVar54 = fVar54 * fVar54;
      fVar55 = fVar55 * fVar55;
      fVar56 = fVar56 * fVar56;
      fVar58 = fVar58 * fVar58;
      auVar40._4_4_ = fVar55;
      auVar40._0_4_ = fVar54;
      auVar40._8_4_ = fVar56;
      auVar40._12_4_ = fVar58;
      auVar41._4_4_ = fVar55;
      auVar41._0_4_ = fVar54;
      auVar41._8_4_ = fVar56;
      auVar41._12_4_ = fVar58;
      auVar60 = NEON_ext(auVar40,auVar41,8,1);
      if (local_68 != (long *)0x0) {
        lVar48 = local_68[0xb];
        piVar1 = (int *)(lVar48 + 0xc);
        do {
          iVar45 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar45 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar45 + -1 == 0) {
          *(undefined8 *)(lVar48 + 0x18) = 0;
          (**(code **)(*local_68 + 0x20))();
        }
      }
      pfVar53 = (float *)*param_3;
      FUN_00956dac(&local_68,*param_1 + 0x1a8);
      fVar56 = *pfVar53 - (float)local_68[0x1a];
      fVar58 = pfVar53[1] - (float)((ulong)local_68[0x1a] >> 0x20);
      fVar57 = pfVar53[2] - (float)local_68[0x1b];
      fVar59 = pfVar53[3] - (float)((ulong)local_68[0x1b] >> 0x20);
      fVar56 = fVar56 * fVar56;
      fVar58 = fVar58 * fVar58;
      fVar57 = fVar57 * fVar57;
      fVar59 = fVar59 * fVar59;
      auVar42._4_4_ = fVar58;
      auVar42._0_4_ = fVar56;
      auVar42._8_4_ = fVar57;
      auVar42._12_4_ = fVar59;
      auVar43._4_4_ = fVar58;
      auVar43._0_4_ = fVar56;
      auVar43._8_4_ = fVar57;
      auVar43._12_4_ = fVar59;
      auVar61 = NEON_ext(auVar42,auVar43,8,1);
      if (local_68 != (long *)0x0) {
        lVar48 = local_68[0xb];
        piVar1 = (int *)(lVar48 + 0xc);
        do {
          iVar45 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar45 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar45 + -1 == 0) {
          *(undefined8 *)(lVar48 + 0x18) = 0;
          (**(code **)(*local_68 + 0x20))();
        }
      }
      if (auVar60._0_4_ + fVar54 + auVar60._4_4_ + fVar55 <
          auVar61._0_4_ + fVar56 + auVar61._4_4_ + fVar58) {
        FUN_0194cf60(param_1,plVar49);
        return;
      }
      return;
    case 3:
      FUN_0194cfd0(param_1,param_1 + 1,plVar49,param_3);
      return;
    case 4:
      FUN_0194d410(param_1,param_1 + 1,param_1 + 2,plVar49,param_3);
      return;
    case 5:
      FUN_0194d760(param_1,param_1 + 1,param_1 + 2,param_1 + 3,plVar49,param_3);
      return;
    }
    if (lVar48 < 0x38) {
      FUN_0194dbb0(param_1,param_2,param_3);
      return;
    }
    uVar46 = uVar47;
    if ((long)uVar47 < 0) {
      uVar46 = uVar47 + 1;
    }
    plVar50 = (long *)((long)param_1 + (uVar46 & 0x3ffffffffffffffe) * 4);
    if (lVar48 < 0x1f39) {
      iVar45 = FUN_0194cfd0(param_1,plVar50,plVar49,param_3);
    }
    else {
      uVar46 = uVar47 + 3;
      if (-1 < (long)uVar47) {
        uVar46 = uVar47;
      }
      lVar48 = (uVar46 & 0x7ffffffffffffffc) * 2;
      iVar45 = FUN_0194d760(param_1,(long)param_1 + lVar48,plVar50,(long)plVar50 + lVar48,plVar49,
                            param_3);
    }
    pfVar53 = (float *)*param_3;
    FUN_00956dac(&local_68,*param_1 + 0x1a8);
    fVar54 = *pfVar53 - (float)local_68[0x1a];
    fVar55 = pfVar53[1] - (float)((ulong)local_68[0x1a] >> 0x20);
    fVar56 = pfVar53[2] - (float)local_68[0x1b];
    fVar58 = pfVar53[3] - (float)((ulong)local_68[0x1b] >> 0x20);
    fVar54 = fVar54 * fVar54;
    fVar55 = fVar55 * fVar55;
    fVar56 = fVar56 * fVar56;
    fVar58 = fVar58 * fVar58;
    auVar60._4_4_ = fVar55;
    auVar60._0_4_ = fVar54;
    auVar60._8_4_ = fVar56;
    auVar60._12_4_ = fVar58;
    auVar61._4_4_ = fVar55;
    auVar61._0_4_ = fVar54;
    auVar61._8_4_ = fVar56;
    auVar61._12_4_ = fVar58;
    auVar60 = NEON_ext(auVar60,auVar61,8,1);
    if (local_68 != (long *)0x0) {
      lVar48 = local_68[0xb];
      piVar1 = (int *)(lVar48 + 0xc);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar48 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
      }
    }
    pfVar53 = (float *)*param_3;
    FUN_00956dac(&local_68,*plVar50 + 0x1a8);
    fVar56 = *pfVar53 - (float)local_68[0x1a];
    fVar58 = pfVar53[1] - (float)((ulong)local_68[0x1a] >> 0x20);
    fVar57 = pfVar53[2] - (float)local_68[0x1b];
    fVar59 = pfVar53[3] - (float)((ulong)local_68[0x1b] >> 0x20);
    fVar56 = fVar56 * fVar56;
    fVar58 = fVar58 * fVar58;
    fVar57 = fVar57 * fVar57;
    fVar59 = fVar59 * fVar59;
    auVar6._4_4_ = fVar58;
    auVar6._0_4_ = fVar56;
    auVar6._8_4_ = fVar57;
    auVar6._12_4_ = fVar59;
    auVar7._4_4_ = fVar58;
    auVar7._0_4_ = fVar56;
    auVar7._8_4_ = fVar57;
    auVar7._12_4_ = fVar59;
    auVar61 = NEON_ext(auVar6,auVar7,8,1);
    if (local_68 != (long *)0x0) {
      lVar48 = local_68[0xb];
      piVar1 = (int *)(lVar48 + 0xc);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar48 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
      }
    }
    plVar51 = plVar49;
    if (auVar60._0_4_ + fVar54 + auVar60._4_4_ + fVar55 <
        auVar61._0_4_ + fVar56 + auVar61._4_4_ + fVar58) break;
    while (plVar51 = plVar51 + -1, param_1 != plVar51) {
      pfVar53 = (float *)*param_3;
      FUN_00956dac(&local_68,*plVar51 + 0x1a8);
      fVar54 = *pfVar53 - (float)local_68[0x1a];
      fVar55 = pfVar53[1] - (float)((ulong)local_68[0x1a] >> 0x20);
      fVar56 = pfVar53[2] - (float)local_68[0x1b];
      fVar58 = pfVar53[3] - (float)((ulong)local_68[0x1b] >> 0x20);
      fVar54 = fVar54 * fVar54;
      fVar55 = fVar55 * fVar55;
      fVar56 = fVar56 * fVar56;
      fVar58 = fVar58 * fVar58;
      auVar20._4_4_ = fVar55;
      auVar20._0_4_ = fVar54;
      auVar20._8_4_ = fVar56;
      auVar20._12_4_ = fVar58;
      auVar21._4_4_ = fVar55;
      auVar21._0_4_ = fVar54;
      auVar21._8_4_ = fVar56;
      auVar21._12_4_ = fVar58;
      auVar60 = NEON_ext(auVar20,auVar21,8,1);
      if (local_68 != (long *)0x0) {
        lVar48 = local_68[0xb];
        piVar1 = (int *)(lVar48 + 0xc);
        do {
          iVar3 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 + -1 == 0) {
          *(undefined8 *)(lVar48 + 0x18) = 0;
          (**(code **)(*local_68 + 0x20))();
        }
      }
      pfVar53 = (float *)*param_3;
      FUN_00956dac(&local_68,*plVar50 + 0x1a8);
      fVar56 = *pfVar53 - (float)local_68[0x1a];
      fVar58 = pfVar53[1] - (float)((ulong)local_68[0x1a] >> 0x20);
      fVar57 = pfVar53[2] - (float)local_68[0x1b];
      fVar59 = pfVar53[3] - (float)((ulong)local_68[0x1b] >> 0x20);
      fVar56 = fVar56 * fVar56;
      fVar58 = fVar58 * fVar58;
      fVar57 = fVar57 * fVar57;
      fVar59 = fVar59 * fVar59;
      auVar22._4_4_ = fVar58;
      auVar22._0_4_ = fVar56;
      auVar22._8_4_ = fVar57;
      auVar22._12_4_ = fVar59;
      auVar23._4_4_ = fVar58;
      auVar23._0_4_ = fVar56;
      auVar23._8_4_ = fVar57;
      auVar23._12_4_ = fVar59;
      auVar61 = NEON_ext(auVar22,auVar23,8,1);
      if (local_68 != (long *)0x0) {
        lVar48 = local_68[0xb];
        piVar1 = (int *)(lVar48 + 0xc);
        do {
          iVar3 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 + -1 == 0) {
          *(undefined8 *)(lVar48 + 0x18) = 0;
          (**(code **)(*local_68 + 0x20))();
        }
      }
      if (auVar60._0_4_ + fVar54 + auVar60._4_4_ + fVar55 <
          auVar61._0_4_ + fVar56 + auVar61._4_4_ + fVar58) goto LAB_0194cdd0;
    }
    plVar51 = param_1 + 1;
    pfVar53 = (float *)*param_3;
    FUN_00956dac(&local_68,*param_1 + 0x1a8);
    fVar54 = *pfVar53 - (float)local_68[0x1a];
    fVar55 = pfVar53[1] - (float)((ulong)local_68[0x1a] >> 0x20);
    fVar56 = pfVar53[2] - (float)local_68[0x1b];
    fVar58 = pfVar53[3] - (float)((ulong)local_68[0x1b] >> 0x20);
    fVar54 = fVar54 * fVar54;
    fVar55 = fVar55 * fVar55;
    fVar56 = fVar56 * fVar56;
    fVar58 = fVar58 * fVar58;
    auVar24._4_4_ = fVar55;
    auVar24._0_4_ = fVar54;
    auVar24._8_4_ = fVar56;
    auVar24._12_4_ = fVar58;
    auVar25._4_4_ = fVar55;
    auVar25._0_4_ = fVar54;
    auVar25._8_4_ = fVar56;
    auVar25._12_4_ = fVar58;
    auVar60 = NEON_ext(auVar24,auVar25,8,1);
    if (local_68 != (long *)0x0) {
      lVar48 = local_68[0xb];
      piVar1 = (int *)(lVar48 + 0xc);
      do {
        iVar45 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar45 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar45 + -1 == 0) {
        *(undefined8 *)(lVar48 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
      }
    }
    pfVar53 = (float *)*param_3;
    FUN_00956dac(&local_68,*plVar49 + 0x1a8);
    fVar56 = *pfVar53 - (float)local_68[0x1a];
    fVar58 = pfVar53[1] - (float)((ulong)local_68[0x1a] >> 0x20);
    fVar57 = pfVar53[2] - (float)local_68[0x1b];
    fVar59 = pfVar53[3] - (float)((ulong)local_68[0x1b] >> 0x20);
    fVar56 = fVar56 * fVar56;
    fVar58 = fVar58 * fVar58;
    fVar57 = fVar57 * fVar57;
    fVar59 = fVar59 * fVar59;
    auVar26._4_4_ = fVar58;
    auVar26._0_4_ = fVar56;
    auVar26._8_4_ = fVar57;
    auVar26._12_4_ = fVar59;
    auVar27._4_4_ = fVar58;
    auVar27._0_4_ = fVar56;
    auVar27._8_4_ = fVar57;
    auVar27._12_4_ = fVar59;
    auVar61 = NEON_ext(auVar26,auVar27,8,1);
    if (local_68 != (long *)0x0) {
      lVar48 = local_68[0xb];
      piVar1 = (int *)(lVar48 + 0xc);
      do {
        iVar45 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar45 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar45 + -1 == 0) {
        *(undefined8 *)(lVar48 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
      }
    }
    if (auVar61._0_4_ + fVar56 + auVar61._4_4_ + fVar58 <=
        auVar60._0_4_ + fVar54 + auVar60._4_4_ + fVar55) {
      while( true ) {
        if (plVar51 == plVar49) {
          return;
        }
        pfVar53 = (float *)*param_3;
        FUN_00956dac(&local_68,*param_1 + 0x1a8);
        fVar54 = *pfVar53 - (float)local_68[0x1a];
        fVar55 = pfVar53[1] - (float)((ulong)local_68[0x1a] >> 0x20);
        fVar56 = pfVar53[2] - (float)local_68[0x1b];
        fVar58 = pfVar53[3] - (float)((ulong)local_68[0x1b] >> 0x20);
        fVar54 = fVar54 * fVar54;
        fVar55 = fVar55 * fVar55;
        fVar56 = fVar56 * fVar56;
        fVar58 = fVar58 * fVar58;
        auVar36._4_4_ = fVar55;
        auVar36._0_4_ = fVar54;
        auVar36._8_4_ = fVar56;
        auVar36._12_4_ = fVar58;
        auVar37._4_4_ = fVar55;
        auVar37._0_4_ = fVar54;
        auVar37._8_4_ = fVar56;
        auVar37._12_4_ = fVar58;
        auVar60 = NEON_ext(auVar36,auVar37,8,1);
        if (local_68 != (long *)0x0) {
          lVar48 = local_68[0xb];
          piVar1 = (int *)(lVar48 + 0xc);
          do {
            iVar45 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar45 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar45 + -1 == 0) {
            *(undefined8 *)(lVar48 + 0x18) = 0;
            (**(code **)(*local_68 + 0x20))();
          }
        }
        pfVar53 = (float *)*param_3;
        FUN_00956dac(&local_68,*plVar51 + 0x1a8);
        fVar56 = *pfVar53 - (float)local_68[0x1a];
        fVar58 = pfVar53[1] - (float)((ulong)local_68[0x1a] >> 0x20);
        fVar57 = pfVar53[2] - (float)local_68[0x1b];
        fVar59 = pfVar53[3] - (float)((ulong)local_68[0x1b] >> 0x20);
        fVar56 = fVar56 * fVar56;
        fVar58 = fVar58 * fVar58;
        fVar57 = fVar57 * fVar57;
        fVar59 = fVar59 * fVar59;
        auVar38._4_4_ = fVar58;
        auVar38._0_4_ = fVar56;
        auVar38._8_4_ = fVar57;
        auVar38._12_4_ = fVar59;
        auVar39._4_4_ = fVar58;
        auVar39._0_4_ = fVar56;
        auVar39._8_4_ = fVar57;
        auVar39._12_4_ = fVar59;
        auVar61 = NEON_ext(auVar38,auVar39,8,1);
        if (local_68 != (long *)0x0) {
          lVar48 = local_68[0xb];
          piVar1 = (int *)(lVar48 + 0xc);
          do {
            iVar45 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar45 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar45 + -1 == 0) {
            *(undefined8 *)(lVar48 + 0x18) = 0;
            (**(code **)(*local_68 + 0x20))();
          }
        }
        if (auVar60._0_4_ + fVar54 + auVar60._4_4_ + fVar55 <
            auVar61._0_4_ + fVar56 + auVar61._4_4_ + fVar58) break;
        plVar51 = plVar51 + 1;
      }
      FUN_0194cf60(plVar51,plVar49);
      plVar51 = plVar51 + 1;
    }
    if (plVar51 == plVar49) {
      return;
    }
    plVar52 = plVar49;
    while( true ) {
      do {
        plVar50 = plVar51;
        pfVar53 = (float *)*param_3;
        FUN_00956dac(&local_68,*param_1 + 0x1a8);
        fVar54 = *pfVar53 - (float)local_68[0x1a];
        fVar55 = pfVar53[1] - (float)((ulong)local_68[0x1a] >> 0x20);
        fVar56 = pfVar53[2] - (float)local_68[0x1b];
        fVar58 = pfVar53[3] - (float)((ulong)local_68[0x1b] >> 0x20);
        fVar54 = fVar54 * fVar54;
        fVar55 = fVar55 * fVar55;
        fVar56 = fVar56 * fVar56;
        fVar58 = fVar58 * fVar58;
        auVar28._4_4_ = fVar55;
        auVar28._0_4_ = fVar54;
        auVar28._8_4_ = fVar56;
        auVar28._12_4_ = fVar58;
        auVar29._4_4_ = fVar55;
        auVar29._0_4_ = fVar54;
        auVar29._8_4_ = fVar56;
        auVar29._12_4_ = fVar58;
        auVar60 = NEON_ext(auVar28,auVar29,8,1);
        if (local_68 != (long *)0x0) {
          lVar48 = local_68[0xb];
          piVar1 = (int *)(lVar48 + 0xc);
          do {
            iVar45 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar45 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar45 + -1 == 0) {
            *(undefined8 *)(lVar48 + 0x18) = 0;
            (**(code **)(*local_68 + 0x20))();
          }
        }
        pfVar53 = (float *)*param_3;
        FUN_00956dac(&local_68,*plVar50 + 0x1a8);
        fVar56 = *pfVar53 - (float)local_68[0x1a];
        fVar58 = pfVar53[1] - (float)((ulong)local_68[0x1a] >> 0x20);
        fVar57 = pfVar53[2] - (float)local_68[0x1b];
        fVar59 = pfVar53[3] - (float)((ulong)local_68[0x1b] >> 0x20);
        fVar56 = fVar56 * fVar56;
        fVar58 = fVar58 * fVar58;
        fVar57 = fVar57 * fVar57;
        fVar59 = fVar59 * fVar59;
        auVar30._4_4_ = fVar58;
        auVar30._0_4_ = fVar56;
        auVar30._8_4_ = fVar57;
        auVar30._12_4_ = fVar59;
        auVar31._4_4_ = fVar58;
        auVar31._0_4_ = fVar56;
        auVar31._8_4_ = fVar57;
        auVar31._12_4_ = fVar59;
        auVar61 = NEON_ext(auVar30,auVar31,8,1);
        if (local_68 != (long *)0x0) {
          lVar48 = local_68[0xb];
          piVar1 = (int *)(lVar48 + 0xc);
          do {
            iVar45 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar45 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar45 + -1 == 0) {
            *(undefined8 *)(lVar48 + 0x18) = 0;
            (**(code **)(*local_68 + 0x20))();
          }
        }
        plVar51 = plVar50 + 1;
      } while (auVar61._0_4_ + fVar56 + auVar61._4_4_ + fVar58 <=
               auVar60._0_4_ + fVar54 + auVar60._4_4_ + fVar55);
      do {
        pfVar53 = (float *)*param_3;
        plVar52 = plVar52 + -1;
        FUN_00956dac(&local_68,*param_1 + 0x1a8);
        fVar54 = *pfVar53 - (float)local_68[0x1a];
        fVar55 = pfVar53[1] - (float)((ulong)local_68[0x1a] >> 0x20);
        fVar56 = pfVar53[2] - (float)local_68[0x1b];
        fVar58 = pfVar53[3] - (float)((ulong)local_68[0x1b] >> 0x20);
        fVar54 = fVar54 * fVar54;
        fVar55 = fVar55 * fVar55;
        fVar56 = fVar56 * fVar56;
        fVar58 = fVar58 * fVar58;
        auVar32._4_4_ = fVar55;
        auVar32._0_4_ = fVar54;
        auVar32._8_4_ = fVar56;
        auVar32._12_4_ = fVar58;
        auVar33._4_4_ = fVar55;
        auVar33._0_4_ = fVar54;
        auVar33._8_4_ = fVar56;
        auVar33._12_4_ = fVar58;
        auVar60 = NEON_ext(auVar32,auVar33,8,1);
        if (local_68 != (long *)0x0) {
          lVar48 = local_68[0xb];
          piVar1 = (int *)(lVar48 + 0xc);
          do {
            iVar45 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar45 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar45 + -1 == 0) {
            *(undefined8 *)(lVar48 + 0x18) = 0;
            (**(code **)(*local_68 + 0x20))();
          }
        }
        pfVar53 = (float *)*param_3;
        FUN_00956dac(&local_68,*plVar52 + 0x1a8);
        fVar56 = *pfVar53 - (float)local_68[0x1a];
        fVar58 = pfVar53[1] - (float)((ulong)local_68[0x1a] >> 0x20);
        fVar57 = pfVar53[2] - (float)local_68[0x1b];
        fVar59 = pfVar53[3] - (float)((ulong)local_68[0x1b] >> 0x20);
        fVar56 = fVar56 * fVar56;
        fVar58 = fVar58 * fVar58;
        fVar57 = fVar57 * fVar57;
        fVar59 = fVar59 * fVar59;
        auVar34._4_4_ = fVar58;
        auVar34._0_4_ = fVar56;
        auVar34._8_4_ = fVar57;
        auVar34._12_4_ = fVar59;
        auVar35._4_4_ = fVar58;
        auVar35._0_4_ = fVar56;
        auVar35._8_4_ = fVar57;
        auVar35._12_4_ = fVar59;
        auVar61 = NEON_ext(auVar34,auVar35,8,1);
        if (local_68 != (long *)0x0) {
          lVar48 = local_68[0xb];
          piVar1 = (int *)(lVar48 + 0xc);
          do {
            iVar45 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar45 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar45 + -1 == 0) {
            *(undefined8 *)(lVar48 + 0x18) = 0;
            (**(code **)(*local_68 + 0x20))();
          }
        }
      } while (auVar60._0_4_ + fVar54 + auVar60._4_4_ + fVar55 <
               auVar61._0_4_ + fVar56 + auVar61._4_4_ + fVar58);
      if (plVar52 <= plVar50) break;
      FUN_0194cf60(plVar50,plVar52);
    }
  }
  goto LAB_0194cbb4;
LAB_0194cdd0:
  FUN_0194cf60(param_1,plVar51);
  iVar45 = iVar45 + 1;
LAB_0194cbb4:
  plVar52 = param_1 + 1;
  if (plVar52 < plVar51) {
    plVar44 = plVar52;
    while( true ) {
      do {
        plVar52 = plVar44;
        pfVar53 = (float *)*param_3;
        FUN_00956dac(&local_68,*plVar52 + 0x1a8);
        fVar54 = *pfVar53 - (float)local_68[0x1a];
        fVar55 = pfVar53[1] - (float)((ulong)local_68[0x1a] >> 0x20);
        fVar56 = pfVar53[2] - (float)local_68[0x1b];
        fVar58 = pfVar53[3] - (float)((ulong)local_68[0x1b] >> 0x20);
        fVar54 = fVar54 * fVar54;
        fVar55 = fVar55 * fVar55;
        fVar56 = fVar56 * fVar56;
        fVar58 = fVar58 * fVar58;
        auVar8._4_4_ = fVar55;
        auVar8._0_4_ = fVar54;
        auVar8._8_4_ = fVar56;
        auVar8._12_4_ = fVar58;
        auVar9._4_4_ = fVar55;
        auVar9._0_4_ = fVar54;
        auVar9._8_4_ = fVar56;
        auVar9._12_4_ = fVar58;
        auVar60 = NEON_ext(auVar8,auVar9,8,1);
        if (local_68 != (long *)0x0) {
          lVar48 = local_68[0xb];
          piVar1 = (int *)(lVar48 + 0xc);
          do {
            iVar3 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar3 + -1 == 0) {
            *(undefined8 *)(lVar48 + 0x18) = 0;
            (**(code **)(*local_68 + 0x20))();
          }
        }
        pfVar53 = (float *)*param_3;
        FUN_00956dac(&local_68,*plVar50 + 0x1a8);
        fVar56 = *pfVar53 - (float)local_68[0x1a];
        fVar58 = pfVar53[1] - (float)((ulong)local_68[0x1a] >> 0x20);
        fVar57 = pfVar53[2] - (float)local_68[0x1b];
        fVar59 = pfVar53[3] - (float)((ulong)local_68[0x1b] >> 0x20);
        fVar56 = fVar56 * fVar56;
        fVar58 = fVar58 * fVar58;
        fVar57 = fVar57 * fVar57;
        fVar59 = fVar59 * fVar59;
        auVar10._4_4_ = fVar58;
        auVar10._0_4_ = fVar56;
        auVar10._8_4_ = fVar57;
        auVar10._12_4_ = fVar59;
        auVar11._4_4_ = fVar58;
        auVar11._0_4_ = fVar56;
        auVar11._8_4_ = fVar57;
        auVar11._12_4_ = fVar59;
        auVar61 = NEON_ext(auVar10,auVar11,8,1);
        if (local_68 != (long *)0x0) {
          lVar48 = local_68[0xb];
          piVar1 = (int *)(lVar48 + 0xc);
          do {
            iVar3 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar3 + -1 == 0) {
            *(undefined8 *)(lVar48 + 0x18) = 0;
            (**(code **)(*local_68 + 0x20))();
          }
        }
        plVar44 = plVar52 + 1;
      } while (auVar60._0_4_ + fVar54 + auVar60._4_4_ + fVar55 <
               auVar61._0_4_ + fVar56 + auVar61._4_4_ + fVar58);
      do {
        plVar51 = plVar51 + -1;
        pfVar53 = (float *)*param_3;
        FUN_00956dac(&local_68,*plVar51 + 0x1a8);
        fVar54 = *pfVar53 - (float)local_68[0x1a];
        fVar55 = pfVar53[1] - (float)((ulong)local_68[0x1a] >> 0x20);
        fVar56 = pfVar53[2] - (float)local_68[0x1b];
        fVar58 = pfVar53[3] - (float)((ulong)local_68[0x1b] >> 0x20);
        fVar54 = fVar54 * fVar54;
        fVar55 = fVar55 * fVar55;
        fVar56 = fVar56 * fVar56;
        fVar58 = fVar58 * fVar58;
        auVar12._4_4_ = fVar55;
        auVar12._0_4_ = fVar54;
        auVar12._8_4_ = fVar56;
        auVar12._12_4_ = fVar58;
        auVar13._4_4_ = fVar55;
        auVar13._0_4_ = fVar54;
        auVar13._8_4_ = fVar56;
        auVar13._12_4_ = fVar58;
        auVar60 = NEON_ext(auVar12,auVar13,8,1);
        if (local_68 != (long *)0x0) {
          lVar48 = local_68[0xb];
          piVar1 = (int *)(lVar48 + 0xc);
          do {
            iVar3 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar3 + -1 == 0) {
            *(undefined8 *)(lVar48 + 0x18) = 0;
            (**(code **)(*local_68 + 0x20))();
          }
        }
        pfVar53 = (float *)*param_3;
        FUN_00956dac(&local_68,*plVar50 + 0x1a8);
        fVar56 = *pfVar53 - (float)local_68[0x1a];
        fVar58 = pfVar53[1] - (float)((ulong)local_68[0x1a] >> 0x20);
        fVar57 = pfVar53[2] - (float)local_68[0x1b];
        fVar59 = pfVar53[3] - (float)((ulong)local_68[0x1b] >> 0x20);
        fVar56 = fVar56 * fVar56;
        fVar58 = fVar58 * fVar58;
        fVar57 = fVar57 * fVar57;
        fVar59 = fVar59 * fVar59;
        auVar14._4_4_ = fVar58;
        auVar14._0_4_ = fVar56;
        auVar14._8_4_ = fVar57;
        auVar14._12_4_ = fVar59;
        auVar15._4_4_ = fVar58;
        auVar15._0_4_ = fVar56;
        auVar15._8_4_ = fVar57;
        auVar15._12_4_ = fVar59;
        auVar61 = NEON_ext(auVar14,auVar15,8,1);
        if (local_68 != (long *)0x0) {
          lVar48 = local_68[0xb];
          piVar1 = (int *)(lVar48 + 0xc);
          do {
            iVar3 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar3 + -1 == 0) {
            *(undefined8 *)(lVar48 + 0x18) = 0;
            (**(code **)(*local_68 + 0x20))();
          }
        }
      } while (auVar61._0_4_ + fVar56 + auVar61._4_4_ + fVar58 <=
               auVar60._0_4_ + fVar54 + auVar60._4_4_ + fVar55);
      if (plVar51 < plVar52) break;
      FUN_0194cf60(plVar52,plVar51);
      iVar45 = iVar45 + 1;
      plVar2 = plVar51;
      if (plVar50 != plVar52) {
        plVar2 = plVar50;
      }
      plVar50 = plVar2;
    }
  }
  if (plVar52 != plVar50) {
    pfVar53 = (float *)*param_3;
    FUN_00956dac(&local_68,*plVar50 + 0x1a8);
    fVar54 = *pfVar53 - (float)local_68[0x1a];
    fVar55 = pfVar53[1] - (float)((ulong)local_68[0x1a] >> 0x20);
    fVar56 = pfVar53[2] - (float)local_68[0x1b];
    fVar58 = pfVar53[3] - (float)((ulong)local_68[0x1b] >> 0x20);
    fVar54 = fVar54 * fVar54;
    fVar55 = fVar55 * fVar55;
    fVar56 = fVar56 * fVar56;
    fVar58 = fVar58 * fVar58;
    auVar16._4_4_ = fVar55;
    auVar16._0_4_ = fVar54;
    auVar16._8_4_ = fVar56;
    auVar16._12_4_ = fVar58;
    auVar17._4_4_ = fVar55;
    auVar17._0_4_ = fVar54;
    auVar17._8_4_ = fVar56;
    auVar17._12_4_ = fVar58;
    auVar60 = NEON_ext(auVar16,auVar17,8,1);
    if (local_68 != (long *)0x0) {
      lVar48 = local_68[0xb];
      piVar1 = (int *)(lVar48 + 0xc);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar48 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
      }
    }
    pfVar53 = (float *)*param_3;
    FUN_00956dac(&local_68,*plVar52 + 0x1a8);
    fVar56 = *pfVar53 - (float)local_68[0x1a];
    fVar58 = pfVar53[1] - (float)((ulong)local_68[0x1a] >> 0x20);
    fVar57 = pfVar53[2] - (float)local_68[0x1b];
    fVar59 = pfVar53[3] - (float)((ulong)local_68[0x1b] >> 0x20);
    fVar56 = fVar56 * fVar56;
    fVar58 = fVar58 * fVar58;
    fVar57 = fVar57 * fVar57;
    fVar59 = fVar59 * fVar59;
    auVar18._4_4_ = fVar58;
    auVar18._0_4_ = fVar56;
    auVar18._8_4_ = fVar57;
    auVar18._12_4_ = fVar59;
    auVar19._4_4_ = fVar58;
    auVar19._0_4_ = fVar56;
    auVar19._8_4_ = fVar57;
    auVar19._12_4_ = fVar59;
    auVar61 = NEON_ext(auVar18,auVar19,8,1);
    if (local_68 != (long *)0x0) {
      lVar48 = local_68[0xb];
      piVar1 = (int *)(lVar48 + 0xc);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar48 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
      }
    }
    if (auVar60._0_4_ + fVar54 + auVar60._4_4_ + fVar55 <
        auVar61._0_4_ + fVar56 + auVar61._4_4_ + fVar58) {
      FUN_0194cf60(plVar52,plVar50);
      iVar45 = iVar45 + 1;
    }
  }
  if (iVar45 == 0) {
    uVar47 = FUN_0194dec0(param_1,plVar52,param_3);
    uVar46 = FUN_0194dec0(plVar52 + 1,param_2,param_3);
    if ((uVar46 & 1) != 0) goto LAB_0194ce2c;
    plVar50 = plVar52 + 1;
    if ((uVar47 & 1) != 0) goto LAB_0194c398;
  }
  if ((long)param_2 - (long)plVar52 <= (long)plVar52 - (long)param_1) {
    FUN_0194c360(plVar52 + 1,param_2,param_3);
    param_2 = plVar52;
    goto LAB_0194c390;
  }
  FUN_0194c360(param_1,plVar52,param_3);
  plVar50 = plVar52 + 1;
  goto LAB_0194c398;
LAB_0194ce2c:
  param_2 = plVar52;
  if ((uVar47 & 1) != 0) {
    return;
  }
  goto LAB_0194c390;
}


