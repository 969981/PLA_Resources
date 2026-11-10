/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a7791c; name: FUN_02a7791c
 */


void FUN_02a7791c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  size_t __n;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long *__dest;
  long *plVar21;
  long *plVar22;
  long lVar23;
  undefined1 *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 auStack_d0 [108];
  undefined1 local_64 [4];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x160));
  nn::os::LockMutex((MutexType *)(param_1 + 0x180));
  plVar21 = *(long **)(param_1 + 0xf0);
  plVar22 = *(long **)(param_1 + 0xf8);
  *(undefined1 *)(param_1 + 0x1e1) = 1;
  for (; plVar21 != plVar22; plVar21 = plVar21 + 1) {
    puVar19 = *(undefined8 **)(param_1 + 0x128);
    puVar20 = *(undefined8 **)(param_1 + 0x130);
    puVar17 = puVar19;
    if (puVar19 != puVar20) {
      puVar18 = (undefined8 *)*puVar19;
      while (puVar17 = puVar19, puVar18 != (undefined8 *)*plVar21) {
        puVar19 = puVar19 + 1;
        puVar17 = puVar20;
        if (puVar20 == puVar19) break;
        puVar18 = (undefined8 *)*puVar19;
      }
    }
    if (puVar20 == puVar17) {
      (*(code *)**(undefined8 **)*plVar21)();
    }
  }
  plVar21 = *(long **)(param_1 + 0x128);
  plVar22 = *(long **)(param_1 + 0x130);
  if (plVar21 != plVar22) {
    plVar15 = *(long **)(param_1 + 0xf8);
    do {
      __dest = *(long **)(param_1 + 0xf0);
      if ((__dest != plVar15) && (*__dest != *plVar21)) {
        do {
          __dest = __dest + 1;
          if (plVar15 == __dest) goto LAB_02a779f4;
        } while (*__dest != *plVar21);
      }
      if (plVar15 != __dest) {
        __n = (long)plVar15 - (long)(__dest + 1);
        if (__n != 0) {
          memmove(__dest,__dest + 1,__n);
        }
        plVar15 = __dest + ((long)__n >> 3);
        *(long **)(param_1 + 0xf8) = plVar15;
      }
LAB_02a779f4:
      plVar21 = plVar21 + 1;
    } while (plVar21 != plVar22);
    plVar21 = *(long **)(param_1 + 0x128);
  }
  *(long **)(param_1 + 0x130) = plVar21;
  nn::os::BroadcastConditionVariable((ConditionVariableType *)(param_1 + 0x1a0));
  lVar12 = nn::os::GetCurrentThread();
  plVar21 = (long *)(param_1 + 0x238);
  do {
    if (*plVar21 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x22c));
        while (*plVar21 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar3) {
            *plVar21 = lVar12;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02a77ac4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar3) {
      *plVar21 = lVar12;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02a77ac4:
  puVar7 = PTR_DAT_04379d68;
  puVar5 = PTR_DAT_04379d60;
  plVar21 = *(long **)(param_1 + 0x1f0);
  plVar22 = *(long **)(param_1 + 0x1f8);
  if (plVar21 != plVar22) {
    lVar12 = *plVar21;
    do {
      if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc) != 0)) {
        piVar1 = (int *)(lVar12 + 0xc);
        iVar11 = *(int *)(lVar12 + 0xc);
        do {
          while( true ) {
            plVar15 = *(long **)(lVar12 + 0x10);
            if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
              uVar13 = FUN_0093d69c();
              *(undefined8 *)puVar7 = uVar13;
              __cxa_guard_release(puVar5);
            }
            while( true ) {
              if (plVar15 == (long *)0x0) goto LAB_02a77b18;
              if (plVar15 == (long *)puVar7) break;
              plVar15 = (long *)*plVar15;
            }
            iVar10 = *piVar1;
            if (iVar10 == iVar11) break;
            ClearExclusiveLocal();
            iVar11 = iVar10;
            if (iVar10 == 0) goto LAB_02a77b18;
          }
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar12 = *(long *)(lVar12 + 0x18);
            if (lVar12 != 0) {
              local_64[0] = 1;
              local_f0 = &LAB_02a78d30;
              local_e8 = FUN_02a78d38;
              local_e0 = &LAB_02a78d3c;
              puStack_d8 = &LAB_02a78d40;
              FUN_02a78474((long *)(lVar12 + -0x50),local_64);
              pcVar9 = local_e8;
              if (local_e8 != (code *)0x0) {
                local_e0 = (undefined1 *)0x0;
                puStack_d8 = (undefined1 *)0x0;
                local_f0 = (undefined1 *)0x0;
                local_e8 = (code *)0x0;
                (*pcVar9)(auStack_d0);
              }
              lVar16 = *(long *)(lVar12 + 8);
              piVar1 = (int *)(lVar16 + 0xc);
              do {
                iVar11 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar11 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar11 + -1 == 0) {
                *(undefined8 *)(lVar16 + 0x18) = 0;
                (**(code **)(*(long *)(lVar12 + -0x50) + 0x20))();
              }
            }
            break;
          }
          iVar11 = iVar10;
        } while (iVar10 != 0);
      }
