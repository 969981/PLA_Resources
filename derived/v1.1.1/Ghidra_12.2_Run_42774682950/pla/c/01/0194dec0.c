/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0194dec0; name: FUN_0194dec0
 */


bool FUN_0194dec0(long *param_1,long *param_2,undefined8 *param_3)

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
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  float *pfVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  long *local_68;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    pfVar22 = (float *)*param_3;
    FUN_00956dac(&local_68,param_2[-1] + 0x1a8);
    fVar24 = *pfVar22 - (float)local_68[0x1a];
    fVar25 = pfVar22[1] - (float)((ulong)local_68[0x1a] >> 0x20);
    fVar26 = pfVar22[2] - (float)local_68[0x1b];
    fVar28 = pfVar22[3] - (float)((ulong)local_68[0x1b] >> 0x20);
    fVar24 = fVar24 * fVar24;
    fVar25 = fVar25 * fVar25;
    fVar26 = fVar26 * fVar26;
    fVar28 = fVar28 * fVar28;
    auVar11._4_4_ = fVar25;
    auVar11._0_4_ = fVar24;
    auVar11._8_4_ = fVar26;
    auVar11._12_4_ = fVar28;
    auVar12._4_4_ = fVar25;
    auVar12._0_4_ = fVar24;
    auVar12._8_4_ = fVar26;
    auVar12._12_4_ = fVar28;
    auVar30 = NEON_ext(auVar11,auVar12,8,1);
    if (local_68 != (long *)0x0) {
      lVar18 = local_68[0xb];
      piVar1 = (int *)(lVar18 + 0xc);
      do {
        iVar23 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar23 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar23 + -1 == 0) {
        *(undefined8 *)(lVar18 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
      }
    }
    pfVar22 = (float *)*param_3;
    FUN_00956dac(&local_68,*param_1 + 0x1a8);
    fVar26 = *pfVar22 - (float)local_68[0x1a];
    fVar28 = pfVar22[1] - (float)((ulong)local_68[0x1a] >> 0x20);
    fVar27 = pfVar22[2] - (float)local_68[0x1b];
    fVar29 = pfVar22[3] - (float)((ulong)local_68[0x1b] >> 0x20);
    fVar26 = fVar26 * fVar26;
    fVar28 = fVar28 * fVar28;
    fVar27 = fVar27 * fVar27;
    fVar29 = fVar29 * fVar29;
    auVar13._4_4_ = fVar28;
    auVar13._0_4_ = fVar26;
    auVar13._8_4_ = fVar27;
    auVar13._12_4_ = fVar29;
    auVar14._4_4_ = fVar28;
    auVar14._0_4_ = fVar26;
    auVar14._8_4_ = fVar27;
    auVar14._12_4_ = fVar29;
    auVar31 = NEON_ext(auVar13,auVar14,8,1);
    if (local_68 != (long *)0x0) {
      lVar18 = local_68[0xb];
      piVar1 = (int *)(lVar18 + 0xc);
      do {
        iVar23 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar23 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar23 + -1 == 0) {
        *(undefined8 *)(lVar18 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
      }
    }
    if (auVar30._0_4_ + fVar24 + auVar30._4_4_ + fVar25 <
        auVar31._0_4_ + fVar26 + auVar31._4_4_ + fVar28) {
      FUN_0194cf60(param_1,param_2 + -1);
    }
    break;
  case 3:
    FUN_0194cfd0(param_1,param_1 + 1,param_2 + -1,param_3);
    break;
  case 4:
    FUN_0194d410(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_0194d760(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    FUN_0194cfd0(param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 != param_2) {
      iVar23 = 0;
      plVar16 = param_1 + 3;
      plVar20 = param_1 + 2;
      do {
        plVar17 = plVar16;
        pfVar22 = (float *)*param_3;
        FUN_00956dac(&local_68,*plVar17 + 0x1a8);
        fVar24 = *pfVar22 - (float)local_68[0x1a];
        fVar25 = pfVar22[1] - (float)((ulong)local_68[0x1a] >> 0x20);
        fVar26 = pfVar22[2] - (float)local_68[0x1b];
        fVar28 = pfVar22[3] - (float)((ulong)local_68[0x1b] >> 0x20);
        fVar24 = fVar24 * fVar24;
        fVar25 = fVar25 * fVar25;
        fVar26 = fVar26 * fVar26;
        fVar28 = fVar28 * fVar28;
        auVar30._4_4_ = fVar25;
        auVar30._0_4_ = fVar24;
        auVar30._8_4_ = fVar26;
        auVar30._12_4_ = fVar28;
        auVar31._4_4_ = fVar25;
        auVar31._0_4_ = fVar24;
        auVar31._8_4_ = fVar26;
        auVar31._12_4_ = fVar28;
        auVar30 = NEON_ext(auVar30,auVar31,8,1);
        if (local_68 != (long *)0x0) {
          lVar18 = local_68[0xb];
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
            (**(code **)(*local_68 + 0x20))();
          }
        }
        pfVar22 = (float *)*param_3;
        FUN_00956dac(&local_68,*plVar20 + 0x1a8);
        fVar26 = *pfVar22 - (float)local_68[0x1a];
        fVar28 = pfVar22[1] - (float)((ulong)local_68[0x1a] >> 0x20);
        fVar27 = pfVar22[2] - (float)local_68[0x1b];
        fVar29 = pfVar22[3] - (float)((ulong)local_68[0x1b] >> 0x20);
        fVar26 = fVar26 * fVar26;
        fVar28 = fVar28 * fVar28;
        fVar27 = fVar27 * fVar27;
        fVar29 = fVar29 * fVar29;
        auVar5._4_4_ = fVar28;
        auVar5._0_4_ = fVar26;
        auVar5._8_4_ = fVar27;
        auVar5._12_4_ = fVar29;
        auVar6._4_4_ = fVar28;
        auVar6._0_4_ = fVar26;
        auVar6._8_4_ = fVar27;
        auVar6._12_4_ = fVar29;
        auVar31 = NEON_ext(auVar5,auVar6,8,1);
        if (local_68 != (long *)0x0) {
          lVar18 = local_68[0xb];
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
            (**(code **)(*local_68 + 0x20))();
          }
        }
        if (auVar30._0_4_ + fVar24 + auVar30._4_4_ + fVar25 <
            auVar31._0_4_ + fVar26 + auVar31._4_4_ + fVar28) {
          lVar18 = *plVar17;
          *plVar17 = 0;
          *plVar17 = 0;
          plVar16 = plVar17;
          while( true ) {
            plVar21 = plVar20;
            lVar19 = *plVar21;
            *plVar21 = 0;
            *plVar16 = lVar19;
            if (plVar21 == param_1) break;
            pfVar22 = (float *)*param_3;
            plVar20 = plVar21 + -1;
            FUN_00956dac(&local_68,lVar18 + 0x1a8);
            fVar24 = *pfVar22 - (float)local_68[0x1a];
            fVar25 = pfVar22[1] - (float)((ulong)local_68[0x1a] >> 0x20);
            fVar26 = pfVar22[2] - (float)local_68[0x1b];
            fVar28 = pfVar22[3] - (float)((ulong)local_68[0x1b] >> 0x20);
            fVar24 = fVar24 * fVar24;
            fVar25 = fVar25 * fVar25;
            fVar26 = fVar26 * fVar26;
            fVar28 = fVar28 * fVar28;
            auVar7._4_4_ = fVar25;
            auVar7._0_4_ = fVar24;
            auVar7._8_4_ = fVar26;
            auVar7._12_4_ = fVar28;
            auVar8._4_4_ = fVar25;
            auVar8._0_4_ = fVar24;
            auVar8._8_4_ = fVar26;
            auVar8._12_4_ = fVar28;
            auVar30 = NEON_ext(auVar7,auVar8,8,1);
            if (local_68 != (long *)0x0) {
              lVar19 = local_68[0xb];
              piVar1 = (int *)(lVar19 + 0xc);
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
                *(undefined8 *)(lVar19 + 0x18) = 0;
                (**(code **)(*local_68 + 0x20))();
              }
            }
            pfVar22 = (float *)*param_3;
            FUN_00956dac(&local_68,*plVar20 + 0x1a8);
            fVar26 = *pfVar22 - (float)local_68[0x1a];
            fVar28 = pfVar22[1] - (float)((ulong)local_68[0x1a] >> 0x20);
            fVar27 = pfVar22[2] - (float)local_68[0x1b];
            fVar29 = pfVar22[3] - (float)((ulong)local_68[0x1b] >> 0x20);
            fVar26 = fVar26 * fVar26;
            fVar28 = fVar28 * fVar28;
            fVar27 = fVar27 * fVar27;
            fVar29 = fVar29 * fVar29;
            auVar9._4_4_ = fVar28;
            auVar9._0_4_ = fVar26;
            auVar9._8_4_ = fVar27;
            auVar9._12_4_ = fVar29;
            auVar10._4_4_ = fVar28;
            auVar10._0_4_ = fVar26;
            auVar10._8_4_ = fVar27;
            auVar10._12_4_ = fVar29;
            auVar31 = NEON_ext(auVar9,auVar10,8,1);
            if (local_68 != (long *)0x0) {
              lVar19 = local_68[0xb];
              piVar1 = (int *)(lVar19 + 0xc);
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
                *(undefined8 *)(lVar19 + 0x18) = 0;
                (**(code **)(*local_68 + 0x20))();
              }
            }
            if (auVar31._0_4_ + fVar26 + auVar31._4_4_ + fVar28 <=
                auVar30._0_4_ + fVar24 + auVar30._4_4_ + fVar25) goto LAB_0194e2ac;
            plVar15 = (long *)*plVar21;
            *plVar21 = 0;
            plVar16 = plVar21;
            if (plVar15 != (long *)0x0) {
              lVar19 = plVar15[0xb];
              piVar1 = (int *)(lVar19 + 0xc);
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
                *(undefined8 *)(lVar19 + 0x18) = 0;
                (**(code **)(*plVar15 + 0x20))();
              }
            }
          }
          plVar21 = param_1;
LAB_0194e2ac:
          plVar16 = (long *)*plVar21;
          *plVar21 = 0;
          if (plVar16 != (long *)0x0) {
            lVar19 = plVar16[0xb];
            piVar1 = (int *)(lVar19 + 0xc);
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
              *(undefined8 *)(lVar19 + 0x18) = 0;
              (**(code **)(*plVar16 + 0x20))();
            }
          }
          iVar23 = iVar23 + 1;
          *plVar21 = lVar18;
          if (iVar23 == 8) {
            return plVar17 + 1 == param_2;
          }
        }
        plVar16 = plVar17 + 1;
        plVar20 = plVar17;
      } while (plVar17 + 1 != param_2);
    }
  }
  return true;
}


