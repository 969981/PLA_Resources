/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b08178; name: FUN_00b08178
 */


/* WARNING: Removing unreachable block (ram,0x00b085bc) */
/* WARNING: Removing unreachable block (ram,0x00b08a24) */

byte FUN_00b08178(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  long *local_68;
  
  bVar7 = FUN_00b08cc4();
  (**(code **)(*param_1 + 0x48))(&local_68,param_1);
  if (local_68 == (long *)0x0) goto LAB_00b08a78;
  lVar14 = local_68[0xb];
  piVar1 = (int *)(lVar14 + 0xc);
  do {
    iVar8 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 + -1 == 0) {
    *(undefined8 *)(lVar14 + 0x18) = 0;
    (**(code **)(*local_68 + 0x20))();
  }
  (**(code **)(*param_1 + 0x48))(&local_68,param_1);
  uVar9 = FUN_00b1255c(local_68 + 10);
  if (local_68 != (long *)0x0) {
    lVar14 = local_68[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  if ((uVar9 & 1) == 0) goto LAB_00b08a78;
  lVar19 = param_1[0xf];
  plVar21 = (long *)(lVar19 + 0x108);
  lVar18 = *plVar21;
  lVar14 = nn::os::GetCurrentThread();
  if (lVar14 == lVar18) {
    bVar3 = false;
  }
  else {
    lVar14 = nn::os::GetCurrentThread();
    do {
      if (*plVar21 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0xfc));
          while (*plVar21 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar3) {
              *plVar21 = lVar14;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_00b08284;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar3) {
        *plVar21 = lVar14;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_00b08284:
    bVar3 = true;
  }
  lVar14 = nn::os::GetCurrentThread();
  plVar21 = (long *)(lVar19 + 0x120);
  do {
    if (*plVar21 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x114));
        while (*plVar21 == 0) {
          cVar2 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar6) {
            *plVar21 = lVar14;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00b082d0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar6) {
      *plVar21 = lVar14;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00b082d0:
  plVar21 = *(long **)(lVar19 + 0x1a0);
  plVar22 = *(long **)(lVar19 + 0x1a8);
  if (plVar21 == plVar22) {
LAB_00b0833c:
    plVar21 = *(long **)(lVar19 + 0x168);
    plVar22 = *(long **)(lVar19 + 0x170);
    if (plVar21 == plVar22) {
LAB_00b083bc:
      lVar14 = 0;
    }
    else {
      do {
        lVar14 = *plVar21;
        if (lVar14 != 0) {
          plVar10 = (long *)(*(code *)**(undefined8 **)(lVar14 + 8))((undefined8 *)(lVar14 + 8));
          lVar18 = FUN_009b19b4();
          for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
            if (plVar10 == (long *)lVar18) {
              if (*(long *)(lVar14 + 0x1a8) != 0) goto LAB_00b083b0;
              break;
            }
          }
        }
        plVar21 = plVar21 + 1;
      } while (plVar21 != plVar22);
      plVar21 = plVar22;
LAB_00b083b0:
      if (plVar21 == *(long **)(lVar19 + 0x170)) goto LAB_00b083bc;
      lVar14 = 0;
      if (*plVar21 != 0) {
        lVar14 = *plVar21 + -0x48;
      }
    }
    bVar6 = lVar14 == 0;
  }
  else {
    do {
      lVar14 = *plVar21;
      if (lVar14 != 0) {
        plVar10 = (long *)(*(code *)**(undefined8 **)(lVar14 + 8))((undefined8 *)(lVar14 + 8));
        lVar18 = FUN_009b19b4();
        for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
          if (plVar10 == (long *)lVar18) {
            if (*(long *)(lVar14 + 0x1a8) != 0) goto LAB_00b08330;
            break;
          }
        }
      }
      plVar21 = plVar21 + 1;
    } while (plVar21 != plVar22);
    plVar21 = plVar22;
LAB_00b08330:
    if ((plVar21 == *(long **)(lVar19 + 0x1a8)) || (*plVar21 == 0)) goto LAB_00b0833c;
    bVar6 = false;
    lVar14 = *plVar21 + -0x48;
  }
  *(undefined8 *)(lVar19 + 0x120) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0x114));
  if (bVar3) {
    *(undefined8 *)(lVar19 + 0x108) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0xfc));
  }
  if (bVar6) {
    lVar14 = nn::os::GetCurrentThread();
    plVar21 = (long *)(lVar19 + 0x140);
    do {
      lVar18 = *plVar21;
      lVar20 = *(long *)(lVar19 + 0x148);
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar3) {
        *plVar21 = lVar18;
        *(long *)(lVar19 + 0x148) = lVar20;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      while ((lVar18 != 0 && (lVar14 != lVar18))) {
        nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x134));
        do {
          lVar18 = *plVar21;
          lVar20 = *(long *)(lVar19 + 0x148);
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar3) {
            *plVar21 = lVar18;
            *(long *)(lVar19 + 0x148) = lVar20;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      while( true ) {
        if (*plVar21 != lVar18 || *(long *)(lVar19 + 0x148) != lVar20) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar3) {
          *plVar21 = lVar18;
          *(long *)(lVar19 + 0x144) = lVar20 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          plVar22 = (long *)(lVar19 + 0x160);
          lVar18 = *plVar22;
          lVar14 = nn::os::GetCurrentThread();
          if (lVar14 != lVar18) {
            lVar14 = nn::os::GetCurrentThread();
            goto LAB_00b08488;
          }
          bVar3 = false;
          goto LAB_00b084dc;
        }
      }
      ClearExclusiveLocal();
      lVar18 = *plVar21;
      lVar20 = *(long *)(lVar19 + 0x148);
    } while( true );
  }
