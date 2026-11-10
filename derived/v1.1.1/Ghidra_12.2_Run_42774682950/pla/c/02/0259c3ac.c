/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0259c3ac; name: FUN_0259c3ac
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0259c3ac(long param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  long *plVar22;
  long *local_d8;
  undefined8 uStack_d0;
  long *local_c8;
  undefined8 uStack_c0;
  long *local_b8;
  long *local_b0;
  undefined1 auStack_a8 [24];
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  undefined8 uStack_70;
  long *local_68;
  
  plVar14 = (long *)(param_1 + 0x78);
  FUN_0192a7a4(plVar14);
  FUN_019a94d0(param_1 + 0x88,param_2 + 0x20);
  FUN_01aabb3c(param_1 + 0x98,param_2 + 0x30);
  FUN_0192aa1c(param_1 + 0xa8,param_2 + 0x40);
  FUN_009630f4((long *)(param_1 + 0xb8),param_2 + 0x50);
  local_78 = (long *)0x0;
  lVar10 = FUN_00957dc4(&local_d8,*(undefined8 *)(param_1 + 8),&local_78);
  *(ulong *)(lVar10 + 0x1e0) = *(ulong *)(lVar10 + 0x1e0) | 8;
  if (lVar10 != 0) {
    lVar20 = *(long *)(lVar10 + 0x58);
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_0259c860;
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar12 = *(long **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (plVar12 != (long *)0x0) {
    lVar20 = plVar12[0xb];
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))();
    }
  }
  *(long *)(param_1 + 0x68) = lVar10;
  local_78 = (long *)0x0;
  lVar10 = FUN_00957dc4(&local_d8,*(undefined8 *)(param_1 + 8),&local_78);
  *(ulong *)(lVar10 + 0x1e0) = *(ulong *)(lVar10 + 0x1e0) | 8;
  if (lVar10 != 0) {
    lVar20 = *(long *)(lVar10 + 0x58);
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_0259c860;
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar12 = *(long **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (plVar12 != (long *)0x0) {
    lVar20 = plVar12[0xb];
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))();
    }
  }
  lVar20 = *(long *)(param_1 + 0x68);
  *(long *)(param_1 + 0x70) = lVar10;
  pcVar16 = *(code **)(lVar20 + 0x3a8);
  if (pcVar16 != (code *)0x0) {
    *(undefined8 *)(lVar20 + 0x3b0) = 0;
    *(undefined8 *)(lVar20 + 0x3b8) = 0;
    *(undefined8 *)(lVar20 + 0x3a0) = 0;
    *(undefined8 *)(lVar20 + 0x3a8) = 0;
    (*pcVar16)(lVar20 + 0x3c0);
  }
  *(long *)(lVar20 + 0x3c0) = param_1;
  *(undefined1 **)(lVar20 + 0x3c8) = &LAB_0259d568;
  *(undefined8 *)(lVar20 + 0x3d0) = 0;
  *(undefined1 **)(lVar20 + 0x3a0) = &LAB_0259f470;
  *(undefined1 **)(lVar20 + 0x3a8) = &LAB_0259f48c;
  *(undefined1 **)(lVar20 + 0x3b0) = &LAB_0259f490;
  *(undefined1 **)(lVar20 + 0x3b8) = &LAB_0259f4a4;
  lVar10 = *(long *)(param_1 + 0x70);
  pcVar16 = *(code **)(lVar10 + 0x3a8);
  if (pcVar16 != (code *)0x0) {
    *(undefined8 *)(lVar10 + 0x3b0) = 0;
    *(undefined8 *)(lVar10 + 0x3b8) = 0;
    *(undefined8 *)(lVar10 + 0x3a0) = 0;
    *(undefined8 *)(lVar10 + 0x3a8) = 0;
    (*pcVar16)(lVar10 + 0x3c0);
  }
  *(long *)(lVar10 + 0x3c0) = param_1;
  *(undefined1 **)(lVar10 + 0x3c8) = &LAB_0259d56c;
  *(undefined8 *)(lVar10 + 0x3d0) = 0;
  *(undefined1 **)(lVar10 + 0x3a0) = &LAB_0259f470;
  *(undefined1 **)(lVar10 + 0x3a8) = &LAB_0259f48c;
  *(undefined1 **)(lVar10 + 0x3b0) = &LAB_0259f490;
  *(undefined1 **)(lVar10 + 0x3b8) = &LAB_0259f4a4;
  lVar20 = *(long *)(param_1 + 0x68);
  lVar10 = nn::os::GetCurrentThread();
  plVar12 = (long *)(lVar20 + 0x208);
  do {
    if (*plVar12 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar20 + 0x1fc));
        while (*plVar12 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = lVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0259c5f8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar4) {
      *plVar12 = lVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0259c5f8:
  lVar17 = *(long *)(param_2 + 0x78);
  lVar10 = lVar17;
  if (*(long *)(lVar17 + 0x1d0) != 0) {
    lVar10 = *(long *)(lVar17 + 0x1d0);
  }
  if (*(long *)(lVar17 + 0x1d8) != 0) {
    lVar17 = *(long *)(lVar17 + 0x1d8);
  }
  if (lVar10 == lVar17) {
LAB_0259c860:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_02a70230(lVar20);
  lVar17 = *(long *)(param_1 + 0x70);
  lVar10 = nn::os::GetCurrentThread();
  plVar12 = (long *)(lVar17 + 0x208);
  do {
    if (*plVar12 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x1fc));
        while (*plVar12 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = lVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0259c66c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar4) {
      *plVar12 = lVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0259c66c:
  lVar18 = *(long *)(param_2 + 0xc0);
  lVar10 = lVar18;
  if (*(long *)(lVar18 + 0x1d0) != 0) {
    lVar10 = *(long *)(lVar18 + 0x1d0);
  }
  if (*(long *)(lVar18 + 0x1d8) != 0) {
    lVar18 = *(long *)(lVar18 + 0x1d8);
  }
  if (lVar10 == lVar18) goto LAB_0259c860;
  FUN_02a70230(lVar17);
  *(undefined8 *)(lVar17 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar17 + 0x1fc));
  *(undefined8 *)(lVar20 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar20 + 0x1fc));
  puVar6 = PTR_DAT_04379fd0;
  puVar5 = PTR_DAT_04379fc8;
  lVar10 = *(long *)(param_1 + 0xb8);
  plVar12 = (long *)0x0;
  if (lVar10 != 0) {
    if (*(int *)(lVar10 + 0xc) == 0) {
LAB_0259c944:
      plVar12 = (long *)0x0;
      lVar10 = *plVar14;
      goto joined_r0x0259c908;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    iVar8 = *(int *)(lVar10 + 0xc);
    do {
      puVar21 = *(undefined8 **)(lVar10 + 0x10);
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
          uVar11 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar11;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar6 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar5);
      }
      if (puVar21 == (undefined8 *)0x0) goto LAB_0259c944;
      while (puVar21 != (undefined8 *)puVar6) {
        puVar21 = (undefined8 *)*puVar21;
        plVar12 = (long *)0x0;
        if (puVar21 == (undefined8 *)0x0) goto LAB_0259c6c0;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar10 = *(long *)(lVar10 + 0x18);
          if (lVar10 == 0) goto LAB_0259c944;
          plVar22 = (long *)(lVar10 + -0x50);
          FUN_018f98bc(&local_78,plVar22);
          if (local_78 == (long *)0x0) {
            plVar12 = (long *)0x0;
            goto LAB_0259c8d4;
          }
          FUN_009b8630(&local_d8);
          puVar5 = PTR_DAT_043794b0;
          if (local_d8 == (long *)0x0) {
            plVar12 = (long *)0x0;
            plVar15 = local_78;
            goto joined_r0x0259cac4;
          }
          lVar20 = local_d8[0x35];
          if (lVar20 == 0) goto LAB_0259ca04;
          if (*(int *)(lVar20 + 0xc) == 0) goto LAB_0259cbf0;
          piVar1 = (int *)(lVar20 + 0xc);
          iVar8 = *(int *)(lVar20 + 0xc);
          goto LAB_0259cae4;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar12 = (long *)0x0;
      iVar8 = iVar9;
    } while (iVar9 != 0);
  }
  goto LAB_0259c6c0;
LAB_0259cbf0:
  plVar12 = (long *)0x0;
  goto joined_r0x0259cbf8;
  while (iVar8 = iVar9, iVar9 != 0) {
LAB_0259cae4:
    puVar21 = *(undefined8 **)(lVar20 + 0x10);
    if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
      if (((*PTR_DAT_043794c0 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar9 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
          uVar11 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar11;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
        __cxa_guard_release(PTR_DAT_043794c0);
      }
      *(undefined **)PTR_DAT_043794b8 = PTR_DAT_043794c8;
      __cxa_guard_release(puVar5);
    }
    if (puVar21 == (undefined8 *)0x0) goto LAB_0259cbf0;
    while (puVar21 != (undefined8 *)PTR_DAT_043794b8) {
      puVar21 = (undefined8 *)*puVar21;
      if (puVar21 == (undefined8 *)0x0) goto LAB_0259ca04;
    }
    iVar9 = *piVar1;
    if (iVar9 == iVar8) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        plVar12 = (long *)0x0;
        if (*(long *)(lVar20 + 0x18) != 0) {
          plVar12 = (long *)(*(long *)(lVar20 + 0x18) + -0x50);
        }
        goto joined_r0x0259cbf8;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
LAB_0259ca04:
  plVar12 = (long *)0x0;
joined_r0x0259cbf8:
  plVar15 = local_78;
  if (local_d8 != (long *)0x0) {
    lVar20 = *(long *)((long)local_d8 + 0x58);
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*local_d8 + 0x20))();
      plVar15 = local_78;
    }
  }
