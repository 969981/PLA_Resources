/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c35360; name: FUN_01c35360
 */


void FUN_01c35360(long *param_1)

{
  int *piVar1;
  long *plVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  undefined8 *puVar20;
  long lVar21;
  long *local_90;
  long *local_88;
  undefined8 uStack_80;
  long *local_78;
  long *local_70;
  long local_68;
  
  lVar14 = nn::os::GetCurrentThread();
  plVar18 = param_1 + 0x56;
  do {
    if (*plVar18 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)param_1 + 0x2a4));
        while (*plVar18 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *plVar18 = lVar14;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01c353cc;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar5) {
      *plVar18 = lVar14;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01c353cc:
  if (*(char *)((long)param_1 + 0x26c) == '\0') goto LAB_01c35548;
  FUN_016c24d0(&local_70,param_1 + 0x47);
  if ((local_70 == (long *)0x0) || ((int)local_70[0x44] != 6)) {
LAB_01c35494:
    bVar5 = false;
    if (local_70 == (long *)0x0) goto LAB_01c354bc;
LAB_01c354a0:
    lVar14 = local_70[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 != 0) goto LAB_01c354bc;
    *(undefined8 *)(lVar14 + 0x18) = 0;
    (**(code **)(*local_70 + 0x20))();
    if (bVar5) goto LAB_01c35548;
  }
  else {
    local_88 = (long *)0x0;
    uStack_80 = 0;
    FUN_009ab200(&local_88,local_70 + 0x49);
    if (local_88 == (long *)0x0) {
      local_78 = (long *)0x0;
      plVar18 = local_78;
    }
    else {
      FUN_00b907c8(&local_78);
      plVar19 = local_88;
      plVar18 = local_78;
      if (local_88 != (long *)0x0) {
        plVar2 = local_88 + 1;
        do {
          iVar13 = (int)*plVar2 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar13;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar13 == 0) {
          local_88[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar14 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar14;
          local_68 = *plVar19;
          FUN_02a44274(lVar14 + 0xd8,&local_68);
          plVar18 = local_78;
        }
      }
    }
    local_78 = plVar18;
    if (plVar18 == (long *)0x0) goto LAB_01c35494;
    uVar15 = FUN_008a81d4(plVar18 + 10);
    if (((uVar15 & 1) == 0) || (*(char *)((long)plVar18 + 0x821) == '\0')) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (local_78 != (long *)0x0) {
      lVar14 = local_78[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar13 = *piVar1;
        cVar4 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*local_78 + 0x20))();
      }
    }
    if (!bVar5) goto LAB_01c35494;
    bVar5 = true;
    if (local_70 != (long *)0x0) goto LAB_01c354a0;
LAB_01c354bc:
    if (bVar5) goto LAB_01c35548;
  }
  puVar11 = PTR_DAT_0437a880;
  puVar10 = PTR_DAT_0437a878;
  puVar9 = PTR_DAT_043795e0;
  puVar8 = PTR_DAT_043795d8;
  if ((*(uint *)(param_1 + 0x4d) | 2) != 2) goto LAB_01c35548;
  lVar14 = param_1[0x50];
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
    piVar1 = (int *)(lVar14 + 0xc);
    iVar13 = *(int *)(lVar14 + 0xc);
    do {
      plVar18 = *(long **)(lVar14 + 0x10);
      if (((*puVar10 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar10), iVar12 != 0)) {
        if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar12 != 0)) {
            uVar16 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar16;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)puVar9 = PTR_DAT_043794d8;
          __cxa_guard_release(puVar8);
        }
        *(undefined **)puVar11 = puVar9;
        __cxa_guard_release(puVar10);
      }
      while( true ) {
        if (plVar18 == (long *)0x0) goto LAB_01c354d8;
        if (plVar18 == (long *)puVar11) break;
        plVar18 = (long *)*plVar18;
      }
      iVar12 = *piVar1;
      if (iVar12 == iVar13) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        puVar7 = PTR_DAT_043794b8;
        puVar6 = PTR_DAT_043794b0;
        if (cVar4 == '\0') {
          lVar14 = *(long *)(lVar14 + 0x18);
          if (lVar14 != 0) {
            plVar18 = (long *)(lVar14 + -0x50);
            if (((*(char *)(lVar14 + 0x19c) != '\0') ||
                (lVar21 = *(long *)(lVar14 + 0x158), lVar21 == 0)) || (*(int *)(lVar21 + 0xc) == 0))
            goto LAB_01c35738;
            piVar1 = (int *)(lVar21 + 0xc);
            iVar13 = *(int *)(lVar21 + 0xc);
            goto LAB_01c357c4;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar13 = iVar12;
    } while (iVar12 != 0);
  }
  goto LAB_01c354d8;
  while (iVar13 = iVar12, iVar12 != 0) {
LAB_01c357c4:
    plVar19 = *(long **)(lVar21 + 0x10);
    if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
      if (((*PTR_DAT_043794c0 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar12 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar12 != 0)) {
          uVar16 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar16;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
        __cxa_guard_release(PTR_DAT_043794c0);
      }
      *(undefined **)puVar7 = PTR_DAT_043794c8;
      __cxa_guard_release(puVar6);
    }
    while( true ) {
      if (plVar19 == (long *)0x0) goto LAB_01c35738;
      if (plVar19 == (long *)puVar7) break;
      plVar19 = (long *)*plVar19;
    }
    iVar12 = *piVar1;
    if (iVar12 == iVar13) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar13 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar21 = *(long *)(lVar21 + 0x18);
        if (lVar21 != 0) {
          lVar17 = *(long *)(lVar21 + 8);
          piVar1 = (int *)(lVar17 + 0xc);
          do {
            iVar13 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar13 + -1 == 0) {
            *(undefined8 *)(lVar17 + 0x18) = 0;
            (**(code **)(*(long *)(lVar21 + -0x50) + 0x20))();
          }
          local_90 = (long *)0x0;
          FUN_00d7e99c(plVar18,&local_90,1);
          if (local_90 != (long *)0x0) {
            lVar21 = local_90[0xb];
            piVar1 = (int *)(lVar21 + 0xc);
            do {
              iVar13 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar13 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar13 + -1 == 0) {
              *(undefined8 *)(lVar21 + 0x18) = 0;
              (**(code **)(*local_90 + 0x20))();
            }
          }
          puVar20 = (undefined8 *)param_1[0x50];
          param_1[0x50] = 0;
          if (puVar20 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar20 + 1);
            do {
              iVar13 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar13 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar13 + -1 == 0) {
              puVar20[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar21 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar21;
              local_88 = (long *)*puVar20;
              FUN_02a44274(lVar21 + 0xd8,&local_88);
            }
          }
          param_1[0x51] = 0;
          (**(code **)(*param_1 + 0x100))(param_1);
        }
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
LAB_01c35738:
  lVar14 = *(long *)(lVar14 + 8);
  piVar1 = (int *)(lVar14 + 0xc);
  do {
    iVar13 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar13 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar13 + -1 == 0) {
    *(undefined8 *)(lVar14 + 0x18) = 0;
    (**(code **)(*plVar18 + 0x20))(plVar18);
  }
LAB_01c354d8:
  FUN_016c24d0(&local_88,param_1 + 0x47);
  if (local_88 != (long *)0x0) {
    if ((int)param_1[0x52] == 0) {
      FUN_015916d0(local_88,1,1,0);
    }
    if (*(char *)((long)local_88 + 0x205) != '\0') {
      FUN_01836814(local_88,0);
    }
    *(undefined1 *)((long)local_88 + 0x366) = 0;
    if (local_88 != (long *)0x0) {
      lVar14 = local_88[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar13 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*local_88 + 0x20))();
      }
    }
  }
  *(undefined4 *)(param_1 + 0x4d) = 0;
  *(undefined1 *)((long)param_1 + 0x26c) = 0;
LAB_01c35548:
  param_1[0x56] = 0;
  nn::os::SignalLightEvent((LightEventType *)((long)param_1 + 0x2a4));
  return;
}


