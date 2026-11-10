/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02672fd0; name: FUN_02672fd0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_02672fd0(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  undefined8 uStack_78;
  long *local_70;
  long local_68;
  
  if (*(long *)(param_1 + 0x5e8) == 0) {
    return 0;
  }
  FUN_00cfac20(&local_70);
  if (local_70 == (long *)0x0) {
    return 0;
  }
  local_80 = (long *)0x0;
  uStack_78 = 0;
  FUN_00d828bc(&local_80,local_70 + 0xcb);
  plVar14 = local_80;
  puVar9 = PTR_DAT_0437a880;
  puVar8 = PTR_DAT_0437a878;
  puVar7 = PTR_DAT_043795e0;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  if (local_80 == (long *)0x0) {
    plVar14 = (long *)0x0;
  }
  else {
    if (*(int *)((long)local_80 + 0xc) != 0) {
      piVar1 = (int *)((long)local_80 + 0xc);
      iVar11 = *(int *)((long)local_80 + 0xc);
      do {
        plVar15 = (long *)plVar14[2];
        if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
          if (((*PTR_DAT_043795d8 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar10 != 0)) {
            if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
              uVar12 = FUN_0087f8f0();
              *(undefined8 *)puVar6 = uVar12;
              __cxa_guard_release(puVar5);
            }
            *(undefined **)puVar7 = puVar6;
            __cxa_guard_release(PTR_DAT_043795d8);
          }
          *(undefined **)puVar9 = puVar7;
          __cxa_guard_release(puVar8);
        }
        while( true ) {
          if (plVar15 == (long *)0x0) goto LAB_02673748;
          if (plVar15 == (long *)puVar9) break;
          plVar15 = (long *)*plVar15;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar11) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar13 = plVar14[3];
            plVar14 = (long *)0x0;
            plVar15 = local_80;
            if (lVar13 != 0) {
              plVar14 = (long *)(lVar13 + -0x50);
            }
            goto joined_r0x02673810;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar10;
      } while (iVar10 != 0);
    }
LAB_02673748:
    plVar14 = (long *)0x0;
    plVar15 = local_80;
joined_r0x02673810:
    local_80 = plVar15;
    if (plVar15 != (long *)0x0) {
      plVar16 = plVar15 + 1;
      do {
        iVar11 = (int)*plVar16 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *(int *)plVar16 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        plVar15[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_68 = *plVar15;
        FUN_02a44274(lVar13 + 0xd8,&local_68);
      }
    }
    if (plVar14 != (long *)0x0) {
      local_88 = (long *)0x0;
      FUN_00d7e99c(plVar14,&local_88,1);
      if (local_88 != (long *)0x0) {
        lVar13 = local_88[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*local_88 + 0x20))();
        }
      }
    }
  }
  plVar15 = *(long **)(param_1 + 0x5e8);
  *(undefined8 *)(param_1 + 0x5e8) = 0;
  if (plVar15 != (long *)0x0) {
    plVar16 = plVar15 + 1;
    do {
      iVar11 = (int)*plVar16 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *(int *)plVar16 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      plVar15[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_80 = (long *)*plVar15;
      FUN_02a44274(lVar13 + 0xd8,&local_80);
    }
  }
  *(undefined8 *)(param_1 + 0x5f0) = 0;
  if (*(char *)(param_1 + 0x5a0) != '\0') {
    *(undefined1 *)(param_1 + 0x5a0) = 0;
  }
  if (((*(long *)(param_1 + 0x610) != 0) && (FUN_0095deb8(&local_80), local_80 != (long *)0x0)) &&
     (FUN_026417f4(), local_80 != (long *)0x0)) {
    lVar13 = local_80[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_80 + 0x20))();
    }
  }
  local_80 = (long *)0x0;
  uStack_78 = 0;
  FUN_00ac3fa4(&local_80,param_1 + 0x248);
  if (local_80 == (long *)0x0) {
    local_90 = (long *)0x0;
  }
  else {
    FUN_0095a0ac(&local_90);
    plVar15 = local_80;
    if (local_80 != (long *)0x0) {
      plVar16 = local_80 + 1;
      do {
        iVar11 = (int)*plVar16 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *(int *)plVar16 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        local_80[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_68 = *plVar15;
        FUN_02a44274(lVar13 + 0xd8,&local_68);
      }
    }
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x3c8))();
    local_80 = (long *)0x0;
    uStack_78 = 0;
    FUN_01a9e67c(&local_80,local_90 + 0xc3);
    if (local_80 == (long *)0x0) {
      local_98 = (long *)0x0;
    }
    else {
      FUN_01aa5214(&local_98);
      plVar15 = local_80;
      if (local_80 != (long *)0x0) {
        plVar16 = local_80 + 1;
        do {
          iVar11 = (int)*plVar16 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *(int *)plVar16 = iVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar11 == 0) {
          local_80[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar13;
          local_68 = *plVar15;
          FUN_02a44274(lVar13 + 0xd8,&local_68);
        }
      }
    }
    if ((local_98 != (long *)0x0) && ((**(code **)(*local_98 + 0xf0))(), local_98 != (long *)0x0)) {
      lVar13 = local_98[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_98 + 0x20))();
      }
    }
    if (local_90 != (long *)0x0) {
      lVar13 = local_90[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_90 + 0x20))();
      }
    }
  }
  local_80 = (long *)0x0;
  uStack_78 = 0;
  FUN_01a02dbc(&local_80,param_1 + 0x460);
  plVar15 = local_80;
  puVar8 = PTR_DAT_0437a688;
  puVar7 = PTR_DAT_0437a680;
  puVar6 = PTR_DAT_043795e0;
  puVar5 = PTR_DAT_043794d0;
  if (local_80 != (long *)0x0) {
    if (*(int *)((long)local_80 + 0xc) != 0) {
      piVar1 = (int *)((long)local_80 + 0xc);
      iVar11 = *(int *)((long)local_80 + 0xc);
      do {
        plVar16 = (long *)plVar15[2];
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
          if (((*PTR_DAT_043795d8 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar10 != 0)) {
            if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
              uVar12 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar12;
              __cxa_guard_release(puVar5);
            }
            *(undefined **)puVar6 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_043795d8);
          }
          *(undefined **)puVar8 = puVar6;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar16 == (long *)0x0) goto LAB_02673514;
          if (plVar16 == (long *)puVar8) break;
          plVar16 = (long *)*plVar16;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar11) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar13 = plVar15[3];
            plVar15 = (long *)0x0;
            plVar16 = local_80;
            if (lVar13 != 0) {
              plVar15 = (long *)(lVar13 + -0x50);
            }
            goto joined_r0x02673538;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar10;
      } while (iVar10 != 0);
    }