LAB_02a77b18:
      puVar8 = PTR_DAT_043794a8;
      puVar6 = PTR_DAT_043794a0;
      puVar4 = PTR_DAT_04379498;
      plVar21 = plVar21 + 2;
      if (plVar21 == plVar22) goto LAB_02a77cc4;
      lVar12 = *plVar21;
    } while( true );
  }
  plVar22 = plVar21;
LAB_02a77d94:
  lVar12 = (long)plVar21 - (long)plVar22;
  *(long **)(param_1 + 0x1f8) = plVar21;
  if ((ulong)(lVar12 >> 4) < (ulong)(*(long *)(param_1 + 0x200) - (long)plVar22 >> 4)) {
    puVar19 = (undefined8 *)(param_1 + 0x208);
    if (lVar12 == 0) {
      lVar16 = 0;
    }
    else {
      lVar16 = (**(code **)(*(long *)*puVar19 + 0x10))((long *)*puVar19,lVar12,8);
      if (lVar16 == 0) {
        (**(code **)(*(long *)*puVar19 + 0xb8))();
      }
      plVar22 = *(long **)(param_1 + 0x1f0);
      plVar21 = *(long **)(param_1 + 0x1f8);
    }
    lVar16 = lVar16 + (lVar12 >> 4) * 0x10;
    lVar12 = lVar16;
    if (plVar21 == plVar22) {
      plVar22 = plVar21;
    }
    else {
      do {
        lVar12 = lVar12 + -0x10;
        plVar21 = plVar21 + -2;
        FUN_02a789c4(puVar19,lVar12,plVar21);
      } while (plVar22 != plVar21);
      plVar21 = *(long **)(param_1 + 0x1f8);
      plVar22 = *(long **)(param_1 + 0x1f0);
    }
    lVar23 = *(long *)(param_1 + 0x200);
    *(long *)(param_1 + 0x200) = lVar16;
    *(long *)(param_1 + 0x1f0) = lVar12;
    *(long *)(param_1 + 0x1f8) = lVar16;
    puVar4 = PTR_DAT_043794a8;
    puVar7 = PTR_DAT_043794a0;
    puVar5 = PTR_DAT_04379498;
    if (plVar21 != plVar22) {
      plVar21 = plVar21 + -2;
      puVar20 = (undefined8 *)*plVar21;
      while( true ) {
        if (puVar20 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar20 + 1);
          do {
            iVar11 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar11 + -1 == 0) {
            puVar20[2] = 0;
            if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar5), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar7,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
            lVar12 = *(long *)puVar7;
            *(long *)puVar4 = lVar12;
            local_f0 = (undefined1 *)*puVar20;
            FUN_02a44274(lVar12 + 0xd8,&local_f0);
          }
        }
        if (plVar21 == plVar22) break;
        plVar21 = plVar21 + -2;
        puVar20 = (undefined8 *)*plVar21;
      }
    }
    if (plVar22 != (long *)0x0) {
      plVar21 = (long *)*puVar19;
      lVar23 = lVar23 - (long)plVar22;
      uVar14 = (**(code **)(*plVar21 + 0xc0))(plVar21);
      if ((uVar14 & 1) != 0) {
        lVar12 = tpidr_el0;
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar12 + 0x38d480)) {
          FUN_02bcc824(plVar21,plVar22,lVar23,8);
          goto LAB_02a77f64;
        }
      }
      (**(code **)(*plVar21 + 0x18))(plVar21,plVar22,lVar23,8);
    }
  }
LAB_02a77f64:
  *(undefined8 *)(param_1 + 0x238) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x22c));
  plVar21 = *(long **)(param_1 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  if (plVar21 != (long *)0x0) {
    lVar12 = plVar21[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar21 + 0x20))();
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x180));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x160));
  return;
LAB_02a77cc4:
  plVar21 = *(long **)(param_1 + 0x1f0);
  if (*(long **)(param_1 + 0x1f8) == plVar21) {
    plVar22 = plVar21;
  }
  else {
    plVar22 = *(long **)(param_1 + 0x1f8) + -2;
    puVar19 = (undefined8 *)*plVar22;
    while( true ) {
      if (puVar19 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar19 + 1);
        do {
          iVar11 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 + -1 == 0) {
          puVar19[2] = 0;
          if (((*puVar4 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar4), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar4);
          }
          lVar12 = *(long *)puVar6;
          *(long *)puVar8 = lVar12;
          local_f0 = (undefined1 *)*puVar19;
          FUN_02a44274(lVar12 + 0xd8,&local_f0);
        }
      }
      if (plVar22 == plVar21) break;
      plVar22 = plVar22 + -2;
      puVar19 = (undefined8 *)*plVar22;
    }
    plVar22 = *(long **)(param_1 + 0x1f0);
  }
  goto LAB_02a77d94;
}


