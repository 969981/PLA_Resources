/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e80640; name: FUN_01e80640
 */


void FUN_01e80640(long param_1)

{
  LightEventType *pLVar1;
  int *piVar2;
  undefined1 uVar3;
  bool bVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  undefined8 *puVar20;
  long *plVar21;
  float fVar22;
  long *local_78;
  long *local_68;
  
  puVar9 = PTR_DAT_0437af00;
  puVar8 = PTR_DAT_0437aef8;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  lVar18 = *(long *)(param_1 + 0x68);
  if (lVar18 == 0) {
LAB_01e80670:
    plVar17 = (long *)0x0;
    lVar18 = *(long *)(param_1 + 0x78);
    if (lVar18 == 0) goto LAB_01e8067c;
LAB_01e80bb0:
    puVar8 = PTR_DAT_04381ad0;
    puVar7 = PTR_DAT_04381ac8;
    puVar6 = PTR_DAT_043794d0;
    if (*(int *)(lVar18 + 0xc) != 0) {
      piVar2 = (int *)(lVar18 + 0xc);
      iVar11 = *(int *)(lVar18 + 0xc);
      do {
        puVar20 = *(undefined8 **)(lVar18 + 0x10);
        if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
          if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
            uVar16 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar16;
            __cxa_guard_release(puVar6);
          }
          *(undefined **)puVar8 = PTR_DAT_043794d8;
          __cxa_guard_release(puVar7);
        }
        if (puVar20 == (undefined8 *)0x0) goto LAB_01e80c90;
        while (puVar20 != (undefined8 *)puVar8) {
          puVar20 = (undefined8 *)*puVar20;
          if (puVar20 == (undefined8 *)0x0) goto LAB_01e8067c;
        }
        iVar12 = *piVar2;
        if (iVar12 == iVar11) {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar10) {
            *piVar2 = iVar11 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            plVar21 = (long *)0x0;
            if (*(long *)(lVar18 + 0x18) != 0) {
              plVar21 = (long *)(*(long *)(lVar18 + 0x18) + -0x50);
            }
            goto LAB_01e80c94;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar12;
      } while (iVar12 != 0);
      goto LAB_01e8067c;
    }
LAB_01e80c90:
    plVar21 = (long *)0x0;
LAB_01e80c94:
    lVar18 = *(long *)(param_1 + 0x88);
    if (lVar18 != 0) goto LAB_01e80ca0;
LAB_01e80684:
    local_78 = (long *)0x0;
  }
  else {
    if (*(int *)(lVar18 + 0xc) != 0) {
      piVar2 = (int *)(lVar18 + 0xc);
      iVar11 = *(int *)(lVar18 + 0xc);
      do {
        puVar20 = *(undefined8 **)(lVar18 + 0x10);
        if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
          if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
            uVar16 = FUN_0087f8f0();
            *(undefined8 *)puVar7 = uVar16;
            __cxa_guard_release(puVar6);
          }
          *(undefined **)puVar9 = puVar7;
          __cxa_guard_release(puVar8);
        }
        if (puVar20 == (undefined8 *)0x0) goto LAB_01e80ba0;
        while (puVar20 != (undefined8 *)puVar9) {
          puVar20 = (undefined8 *)*puVar20;
          if (puVar20 == (undefined8 *)0x0) goto LAB_01e80670;
        }
        iVar12 = *piVar2;
        if (iVar12 == iVar11) {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar10) {
            *piVar2 = iVar11 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            plVar17 = (long *)0x0;
            if (*(long *)(lVar18 + 0x18) != 0) {
              plVar17 = (long *)(*(long *)(lVar18 + 0x18) + -0x50);
            }
            goto LAB_01e80ba4;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar12;
      } while (iVar12 != 0);
      goto LAB_01e80670;
    }
LAB_01e80ba0:
    plVar17 = (long *)0x0;
LAB_01e80ba4:
    lVar18 = *(long *)(param_1 + 0x78);
    if (lVar18 != 0) goto LAB_01e80bb0;
LAB_01e8067c:
    plVar21 = (long *)0x0;
    lVar18 = *(long *)(param_1 + 0x88);
    if (lVar18 == 0) goto LAB_01e80684;
LAB_01e80ca0:
    puVar7 = PTR_DAT_04379c48;
    puVar6 = PTR_DAT_04379c40;
    if (*(int *)(lVar18 + 0xc) == 0) {
LAB_01e80e28:
      local_78 = (long *)0x0;
    }
    else {
      piVar2 = (int *)(lVar18 + 0xc);
      iVar11 = *(int *)(lVar18 + 0xc);
      do {
        puVar20 = *(undefined8 **)(lVar18 + 0x10);
        if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar12 != 0)) {
            uVar16 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar16;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)puVar7 = PTR_DAT_043794d8;
          __cxa_guard_release(puVar6);
        }
        if (puVar20 == (undefined8 *)0x0) goto LAB_01e80e28;
        while (puVar20 != (undefined8 *)puVar7) {
          puVar20 = (undefined8 *)*puVar20;
          local_78 = (long *)0x0;
          if (puVar20 == (undefined8 *)0x0) goto LAB_01e80688;
        }
        iVar12 = *piVar2;
        if (iVar12 == iVar11) {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar10) {
            *piVar2 = iVar11 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            local_78 = (long *)0x0;
            if (*(long *)(lVar18 + 0x18) != 0) {
              local_78 = (long *)(*(long *)(lVar18 + 0x18) + -0x50);
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        local_78 = (long *)0x0;
        iVar11 = iVar12;
      } while (iVar12 != 0);
    }
  }
