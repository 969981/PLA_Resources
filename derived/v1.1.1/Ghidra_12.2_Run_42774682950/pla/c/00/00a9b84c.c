/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a9b84c; name: FUN_00a9b84c
 */


void FUN_00a9b84c(float param_1,long param_2,ulong param_3)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 *local_88 [2];
  long *local_78;
  undefined8 local_68;
  
  if (*(char *)(param_2 + 0xc5) == '\0') {
    uVar12 = FUN_00a9bfd8(param_2);
    if ((uVar12 & 1) != 0) goto LAB_00a9b95c;
    bVar4 = false;
  }
  else {
    uVar12 = FUN_00a9c5a4(param_2);
    if ((uVar12 & 1) == 0) {
      bVar4 = false;
    }
    else {
LAB_00a9b95c:
      bVar4 = true;
      if (*(char *)(param_2 + 0xc6) == '\0') {
        *(undefined1 *)(param_2 + 0xc6) = 1;
      }
    }
  }
  if ((param_3 & 1) != 0) {
    if (*(char *)(param_2 + 0xc0) != '\0') {
      if (*(char *)(param_2 + 0xc3) != '\0') {
        return;
      }
      if (param_1 <= *(float *)(param_2 + 0x90) * *(float *)(param_2 + 0x90)) {
        FUN_00a9e134(*(undefined4 *)(param_2 + 0x94),param_2,1);
        return;
      }
      return;
    }
    *(undefined1 *)(param_2 + 0xc0) = 1;
    puVar5 = PTR_DAT_04379578;
    if (((*PTR_DAT_04379578 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379578), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379578);
    }
    puVar7 = PTR_DAT_04379588;
    puVar6 = PTR_DAT_04379580;
    *(undefined8 *)PTR_DAT_04379588 = *(undefined8 *)PTR_DAT_04379580;
    plVar13 = (long *)FUN_00954890();
    puVar8 = PTR_DAT_043796e8;
    lVar16 = *plVar13;
    if ((lVar16 == 0) || (*(int *)(lVar16 + 0xc) == 0)) {
LAB_00a9ba84:
      plVar13 = (long *)0x0;
    }
    else {
      piVar1 = (int *)(lVar16 + 0xc);
      iVar10 = *(int *)(lVar16 + 0xc);
      do {
        puVar15 = *(undefined8 **)(lVar16 + 0x10);
        if (((*PTR_DAT_043796e0 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_043796e0), iVar11 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar11 != 0)) {
            uVar14 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar14;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)puVar8 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_043796e0);
        }
        if (puVar15 == (undefined8 *)0x0) goto LAB_00a9ba84;
        while (puVar15 != (undefined8 *)puVar8) {
          puVar15 = (undefined8 *)*puVar15;
          plVar13 = (long *)0x0;
          if (puVar15 == (undefined8 *)0x0) goto LAB_00a9ba88;
        }
        iVar11 = *piVar1;
        if (iVar11 == iVar10) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            plVar13 = (long *)0x0;
            if (*(long *)(lVar16 + 0x18) != 0) {
              plVar13 = (long *)(*(long *)(lVar16 + 0x18) + -0x50);
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        plVar13 = (long *)0x0;
        iVar10 = iVar11;
      } while (iVar11 != 0);
    }
