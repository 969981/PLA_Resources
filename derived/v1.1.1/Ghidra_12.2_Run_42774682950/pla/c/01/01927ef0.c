/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01927ef0; name: FUN_01927ef0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01927ef0(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined8 *local_d0;
  long *local_c8;
  long *local_c0;
  undefined8 uStack_b8;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  undefined1 auStack_98 [24];
  long *local_80;
  long *local_78;
  undefined8 uStack_70;
  long *local_68;
  
  local_78 = (long *)0x0;
  lVar8 = FUN_00957dc4(&local_68,*(undefined8 *)(param_1 + 8),&local_78);
  *(ulong *)(lVar8 + 0x1e0) = *(ulong *)(lVar8 + 0x1e0) | 8;
  if (lVar8 != 0) {
    lVar15 = *(long *)(lVar8 + 0x58);
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_019283dc;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar10 = *(long **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (plVar10 != (long *)0x0) {
    lVar15 = plVar10[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))();
    }
  }
  *(long *)(param_1 + 0x68) = lVar8;
  local_78 = (long *)0x0;
  lVar8 = FUN_00957dc4(&local_68,*(undefined8 *)(param_1 + 8),&local_78);
  *(ulong *)(lVar8 + 0x1e0) = *(ulong *)(lVar8 + 0x1e0) | 8;
  if (lVar8 != 0) {
    lVar15 = *(long *)(lVar8 + 0x58);
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_019283dc;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar10 = *(long **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (plVar10 != (long *)0x0) {
    lVar15 = plVar10[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))();
    }
  }
  *(long *)(param_1 + 0x70) = lVar8;
  lVar8 = *(long *)(param_1 + 0x68);
  pcVar12 = *(code **)(lVar8 + 0x3a8);
  if (pcVar12 != (code *)0x0) {
    *(undefined8 *)(lVar8 + 0x3b0) = 0;
    *(undefined8 *)(lVar8 + 0x3b8) = 0;
    *(undefined8 *)(lVar8 + 0x3a0) = 0;
    *(undefined8 *)(lVar8 + 0x3a8) = 0;
    (*pcVar12)(lVar8 + 0x3c0);
  }
  *(long *)(lVar8 + 0x3c0) = param_1;
  *(undefined1 **)(lVar8 + 0x3c8) = &LAB_0192902c;
  *(undefined8 *)(lVar8 + 0x3d0) = 0;
  *(undefined1 **)(lVar8 + 0x3a0) = &LAB_0192a75c;
  *(undefined1 **)(lVar8 + 0x3a8) = &LAB_0192a778;
  *(undefined1 **)(lVar8 + 0x3b0) = &LAB_0192a77c;
  *(undefined1 **)(lVar8 + 0x3b8) = &LAB_0192a790;
  lVar15 = *(long *)(param_1 + 0x68);
  lVar8 = nn::os::GetCurrentThread();
  plVar10 = (long *)(lVar15 + 0x208);
  do {
    if (*plVar10 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x1fc));
        while (*plVar10 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = lVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_019280cc;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *plVar10 = lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_019280cc:
  lVar13 = *(long *)(param_2 + 0x78);
  lVar8 = lVar13;
  if (*(long *)(lVar13 + 0x1d0) != 0) {
    lVar8 = *(long *)(lVar13 + 0x1d0);
  }
  if (*(long *)(lVar13 + 0x1d8) != 0) {
    lVar13 = *(long *)(lVar13 + 0x1d8);
  }
  if (lVar8 == lVar13) {
LAB_019283dc:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_02a70230(lVar15);
  lVar8 = *(long *)(param_1 + 0x70);
  pcVar12 = *(code **)(lVar8 + 0x3a8);
  if (pcVar12 != (code *)0x0) {
    *(undefined8 *)(lVar8 + 0x3b0) = 0;
    *(undefined8 *)(lVar8 + 0x3b8) = 0;
    *(undefined8 *)(lVar8 + 0x3a0) = 0;
    *(undefined8 *)(lVar8 + 0x3a8) = 0;
    (*pcVar12)(lVar8 + 0x3c0);
  }
  *(long *)(lVar8 + 0x3c0) = param_1;
  *(undefined1 **)(lVar8 + 0x3c8) = &LAB_01929bf0;
  *(undefined8 *)(lVar8 + 0x3d0) = 0;
  *(undefined1 **)(lVar8 + 0x3a0) = &LAB_0192a75c;
  *(undefined1 **)(lVar8 + 0x3a8) = &LAB_0192a778;
  *(undefined1 **)(lVar8 + 0x3b0) = &LAB_0192a77c;
  *(undefined1 **)(lVar8 + 0x3b8) = &LAB_0192a790;
  lVar13 = *(long *)(param_1 + 0x70);
  lVar8 = nn::os::GetCurrentThread();
  plVar10 = (long *)(lVar13 + 0x208);
  do {
    if (*plVar10 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x1fc));
        while (*plVar10 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = lVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01928170;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *plVar10 = lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01928170:
  lVar14 = *(long *)(param_2 + 0xc0);
  lVar8 = lVar14;
  if (*(long *)(lVar14 + 0x1d0) != 0) {
    lVar8 = *(long *)(lVar14 + 0x1d0);
  }
  if (*(long *)(lVar14 + 0x1d8) != 0) {
    lVar14 = *(long *)(lVar14 + 0x1d8);
  }
  if (lVar8 == lVar14) goto LAB_019283dc;
  FUN_02a70230(lVar13);
  *(undefined8 *)(lVar13 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x1fc));
  *(undefined8 *)(lVar15 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x1fc));
  plVar10 = (long *)(param_1 + 0x78);
  FUN_0192a7a4(plVar10,param_2);
  FUN_00b645bc((long *)(param_1 + 0x88),param_2 + 0x10);
  FUN_009630f4(param_1 + 0x98,param_2 + 0x20);
  FUN_0192aa1c(param_1 + 0xa8,param_2 + 0x30);
  FUN_0192ac94(param_1 + 0xb8,param_2 + 0x40);
  FUN_00cf9b38(param_1 + 200,param_2 + 0x50);
  puVar4 = PTR_DAT_04379fc8;
  lVar8 = *(long *)(param_1 + 0x98);
  plVar17 = (long *)0x0;
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0xc) == 0) {
LAB_019284c8:
      plVar17 = (long *)0x0;
    }
    else {
      piVar1 = (int *)(lVar8 + 0xc);
      iVar7 = *(int *)(lVar8 + 0xc);
      do {
        puVar18 = *(undefined8 **)(lVar8 + 0x10);
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar6 != 0)) {
            uVar9 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar9;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_04379fd0 = PTR_DAT_043794d8;
          __cxa_guard_release(puVar4);
        }
        if (puVar18 == (undefined8 *)0x0) goto LAB_019284c8;
        while (puVar18 != (undefined8 *)PTR_DAT_04379fd0) {
          puVar18 = (undefined8 *)*puVar18;
          plVar17 = (long *)0x0;
          if (puVar18 == (undefined8 *)0x0) goto LAB_01928214;
        }
        iVar6 = *piVar1;
        if (iVar6 == iVar7) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar8 = *(long *)(lVar8 + 0x18);
            if (lVar8 == 0) goto LAB_019284c8;
            plVar19 = (long *)(lVar8 + -0x50);
            FUN_018f98bc(&local_78,plVar19);
            if (local_78 == (long *)0x0) {
              plVar17 = (long *)0x0;
              goto LAB_01928458;
            }
            FUN_009b8630(&local_68);
            if (local_68 == (long *)0x0) {
              plVar17 = (long *)0x0;
              plVar11 = local_78;
              goto joined_r0x019285bc;
            }
            lVar15 = local_68[0x35];
            if (lVar15 == 0) goto LAB_019284fc;
            if (*(int *)(lVar15 + 0xc) == 0) goto LAB_019286f0;
            piVar1 = (int *)(lVar15 + 0xc);
            iVar7 = *(int *)(lVar15 + 0xc);
            goto LAB_019285d4;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        plVar17 = (long *)0x0;
        iVar7 = iVar6;
      } while (iVar6 != 0);
    }
  }
  goto LAB_01928214;
  while (iVar7 = iVar6, iVar6 != 0) {
LAB_019285d4:
    puVar18 = *(undefined8 **)(lVar15 + 0x10);
    if (((*PTR_DAT_043794b0 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_043794b0), iVar6 != 0)) {
      if (((*PTR_DAT_043794c0 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar6 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar6 != 0)) {
          uVar9 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar9;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
        __cxa_guard_release(PTR_DAT_043794c0);
      }
      *(undefined **)PTR_DAT_043794b8 = PTR_DAT_043794c8;
      __cxa_guard_release(PTR_DAT_043794b0);
    }
    if (puVar18 == (undefined8 *)0x0) goto LAB_019286f0;
    while (puVar18 != (undefined8 *)PTR_DAT_043794b8) {
      puVar18 = (undefined8 *)*puVar18;
      if (puVar18 == (undefined8 *)0x0) goto LAB_019284fc;
    }
    iVar6 = *piVar1;
    if (iVar6 == iVar7) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        plVar17 = (long *)0x0;
        if (*(long *)(lVar15 + 0x18) != 0) {
          plVar17 = (long *)(*(long *)(lVar15 + 0x18) + -0x50);
        }
        goto joined_r0x019286f8;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
LAB_019284fc:
  plVar17 = (long *)0x0;
joined_r0x019286f8:
  plVar11 = local_78;
  if (local_68 != (long *)0x0) {
    lVar15 = *(long *)((long)local_68 + 0x58);
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
      plVar11 = local_78;
    }
  }
joined_r0x019285bc:
  local_78 = plVar11;
  if (plVar11 != (long *)0x0) {
    plVar16 = plVar11 + 1;
    do {
      iVar7 = (int)*plVar16 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *(int *)plVar16 = iVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 == 0) {
      plVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_68 = (long *)*plVar11;
      FUN_02a44274(lVar15 + 0xd8,&local_68);
    }
  }
LAB_01928458:
  lVar8 = *(long *)(lVar8 + 8);
  piVar1 = (int *)(lVar8 + 0xc);
  do {
    iVar7 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar7 + -1 == 0) {
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (**(code **)(*plVar19 + 0x20))(plVar19);
  }
LAB_01928214:
  puVar4 = PTR_LAB_0437a8d8;
  lVar8 = 0;
  do {
    lVar15 = *(long *)(param_1 + 0x88);
    if ((lVar15 != 0) && (*(int *)(lVar15 + 0xc) != 0)) {
      piVar1 = (int *)(lVar15 + 0xc);
      iVar7 = *(int *)(lVar15 + 0xc);
      do {
        plVar19 = *(long **)(lVar15 + 0x10);
        if (((*PTR_DAT_0437a0e8 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a0e8), iVar6 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar6 != 0)) {
            uVar9 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar9;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_0437a0f0 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_0437a0e8);
        }
        while( true ) {
          if (plVar19 == (long *)0x0) goto LAB_0192822c;
          if (plVar19 == (long *)PTR_DAT_0437a0f0) break;
          plVar19 = (long *)*plVar19;
        }
        iVar6 = *piVar1;
        if (iVar6 == iVar7) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 != '\0') goto LAB_01928778;
          lVar15 = *(long *)(lVar15 + 0x18);
          if (lVar15 != 0) {
            plVar19 = (long *)(lVar15 + -0x50);
            uVar9 = *(undefined8 *)(param_1 + 8);
            if (((*PTR_DAT_0437a7c0 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_0437a7c0), iVar7 != 0)) {
              local_78 = (long *)FUN_00938550();
              puVar5 = PTR_DAT_0437a7d0;
              FUN_00b0fde8(PTR_DAT_0437a7d0,&local_78);
              FUN_00100250(puVar4,puVar5,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_0437a7c0);
            }
            FUN_02a47560(auStack_98,PTR_DAT_0437a7d0);
            FUN_01845684(&local_78,plVar19,uVar9,auStack_98);
            plVar16 = (long *)(param_1 + lVar8 * 8 + 0xd8);
            plVar11 = (long *)*plVar16;
            *plVar16 = 0;
            if (plVar11 != (long *)0x0) {
              lVar13 = plVar11[0xb];
              piVar1 = (int *)(lVar13 + 0xc);
              do {
                iVar7 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar7 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar7 + -1 == 0) {
                *(undefined8 *)(lVar13 + 0x18) = 0;
                (**(code **)(*plVar11 + 0x20))();
              }
            }
            plVar11 = local_78;
            local_78 = (long *)0x0;
            *plVar16 = (long)plVar11;
            if (local_80 != (long *)0x0) {
              (**(code **)(*local_80 + 0x20))();
              plVar11 = (long *)*plVar16;
            }
            local_a8 = plVar11;
            if (plVar11 != (long *)0x0) {
              lVar13 = plVar11[0xb];
              if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_019283dc;
              if (*(long *)(lVar13 + 0x10) == 0) {
                uVar9 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
                *(undefined8 *)(lVar13 + 0x10) = uVar9;
              }
              piVar1 = (int *)(lVar13 + 0xc);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = *piVar1 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            FUN_018457a0(&local_a0,plVar19,&local_a8,*(undefined8 *)(param_1 + 8));
            if (local_a8 != (long *)0x0) {
              lVar13 = local_a8[0xb];
              piVar1 = (int *)(lVar13 + 0xc);
              do {
                iVar7 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar7 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar7 + -1 == 0) {
                *(undefined8 *)(lVar13 + 0x18) = 0;
                (**(code **)(*local_a8 + 0x20))();
              }
            }
            FUN_01838b4c(local_a0,0xd);
            FUN_01836b0c(local_a0);
            local_b0 = local_a0;
            if (local_a0 != (long *)0x0) {
              lVar13 = local_a0[0xb];
              if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_019283dc;
              if (*(long *)(lVar13 + 0x10) == 0) {
                uVar9 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
                *(undefined8 *)(lVar13 + 0x10) = uVar9;
              }
              piVar1 = (int *)(lVar13 + 0xc);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = *piVar1 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            FUN_01845ac4(plVar19,&local_b0);
            if (local_b0 != (long *)0x0) {
              lVar13 = local_b0[0xb];
              piVar1 = (int *)(lVar13 + 0xc);
              do {
                iVar7 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar7 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar7 + -1 == 0) {
                *(undefined8 *)(lVar13 + 0x18) = 0;
                (**(code **)(*local_b0 + 0x20))();
              }
            }
            local_78 = *(long **)(lVar15 + 0x40);
            uStack_70 = *(undefined8 *)(lVar15 + 0x48);
            lVar13 = FUN_00bd8988(*plVar16,*(undefined8 *)(*plVar16 + 8),&local_78);
            if ((plVar17 != (long *)0x0) && (lVar13 != 0)) {
              (**(code **)(*plVar17 + 0x18))(&local_78,plVar17);
              local_c0 = (long *)0x0;
              uStack_b8 = 0;
              FUN_0087f944(&local_c0,&local_78);
              plVar11 = local_78;
              if (local_78 != (long *)0x0) {
                plVar16 = local_78 + 1;
                do {
                  iVar7 = (int)*plVar16 + -1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                  if (bVar3) {
                    *(int *)plVar16 = iVar7;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar7 == 0) {
                  local_78[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar14 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar14;
                  local_68 = (long *)*plVar11;
                  FUN_02a44274(lVar14 + 0xd8,&local_68);
                }
              }
              FUN_00d804f8(lVar13,&local_c0,1);
              plVar11 = local_c0;
              if (local_c0 != (long *)0x0) {
                plVar16 = local_c0 + 1;
                do {
                  iVar7 = (int)*plVar16 + -1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                  if (bVar3) {
                    *(int *)plVar16 = iVar7;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar7 == 0) {
                  local_c0[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar13 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar13;
                  local_78 = (long *)*plVar11;
                  FUN_02a44274(lVar13 + 0xd8,&local_78);
                }
              }
            }
            if (local_a0 != (long *)0x0) {
              lVar13 = local_a0[0xb];
              piVar1 = (int *)(lVar13 + 0xc);
              do {
                iVar7 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar7 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar7 + -1 == 0) {
                *(undefined8 *)(lVar13 + 0x18) = 0;
                (**(code **)(*local_a0 + 0x20))();
              }
            }
            lVar15 = *(long *)(lVar15 + 8);
            piVar1 = (int *)(lVar15 + 0xc);
            do {
              iVar7 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar7 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar7 + -1 != 0) break;
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*plVar19 + 0x20))();
            lVar15 = *plVar10;
            goto joined_r0x01928ae8;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_01928778:
        iVar7 = iVar6;
      } while (iVar6 != 0);
    }
LAB_0192822c:
    lVar15 = *plVar10;
joined_r0x01928ae8:
    if (lVar15 == 0) {
      local_a0 = (long *)0x0;
    }
    else {
      FUN_009cd8d4(&local_a0);
      if (local_a0 != (long *)0x0) {
        FUN_01f07da0(&local_78,local_a0,0);
        plVar19 = local_78;
        if (local_78 == (long *)0x0) {
          local_c8 = (long *)0x0;
        }
        else {
          if (*(int *)((long)local_78 + 0xc) != 0) {
            piVar1 = (int *)((long)local_78 + 0xc);
            iVar7 = *(int *)((long)local_78 + 0xc);
            do {
              local_d0 = (undefined8 *)plVar19[2];
              plVar11 = local_c8;
              if ((*PTR_DAT_0437a740 & 1) == 0) {
                iVar6 = __cxa_guard_acquire(PTR_DAT_0437a740);
                plVar11 = local_c8;
                if (iVar6 != 0) {
                  if (((*PTR_DAT_043794d0 & 1) == 0) &&
                     (iVar6 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar6 != 0)) {
                    uVar9 = FUN_0087f8f0();
                    *(undefined8 *)PTR_DAT_043794d8 = uVar9;
                    __cxa_guard_release(PTR_DAT_043794d0);
                  }
                  *(undefined **)PTR_DAT_0437a748 = PTR_DAT_043794d8;
                  __cxa_guard_release(PTR_DAT_0437a740);
                  plVar11 = local_c8;
                }
              }
              local_c8 = (long *)0x0;
              if (local_d0 == (undefined8 *)0x0) goto LAB_01928d7c;
              while (local_d0 != (undefined8 *)PTR_DAT_0437a748) {
                local_d0 = (undefined8 *)*local_d0;
                if (local_d0 == (undefined8 *)0x0) {
                  local_c8 = (long *)0x0;
                  goto LAB_01928d7c;
                }
              }
              iVar6 = *piVar1;
              if (iVar6 == iVar7) {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar7 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 == '\0') {
                  lVar15 = plVar19[3];
                  local_c8 = (long *)0x0;
                  if (lVar15 != 0) {
                    local_c8 = (long *)(lVar15 + -0x50);
                  }
                  goto LAB_01928d7c;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              iVar7 = iVar6;
              local_c8 = plVar11;
            } while (iVar6 != 0);
          }
          local_c8 = (long *)0x0;
LAB_01928d7c:
          plVar19 = local_78;
          if (local_78 != (long *)0x0) {
            plVar11 = local_78 + 1;
            do {
              iVar7 = (int)*plVar11 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar3) {
                *(int *)plVar11 = iVar7;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar7 == 0) {
              local_78[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar15 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar15;
              local_68 = (long *)*plVar19;
              FUN_02a44274(lVar15 + 0xd8,&local_68);
            }
          }
          if (local_c8 != (long *)0x0) {
            lVar15 = param_1 + lVar8 * 8;
            lVar13 = FUN_017d3d24(*(undefined8 *)(lVar15 + 0xd8),*(undefined8 *)(param_1 + 8),
                                  &local_c8);
            if (((*PTR_DAT_0437a780 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_0437a780);
            }
            lVar14 = *(long *)PTR_DAT_0437a788;
            *(long *)PTR_DAT_0437a790 = lVar14;
            FUN_02c90b20(lVar13,*(long *)(lVar14 + 0x78) + lVar8 * 0x30 + 0x428);
            FUN_02c90b30(lVar13);
            if (lVar13 != 0) {
              lVar14 = *(long *)(lVar13 + 0x58);
              if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_019283dc;
              if (*(long *)(lVar14 + 0x10) == 0) {
                uVar9 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
                *(undefined8 *)(lVar14 + 0x10) = uVar9;
              }
              piVar1 = (int *)(lVar14 + 0xc);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = *piVar1 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            plVar19 = (long *)(lVar15 + 0xe8);
            plVar11 = (long *)*plVar19;
            *plVar19 = lVar13;
            if (plVar11 != (long *)0x0) {
              lVar15 = plVar11[0xb];
              piVar1 = (int *)(lVar15 + 0xc);
              do {
                iVar7 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar7 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar7 + -1 == 0) {
                *(undefined8 *)(lVar15 + 0x18) = 0;
                (**(code **)(*plVar11 + 0x20))();
              }
            }
            if (local_c8 != (long *)0x0) {
              lVar15 = local_c8[0xb];
              piVar1 = (int *)(lVar15 + 0xc);
              do {
                iVar7 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar7 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar7 + -1 == 0) {
                *(undefined8 *)(lVar15 + 0x18) = 0;
                (**(code **)(*local_c8 + 0x20))();
              }
            }
          }
        }
        if (local_a0 != (long *)0x0) {
          lVar15 = local_a0[0xb];
          piVar1 = (int *)(lVar15 + 0xc);
          do {
            iVar7 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 + -1 == 0) {
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*local_a0 + 0x20))();
          }
        }
      }
    }
    local_78 = *(long **)(param_2 + 0xd0);
    uStack_70 = *(undefined8 *)(param_2 + 0xd8);
    plVar19 = *(long **)(param_1 + lVar8 * 8 + 0xd8);
    if (plVar19 == (long *)0x0) {
      FUN_00da99e0(0,&local_78);
    }
    else {
      lVar15 = plVar19[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_019283dc;
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar9;
      }
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      FUN_00da99e0(plVar19,&local_78);
      lVar15 = plVar19[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*plVar19 + 0x20))(plVar19);
      }
    }
    lVar8 = lVar8 + 1;
    if (lVar8 == 2) {
      *(undefined1 *)(param_1 + 0xf8) = 1;
      if (plVar17 != (long *)0x0) {
        lVar8 = plVar17[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          iVar7 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*plVar17 + 0x20))(plVar17);
        }
      }
      return;
    }
  } while( true );
LAB_019286f0:
  plVar17 = (long *)0x0;
  goto joined_r0x019286f8;
}


