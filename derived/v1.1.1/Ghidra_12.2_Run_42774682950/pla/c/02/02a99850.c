/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a99850; name: FUN_02a99850
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02a99850(long param_1,ulong *param_2)

{
  long ***ppplVar1;
  long **pplVar2;
  int *piVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *****ppppplVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  long *plVar17;
  long **pplVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  char *pcVar26;
  long **pplVar27;
  long *plVar28;
  long lVar29;
  long *plVar30;
  long *plVar31;
  bool bVar32;
  long ****local_90;
  long ***local_88;
  long *local_80;
  long **local_78;
  long *****local_70;
  long *****local_68;
  
  if (*(long *)(param_1 + 0x1f0) == 0) {
    return;
  }
  plVar13 = (long *)FUN_02a9b144();
  local_78 = (long **)*plVar13;
  if (local_78 == (long **)0x0) {
    return;
  }
  pplVar18 = local_78 + 10;
  do {
    cVar5 = '\x01';
    bVar32 = (bool)ExclusiveMonitorPass(pplVar18,0x10);
    if (bVar32) {
      *(int *)pplVar18 = *(int *)pplVar18 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (local_78 == (long **)0x0) {
    return;
  }
  FUN_00956dac(&local_80,param_1 + 0x1a8);
  plVar13 = local_78[0x25];
  if (plVar13 != (long *)0x0) {
    plVar17 = plVar13 + 10;
    do {
      cVar5 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar32) {
        *(int *)plVar17 = (int)*plVar17 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar25 = *(long *)(param_1 + 0x1f0);
    if (((*PTR_DAT_0437a570 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a570), iVar12 != 0)) {
      FUN_00100250(PTR_LAB_0437a728,PTR_DAT_0437a578,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a570);
    }
    lVar25 = *(long *)(lVar25 + 200);
    puVar21 = (undefined8 *)PTR_DAT_0437a578;
    if (lVar25 != 0) {
      puVar21 = (undefined8 *)(lVar25 + 0x88);
    }
    plVar28 = (long *)*puVar21;
    if (plVar28 != (long *)0x0) {
      plVar30 = plVar28 + 10;
      do {
        cVar5 = '\x01';
        bVar32 = (bool)ExclusiveMonitorPass(plVar30,0x10);
        if (bVar32) {
          *(int *)plVar30 = (int)*plVar30 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar30 = (long *)plVar13[0x11];
    if (plVar30 != (long *)0x0) {
      plVar31 = plVar30 + 10;
      do {
        cVar5 = '\x01';
        bVar32 = (bool)ExclusiveMonitorPass(plVar31,0x10);
        if (bVar32) {
          *(int *)plVar31 = (int)*plVar31 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    lVar25 = FUN_02b68e98(plVar30,0);
    pcVar26 = *(char **)(lVar25 + 8);
    plVar31 = *(long **)(lVar25 + 0x18);
    if (plVar31 == (long *)0x0) {
      cVar5 = *pcVar26;
    }
    else {
      (**(code **)(*plVar31 + 0x18))(plVar31);
      cVar5 = *pcVar26;
    }
    if (cVar5 != '\0') {
      FUN_02b64964(plVar28,plVar30[0xb]);
      FUN_02b64be8(plVar28);
    }
    if (plVar31 != (long *)0x0) {
      (**(code **)(*plVar31 + 0x20))(plVar31);
    }
    if (plVar30 != (long *)0x0) {
      plVar31 = plVar30 + 10;
      do {
        iVar12 = (int)*plVar31 + -1;
        cVar5 = '\x01';
        bVar32 = (bool)ExclusiveMonitorPass(plVar31,0x10);
        if (bVar32) {
          *(int *)plVar31 = iVar12;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 == 0) {
        (**(code **)(*plVar30 + 0x10))(plVar30);
      }
    }
    if (plVar28 != (long *)0x0) {
      plVar30 = plVar28 + 10;
      do {
        iVar12 = (int)*plVar30 + -1;
        cVar5 = '\x01';
        bVar32 = (bool)ExclusiveMonitorPass(plVar30,0x10);
        if (bVar32) {
          *(int *)plVar30 = iVar12;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 == 0) {
        (**(code **)(*plVar28 + 0x10))(plVar28);
      }
    }
    do {
      iVar12 = (int)*plVar17 + -1;
      cVar5 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar32) {
        *(int *)plVar17 = iVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  puVar10 = PTR_DAT_0437a6b8;
  puVar9 = PTR_DAT_0437a6b0;
  if (0 < *(int *)(local_78 + 0x2d)) {
    lVar25 = 0;
    pplVar18 = local_78;
LAB_02a99a14:
    plVar13 = local_80;
    if (pplVar18[0x1e] != pplVar18[0x1d]) {
      local_88 = (long ***)pplVar18[0x1d][lVar25];
      if (local_88 != (long ***)0x0) {
        ppplVar1 = local_88 + 10;
        do {
          cVar5 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(ppplVar1,0x10);
          if (bVar32) {
            *(int *)ppplVar1 = *(int *)ppplVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (local_88 == (long ***)0x0) goto LAB_02a99a00;
        local_90 = &local_88;
        local_68 = &local_90;
        local_70 = (long *****)&local_68;
        plVar17 = local_80 + 0x21;
        lVar29 = *plVar17;
        lVar14 = nn::os::GetCurrentThread();
        ppppplVar11 = local_68;
        if (lVar14 != lVar29) {
          lVar14 = nn::os::GetCurrentThread();
          do {
            if (*plVar17 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)((long)plVar13 + 0xfc));
                while (*plVar17 == 0) {
                  cVar5 = '\x01';
                  bVar32 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                  if (bVar32) {
                    *plVar17 = lVar14;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') goto LAB_02a99b50;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar5 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar32) {
              *plVar17 = lVar14;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_02a99b50:
          lVar14 = nn::os::GetCurrentThread();
          plVar17 = plVar13 + 0x24;
          do {
            if (*plVar17 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)((long)plVar13 + 0x114));
                while (*plVar17 == 0) {
                  cVar5 = '\x01';
                  bVar32 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                  if (bVar32) {
                    *plVar17 = lVar14;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') goto LAB_02a99b98;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar5 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar32) {
              *plVar17 = lVar14;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_02a99b98:
          uVar15 = FUN_02a9ecf4(&local_70,plVar13 + 0x2d);
          if ((uVar15 & 1) == 0) {
            uVar15 = FUN_02a9ecf4(&local_70,plVar13 + 0x34);
            plVar13[0x24] = 0;
            nn::os::SignalLightEvent((LightEventType *)((long)plVar13 + 0x114));
            if ((uVar15 & 1) == 0) {
              bVar32 = true;
              goto LAB_02a99cc4;
            }
          }
          else {
            plVar13[0x24] = 0;
            nn::os::SignalLightEvent((LightEventType *)((long)plVar13 + 0x114));
          }
          goto LAB_02a99fd4;
        }
        plVar17 = (long *)plVar13[0x2d];
        plVar28 = (long *)plVar13[0x2e];
        if (plVar17 == plVar28) {
LAB_02a99bfc:
          ppppplVar11 = local_68;
          plVar17 = (long *)plVar13[0x34];
          plVar28 = (long *)plVar13[0x35];
          if (plVar17 != plVar28) {
            do {
              lVar14 = *plVar17;
              if (lVar14 != 0) {
                plVar30 = (long *)(*(code *)**(undefined8 **)(lVar14 + 8))
                                            ((undefined8 *)(lVar14 + 8));
                if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
                  uVar16 = FUN_009b19b4();
                  *(undefined8 *)puVar10 = uVar16;
                  __cxa_guard_release(puVar9);
                }
                for (; plVar30 != (long *)0x0; plVar30 = (long *)*plVar30) {
                  if (plVar30 == (long *)puVar10) {
                    if (*(long ****)(lVar14 + 0x1b8) == **ppppplVar11) goto LAB_02a99c90;
                    break;
                  }
                }
              }
              plVar17 = plVar17 + 1;
            } while (plVar17 != plVar28);
            plVar17 = plVar28;
LAB_02a99c90:
            if (plVar17 != (long *)plVar13[0x35]) goto LAB_02a99c9c;
          }
          bVar32 = false;
LAB_02a99cc4:
          plVar17 = plVar13 + 0x28;
          do {
            lVar14 = *plVar17;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar6) {
              *plVar17 = lVar14;
              plVar13[0x29] = plVar13[0x29];
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          lVar29 = nn::os::GetCurrentThread();
          ppppplVar11 = local_68;
          if (lVar29 != lVar14) {
            lVar14 = nn::os::GetCurrentThread();
            do {
              if (*plVar17 != 0 || plVar13[0x29] != 0) {
                bVar6 = false;
                ClearExclusiveLocal();
                goto LAB_02a99dac;
              }
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar6) {
                *plVar17 = lVar14;
                plVar13[0x29] = 0;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            bVar6 = true;
LAB_02a99dac:
            lVar14 = nn::os::GetCurrentThread();
            plVar28 = plVar13 + 0x2c;
            do {
              if (*plVar28 != 0) {
                ClearExclusiveLocal();
                do {
                  nn::os::WaitLightEvent((LightEventType *)((long)plVar13 + 0x154));
                  while (*plVar28 == 0) {
                    cVar5 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                    if (bVar7) {
                      *plVar28 = lVar14;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                    if (cVar5 == '\0') goto LAB_02a99df4;
                  }
                  ClearExclusiveLocal();
                } while( true );
              }
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar7) {
                *plVar28 = lVar14;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
LAB_02a99df4:
            ppppplVar11 = local_68;
            if (!bVar6) {
              plVar28 = (long *)plVar13[0x3b];
              plVar30 = (long *)plVar13[0x3c];
              if (plVar28 != plVar30) {
                lVar14 = *plVar28;
                do {
                  if (lVar14 != 0) {
                    plVar31 = (long *)(*(code *)**(undefined8 **)(lVar14 + 8))
                                                ((undefined8 *)(lVar14 + 8));
                    if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0))
                    {
                      uVar16 = FUN_009b19b4();
                      *(undefined8 *)puVar10 = uVar16;
                      __cxa_guard_release(puVar9);
                    }
                    for (; plVar31 != (long *)0x0; plVar31 = (long *)*plVar31) {
                      if (plVar31 == (long *)puVar10) {
                        if (*(long ****)(lVar14 + 0x1b8) == **ppppplVar11) goto LAB_02a99f08;
                        break;
                      }
                    }
                  }
                  plVar28 = plVar28 + 1;
                  if (plVar28 == plVar30) goto LAB_02a99f04;
                  lVar14 = *plVar28;
                } while( true );
              }
              goto LAB_02a99f34;
            }
            uVar15 = FUN_02a9ecf4(&local_70,plVar13 + 0x3b);
            if ((uVar15 & 1) == 0) goto LAB_02a99f34;
            FUN_02a9ee90(plVar13[0x3b],plVar13[0x3c]);
            plVar13[0x2c] = 0;
            nn::os::SignalLightEvent((LightEventType *)((long)plVar13 + 0x154));
            goto LAB_02a99f4c;
          }
          plVar17 = (long *)plVar13[0x3b];
          plVar28 = (long *)plVar13[0x3c];
          if (plVar17 != plVar28) {
            lVar14 = *plVar17;
            do {
              if (lVar14 != 0) {
                plVar30 = (long *)(*(code *)**(undefined8 **)(lVar14 + 8))
                                            ((undefined8 *)(lVar14 + 8));
                if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
                  uVar16 = FUN_009b19b4();
                  *(undefined8 *)puVar10 = uVar16;
                  __cxa_guard_release(puVar9);
                }
                for (; plVar30 != (long *)0x0; plVar30 = (long *)*plVar30) {
                  if (plVar30 == (long *)puVar10) {
                    if (*(long ****)(lVar14 + 0x1b8) == **ppppplVar11) goto LAB_02a99ed0;
                    break;
                  }
                }
              }
              plVar17 = plVar17 + 1;
              if (plVar17 == plVar28) goto LAB_02a99ecc;
              lVar14 = *plVar17;
            } while( true );
          }
          goto joined_r0x02a99efc;
        }
        do {
          lVar14 = *plVar17;
          if (lVar14 != 0) {
            plVar30 = (long *)(*(code *)**(undefined8 **)(lVar14 + 8))((undefined8 *)(lVar14 + 8));
            if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
              uVar16 = FUN_009b19b4();
              *(undefined8 *)puVar10 = uVar16;
              __cxa_guard_release(puVar9);
            }
            for (; plVar30 != (long *)0x0; plVar30 = (long *)*plVar30) {
              if (plVar30 == (long *)puVar10) {
                if (*(long ****)(lVar14 + 0x1b8) == **ppppplVar11) goto LAB_02a99bec;
                break;
              }
            }
          }
          plVar17 = plVar17 + 1;
        } while (plVar17 != plVar28);
        plVar17 = plVar28;
LAB_02a99bec:
        if (plVar17 == (long *)plVar13[0x2e]) goto LAB_02a99bfc;
LAB_02a99c9c:
        (**(code **)(*(long *)*plVar17 + 0x70))();
        *(undefined1 *)((long)plVar13 + 0x213) = 1;
        if (local_88 == (long ***)0x0) goto LAB_02a99a00;
        goto LAB_02a99fec;
      }
      goto LAB_02a99a00;
    }
    goto LAB_02a99a04;
  }
LAB_02a9a014:
  plVar17 = local_80;
  local_88 = &local_78;
  local_68 = (long *****)&local_88;
  local_70 = (long *****)&local_68;
  plVar13 = local_80 + 0x21;
  lVar14 = *plVar13;
  lVar25 = nn::os::GetCurrentThread();
  ppppplVar11 = local_68;
  puVar10 = PTR_DAT_04388088;
  puVar9 = PTR_DAT_04388080;
  if (lVar25 == lVar14) {
    plVar13 = (long *)plVar17[0x2d];
    plVar28 = (long *)plVar17[0x2e];
    if (plVar13 != plVar28) {
      lVar25 = *plVar13;
      do {
        if (lVar25 != 0) {
          plVar30 = (long *)(*(code *)**(undefined8 **)(lVar25 + 8))((undefined8 *)(lVar25 + 8));
          if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
            uVar16 = FUN_009b19b4();
            *(undefined8 *)puVar10 = uVar16;
            __cxa_guard_release(puVar9);
          }
          for (; plVar30 != (long *)0x0; plVar30 = (long *)*plVar30) {
            if (plVar30 == (long *)puVar10) {
              if ((long **)*(long **)(lVar25 + 0x1b8) == (**ppppplVar11)[0x24]) goto LAB_02a9a1d4;
              break;
            }
          }
        }
        plVar13 = plVar13 + 1;
        if (plVar13 == plVar28) goto LAB_02a9a1d0;
        lVar25 = *plVar13;
      } while( true );
    }
    goto LAB_02a9a1ec;
  }
  lVar25 = nn::os::GetCurrentThread();
  do {
    if (*plVar13 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)plVar17 + 0xfc));
        while (*plVar13 == 0) {
          cVar5 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar32) {
            *plVar13 = lVar25;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_02a9a138;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar32 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar32) {
      *plVar13 = lVar25;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_02a9a138:
  lVar25 = nn::os::GetCurrentThread();
  plVar13 = plVar17 + 0x24;
  do {
    if (*plVar13 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)plVar17 + 0x114));
        while (*plVar13 == 0) {
          cVar5 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar32) {
            *plVar13 = lVar25;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_02a9a180;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar32 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar32) {
      *plVar13 = lVar25;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_02a9a180:
  uVar15 = FUN_02a9fc98(&local_70,plVar17 + 0x2d);
  if ((uVar15 & 1) == 0) {
    uVar15 = FUN_02a9fc98(&local_70,plVar17 + 0x34);
    plVar17[0x24] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar17 + 0x114));
    if ((uVar15 & 1) != 0) goto LAB_02a9a5b0;
    bVar32 = true;
    goto LAB_02a9a2c8;
  }
  plVar17[0x24] = 0;
  nn::os::SignalLightEvent((LightEventType *)((long)plVar17 + 0x114));
  goto LAB_02a9a5b0;
LAB_02a99f04:
  plVar28 = plVar30;
LAB_02a99f08:
  if (plVar28 != (long *)plVar13[0x3c]) {
    (**(code **)(*(long *)*plVar28 + 0x70))();
    *(undefined1 *)((long)plVar13 + 0x213) = 1;
  }
LAB_02a99f34:
  plVar13[0x2c] = 0;
  nn::os::SignalLightEvent((LightEventType *)((long)plVar13 + 0x154));
  if (!bVar6) goto joined_r0x02a99efc;
LAB_02a99f4c:
  do {
    lVar14 = *plVar17;
    lVar29 = plVar13[0x29];
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar6) {
      *plVar17 = lVar14;
      plVar13[0x29] = lVar29;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    if (*plVar17 != lVar14 || plVar13[0x29] != lVar29) {
      ClearExclusiveLocal();
      lVar14 = *plVar17;
      lVar29 = plVar13[0x29];
      goto LAB_02a99f7c;
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar6) {
      *plVar17 = 0;
      *(long *)((long)plVar13 + 0x144) = lVar29;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_02a99fc8:
  nn::os::SignalLightEvent((LightEventType *)((long)plVar13 + 0x134));
joined_r0x02a99efc:
  if (bVar32) {
LAB_02a99fd4:
    plVar13[0x21] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar13 + 0xfc));
  }
  if (local_88 != (long ***)0x0) {
LAB_02a99fec:
    ppplVar1 = local_88 + 10;
    do {
      iVar12 = *(int *)ppplVar1;
      cVar5 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(ppplVar1,0x10);
      if (bVar32) {
        *(int *)ppplVar1 = iVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 + -1 == 0) {
      (*(code *)(*local_88)[2])();
    }
  }
LAB_02a99a00:
  pplVar18 = local_78;
LAB_02a99a04:
  lVar25 = lVar25 + 1;
  if (*(int *)(pplVar18 + 0x2d) <= lVar25) goto LAB_02a9a014;
  goto LAB_02a99a14;
LAB_02a99f7c:
  do {
    lVar4 = *plVar17;
    if (lVar4 == lVar14 && plVar13[0x29] == lVar29) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *plVar17 = 0;
        *(long *)((long)plVar13 + 0x144) = lVar29;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_02a99f7c;
      bVar6 = true;
    }
    else {
      bVar6 = false;
      ClearExclusiveLocal();
    }
    lVar14 = lVar4;
    lVar29 = plVar13[0x29];
  } while (!bVar6);
  goto LAB_02a99fc8;
LAB_02a99ecc:
  plVar17 = plVar28;
LAB_02a99ed0:
  if (plVar17 != (long *)plVar13[0x3c]) {
    (**(code **)(*(long *)*plVar17 + 0x70))();
    *(undefined1 *)((long)plVar13 + 0x213) = 1;
  }
  goto joined_r0x02a99efc;
LAB_02a9a1d0:
  plVar13 = plVar28;
LAB_02a9a1d4:
  if (plVar13 != (long *)plVar17[0x2e]) {
    plVar13 = (long *)*plVar13;
    goto LAB_02a9a2ac;
  }
LAB_02a9a1ec:
  ppppplVar11 = local_68;
  puVar10 = PTR_DAT_04388088;
  puVar9 = PTR_DAT_04388080;
  plVar13 = (long *)plVar17[0x34];
  plVar28 = (long *)plVar17[0x35];
  if (plVar13 != plVar28) {
    lVar25 = *plVar13;
    do {
      if (lVar25 != 0) {
        plVar30 = (long *)(*(code *)**(undefined8 **)(lVar25 + 8))((undefined8 *)(lVar25 + 8));
        if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
          uVar16 = FUN_009b19b4();
          *(undefined8 *)puVar10 = uVar16;
          __cxa_guard_release(puVar9);
        }
        for (; plVar30 != (long *)0x0; plVar30 = (long *)*plVar30) {
          if (plVar30 == (long *)puVar10) {
            if ((long **)*(long **)(lVar25 + 0x1b8) == (**ppppplVar11)[0x24]) goto LAB_02a9a29c;
            break;
          }
        }
      }
      plVar13 = plVar13 + 1;
      if (plVar13 == plVar28) goto LAB_02a9a298;
      lVar25 = *plVar13;
    } while( true );
  }
LAB_02a9a2c4:
  bVar32 = false;
LAB_02a9a2c8:
  plVar13 = plVar17 + 0x28;
  do {
    lVar25 = *plVar13;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar6) {
      *plVar13 = lVar25;
      plVar17[0x29] = plVar17[0x29];
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  lVar14 = nn::os::GetCurrentThread();
  ppppplVar11 = local_68;
  puVar10 = PTR_DAT_04388088;
  puVar9 = PTR_DAT_04388080;
  if (lVar14 != lVar25) {
    lVar25 = nn::os::GetCurrentThread();
    do {
      if (*plVar13 != 0 || plVar17[0x29] != 0) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto LAB_02a9a3bc;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *plVar13 = lVar25;
        plVar17[0x29] = 0;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar6 = true;
LAB_02a9a3bc:
    lVar25 = nn::os::GetCurrentThread();
    plVar28 = plVar17 + 0x2c;
    do {
      if (*plVar28 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar17 + 0x154));
          while (*plVar28 == 0) {
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar7) {
              *plVar28 = lVar25;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_02a9a404;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar7) {
        *plVar28 = lVar25;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_02a9a404:
    ppppplVar11 = local_68;
    puVar10 = PTR_DAT_04388088;
    puVar9 = PTR_DAT_04388080;
    if (bVar6) {
      uVar15 = FUN_02a9fc98(&local_70,plVar17 + 0x3b);
      if ((uVar15 & 1) == 0) goto LAB_02a9a548;
      FUN_02a9fe40(plVar17[0x3b],plVar17[0x3c]);
      plVar17[0x2c] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar17 + 0x154));
    }
    else {
      plVar28 = (long *)plVar17[0x3b];
      plVar30 = (long *)plVar17[0x3c];
      if (plVar28 != plVar30) {
        lVar25 = *plVar28;
        do {
          if (lVar25 != 0) {
            plVar31 = (long *)(*(code *)**(undefined8 **)(lVar25 + 8))((undefined8 *)(lVar25 + 8));
            if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
              uVar16 = FUN_009b19b4();
              *(undefined8 *)puVar10 = uVar16;
              __cxa_guard_release(puVar9);
            }
            for (; plVar31 != (long *)0x0; plVar31 = (long *)*plVar31) {
              if (plVar31 == (long *)puVar10) {
                if ((long **)*(long **)(lVar25 + 0x1b8) == (**ppppplVar11)[0x24]) goto LAB_02a9a520;
                break;
              }
            }
          }
          plVar28 = plVar28 + 1;
          if (plVar28 == plVar30) goto LAB_02a9a51c;
          lVar25 = *plVar28;
        } while( true );
      }
LAB_02a9a548:
      plVar17[0x2c] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar17 + 0x154));
      if (!bVar6) goto joined_r0x02a9a514;
    }
    do {
      lVar25 = *plVar13;
      lVar14 = plVar17[0x29];
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *plVar13 = lVar25;
        plVar17[0x29] = lVar14;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      if (*plVar13 != lVar25 || plVar17[0x29] != lVar14) {
        ClearExclusiveLocal();
        lVar25 = *plVar13;
        lVar14 = plVar17[0x29];
        goto LAB_02a9b0c8;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *plVar13 = 0;
        *(long *)((long)plVar17 + 0x144) = lVar14;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    goto LAB_02a9a5a4;
  }
  plVar13 = (long *)plVar17[0x3b];
  plVar28 = (long *)plVar17[0x3c];
  if (plVar13 != plVar28) {
    lVar25 = *plVar13;
    do {
      if (lVar25 != 0) {
        plVar30 = (long *)(*(code *)**(undefined8 **)(lVar25 + 8))((undefined8 *)(lVar25 + 8));
        if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
          uVar16 = FUN_009b19b4();
          *(undefined8 *)puVar10 = uVar16;
          __cxa_guard_release(puVar9);
        }
        for (; plVar30 != (long *)0x0; plVar30 = (long *)*plVar30) {
          if (plVar30 == (long *)puVar10) {
            if ((long **)*(long **)(lVar25 + 0x1b8) == (**ppppplVar11)[0x24]) goto LAB_02a9a4f0;
            break;
          }
        }
      }
      plVar13 = plVar13 + 1;
      if (plVar13 == plVar28) goto LAB_02a9a4ec;
      lVar25 = *plVar13;
    } while( true );
  }
  goto joined_r0x02a9a514;
LAB_02a9a298:
  plVar13 = plVar28;
LAB_02a9a29c:
  if (plVar13 == (long *)plVar17[0x35]) goto LAB_02a9a2c4;
  plVar13 = (long *)*plVar13;
LAB_02a9a2ac:
  (**(code **)(*plVar13 + 0x70))();
  *(undefined1 *)((long)plVar17 + 0x213) = 1;
  goto LAB_02a9a5c0;
LAB_02a9a51c:
  plVar28 = plVar30;
LAB_02a9a520:
  if (plVar28 != (long *)plVar17[0x3c]) {
    (**(code **)(*(long *)*plVar28 + 0x70))();
    *(undefined1 *)((long)plVar17 + 0x213) = 1;
  }
  goto LAB_02a9a548;
LAB_02a9a4ec:
  plVar13 = plVar28;
LAB_02a9a4f0:
  if (plVar13 != (long *)plVar17[0x3c]) {
    (**(code **)(*(long *)*plVar13 + 0x70))();
    *(undefined1 *)((long)plVar17 + 0x213) = 1;
  }
  goto joined_r0x02a9a514;
LAB_02a9a77c:
  plVar13 = plVar28;
LAB_02a9a780:
  if (plVar13 != (long *)plVar17[0x2e]) {
    plVar13 = (long *)*plVar13;
    goto LAB_02a9a858;
  }
  goto LAB_02a9a798;
LAB_02a9a844:
  plVar13 = plVar28;
LAB_02a9a848:
  if (plVar13 == (long *)plVar17[0x35]) goto LAB_02a9a870;
  plVar13 = (long *)*plVar13;
LAB_02a9a858:
  (**(code **)(*plVar13 + 0x70))();
  *(undefined1 *)((long)plVar17 + 0x213) = 1;
  goto LAB_02a9ab6c;
LAB_02a9aa98:
  plVar13 = plVar28;
LAB_02a9aa9c:
  if (plVar13 != (long *)plVar17[0x3c]) {
    (**(code **)(*(long *)*plVar13 + 0x70))();
    *(undefined1 *)((long)plVar17 + 0x213) = 1;
  }
  goto joined_r0x02a9aac0;
LAB_02a9aac8:
  plVar28 = plVar30;
LAB_02a9aacc:
  if (plVar28 != (long *)plVar17[0x3c]) {
    (**(code **)(*(long *)*plVar28 + 0x70))();
    *(undefined1 *)((long)plVar17 + 0x213) = 1;
  }
  goto LAB_02a9aaf4;
LAB_02a9b108:
  do {
    lVar29 = *plVar13;
    if (lVar29 == lVar25 && plVar17[0x29] == lVar14) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *plVar13 = 0;
        *(long *)((long)plVar17 + 0x144) = lVar14;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_02a9b108;
      bVar6 = true;
    }
    else {
      bVar6 = false;
      ClearExclusiveLocal();
    }
    lVar25 = lVar29;
    lVar14 = plVar17[0x29];
  } while (!bVar6);
  goto LAB_02a9ab50;
LAB_02a9ad14:
  if (uVar20 < 2) {
    uVar19 = uVar22 & uVar19;
  }
  else if (uVar15 <= uVar19) {
    uVar23 = 0;
    if (uVar15 != 0) {
      uVar23 = uVar19 / uVar15;
    }
    uVar19 = uVar19 - uVar23 * uVar15;
  }
  plVar17 = *(long **)(lVar25 + uVar19 * 8);
  do {
    plVar28 = plVar17;
    plVar17 = (long *)*plVar28;
  } while ((long *)*plVar28 != plVar13);
  if (plVar28 == (long *)(param_1 + 0x248)) {
LAB_02a9ada4:
    if (*plVar13 != 0) {
      uVar23 = *(ulong *)(*plVar13 + 8);
      if (uVar20 < 2) {
        uVar23 = uVar23 & uVar22;
      }
      else if (uVar15 <= uVar23) {
        uVar24 = 0;
        if (uVar15 != 0) {
          uVar24 = uVar23 / uVar15;
        }
        uVar23 = uVar23 - uVar24 * uVar15;
      }
      if (uVar23 == uVar19) goto LAB_02a9ae14;
    }
    *(undefined8 *)(lVar25 + uVar19 * 8) = 0;
  }
  else {
    uVar23 = plVar28[1];
    if (uVar20 < 2) {
      uVar23 = uVar23 & uVar22;
    }
    else if (uVar15 <= uVar23) {
      uVar24 = 0;
      if (uVar15 != 0) {
        uVar24 = uVar23 / uVar15;
      }
      uVar23 = uVar23 - uVar24 * uVar15;
    }
    if (uVar23 != uVar19) goto LAB_02a9ada4;
  }
LAB_02a9ae14:
  lVar25 = *plVar13;
  if (lVar25 != 0) {
    uVar23 = *(ulong *)(lVar25 + 8);
    if (uVar20 < 2) {
      uVar23 = uVar23 & uVar22;
    }
    else if (uVar15 <= uVar23) {
      uVar20 = 0;
      if (uVar15 != 0) {
        uVar20 = uVar23 / uVar15;
      }
      uVar23 = uVar23 - uVar20 * uVar15;
    }
    if (uVar23 != uVar19) {
      *(long **)(*(long *)(param_1 + 0x218) + uVar23 * 8) = plVar28;
      lVar25 = *plVar13;
    }
  }
  *plVar28 = lVar25;
  *plVar13 = 0;
  *(long *)(param_1 + 0x270) = *(long *)(param_1 + 0x270) + -1;
  plVar17 = (long *)plVar13[6];
  if (plVar17 == (long *)0x0) {
LAB_02a9ae90:
    plVar17 = (long *)plVar13[5];
  }
  else {
    plVar28 = plVar17 + 10;
    do {
      iVar12 = (int)*plVar28 + -1;
      cVar5 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar32) {
        *(int *)plVar28 = iVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 != 0) goto LAB_02a9ae90;
    (**(code **)(*plVar17 + 0x10))();
    plVar17 = (long *)plVar13[5];
  }
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x20))();
  }
  plVar17 = *(long **)(param_1 + 0x250);
  uVar15 = (**(code **)(*plVar17 + 0xc0))(plVar17);
  if ((uVar15 & 1) != 0) {
    lVar25 = tpidr_el0;
    if (*(char *)(lVar25 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar25 + 0x38d488) = 1;
      *(undefined8 *)(lVar25 + 0x38d478) = 0;
      *(undefined8 *)(lVar25 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar25 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar25 + 0x38d480)) {
      FUN_02bcc824(plVar17,plVar13,0x38,8);
      goto LAB_02a9af1c;
    }
  }
  (**(code **)(*plVar17 + 0x18))(plVar17,plVar13,0x38,8);
  goto LAB_02a9af1c;
LAB_02a9b0c8:
  do {
    lVar29 = *plVar13;
    if (lVar29 == lVar25 && plVar17[0x29] == lVar14) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *plVar13 = 0;
        *(long *)((long)plVar17 + 0x144) = lVar14;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_02a9b0c8;
      bVar6 = true;
    }
    else {
      bVar6 = false;
      ClearExclusiveLocal();
    }
    lVar25 = lVar29;
    lVar14 = plVar17[0x29];
  } while (!bVar6);
LAB_02a9a5a4:
  nn::os::SignalLightEvent((LightEventType *)((long)plVar17 + 0x134));
joined_r0x02a9a514:
  if (bVar32) {
LAB_02a9a5b0:
    plVar17[0x21] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar17 + 0xfc));
  }
LAB_02a9a5c0:
  plVar17 = local_80;
  local_88 = &local_78;
  local_68 = (long *****)&local_88;
  local_70 = (long *****)&local_68;
  plVar13 = local_80 + 0x21;
  lVar14 = *plVar13;
  lVar25 = nn::os::GetCurrentThread();
  ppppplVar11 = local_68;
  puVar10 = PTR_DAT_0437a140;
  puVar9 = PTR_DAT_0437a138;
  if (lVar25 == lVar14) {
    plVar13 = (long *)plVar17[0x2d];
    plVar28 = (long *)plVar17[0x2e];
    if (plVar13 != plVar28) {
      lVar25 = *plVar13;
      do {
        if (lVar25 != 0) {
          plVar30 = (long *)(*(code *)**(undefined8 **)(lVar25 + 8))((undefined8 *)(lVar25 + 8));
          if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
            uVar16 = FUN_009b19b4();
            *(undefined8 *)puVar10 = uVar16;
            __cxa_guard_release(puVar9);
          }
          for (; plVar30 != (long *)0x0; plVar30 = (long *)*plVar30) {
            if (plVar30 == (long *)puVar10) {
              if ((long **)*(long **)(lVar25 + 0x1c0) == (**ppppplVar11)[0x25]) goto LAB_02a9a780;
              break;
            }
          }
        }
        plVar13 = plVar13 + 1;
        if (plVar13 == plVar28) goto LAB_02a9a77c;
        lVar25 = *plVar13;
      } while( true );
    }
LAB_02a9a798:
    ppppplVar11 = local_68;
    puVar10 = PTR_DAT_0437a140;
    puVar9 = PTR_DAT_0437a138;
    plVar13 = (long *)plVar17[0x34];
    plVar28 = (long *)plVar17[0x35];
    if (plVar13 != plVar28) {
      lVar25 = *plVar13;
      do {
        if (lVar25 != 0) {
          plVar30 = (long *)(*(code *)**(undefined8 **)(lVar25 + 8))((undefined8 *)(lVar25 + 8));
          if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
            uVar16 = FUN_009b19b4();
            *(undefined8 *)puVar10 = uVar16;
            __cxa_guard_release(puVar9);
          }
          for (; plVar30 != (long *)0x0; plVar30 = (long *)*plVar30) {
            if (plVar30 == (long *)puVar10) {
              if ((long **)*(long **)(lVar25 + 0x1c0) == (**ppppplVar11)[0x25]) goto LAB_02a9a848;
              break;
            }
          }
        }
        plVar13 = plVar13 + 1;
        if (plVar13 == plVar28) goto LAB_02a9a844;
        lVar25 = *plVar13;
      } while( true );
    }
LAB_02a9a870:
    bVar32 = false;
LAB_02a9a874:
    plVar13 = plVar17 + 0x28;
    do {
      lVar25 = *plVar13;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *plVar13 = lVar25;
        plVar17[0x29] = plVar17[0x29];
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar14 = nn::os::GetCurrentThread();
    ppppplVar11 = local_68;
    puVar10 = PTR_DAT_0437a140;
    puVar9 = PTR_DAT_0437a138;
    if (lVar14 == lVar25) {
      plVar13 = (long *)plVar17[0x3b];
      plVar28 = (long *)plVar17[0x3c];
      if (plVar13 != plVar28) {
        lVar25 = *plVar13;
        do {
          if (lVar25 != 0) {
            plVar30 = (long *)(*(code *)**(undefined8 **)(lVar25 + 8))((undefined8 *)(lVar25 + 8));
            if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
              uVar16 = FUN_009b19b4();
              *(undefined8 *)puVar10 = uVar16;
              __cxa_guard_release(puVar9);
            }
            for (; plVar30 != (long *)0x0; plVar30 = (long *)*plVar30) {
              if (plVar30 == (long *)puVar10) {
                if ((long **)*(long **)(lVar25 + 0x1c0) == (**ppppplVar11)[0x25]) goto LAB_02a9aa9c;
                break;
              }
            }
          }
          plVar13 = plVar13 + 1;
          if (plVar13 == plVar28) goto LAB_02a9aa98;
          lVar25 = *plVar13;
        } while( true );
      }
    }
    else {
      lVar25 = nn::os::GetCurrentThread();
      do {
        if (*plVar13 != 0 || plVar17[0x29] != 0) {
          bVar6 = false;
          ClearExclusiveLocal();
          goto LAB_02a9a968;
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *plVar13 = lVar25;
          plVar17[0x29] = 0;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar6 = true;
LAB_02a9a968:
      lVar25 = nn::os::GetCurrentThread();
      plVar28 = plVar17 + 0x2c;
      do {
        if (*plVar28 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)((long)plVar17 + 0x154));
            while (*plVar28 == 0) {
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar7) {
                *plVar28 = lVar25;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_02a9a9b0;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar7) {
          *plVar28 = lVar25;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_02a9a9b0:
      ppppplVar11 = local_68;
      puVar10 = PTR_DAT_0437a140;
      puVar9 = PTR_DAT_0437a138;
      if (bVar6) {
        uVar15 = FUN_02aa0c48(&local_70,plVar17 + 0x3b);
        if ((uVar15 & 1) == 0) goto LAB_02a9aaf4;
        FUN_02aa0df0(plVar17[0x3b],plVar17[0x3c]);
        plVar17[0x2c] = 0;
        nn::os::SignalLightEvent((LightEventType *)((long)plVar17 + 0x154));
      }
      else {
        plVar28 = (long *)plVar17[0x3b];
        plVar30 = (long *)plVar17[0x3c];
        if (plVar28 != plVar30) {
          lVar25 = *plVar28;
          do {
            if (lVar25 != 0) {
              plVar31 = (long *)(*(code *)**(undefined8 **)(lVar25 + 8))((undefined8 *)(lVar25 + 8))
              ;
              if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
                uVar16 = FUN_009b19b4();
                *(undefined8 *)puVar10 = uVar16;
                __cxa_guard_release(puVar9);
              }
              for (; plVar31 != (long *)0x0; plVar31 = (long *)*plVar31) {
                if (plVar31 == (long *)puVar10) {
                  if ((long **)*(long **)(lVar25 + 0x1c0) == (**ppppplVar11)[0x25])
                  goto LAB_02a9aacc;
                  break;
                }
              }
            }
            plVar28 = plVar28 + 1;
            if (plVar28 == plVar30) goto LAB_02a9aac8;
            lVar25 = *plVar28;
          } while( true );
        }
LAB_02a9aaf4:
        plVar17[0x2c] = 0;
        nn::os::SignalLightEvent((LightEventType *)((long)plVar17 + 0x154));
        if (!bVar6) goto joined_r0x02a9aac0;
      }
      do {
        lVar25 = *plVar13;
        lVar14 = plVar17[0x29];
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *plVar13 = lVar25;
          plVar17[0x29] = lVar14;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      do {
        if (*plVar13 != lVar25 || plVar17[0x29] != lVar14) {
          ClearExclusiveLocal();
          lVar25 = *plVar13;
          lVar14 = plVar17[0x29];
          goto LAB_02a9b108;
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *plVar13 = 0;
          *(long *)((long)plVar17 + 0x144) = lVar14;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_02a9ab50:
      nn::os::SignalLightEvent((LightEventType *)((long)plVar17 + 0x134));
    }
joined_r0x02a9aac0:
    if (bVar32) goto LAB_02a9ab5c;
  }
  else {
    lVar25 = nn::os::GetCurrentThread();
    do {
      if (*plVar13 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar17 + 0xfc));
          while (*plVar13 == 0) {
            cVar5 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar32) {
              *plVar13 = lVar25;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_02a9a6e4;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar5 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar32) {
        *plVar13 = lVar25;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_02a9a6e4:
    lVar25 = nn::os::GetCurrentThread();
    plVar13 = plVar17 + 0x24;
    do {
      if (*plVar13 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar17 + 0x114));
          while (*plVar13 == 0) {
            cVar5 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar32) {
              *plVar13 = lVar25;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_02a9a72c;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar5 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar32) {
        *plVar13 = lVar25;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_02a9a72c:
    uVar15 = FUN_02aa0c48(&local_70,plVar17 + 0x2d);
    if ((uVar15 & 1) == 0) {
      uVar15 = FUN_02aa0c48(&local_70,plVar17 + 0x34);
      plVar17[0x24] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar17 + 0x114));
      if ((uVar15 & 1) == 0) {
        bVar32 = true;
        goto LAB_02a9a874;
      }
    }
    else {
      plVar17[0x24] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar17 + 0x114));
    }
LAB_02a9ab5c:
    plVar17[0x21] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar17 + 0xfc));
  }
LAB_02a9ab6c:
  pplVar18 = local_78;
  pplVar27 = *(long ***)(*(long *)(param_1 + 0x288) + 0xe0);
  if (pplVar27 == (long **)0x0) {
    if (local_78 == (long **)0x0) goto LAB_02a9abac;
  }
  else {
    pplVar2 = pplVar27 + 10;
    do {
      cVar5 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(pplVar2,0x10);
      if (bVar32) {
        *(int *)pplVar2 = *(int *)pplVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      iVar12 = *(int *)pplVar2;
      cVar5 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(pplVar2,0x10);
      if (bVar32) {
        *(int *)pplVar2 = iVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 + -1 == 0) {
      (*(code *)(*pplVar27)[2])(pplVar27);
    }
    if (pplVar27 == pplVar18) {
LAB_02a9abac:
      plVar13 = *(long **)(*(long *)(param_1 + 0x288) + 0xe0);
      *(undefined8 *)(*(long *)(param_1 + 0x288) + 0xe0) = 0;
      if (plVar13 != (long *)0x0) {
        plVar17 = plVar13 + 10;
        do {
          iVar12 = (int)*plVar17 + -1;
          cVar5 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar32) {
            *(int *)plVar17 = iVar12;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar12 == 0) {
          (**(code **)(*plVar13 + 0x10))();
        }
      }
    }
  }
  lVar25 = nn::os::GetCurrentThread();
  plVar13 = (long *)(param_1 + 0x210);
  do {
    if (*plVar13 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x204));
        while (*plVar13 == 0) {
          cVar5 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar32) {
            *plVar13 = lVar25;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_02a9ac1c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar32 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar32) {
      *plVar13 = lVar25;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_02a9ac1c:
  uVar15 = *(ulong *)(param_1 + 0x220);
  if (uVar15 != 0) {
    uVar20 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
    uVar19 = *param_2;
    uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar20 < 2) {
      uVar23 = uVar15 - 1 & uVar19;
    }
    else {
      uVar23 = uVar19;
      if (uVar15 <= uVar19) {
        uVar23 = 0;
        if (uVar15 != 0) {
          uVar23 = uVar19 / uVar15;
        }
        uVar23 = uVar19 - uVar23 * uVar15;
      }
    }
    lVar25 = *(long *)(param_1 + 0x218);
    puVar21 = *(undefined8 **)(lVar25 + uVar23 * 8);
    if ((puVar21 != (undefined8 *)0x0) && (plVar13 = (long *)*puVar21, plVar13 != (long *)0x0)) {
      uVar22 = uVar15 - 1;
      if (uVar20 < 2) {
        do {
          if (plVar13[1] == uVar19) {
            if (plVar13[2] == uVar19) goto LAB_02a9ad14;
          }
          else if ((plVar13[1] & uVar22) != uVar23) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar24 = plVar13[1];
          if (uVar24 == uVar19) {
            if (plVar13[2] == uVar19) goto LAB_02a9ad14;
          }
          else {
            if (uVar15 <= uVar24) {
              uVar8 = 0;
              if (uVar15 != 0) {
                uVar8 = uVar24 / uVar15;
              }
              uVar24 = uVar24 - uVar8 * uVar15;
            }
            if (uVar24 != uVar23) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_02a9af1c:
  *(undefined8 *)(param_1 + 0x210) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x204));
  if (local_80 != (long *)0x0) {
    lVar25 = local_80[0xb];
    piVar3 = (int *)(lVar25 + 0xc);
    do {
      iVar12 = *piVar3;
      cVar5 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar32) {
        *piVar3 = iVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar25 + 0x18) = 0;
      (**(code **)(*local_80 + 0x20))();
    }
  }
  if (local_78 != (long **)0x0) {
    pplVar18 = local_78 + 10;
    do {
      iVar12 = *(int *)pplVar18;
      cVar5 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(pplVar18,0x10);
      if (bVar32) {
        *(int *)pplVar18 = iVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 + -1 == 0) {
      (*(code *)(*local_78)[2])();
    }
  }
  return;
}


