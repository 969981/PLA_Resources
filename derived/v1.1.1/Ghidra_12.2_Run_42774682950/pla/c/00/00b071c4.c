/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b071c4; name: FUN_00b071c4
 */


/* WARNING: Removing unreachable block (ram,0x00b076c4) */

void FUN_00b071c4(long param_1,byte param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  LightEventType *pLVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long *local_90;
  long local_88;
  byte local_80;
  long *local_78;
  long ***local_70;
  long **local_68;
  
  lVar11 = FUN_00b13c20(*(long *)(param_1 + 0x78) + 0xf0,&local_88);
  if (lVar11 != 0) {
    local_80 = param_2 & 1;
    plVar19 = (long *)(lVar11 + 0x220);
    lVar17 = *plVar19;
    local_88 = param_1;
    lVar12 = nn::os::GetCurrentThread();
    if (lVar12 == lVar17) {
      bVar5 = false;
      lVar12 = 0;
    }
    else {
      lVar12 = lVar11 + 0x210;
      lVar17 = nn::os::GetCurrentThread();
      do {
        if (*plVar19 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x214));
            while (*plVar19 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar5) {
                *plVar19 = lVar17;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_00b0726c;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar5) {
          *plVar19 = lVar17;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_00b0726c:
      bVar5 = true;
    }
    plVar20 = *(long **)(lVar11 + 0x230);
    for (plVar19 = *(long **)(lVar11 + 0x228); plVar19 != plVar20; plVar19 = plVar19 + 2) {
      FUN_00b16e24(plVar19[1],&local_88);
      lVar21 = *plVar19;
      local_78 = &local_88;
      local_68 = &local_78;
      local_70 = &local_68;
      plVar2 = (long *)(lVar21 + 0x108);
      lVar17 = *plVar2;
      lVar11 = nn::os::GetCurrentThread();
      if (lVar11 == lVar17) {
        bVar7 = false;
      }
      else {
        lVar11 = nn::os::GetCurrentThread();
        do {
          if (*plVar2 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0xfc));
              while (*plVar2 == 0) {
                cVar4 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar7) {
                  *plVar2 = lVar11;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 == '\0') goto LAB_00b07650;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = lVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
LAB_00b07650:
        bVar7 = true;
      }
      lVar11 = nn::os::GetCurrentThread();
      plVar2 = (long *)(lVar21 + 0x120);
      do {
        if (*plVar2 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0x114));
            while (*plVar2 == 0) {
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar6) {
                *plVar2 = lVar11;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_00b075f4;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar11;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_00b075f4:
      lVar11 = FUN_00b173c4(&local_70,lVar21 + 0x1a0);
      if (lVar11 == 0) {
        lVar11 = FUN_00b173c4(&local_70,lVar21 + 0x168);
        *(undefined8 *)(lVar21 + 0x120) = 0;
        nn::os::SignalLightEvent((LightEventType *)(lVar21 + 0x114));
        if (bVar7) {
          *(undefined8 *)(lVar21 + 0x108) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar21 + 0xfc));
        }
        if (lVar11 == 0) {
          lVar11 = nn::os::GetCurrentThread();
          plVar2 = (long *)(lVar21 + 0x140);
          do {
            lVar17 = *plVar2;
            lVar15 = *(long *)(lVar21 + 0x148);
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar7) {
              *plVar2 = lVar17;
              *(long *)(lVar21 + 0x148) = lVar15;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          pLVar14 = (LightEventType *)(lVar21 + 0x134);
          do {
            while ((lVar17 != 0 && (lVar11 != lVar17))) {
              nn::os::WaitLightEvent(pLVar14);
              do {
                lVar17 = *plVar2;
                lVar15 = *(long *)(lVar21 + 0x148);
                cVar4 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar7) {
                  *plVar2 = lVar17;
                  *(long *)(lVar21 + 0x148) = lVar15;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            while( true ) {
              if (*plVar2 != lVar17 || *(long *)(lVar21 + 0x148) != lVar15) break;
              cVar4 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar7) {
                *plVar2 = lVar17;
                *(long *)(lVar21 + 0x144) = lVar15 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                plVar3 = (long *)(lVar21 + 0x160);
                lVar17 = *plVar3;
                lVar11 = nn::os::GetCurrentThread();
                if (lVar11 != lVar17) {
                  lVar11 = nn::os::GetCurrentThread();
                  goto LAB_00b074e8;
                }
                FUN_00b173c4(&local_70,lVar21 + 0x1d8);
                goto LAB_00b074b8;
              }
            }
            ClearExclusiveLocal();
            lVar17 = *plVar2;
            lVar15 = *(long *)(lVar21 + 0x148);
          } while( true );
        }
      }
      else {
        *(undefined8 *)(lVar21 + 0x120) = 0;
        nn::os::SignalLightEvent((LightEventType *)(lVar21 + 0x114));
        if (bVar7) {
          pLVar14 = (LightEventType *)(lVar21 + 0xfc);
          *(undefined8 *)(lVar21 + 0x108) = 0;
LAB_00b076e0:
          nn::os::SignalLightEvent(pLVar14);
        }
      }
    }
    if (bVar5) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar12 + 4));
    }
  }
  puVar9 = PTR_DAT_0437a150;
  puVar8 = PTR_DAT_0437a148;
  lVar11 = *(long *)(param_1 + 0xa8);
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0xc) != 0)) {
    piVar1 = (int *)(lVar11 + 0xc);
    iVar18 = *(int *)(lVar11 + 0xc);
    do {
      plVar19 = *(long **)(lVar11 + 0x10);
      if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
        uVar13 = FUN_009b19b4();
        *(undefined8 *)puVar9 = uVar13;
        __cxa_guard_release(puVar8);
      }
      while( true ) {
        if (plVar19 == (long *)0x0) {
          return;
        }
        if (plVar19 == (long *)puVar9) break;
        plVar19 = (long *)*plVar19;
      }
      iVar10 = *piVar1;
      if (iVar10 == iVar18) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar18 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar11 = *(long *)(lVar11 + 0x18);
          if (lVar11 == 0) {
            return;
          }
          plVar19 = (long *)(lVar11 + -0x50);
          lVar12 = *(long *)(lVar11 + 8);
          local_90 = plVar19;
          if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar12 + 0x10) == 0) {
            uVar13 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
            *(undefined8 *)(lVar12 + 0x10) = uVar13;
          }
          piVar1 = (int *)(lVar12 + 0xc);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          FUN_00b0bc88(&local_90,param_2 & 1);
          lVar12 = *(long *)(lVar11 + 8);
          piVar1 = (int *)(lVar12 + 0xc);
          do {
            iVar18 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar18 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar18 + -1 == 0) {
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*plVar19 + 0x20))(plVar19);
          }
          lVar11 = *(long *)(lVar11 + 8);
          piVar1 = (int *)(lVar11 + 0xc);
          do {
            iVar18 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar18 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar18 + -1 == 0) {
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*plVar19 + 0x20))(plVar19);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar18 = iVar10;
    } while (iVar10 != 0);
  }
  return;
  while( true ) {
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar7) {
      *plVar3 = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') break;
LAB_00b074e8:
    if (*plVar3 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0x154));
        while (*plVar3 == 0) {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar7) {
            *plVar3 = lVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00b075d0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_00b075d0:
  FUN_00b173c4(&local_70,lVar21 + 0x1d8);
  *(undefined8 *)(lVar21 + 0x160) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar21 + 0x154));
LAB_00b074b8:
  do {
    lVar11 = *plVar2;
    lVar17 = *(long *)(lVar21 + 0x148);
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *plVar2 = lVar11;
      *(long *)(lVar21 + 0x148) = lVar17;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00b074c8:
  lVar15 = *plVar2;
  lVar16 = *(long *)(lVar21 + 0x148);
  if (lVar15 == lVar11 && lVar16 == lVar17) goto code_r0x00b074dc;
  ClearExclusiveLocal();
  do {
    do {
      lVar11 = *plVar2;
      if (lVar11 != lVar15 || *(long *)(lVar21 + 0x148) != lVar16) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto LAB_00b07504;
      }
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar15;
        *(long *)(lVar21 + 0x144) = lVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar7 = true;
LAB_00b07504:
    lVar15 = lVar11;
    lVar16 = *(long *)(lVar21 + 0x148);
  } while (!bVar7);
  goto LAB_00b076e0;
code_r0x00b074dc:
  cVar4 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar7) {
    *plVar2 = lVar11;
    *(long *)(lVar21 + 0x144) = lVar17 + -1;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00b076e0;
  goto LAB_00b074c8;
}