LAB_00b08604:
  lVar20 = param_1[0xf];
  plVar21 = (long *)(lVar20 + 0x108);
  lVar19 = *plVar21;
  lVar18 = nn::os::GetCurrentThread();
  if (lVar18 == lVar19) {
    bVar3 = false;
  }
  else {
    lVar18 = nn::os::GetCurrentThread();
    do {
      if (*plVar21 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar20 + 0xfc));
          while (*plVar21 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar3) {
              *plVar21 = lVar18;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_00b08668;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar3) {
        *plVar21 = lVar18;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_00b08668:
    bVar3 = true;
  }
  lVar18 = nn::os::GetCurrentThread();
  plVar21 = (long *)(lVar20 + 0x120);
  do {
    if (*plVar21 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar20 + 0x114));
        while (*plVar21 == 0) {
          cVar2 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar6) {
            *plVar21 = lVar18;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00b086b8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar6) {
      *plVar21 = lVar18;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00b086b8:
  puVar5 = PTR_DAT_0437a140;
  puVar4 = PTR_DAT_0437a138;
  plVar21 = *(long **)(lVar20 + 0x1a0);
  plVar22 = *(long **)(lVar20 + 0x1a8);
  if (plVar21 != plVar22) {
    do {
      lVar18 = *plVar21;
      if (lVar18 != 0) {
        puVar12 = (undefined8 *)(*(code *)**(undefined8 **)(lVar18 + 8))((undefined8 *)(lVar18 + 8))
        ;
        if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
          uVar13 = FUN_009b19b4();
          *(undefined8 *)puVar5 = uVar13;
          __cxa_guard_release(puVar4);
        }
        if (puVar12 != (undefined8 *)0x0) {
LAB_00b086fc:
          if (puVar12 != (undefined8 *)puVar5) goto code_r0x00b08704;
          plVar10 = *(long **)(*(long *)(lVar18 + 0x1c0) + 0x88);
          if (plVar10 != (long *)0x0) {
            plVar22 = plVar10 + 10;
            do {
              cVar2 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar6) {
                *(int *)plVar22 = (int)*plVar22 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            do {
              iVar8 = (int)*plVar22 + -1;
              cVar2 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar6) {
                *(int *)plVar22 = iVar8;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar8 == 0) {
              (**(code **)(*plVar10 + 0x10))();
            }
            goto LAB_00b08750;
          }
        }
      }
LAB_00b0870c:
      plVar21 = plVar21 + 1;
    } while (plVar21 != plVar22);
    plVar21 = plVar22;
  }
LAB_00b08750:
  if ((plVar21 == *(long **)(lVar20 + 0x1a8)) || (*plVar21 == 0)) {
    plVar21 = *(long **)(lVar20 + 0x168);
    plVar22 = *(long **)(lVar20 + 0x170);
    if (plVar21 != plVar22) {
      do {
        lVar18 = *plVar21;
        if (lVar18 != 0) {
          puVar12 = (undefined8 *)
                    (*(code *)**(undefined8 **)(lVar18 + 8))((undefined8 *)(lVar18 + 8));
          if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
            uVar13 = FUN_009b19b4();
            *(undefined8 *)puVar5 = uVar13;
            __cxa_guard_release(puVar4);
          }
          if (puVar12 != (undefined8 *)0x0) {
LAB_00b08790:
            if (puVar12 != (undefined8 *)puVar5) goto code_r0x00b08798;
            plVar10 = *(long **)(*(long *)(lVar18 + 0x1c0) + 0x88);
            if (plVar10 != (long *)0x0) {
              plVar22 = plVar10 + 10;
              do {
                cVar2 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                if (bVar6) {
                  *(int *)plVar22 = (int)*plVar22 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              do {
                iVar8 = (int)*plVar22 + -1;
                cVar2 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                if (bVar6) {
                  *(int *)plVar22 = iVar8;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar8 == 0) {
                (**(code **)(*plVar10 + 0x10))();
              }
              goto LAB_00b087e4;
            }
          }
        }
LAB_00b087a0:
        plVar21 = plVar21 + 1;
      } while (plVar21 != plVar22);
      plVar21 = plVar22;
    }
LAB_00b087e4:
    if (plVar21 == *(long **)(lVar20 + 0x170)) {
      lVar18 = 0;
    }
    else {
      lVar18 = 0;
      if (*plVar21 != 0) {
        lVar18 = *plVar21 + -0x48;
      }
    }
    bVar6 = lVar18 == 0;
  }
  else {
    bVar6 = false;
    lVar18 = *plVar21 + -0x48;
  }
  *(undefined8 *)(lVar20 + 0x120) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar20 + 0x114));
  if (bVar3) {
    *(undefined8 *)(lVar20 + 0x108) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar20 + 0xfc));
  }
  if (bVar6) {
    lVar18 = nn::os::GetCurrentThread();
    plVar21 = (long *)(lVar20 + 0x140);
    do {
      lVar19 = *plVar21;
      lVar15 = *(long *)(lVar20 + 0x148);
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar3) {
        *plVar21 = lVar19;
        *(long *)(lVar20 + 0x148) = lVar15;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      while ((lVar19 != 0 && (lVar18 != lVar19))) {
        nn::os::WaitLightEvent((LightEventType *)(lVar20 + 0x134));
        do {
          lVar19 = *plVar21;
          lVar15 = *(long *)(lVar20 + 0x148);
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar3) {
            *plVar21 = lVar19;
            *(long *)(lVar20 + 0x148) = lVar15;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      while( true ) {
        if (*plVar21 != lVar19 || *(long *)(lVar20 + 0x148) != lVar15) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar3) {
          *plVar21 = lVar19;
          *(long *)(lVar20 + 0x144) = lVar15 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          plVar22 = (long *)(lVar20 + 0x160);
          lVar19 = *plVar22;
          lVar18 = nn::os::GetCurrentThread();
          if (lVar18 != lVar19) {
            lVar18 = nn::os::GetCurrentThread();
            goto LAB_00b088b8;
          }
          bVar3 = false;
          goto LAB_00b08920;
        }
      }
      ClearExclusiveLocal();
      lVar19 = *plVar21;
      lVar15 = *(long *)(lVar20 + 0x148);
    } while( true );
  }
LAB_00b08a6c:
  bVar7 = bVar7 & lVar14 != 0 & lVar18 != 0;
LAB_00b08a78:
  return bVar7 & 1;
  while( true ) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar3) {
      *plVar22 = lVar14;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') break;
LAB_00b08488:
    if (*plVar22 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x154));
        while (*plVar22 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar3) {
            *plVar22 = lVar14;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00b084d8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_00b084d8:
  bVar3 = true;
LAB_00b084dc:
  plVar22 = *(long **)(lVar19 + 0x1d8);
  plVar10 = *(long **)(lVar19 + 0x1e0);
  if (plVar22 != plVar10) {
    do {
      lVar14 = *plVar22;
      if (lVar14 != 0) {
        plVar11 = (long *)(*(code *)**(undefined8 **)(lVar14 + 8))((undefined8 *)(lVar14 + 8));
        lVar18 = FUN_009b19b4();
        for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
          if (plVar11 == (long *)lVar18) {
            if (*(long *)(lVar14 + 0x1a8) != 0) goto LAB_00b0853c;
            break;
          }
        }
      }
      plVar22 = plVar22 + 1;
    } while (plVar22 != plVar10);
    plVar22 = plVar10;
LAB_00b0853c:
    if (plVar22 != *(long **)(lVar19 + 0x1e0)) {
      lVar14 = 0;
      if (*plVar22 != 0) {
        lVar14 = *plVar22 + -0x48;
      }
      goto joined_r0x00b0854c;
    }
  }
  lVar14 = 0;
