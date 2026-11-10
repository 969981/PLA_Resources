/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bc9184; name: FUN_02bc9184
 */


void FUN_02bc9184(undefined8 *param_1,long param_2,int *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long *plVar18;
  undefined8 uVar19;
  long *plVar20;
  long *plVar21;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  nn::os::LockMutex((MutexType *)&DAT_043f1110);
  puVar6 = PTR_DAT_04379520;
  uVar13 = *(ulong *)(param_2 + 0x178);
  if ((ulong)(long)*(int *)(param_2 + 0x148) <= uVar13) {
    *param_1 = 0;
    param_1[1] = 0;
    goto LAB_02bc94bc;
  }
  plVar11 = *(long **)(param_2 + 0x170);
  plVar9 = plVar11 + uVar13;
  if (uVar13 != 0) {
    lVar15 = *plVar11;
    if (lVar15 != 0) goto LAB_02bc91fc;
    do {
      do {
        plVar11 = plVar11 + 1;
        if (plVar11 == plVar9) goto LAB_02bc92a0;
        lVar15 = *plVar11;
      } while (lVar15 == 0);
LAB_02bc91fc:
    } while (*(int *)(lVar15 + 0x68) != *param_3);
  }
  if (plVar11 != plVar9) {
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_008802f0(&local_78,*plVar11 + 0x58);
    *param_1 = 0;
    param_1[1] = 0;
    FUN_02bcad30(param_1,&local_78);
    puVar1 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_78 + 1);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        local_78[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar15;
        local_68 = *puVar1;
        FUN_02a44274(lVar15 + 0xd8,&local_68);
      }
    }
    goto LAB_02bc94bc;
  }
