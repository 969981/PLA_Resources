/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026c4408; name: FUN_026c4408
 */


/* WARNING: Removing unreachable block (ram,0x026c4954) */

bool FUN_026c4408(int *param_1,undefined8 param_2,ulong param_3)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long *plVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  undefined8 *local_78 [2];
  long *local_68;
  
  bVar13 = false;
  if (param_1 != (int *)0x0) {
    iVar15 = *param_1;
    if (iVar15 == 0xf) {
      bVar13 = true;
    }
    else if (iVar15 == 0x17) {
      FUN_01e4bad0(local_78);
      puVar5 = local_78[0];
      puVar11 = PTR_DAT_0437a258;
      puVar10 = PTR_DAT_0437a250;
      puVar9 = PTR_DAT_043795e0;
      puVar8 = PTR_DAT_043795d8;
      puVar7 = PTR_DAT_043794d8;
      puVar6 = PTR_DAT_043794d0;
      if ((((local_78[0] != (undefined8 *)0x0) && (*(int *)((long)local_78[0] + 0xc) != 0)) &&
          (local_78[0] != (undefined8 *)0x0)) && (*(int *)((long)local_78[0] + 0xc) != 0)) {
        piVar1 = (int *)((long)local_78[0] + 0xc);
        iVar15 = *(int *)((long)local_78[0] + 0xc);
        while( true ) {
          plVar26 = (long *)puVar5[2];
          if (((*puVar10 & 1) == 0) && (iVar16 = __cxa_guard_acquire(puVar10), iVar16 != 0)) {
            if (((*puVar8 & 1) == 0) && (iVar16 = __cxa_guard_acquire(puVar8), iVar16 != 0)) {
              if (((*puVar6 & 1) == 0) && (iVar16 = __cxa_guard_acquire(puVar6), iVar16 != 0)) {
                uVar18 = FUN_0087f8f0();
                *(undefined8 *)puVar7 = uVar18;
                __cxa_guard_release(puVar6);
              }
              *(undefined **)puVar9 = puVar7;
              __cxa_guard_release(puVar8);
            }
            *(undefined **)puVar11 = puVar9;
            __cxa_guard_release(puVar10);
          }
          while( true ) {
            if (plVar26 == (long *)0x0) goto LAB_026c4474;
            if (plVar26 == (long *)puVar11) break;
            plVar26 = (long *)*plVar26;
          }
          iVar16 = *piVar1;
          if (iVar16 == iVar15) break;
          ClearExclusiveLocal();
LAB_026c4594:
          iVar15 = iVar16;
          if (iVar16 == 0) goto LAB_026c4474;
        }
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar13) {
          *piVar1 = iVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_026c4594;
        lVar20 = puVar5[3];
        plVar26 = (long *)(lVar20 + -0x50);
        if (lVar20 == 0) goto LAB_026c4474;
        FUN_009c69bc(&local_68,plVar26);
        plVar12 = local_68;
        plVar24 = local_68 + 0x21;
        lVar23 = *plVar24;
        lVar17 = nn::os::GetCurrentThread();
        if (lVar17 == lVar23) {
          bVar13 = false;
        }
        else {
          lVar17 = nn::os::GetCurrentThread();
          do {
            if (*plVar24 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)((long)plVar12 + 0xfc));
                while (*plVar24 == 0) {
                  cVar4 = '\x01';
                  bVar13 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                  if (bVar13) {
                    *plVar24 = lVar17;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  if (cVar4 == '\0') goto LAB_026c4658;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar4 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar13) {
              *plVar24 = lVar17;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
LAB_026c4658:
          bVar13 = true;
        }
        lVar17 = nn::os::GetCurrentThread();
        plVar24 = plVar12 + 0x24;
        do {
          if (*plVar24 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)((long)plVar12 + 0x114));
              while (*plVar24 == 0) {
                cVar4 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                if (bVar14) {
                  *plVar24 = lVar17;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 == '\0') goto LAB_026c46a4;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar14) {
            *plVar24 = lVar17;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
LAB_026c46a4:
        plVar24 = (long *)plVar12[0x34];
        plVar25 = (long *)plVar12[0x35];
        if (plVar24 == plVar25) {
LAB_026c46b0:
          plVar24 = (long *)plVar12[0x2d];
          plVar25 = (long *)plVar12[0x2e];
          if (plVar24 == plVar25) {
LAB_026c46bc:
            lVar17 = 0;
          }
          else {
            do {
              uVar19 = FUN_026d26d8(plVar24);
              if ((uVar19 & 1) != 0) goto LAB_026c48a0;
              plVar24 = plVar24 + 1;
            } while (plVar25 != plVar24);
            plVar24 = plVar25;
LAB_026c48a0:
            if (plVar24 == (long *)plVar12[0x2e]) goto LAB_026c46bc;
            lVar17 = 0;
            if (*plVar24 != 0) {
              lVar17 = *plVar24 + -0x48;
            }
          }
          bVar14 = lVar17 == 0;
        }
        else {
          do {
            uVar19 = FUN_026d26d8(plVar24);
            if ((uVar19 & 1) != 0) goto LAB_026c4860;
            plVar24 = plVar24 + 1;
          } while (plVar25 != plVar24);
          plVar24 = plVar25;
LAB_026c4860:
          if ((plVar24 == (long *)plVar12[0x35]) || (*plVar24 == 0)) goto LAB_026c46b0;
          bVar14 = false;
          lVar17 = *plVar24 + -0x48;
        }
        plVar12[0x24] = 0;
        nn::os::SignalLightEvent((LightEventType *)((long)plVar12 + 0x114));
        if (bVar13) {
          plVar12[0x21] = 0;
          nn::os::SignalLightEvent((LightEventType *)((long)plVar12 + 0xfc));
        }
        if (bVar14) {
          lVar17 = nn::os::GetCurrentThread();
          plVar24 = plVar12 + 0x28;
          do {
            lVar23 = *plVar24;
            lVar3 = plVar12[0x29];
            cVar4 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar13) {
              *plVar24 = lVar23;
              plVar12[0x29] = lVar3;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          do {
            while ((lVar23 != 0 && (lVar17 != lVar23))) {
              nn::os::WaitLightEvent((LightEventType *)((long)plVar12 + 0x134));
              do {
                lVar23 = *plVar24;
                lVar3 = plVar12[0x29];
                cVar4 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                if (bVar13) {
                  *plVar24 = lVar23;
                  plVar12[0x29] = lVar3;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            while( true ) {
              if (*plVar24 != lVar23 || plVar12[0x29] != lVar3) break;
              cVar4 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar24,0x10);
              if (bVar13) {
                *plVar24 = lVar23;
                *(long *)((long)plVar12 + 0x144) = lVar3 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                plVar25 = plVar12 + 0x2c;
                lVar23 = *plVar25;
                lVar17 = nn::os::GetCurrentThread();
                if (lVar17 != lVar23) {
                  lVar17 = nn::os::GetCurrentThread();
                  goto LAB_026c4784;
                }
                bVar13 = false;
                goto LAB_026c47c4;
              }
            }
            ClearExclusiveLocal();
            lVar23 = *plVar24;
            lVar3 = plVar12[0x29];
          } while( true );
        }
        goto LAB_026c499c;
      }
LAB_026c4474:
      bVar13 = false;
      puVar5 = local_78[0];
joined_r0x026c49f8:
      if (puVar5 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar5 + 1);
        do {
          iVar15 = *piVar1;
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar14) {
            *piVar1 = iVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar15 + -1 == 0) {
          puVar5[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar20 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar20;
          local_68 = (long *)*puVar5;
          FUN_02a44274(lVar20 + 0xd8,&local_68);
        }
      }
      bVar13 = !bVar13;
    }
    else if (iVar15 == 0x23) {
      bVar13 = (param_3 & 2) == 0;
    }
    else {
      bVar13 = false;
    }
  }
  return bVar13;
  while( true ) {
    cVar4 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar25,0x10);
    if (bVar13) {
      *plVar25 = lVar17;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') break;
LAB_026c4784:
    if (*plVar25 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)plVar12 + 0x154));
        while (*plVar25 == 0) {
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar13) {
            *plVar25 = lVar17;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_026c47c0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_026c47c0:
  bVar13 = true;
LAB_026c47c4:
  plVar25 = (long *)plVar12[0x3b];
  plVar2 = (long *)plVar12[0x3c];
  if (plVar25 != plVar2) {
    do {
      uVar19 = FUN_026d26d8(plVar25);
      if ((uVar19 & 1) != 0) goto LAB_026c48e0;
      plVar25 = plVar25 + 1;
    } while (plVar2 != plVar25);
    plVar25 = plVar2;
LAB_026c48e0:
    if (plVar25 != (long *)plVar12[0x3c]) {
      lVar17 = 0;
      if (*plVar25 != 0) {
        lVar17 = *plVar25 + -0x48;
      }
      goto joined_r0x026c48fc;
    }
  }
  lVar17 = 0;
joined_r0x026c48fc:
  if (bVar13) {
    plVar12[0x2c] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar12 + 0x154));
  }
  do {
    lVar23 = *plVar24;
    lVar3 = plVar12[0x29];
    cVar4 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar13) {
      *plVar24 = lVar23;
      plVar12[0x29] = lVar3;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_026c4920:
  lVar21 = *plVar24;
  lVar22 = plVar12[0x29];
  if (lVar21 == lVar23 && lVar22 == lVar3) goto code_r0x026c4934;
  ClearExclusiveLocal();
  do {
    do {
      lVar23 = *plVar24;
      if (lVar23 != lVar21 || plVar12[0x29] != lVar22) {
        bVar13 = false;
        ClearExclusiveLocal();
        goto LAB_026c4960;
      }
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar13) {
        *plVar24 = lVar21;
        *(long *)((long)plVar12 + 0x144) = lVar22 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar13 = true;
LAB_026c4960:
    lVar21 = lVar23;
    lVar22 = plVar12[0x29];
  } while (!bVar13);
LAB_026c4994:
  nn::os::SignalLightEvent((LightEventType *)((long)plVar12 + 0x134));
LAB_026c499c:
  if (local_68 == (long *)0x0) {
LAB_026c49c0:
    if (lVar17 == 0) goto LAB_026c4a14;
LAB_026c49c4:
    if (*(char *)(lVar17 + 0x200) != '\0') goto LAB_026c4a14;
    bVar13 = true;
  }
  else {
    lVar23 = local_68[0xb];
    piVar1 = (int *)(lVar23 + 0xc);
    do {
      iVar15 = *piVar1;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar13) {
        *piVar1 = iVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 + -1 != 0) goto LAB_026c49c0;
    *(undefined8 *)(lVar23 + 0x18) = 0;
    (**(code **)(*local_68 + 0x20))();
    if (lVar17 != 0) goto LAB_026c49c4;
LAB_026c4a14:
    bVar13 = false;
  }
  lVar20 = *(long *)(lVar20 + 8);
  piVar1 = (int *)(lVar20 + 0xc);
  do {
    iVar15 = *piVar1;
    cVar4 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar14) {
      *piVar1 = iVar15 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar15 + -1 == 0) {
    *(undefined8 *)(lVar20 + 0x18) = 0;
    (**(code **)(*plVar26 + 0x20))(plVar26);
    if (bVar13) goto LAB_026c49f0;
    goto LAB_026c4474;
  }
  if (!bVar13) goto LAB_026c4474;
LAB_026c49f0:
  bVar13 = true;
  puVar5 = local_78[0];
  goto joined_r0x026c49f8;
code_r0x026c4934:
  cVar4 = '\x01';
  bVar13 = (bool)ExclusiveMonitorPass(plVar24,0x10);
  if (bVar13) {
    *plVar24 = lVar23;
    *(long *)((long)plVar12 + 0x144) = lVar3 + -1;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_026c4994;
  goto LAB_026c4920;
}


