/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0099aa4c; name: FUN_0099aa4c
 */


void FUN_0099aa4c(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
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
  long *local_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  
  if (*(char *)(param_1 + 0x56d) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x56c) == '\0') {
    return;
  }
  local_70 = (undefined8 *)0x0;
  uStack_68 = 0;
  FUN_009630f4(&local_70,param_1 + 0x510);
  puVar5 = local_70;
  puVar9 = PTR_DAT_04379fd0;
  puVar8 = PTR_DAT_04379fc8;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  plVar14 = (long *)0x0;
  if (local_70 != (undefined8 *)0x0) {
    if (*(int *)((long)local_70 + 0xc) != 0) {
      piVar2 = (int *)((long)local_70 + 0xc);
      iVar10 = *(int *)((long)local_70 + 0xc);
      do {
        plVar14 = (long *)puVar5[2];
        if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
          if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
            uVar12 = FUN_0087f8f0();
            *(undefined8 *)puVar7 = uVar12;
            __cxa_guard_release(puVar6);
          }
          *(undefined **)puVar9 = puVar7;
          __cxa_guard_release(puVar8);
        }
        while( true ) {
          if (plVar14 == (long *)0x0) goto LAB_0099ae2c;
          if (plVar14 == (long *)puVar9) break;
          plVar14 = (long *)*plVar14;
        }
        iVar11 = *piVar2;
        if (iVar11 == iVar10) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar13 = puVar5[3];
            plVar14 = (long *)0x0;
            puVar5 = local_70;
            if (lVar13 != 0) {
              plVar14 = (long *)(lVar13 + -0x50);
            }
            goto joined_r0x0099ad9c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar11;
      } while (iVar11 != 0);
    }
LAB_0099ae2c:
    plVar14 = (long *)0x0;
    puVar5 = local_70;
joined_r0x0099ad9c:
    if (puVar5 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar5 + 1);
      do {
        iVar10 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 == 0) {
        puVar5[2] = 0;
        local_70 = puVar5;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_58 = *puVar5;
        FUN_02a44274(lVar13 + 0xd8,&local_58);
      }
    }
  }
  local_70 = (undefined8 *)0x0;
  uStack_68 = 0;
  FUN_01901488(&local_70,plVar14 + 0x1c);
  if (local_70 == (undefined8 *)0x0) {
    local_78 = (long *)0x0;
  }
  else {
    FUN_009ac698(&local_78);
    puVar5 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_70 + 1);
      do {
        iVar10 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 == 0) {
        local_70[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_58 = *puVar5;
        FUN_02a44274(lVar13 + 0xd8,&local_58);
      }
    }
  }
  if (local_78 == (long *)0x0) goto joined_r0x0099ab7c;
  if (((*PTR_DAT_04379578 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379578), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar13 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar13;
  plVar15 = *(long **)(*(long *)(lVar13 + 0xd0) + 0xf0);
  if (*(char *)((long)local_78 + 0xefb1) == '\0') {
    if (plVar15 != (long *)0x0) {
      plVar1 = plVar15 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      FUN_009817fc(plVar15);
      do {
        iVar10 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto joined_r0x0099abe4;
    }
    FUN_009817fc(0);
  }
  else if (plVar15 == (long *)0x0) {
    FUN_00981934(0);
  }
  else {
    plVar1 = plVar15 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_00981934(plVar15);
    do {
      iVar10 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
joined_r0x0099abe4:
    if (iVar10 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
  *(undefined1 *)(param_1 + 0x56c) = 0;
  if (local_78 != (long *)0x0) {
    lVar13 = local_78[0xb];
    piVar2 = (int *)(lVar13 + 0xc);
    do {
      iVar10 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_78 + 0x20))();
    }
  }
joined_r0x0099ab7c:
  if (plVar14 != (long *)0x0) {
    lVar13 = plVar14[0xb];
    piVar2 = (int *)(lVar13 + 0xc);
    do {
      iVar10 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  return;
}