LAB_02bc92a0:
  plVar11 = *(long **)(param_2 + 8);
  uVar17 = *(undefined8 *)(param_2 + 0x80);
  uVar19 = *(undefined8 *)(param_2 + 0xa0);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar8 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar15 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_02bc992c;
  *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar11;
  *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
  plVar9 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x1f0,8);
  if (plVar9 == (long *)0x0) {
    (**(code **)(*plVar11 + 0xb8))(plVar11);
  }
  FUN_02bc5a9c(plVar9,*param_3,param_4,uVar17,uVar19);
  plVar9[1] = (long)plVar11;
  plVar9[2] = (long)plVar9;
  plVar9[3] = 0x1f0;
  plVar9[4] = 8;
  *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
  if (plVar9 != (long *)0x0) {
    lVar15 = plVar9[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_02bc9978;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar17 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar17;
    }
    piVar2 = (int *)(lVar15 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar13 = *(ulong *)(param_2 + 0x178);
  plVar11 = (long *)(*(long *)(param_2 + 0x170) + uVar13 * 8);
  uVar14 = *(ulong *)(param_2 + 0x180);
  puVar1 = (undefined8 *)(param_2 + 0x150);
  if (uVar13 < uVar14) {
    uVar17 = *puVar1;
    if (((*puVar6 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar8 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar15 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (lVar15 != 0) {
      if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_02bc992c;
      *(undefined8 *)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = uVar17;
      *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
    }
    *plVar11 = (long)plVar9;
    if (plVar9 != (long *)0x0) {
      lVar16 = plVar9[0xb];
      if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) {
LAB_02bc9978:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar16 + 0x10) == 0) {
        uVar17 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
        *(undefined8 *)(lVar16 + 0x10) = uVar17;
      }
      piVar2 = (int *)(lVar16 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (lVar15 != 0) {
      *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
    }
    plVar10 = *(long **)(param_2 + 0x170);
    lVar15 = *(long *)(param_2 + 0x178) + 1;
    *(long *)(param_2 + 0x178) = lVar15;
  }
  else {
    uVar12 = *(ulong *)(param_2 + 0x158);
    if (uVar12 - uVar14 < (uVar13 - uVar14) + 1) {
LAB_02bc992c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar3 = uVar14 << 3;
    if (4 < uVar14 >> 0x3d) {
      uVar3 = 0xffffffffffffffff;
    }
    if (uVar14 >> 0x3d == 0) {
      uVar3 = (uVar14 << 3) / 5;
    }
    uVar14 = uVar12;
    if (uVar3 <= uVar12) {
      uVar14 = uVar3;
    }
    if (uVar14 < uVar13 + 1) {
      uVar14 = uVar13 + 1;
    }
    if (uVar12 < uVar14) goto LAB_02bc992c;
    plVar10 = (long *)(**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar14 << 3,8);
    if (plVar10 == (long *)0x0) {
      (**(code **)(*(long *)*puVar1 + 0xb8))();
    }
    plVar21 = *(long **)(param_2 + 0x170);
    plVar18 = plVar10;
    if ((plVar21 != plVar11) && (plVar21 != (long *)0x0)) {
      plVar20 = plVar21;
      do {
        FUN_02bcb030(puVar1,plVar18,plVar20);
        plVar20 = plVar20 + 1;
        plVar18 = plVar18 + 1;
      } while (plVar11 != plVar20);
    }
    uVar17 = *puVar1;
    if (((*puVar6 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar8 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar15 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (lVar15 != 0) {
      if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_02bc992c;
      *(undefined8 *)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = uVar17;
      *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
    }
    *plVar18 = (long)plVar9;
    if (plVar9 != (long *)0x0) {
      lVar16 = plVar9[0xb];
      if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_02bc9978;
      if (*(long *)(lVar16 + 0x10) == 0) {
        uVar17 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
        *(undefined8 *)(lVar16 + 0x10) = uVar17;
      }
      piVar2 = (int *)(lVar16 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (lVar15 != 0) {
      *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
    }
    plVar18 = plVar18 + 1;
    if (plVar21 != (long *)0x0) {
      lVar15 = *(long *)(param_2 + 0x178);
      if (plVar21 + lVar15 != plVar11) {
        do {
          FUN_02bcb030(puVar1,plVar18,plVar11);
          plVar11 = plVar11 + 1;
          plVar18 = plVar18 + 1;
        } while (plVar21 + lVar15 != plVar11);
        lVar15 = *(long *)(param_2 + 0x178);
      }
      while (lVar15 != 0) {
        plVar11 = (long *)*plVar21;
        lVar15 = lVar15 + -1;
        if (plVar11 != (long *)0x0) {
          lVar16 = plVar11[0xb];
          piVar2 = (int *)(lVar16 + 0xc);
          do {
            iVar8 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 + -1 == 0) {
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*plVar11 + 0x20))();
          }
        }
        plVar21 = plVar21 + 1;
      }
      lVar15 = *(long *)(param_2 + 0x180) << 3;
      plVar11 = *(long **)(param_2 + 0x150);
      uVar17 = *(undefined8 *)(param_2 + 0x170);
      uVar13 = (**(code **)(*plVar11 + 0xc0))(plVar11);
      if ((uVar13 & 1) != 0) {
        lVar16 = tpidr_el0;
        if (*(char *)(lVar16 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar16 + 0x38d488) = 1;
          *(undefined8 *)(lVar16 + 0x38d478) = 0;
          *(undefined8 *)(lVar16 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar16 + 0x38d480)) {
          FUN_02bcc824(plVar11,uVar17,lVar15,8);
          goto LAB_02bc9764;
        }
      }
      (**(code **)(*plVar11 + 0x18))(plVar11,uVar17,lVar15,8);
    }
LAB_02bc9764:
    lVar15 = (long)plVar18 - (long)plVar10 >> 3;
    *(long **)(param_2 + 0x170) = plVar10;
    *(long *)(param_2 + 0x178) = lVar15;
    *(ulong *)(param_2 + 0x180) = uVar14;
  }
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  FUN_008802f0(&local_78,plVar10[lVar15 + -1] + 0x58);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_02bcad30(param_1,&local_78);
  puVar1 = local_78;
  if (local_78 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_78 + 1);
    do {
      iVar8 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      local_78[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_68 = *puVar1;
      FUN_02a44274(lVar15 + 0xd8,&local_68);
    }
  }
  if (plVar9 != (long *)0x0) {
    lVar15 = plVar9[0xb];
    piVar2 = (int *)(lVar15 + 0xc);
    do {
      iVar8 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
    }
  }
LAB_02bc94bc:
  nn::os::UnlockMutex((MutexType *)&DAT_043f1110);
  return;
}