LAB_01e80688:
  if (*(long *)(param_1 + 0x98) == 0) {
    local_68 = (long *)0x0;
  }
  else {
    FUN_009591d8(&local_68);
  }
  if (((plVar17 != (long *)0x0) && (local_78 != (long *)0x0)) && (local_68 != (long *)0x0)) {
    lVar18 = nn::os::GetCurrentThread();
    plVar19 = plVar17 + 0xf;
    do {
      if (*plVar19 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar17 + 0x6c));
          while (*plVar19 == 0) {
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar10) {
              *plVar19 = lVar18;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_01e806f4;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar10) {
        *plVar19 = lVar18;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_01e806f4:
    FUN_0185ec60(plVar17);
    FUN_0185da44(plVar17);
    pLVar1 = (LightEventType *)((long)plVar17 + 0x6c);
    *(char *)((long)plVar17 + 0x101) = (char)plVar17[0x20];
    *(undefined1 *)(plVar17 + 0x20) = 0;
    plVar17[0xf] = 0;
    nn::os::SignalLightEvent(pLVar1);
    iVar11 = FUN_0185e314(plVar17);
    iVar12 = FUN_0185e4f0(plVar17);
    iVar13 = FUN_0185e6d8(plVar17);
    iVar14 = FUN_0185e898(plVar17);
    lVar18 = nn::os::GetCurrentThread();
    do {
      if (*plVar19 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent(pLVar1);
          while (*plVar19 == 0) {
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar10) {
              *plVar19 = lVar18;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_01e80790;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar10) {
        *plVar19 = lVar18;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_01e80790:
    lVar18 = plVar17[0x1e];
    plVar17[0xf] = 0;
    nn::os::SignalLightEvent(pLVar1);
    lVar15 = nn::os::GetCurrentThread();
    do {
      if (*plVar19 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent(pLVar1);
          while (*plVar19 == 0) {
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar10) {
              *plVar19 = lVar15;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_01e807dc;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar10) {
        *plVar19 = lVar15;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_01e807dc:
    fVar22 = *(float *)(plVar17 + 0x21);
    plVar17[0xf] = 0;
    nn::os::SignalLightEvent(pLVar1);
    lVar15 = nn::os::GetCurrentThread();
    do {
      if (*plVar19 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent(pLVar1);
          while (*plVar19 == 0) {
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar10) {
              *plVar19 = lVar15;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_01e80828;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar10) {
        *plVar19 = lVar15;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_01e80828:
    uVar3 = *(undefined1 *)((long)plVar17 + 0x101);
    plVar17[0xf] = 0;
    nn::os::SignalLightEvent(pLVar1);
    FUN_018cf7dc(local_78,0 < iVar11,0 < iVar12,0 < iVar13,0 < iVar14,(char)lVar18 != '\0',
                 0.0 < fVar22,uVar3);
    if (plVar21 == (long *)0x0) goto joined_r0x01e809c4;
    if (((iVar11 < 1) && (*(char *)((long)local_78 + 0x69) == '\0')) &&
       ((*(char *)((long)local_78 + 0x6a) == '\0' && (*(char *)((long)local_78 + 0x6b) == '\0')))) {
      bVar10 = *(char *)((long)local_78 + 0x6c) != '\0';
    }
    else {
      bVar10 = true;
    }
    FUN_01861bd8(plVar21,bVar10);
    if (*(char *)(param_1 + 0xa8) == '\0') goto joined_r0x01e809c4;
    if (((*PTR_DAT_04379690 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379690), iVar11 != 0)) {
      FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379690);
    }
    lVar18 = *(long *)PTR_DAT_04379698;
    *(long *)PTR_DAT_043796a0 = lVar18;
    plVar19 = *(long **)(*(long *)(lVar18 + 0x50) + 0x30);
    if (plVar19 != (long *)0x0) {
      lVar18 = plVar19[0xb];
      if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_01e80b84;
      if (*(long *)(lVar18 + 0x10) == 0) {
        uVar16 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
        *(undefined8 *)(lVar18 + 0x10) = uVar16;
      }
      piVar2 = (int *)(lVar18 + 0xc);
      do {
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    lVar18 = FUN_01467b34(plVar19[0x99],"View_Top");
    if (lVar18 == 0) {
LAB_01e80b84:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if ((bVar10 ^ *(char *)(lVar18 + 0x3f23) != '\0') == 1) {
      lVar18 = FUN_01467b34(plVar19[0x99],"View_Top");
      if (lVar18 == 0) goto LAB_01e80b84;
      FUN_01490260(lVar18,bVar10,(plVar19[0xda] & 3U) == 0);
    }
    lVar18 = plVar19[0xb];
    piVar2 = (int *)(lVar18 + 0xc);
    do {
      iVar11 = *piVar2;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar10) {
        *piVar2 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*plVar19 + 0x20))(plVar19);
    }
  }
joined_r0x01e809c4:
  if (local_68 != (long *)0x0) {
    lVar18 = local_68[0xb];
    piVar2 = (int *)(lVar18 + 0xc);
    do {
      iVar11 = *piVar2;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar10) {
        *piVar2 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  if (local_78 != (long *)0x0) {
    lVar18 = local_78[0xb];
    piVar2 = (int *)(lVar18 + 0xc);
    do {
      iVar11 = *piVar2;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar10) {
        *piVar2 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*local_78 + 0x20))(local_78);
    }
  }
  if (plVar21 != (long *)0x0) {
    lVar18 = plVar21[0xb];
    piVar2 = (int *)(lVar18 + 0xc);
    do {
      iVar11 = *piVar2;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar10) {
        *piVar2 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*plVar21 + 0x20))(plVar21);
    }
  }
  if (plVar17 != (long *)0x0) {
    lVar18 = plVar17[0xb];
    piVar2 = (int *)(lVar18 + 0xc);
    do {
      iVar11 = *piVar2;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar10) {
        *piVar2 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))(plVar17);
    }
  }
  return;
}