joined_r0x0259cac4:
  local_78 = plVar15;
  if (plVar15 != (long *)0x0) {
    plVar2 = plVar15 + 1;
    do {
      iVar8 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      plVar15[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar20 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar20;
      local_d8 = (long *)*plVar15;
      FUN_02a44274(lVar20 + 0xd8,&local_d8);
    }
  }
LAB_0259c8d4:
  lVar10 = *(long *)(lVar10 + 8);
  piVar1 = (int *)(lVar10 + 0xc);
  do {
    iVar8 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar8 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar8 + -1 == 0) {
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar22 + 0x20))(plVar22);
    lVar10 = *plVar14;
  }
  else {
LAB_0259c6c0:
    lVar10 = *plVar14;
  }
joined_r0x0259c908:
  if (lVar10 == 0) {
    local_80 = (long *)0x0;
  }
  else {
    FUN_009cd8d4(&local_80);
    if (local_80 != (long *)0x0) {
      FUN_01f07da0(&local_78,local_80,0);
      plVar14 = local_78;
      puVar7 = PTR_DAT_0437a748;
      puVar6 = PTR_DAT_0437a740;
      puVar5 = PTR_DAT_043794d0;
      if (local_78 == (long *)0x0) {
        local_88 = (long *)0x0;
      }
      else {
        if (*(int *)((long)local_78 + 0xc) != 0) {
          piVar1 = (int *)((long)local_78 + 0xc);
          iVar8 = *(int *)((long)local_78 + 0xc);
          do {
            plVar22 = (long *)plVar14[2];
            if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
              if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
                uVar11 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar11;
                __cxa_guard_release(puVar5);
              }
              *(undefined **)puVar7 = PTR_DAT_043794d8;
              __cxa_guard_release(puVar6);
            }
            while( true ) {
              if (plVar22 == (long *)0x0) goto LAB_0259cd80;
              if (plVar22 == (long *)puVar7) break;
              plVar22 = (long *)*plVar22;
            }
            iVar9 = *piVar1;
            if (iVar9 == iVar8) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar10 = plVar14[3];
                local_88 = (long *)0x0;
                plVar14 = local_78;
                if (lVar10 != 0) {
                  local_88 = (long *)(lVar10 + -0x50);
                }
                goto joined_r0x0259ccc8;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar8 = iVar9;
          } while (iVar9 != 0);
        }
LAB_0259cd80:
        local_88 = (long *)0x0;
        plVar14 = local_78;
joined_r0x0259ccc8:
        local_78 = plVar14;
        if (plVar14 != (long *)0x0) {
          plVar22 = plVar14 + 1;
          do {
            iVar8 = (int)*plVar22 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar4) {
              *(int *)plVar22 = iVar8;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 == 0) {
            plVar14[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar10 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar10;
            local_d8 = (long *)*plVar14;
            FUN_02a44274(lVar10 + 0xd8,&local_d8);
          }
        }
        puVar6 = PTR_DAT_0437a788;
        puVar5 = PTR_DAT_0437a780;
        if (local_88 != (long *)0x0) {
          lVar10 = 0;
          do {
            lVar17 = *(long *)(param_2 + 0x10);
            lVar20 = param_1 + lVar10 * 0x20;
            plVar14 = (long *)(lVar20 + 0xd0);
            if ((lVar17 != 0) && (*(int *)(lVar17 + 0xc) != 0)) {
              piVar1 = (int *)(lVar17 + 0xc);
              iVar8 = *(int *)(lVar17 + 0xc);
              do {
                plVar22 = *(long **)(lVar17 + 0x10);
                if (((*PTR_DAT_0437a0e8 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a0e8), iVar9 != 0)) {
                  if (((*PTR_DAT_043794d0 & 1) == 0) &&
                     (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
                    uVar11 = FUN_0087f8f0();
                    *(undefined8 *)PTR_DAT_043794d8 = uVar11;
                    __cxa_guard_release(PTR_DAT_043794d0);
                  }
                  *(undefined **)PTR_DAT_0437a0f0 = PTR_DAT_043794d8;
                  __cxa_guard_release(PTR_DAT_0437a0e8);
                }
                while( true ) {
                  if (plVar22 == (long *)0x0) goto LAB_0259ce40;
                  if (plVar22 == (long *)PTR_DAT_0437a0f0) break;
                  plVar22 = (long *)*plVar22;
                }
                iVar9 = *piVar1;
                if (iVar9 == iVar8) {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar8 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  if (cVar3 != '\0') goto LAB_0259d048;
                  lVar17 = *(long *)(lVar17 + 0x18);
                  if (lVar17 != 0) {
                    plVar22 = (long *)(lVar17 + -0x50);
                    uVar11 = *(undefined8 *)(param_1 + 8);
                    if (((*PTR_DAT_0437a7c0 & 1) == 0) &&
                       (iVar8 = __cxa_guard_acquire(PTR_DAT_0437a7c0), iVar8 != 0)) {
                      local_78 = (long *)FUN_00938550();
                      puVar7 = PTR_DAT_0437a7d0;
                      FUN_00b0fde8(PTR_DAT_0437a7d0,&local_78);
                      FUN_00100250(PTR_LAB_0437a8d8,puVar7,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_0437a7c0);
                    }
                    FUN_02a47560(auStack_a8,PTR_DAT_0437a7d0);
                    FUN_01845684(&local_78,plVar22,uVar11,auStack_a8);
                    plVar15 = (long *)*plVar14;
                    *plVar14 = 0;
                    if (plVar15 != (long *)0x0) {
                      lVar18 = plVar15[0xb];
                      piVar1 = (int *)(lVar18 + 0xc);
                      do {
                        iVar8 = *piVar1;
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar4) {
                          *piVar1 = iVar8 + -1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                      if (iVar8 + -1 == 0) {
                        *(undefined8 *)(lVar18 + 0x18) = 0;
                        (**(code **)(*plVar15 + 0x20))();
                      }
                    }
                    plVar15 = local_78;
                    local_78 = (long *)0x0;
                    *plVar14 = (long)plVar15;
                    if (local_90 != (long *)0x0) {
                      (**(code **)(*local_90 + 0x20))();
                      plVar15 = (long *)*plVar14;
                    }
                    local_b0 = plVar15;
                    if (plVar15 != (long *)0x0) {
                      lVar18 = plVar15[0xb];
                      if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_0259c860;
                      if (*(long *)(lVar18 + 0x10) == 0) {
                        uVar11 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
                        *(undefined8 *)(lVar18 + 0x10) = uVar11;
                      }
                      piVar1 = (int *)(lVar18 + 0xc);
                      do {
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar4) {
                          *piVar1 = *piVar1 + 1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                    }
                    FUN_018457a0(&local_68,plVar22,&local_b0,*(undefined8 *)(param_1 + 8));
                    if (local_b0 != (long *)0x0) {
                      lVar18 = local_b0[0xb];
                      piVar1 = (int *)(lVar18 + 0xc);
                      do {
                        iVar8 = *piVar1;
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar4) {
                          *piVar1 = iVar8 + -1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                      if (iVar8 + -1 == 0) {
                        *(undefined8 *)(lVar18 + 0x18) = 0;
                        (**(code **)(*local_b0 + 0x20))();
                      }
                    }
                    FUN_01838b4c(local_68,0xd);
                    FUN_01836b0c(local_68);
                    local_b8 = local_68;
                    if (local_68 != (long *)0x0) {
                      lVar18 = local_68[0xb];
                      if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_0259c860;
                      if (*(long *)(lVar18 + 0x10) == 0) {
                        uVar11 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
                        *(undefined8 *)(lVar18 + 0x10) = uVar11;
                      }
                      piVar1 = (int *)(lVar18 + 0xc);
                      do {
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar4) {
                          *piVar1 = *piVar1 + 1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                    }
                    FUN_01845ac4(plVar22,&local_b8);
                    if (local_b8 != (long *)0x0) {
                      lVar18 = local_b8[0xb];
                      piVar1 = (int *)(lVar18 + 0xc);
                      do {
                        iVar8 = *piVar1;
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar4) {
                          *piVar1 = iVar8 + -1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                      if (iVar8 + -1 == 0) {
                        *(undefined8 *)(lVar18 + 0x18) = 0;
                        (**(code **)(*local_b8 + 0x20))();
                      }
                    }
                    local_78 = *(long **)(lVar17 + 0x40);
                    uStack_70 = *(undefined8 *)(lVar17 + 0x48);
                    lVar18 = FUN_00bd8988(*plVar14,*(undefined8 *)(*plVar14 + 8),&local_78);
                    if ((plVar12 != (long *)0x0) && (lVar18 != 0)) {
                      (**(code **)(*plVar12 + 0x18))(&local_78,plVar12);
                      local_c8 = (long *)0x0;
                      uStack_c0 = 0;
                      FUN_0087f944(&local_c8,&local_78);
                      plVar15 = local_78;
                      if (local_78 != (long *)0x0) {
                        plVar2 = local_78 + 1;
                        do {
                          iVar8 = (int)*plVar2 + -1;
                          cVar3 = '\x01';
                          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                          if (bVar4) {
                            *(int *)plVar2 = iVar8;
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar3 != '\0');
                        if (iVar8 == 0) {
                          local_78[2] = 0;
                          if (((*PTR_DAT_04379498 & 1) == 0) &&
                             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                            __cxa_guard_release(PTR_DAT_04379498);
                          }
                          lVar19 = *(long *)PTR_DAT_043794a0;
                          *(long *)PTR_DAT_043794a8 = lVar19;
                          local_d8 = (long *)*plVar15;
                          FUN_02a44274(lVar19 + 0xd8,&local_d8);
                        }
                      }
                      FUN_00d804f8(lVar18,&local_c8,1);
                      plVar15 = local_c8;
                      if (local_c8 != (long *)0x0) {
                        plVar2 = local_c8 + 1;
                        do {
                          iVar8 = (int)*plVar2 + -1;
                          cVar3 = '\x01';
                          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                          if (bVar4) {
                            *(int *)plVar2 = iVar8;
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar3 != '\0');
                        if (iVar8 == 0) {
                          local_c8[2] = 0;
                          if (((*PTR_DAT_04379498 & 1) == 0) &&
                             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                            __cxa_guard_release(PTR_DAT_04379498);
                          }
                          lVar18 = *(long *)PTR_DAT_043794a0;
                          *(long *)PTR_DAT_043794a8 = lVar18;
                          local_78 = (long *)*plVar15;
                          FUN_02a44274(lVar18 + 0xd8,&local_78);
                        }
                      }
                    }
                    if (local_68 != (long *)0x0) {
                      lVar18 = local_68[0xb];
                      piVar1 = (int *)(lVar18 + 0xc);
                      do {
                        iVar8 = *piVar1;
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar4) {
                          *piVar1 = iVar8 + -1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                      if (iVar8 + -1 == 0) {
                        *(undefined8 *)(lVar18 + 0x18) = 0;
                        (**(code **)(*local_68 + 0x20))();
                      }
                    }
                    lVar17 = *(long *)(lVar17 + 8);
                    piVar1 = (int *)(lVar17 + 0xc);
                    do {
                      iVar8 = *piVar1;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar4) {
                        *piVar1 = iVar8 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar8 + -1 == 0) {
                      *(undefined8 *)(lVar17 + 0x18) = 0;
                      (**(code **)(*plVar22 + 0x20))();
                    }
                  }
                  break;
                }
                ClearExclusiveLocal();
LAB_0259d048:
                iVar8 = iVar9;
              } while (iVar9 != 0);
            }
LAB_0259ce40:
            plVar14 = (long *)FUN_017d3d24(*plVar14,*(undefined8 *)(param_1 + 8),&local_88);
            if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_0437a8a0,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
            lVar17 = *(long *)puVar6;
            *(long *)PTR_DAT_0437a790 = lVar17;
            FUN_02c90b20(plVar14,*(long *)(lVar17 + 0x78) + lVar10 * 0x30 + 0x278);
            (**(code **)(*plVar14 + 0x10))(&local_78,plVar14);
            local_d8 = (long *)0x0;
            uStack_d0 = 0;
            FUN_00ad3450(&local_d8,&local_78);
            plVar14 = local_78;
            if (local_78 != (long *)0x0) {
              plVar22 = local_78 + 1;
              do {
                iVar8 = (int)*plVar22 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                if (bVar4) {
                  *(int *)plVar22 = iVar8;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar8 == 0) {
                local_78[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar17 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar17;
                local_68 = (long *)*plVar14;
                FUN_02a44274(lVar17 + 0xd8,&local_68);
              }
            }
            FUN_00ad52f4(lVar20 + 0xd8,&local_d8);
            plVar14 = local_d8;
            if (local_d8 != (long *)0x0) {
              plVar22 = local_d8 + 1;
              do {
                iVar8 = (int)*plVar22 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                if (bVar4) {
                  *(int *)plVar22 = iVar8;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar8 == 0) {
                local_d8[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar20 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar20;
                local_78 = (long *)*plVar14;
                FUN_02a44274(lVar20 + 0xd8,&local_78);
              }
            }
            lVar10 = lVar10 + 1;
          } while (lVar10 != 3);
          if (local_88 != (long *)0x0) {
            lVar10 = local_88[0xb];
            piVar1 = (int *)(lVar10 + 0xc);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              *(undefined8 *)(lVar10 + 0x18) = 0;
              (**(code **)(*local_88 + 0x20))();
            }
          }
        }
      }
      if (local_80 != (long *)0x0) {
        lVar10 = local_80[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*local_80 + 0x20))();
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0xc9) = 1;
  if (*(long *)(param_1 + 0xa8) == 0) {
    local_78 = (long *)0x0;
  }
  else {
    FUN_0192af0c(&local_78);
    if (local_78 != (long *)0x0) {
      uVar13 = FUN_01f21304();
      if ((uVar13 & 1) == 0) {
        *(undefined1 *)(param_1 + 0xc9) = 0;
      }
      if (local_78 != (long *)0x0) {
        lVar10 = local_78[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*local_78 + 0x20))();
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  if ((*(char *)(param_1 + 0xc9) != '\0') && (uVar13 = FUN_0259d684(param_1), (uVar13 & 1) != 0)) {
    FUN_0259d910(param_1);
    uVar13 = FUN_0259e83c(param_1);
    if ((uVar13 & 1) != 0) {
      FUN_0259ed84(param_1);
      *(undefined4 *)(param_1 + 0x130) = 1;
    }
  }
  *(undefined1 *)(param_1 + 200) = 1;
  if (plVar12 != (long *)0x0) {
    lVar10 = plVar12[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  return;
}