joined_r0x00b0854c:
  if (bVar3) {
    *(undefined8 *)(lVar19 + 0x160) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0x154));
  }
  do {
    lVar18 = *plVar21;
    lVar20 = *(long *)(lVar19 + 0x148);
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar3) {
      *plVar21 = lVar18;
      *(long *)(lVar19 + 0x148) = lVar20;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00b08588:
  lVar15 = *plVar21;
  lVar16 = *(long *)(lVar19 + 0x148);
  if (lVar15 == lVar18 && lVar16 == lVar20) goto code_r0x00b0859c;
  ClearExclusiveLocal();
  do {
    do {
      lVar18 = *plVar21;
      if (lVar18 != lVar15 || *(long *)(lVar19 + 0x148) != lVar16) {
        bVar3 = false;
        ClearExclusiveLocal();
        goto LAB_00b085c8;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar3) {
        *plVar21 = lVar15;
        *(long *)(lVar19 + 0x144) = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar3 = true;
LAB_00b085c8:
    lVar15 = lVar18;
    lVar16 = *(long *)(lVar19 + 0x148);
  } while (!bVar3);
LAB_00b085fc:
  nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0x134));
  goto LAB_00b08604;
code_r0x00b0859c:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
  if (bVar3) {
    *plVar21 = lVar18;
    *(long *)(lVar19 + 0x144) = lVar20 + -1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_00b085fc;
  goto LAB_00b08588;
code_r0x00b08704:
  puVar12 = (undefined8 *)*puVar12;
  if (puVar12 == (undefined8 *)0x0) goto LAB_00b0870c;
  goto LAB_00b086fc;
code_r0x00b08798:
  puVar12 = (undefined8 *)*puVar12;
  if (puVar12 == (undefined8 *)0x0) goto LAB_00b087a0;
  goto LAB_00b08790;
  while( true ) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar3) {
      *plVar22 = lVar18;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') break;
LAB_00b088b8:
    if (*plVar22 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar20 + 0x154));
        while (*plVar22 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar3) {
            *plVar22 = lVar18;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00b0891c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_00b0891c:
  bVar3 = true;
LAB_00b08920:
  plVar22 = *(long **)(lVar20 + 0x1d8);
  plVar10 = *(long **)(lVar20 + 0x1e0);
  if (plVar22 != plVar10) {
    do {
      lVar18 = *plVar22;
      if (lVar18 != 0) {
        puVar12 = (undefined8 *)(*(code *)**(undefined8 **)(lVar18 + 8))((undefined8 *)(lVar18 + 8))
        ;
        if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
          uVar13 = FUN_009b19b4();
          *(undefined8 *)puVar5 = uVar13;
          __cxa_guard_release(puVar4);
        }
        if (puVar12 != (undefined8 *)0x0) {
LAB_00b08950:
          if (puVar12 != (undefined8 *)puVar5) goto code_r0x00b08958;
          plVar11 = *(long **)(*(long *)(lVar18 + 0x1c0) + 0x88);
          if (plVar11 != (long *)0x0) {
            plVar10 = plVar11 + 10;
            do {
              cVar2 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar6) {
                *(int *)plVar10 = (int)*plVar10 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            do {
              iVar8 = (int)*plVar10 + -1;
              cVar2 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar6) {
                *(int *)plVar10 = iVar8;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar8 == 0) {
              (**(code **)(*plVar11 + 0x10))();
            }
            goto LAB_00b089a4;
          }
        }
      }
LAB_00b08960:
      plVar22 = plVar22 + 1;
    } while (plVar22 != plVar10);
    plVar22 = plVar10;
  }
LAB_00b089a4:
  if (plVar22 == *(long **)(lVar20 + 0x1e0)) {
    lVar18 = 0;
  }
  else {
    lVar18 = 0;
    if (*plVar22 != 0) {
      lVar18 = *plVar22 + -0x48;
    }
  }
  if (bVar3) {
    *(undefined8 *)(lVar20 + 0x160) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar20 + 0x154));
  }
  do {
    lVar19 = *plVar21;
    lVar15 = *(long *)(lVar20 + 0x148);
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar3) {
      *plVar21 = lVar19;
      *(long *)(lVar20 + 0x148) = lVar15;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00b089f0:
  lVar16 = *plVar21;
  lVar17 = *(long *)(lVar20 + 0x148);
  if (lVar16 == lVar19 && lVar17 == lVar15) goto code_r0x00b08a04;
  ClearExclusiveLocal();
  do {
    do {
      lVar19 = *plVar21;
      if (lVar19 != lVar16 || *(long *)(lVar20 + 0x148) != lVar17) {
        bVar3 = false;
        ClearExclusiveLocal();
        goto LAB_00b08a30;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar3) {
        *plVar21 = lVar16;
        *(long *)(lVar20 + 0x144) = lVar17 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar3 = true;
LAB_00b08a30:
    lVar16 = lVar19;
    lVar17 = *(long *)(lVar20 + 0x148);
  } while (!bVar3);
LAB_00b08a64:
  nn::os::SignalLightEvent((LightEventType *)(lVar20 + 0x134));
  goto LAB_00b08a6c;
code_r0x00b08958:
  puVar12 = (undefined8 *)*puVar12;
  if (puVar12 == (undefined8 *)0x0) goto LAB_00b08960;
  goto LAB_00b08950;
code_r0x00b08a04:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
  if (bVar3) {
    *plVar21 = lVar19;
    *(long *)(lVar20 + 0x144) = lVar15 + -1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_00b08a64;
  goto LAB_00b089f0;
}