LAB_00a9ba88:
    FUN_0199d14c(local_88,plVar13);
    if (local_88[0] == (undefined8 *)0x0) {
      local_78 = (long *)0x0;
    }
    else {
      FUN_00959d38(&local_78);
      if (local_88[0] != (undefined8 *)0x0) {
        piVar1 = (int *)(local_88[0] + 1);
        do {
          iVar10 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 + -1 == 0) {
          local_88[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar16 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar16;
          local_68 = *local_88[0];
          FUN_02a44274(lVar16 + 0xd8,&local_68);
        }
      }
    }
    if (plVar13 != (long *)0x0) {
      lVar16 = plVar13[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
    }
    if (local_78 != (long *)0x0) {
      FUN_02605ea4(local_78,1);
      FUN_026077a0(local_78);
      if (local_78 != (long *)0x0) {
        lVar16 = local_78[0xb];
        piVar1 = (int *)(lVar16 + 0xc);
        do {
          iVar10 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*local_78 + 0x20))();
        }
      }
    }
    *(undefined1 *)(param_2 + 0xc1) = 1;
    if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379578), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379578);
    }
    lVar16 = *(long *)puVar6;
    *(long *)puVar7 = lVar16;
    *(undefined1 *)(*(long *)(lVar16 + 200) + 0x56f) = 1;
    if (*(char *)(param_2 + 0xc3) == '\0') {
      FUN_00a9e134(*(undefined4 *)(param_2 + 0x94),param_2,
                   param_1 <= *(float *)(param_2 + 0x90) * *(float *)(param_2 + 0x90));
      return;
    }
    return;
  }
  if (bVar4) {
    if (*(char *)(param_2 + 0xc3) == '\0') {
      return;
    }
    FUN_00a9e920(param_2);
    return;
  }
  if (*(char *)(param_2 + 0xc6) == '\0') {
    return;
  }
  *(undefined1 *)(param_2 + 0xc6) = 0;
  *(undefined2 *)(param_2 + 0xc2) = 0;
  if (*(char *)(param_2 + 0xc0) == '\0') {
    return;
  }
  *(undefined1 *)(param_2 + 0xc0) = 0;
  puVar5 = PTR_DAT_04379578;
  if (((*PTR_DAT_04379578 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379578), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  puVar7 = PTR_DAT_04379588;
  puVar6 = PTR_DAT_04379580;
  *(undefined8 *)PTR_DAT_04379588 = *(undefined8 *)PTR_DAT_04379580;
  plVar13 = (long *)FUN_00954890();
  puVar9 = PTR_DAT_043796e8;
  puVar8 = PTR_DAT_043796e0;
  lVar16 = *plVar13;
  if ((lVar16 == 0) || (*(int *)(lVar16 + 0xc) == 0)) {
LAB_00a9b9bc:
    plVar13 = (long *)0x0;
  }
  else {
    piVar1 = (int *)(lVar16 + 0xc);
    iVar10 = *(int *)(lVar16 + 0xc);
    do {
      puVar15 = *(undefined8 **)(lVar16 + 0x10);
      if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar11 != 0)) {
          uVar14 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar14;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar9 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar8);
      }
      if (puVar15 == (undefined8 *)0x0) goto LAB_00a9b9bc;
      while (puVar15 != (undefined8 *)puVar9) {
        puVar15 = (undefined8 *)*puVar15;
        plVar13 = (long *)0x0;
        if (puVar15 == (undefined8 *)0x0) goto LAB_00a9b9c0;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar10) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          plVar13 = (long *)0x0;
          if (*(long *)(lVar16 + 0x18) != 0) {
            plVar13 = (long *)(*(long *)(lVar16 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar13 = (long *)0x0;
      iVar10 = iVar11;
    } while (iVar11 != 0);
  }
LAB_00a9b9c0:
  FUN_0199d14c(local_88,plVar13);
  if (local_88[0] == (undefined8 *)0x0) {
    local_78 = (long *)0x0;
  }
  else {
    FUN_00959d38(&local_78);
    if (local_88[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_88[0] + 1);
      do {
        iVar10 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 == 0) {
        local_88[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar16;
        local_68 = *local_88[0];
        FUN_02a44274(lVar16 + 0xd8,&local_68);
      }
    }
  }
  if (plVar13 != (long *)0x0) {
    lVar16 = plVar13[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  if ((local_78 != (long *)0x0) && (FUN_02605ea4(local_78,0), local_78 != (long *)0x0)) {
    lVar16 = local_78[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_78 + 0x20))();
      bVar2 = *puVar5;
      goto joined_r0x00a9bc18;
    }
  }
  bVar2 = *puVar5;
joined_r0x00a9bc18:
  if (((bVar2 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379578), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar16 = *(long *)puVar6;
  *(long *)puVar7 = lVar16;
  *(undefined1 *)(*(long *)(lVar16 + 200) + 0x56f) = 0;
  return;
}