LAB_02673514:
    plVar15 = (long *)0x0;
    plVar16 = local_80;
joined_r0x02673538:
    local_80 = plVar16;
    if (plVar16 != (long *)0x0) {
      plVar2 = plVar16 + 1;
      do {
        iVar11 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        plVar16[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_68 = *plVar16;
        FUN_02a44274(lVar13 + 0xd8,&local_68);
      }
    }
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x178))(plVar15,0);
      lVar13 = plVar15[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
    }
  }
  FUN_016c24d0(&local_80,param_1 + 0x630);
  if ((local_80 == (long *)0x0) || (FUN_015916d0(local_80,1,0x10,0), local_80 == (long *)0x0)) {
LAB_026731e4:
    if (*(long *)(param_1 + 0x650) == 0) goto LAB_026731ec;
LAB_02673320:
    FUN_02675010(&local_80);
    plVar15 = local_80;
    if (local_80 != (long *)0x0) {
      FUN_02647aac(local_80);
      lVar13 = plVar15[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar15 + 0x20))(plVar15);
        *(undefined2 *)(param_1 + 0x660) = 0;
        goto joined_r0x0267336c;
      }
    }
  }
  else {
    lVar13 = local_80[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 != 0) goto LAB_026731e4;
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*local_80 + 0x20))();
    if (*(long *)(param_1 + 0x650) != 0) goto LAB_02673320;
LAB_026731ec:
    local_80 = (long *)0x0;
  }
  *(undefined2 *)(param_1 + 0x660) = 0;
joined_r0x0267336c:
  if (plVar14 != (long *)0x0) {
    lVar13 = plVar14[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  if (local_70 != (long *)0x0) {
    lVar13 = local_70[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 1) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
    }
  }
  return 1;
}


