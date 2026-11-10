/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f629d0; name: FUN_01f629d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f629d0(long param_1,byte param_2)

{
  int *piVar1;
  uint uVar2;
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
  long *plVar13;
  code *pcVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long *local_80;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  puVar9 = PTR_DAT_043796e8;
  puVar8 = PTR_DAT_043796e0;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  lVar18 = *(long *)(param_1 + 0x70);
  if (lVar18 == 0) {
    return;
  }
  if (*(int *)(lVar18 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(lVar18 + 0xc);
  iVar11 = *(int *)(lVar18 + 0xc);
  do {
    plVar16 = *(long **)(lVar18 + 0x10);
    if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
      if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
        uVar12 = FUN_0087f8f0();
        *(undefined8 *)puVar7 = uVar12;
        __cxa_guard_release(puVar6);
      }
      *(undefined **)puVar9 = puVar7;
      __cxa_guard_release(puVar8);
    }
    while( true ) {
      if (plVar16 == (long *)0x0) {
        return;
      }
      if (plVar16 == (long *)puVar9) break;
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
        lVar18 = *(long *)(lVar18 + 0x18);
        if (lVar18 == 0) {
          return;
        }
        plVar16 = (long *)(lVar18 + -0x50);
        FUN_0199c220(local_78,plVar16);
        puVar5 = local_78[0];
        if (local_78[0] == (undefined8 *)0x0) goto LAB_01f62b14;
        if (*(int *)((long)local_78[0] + 0xc) == 0) goto LAB_01f62efc;
        piVar1 = (int *)((long)local_78[0] + 0xc);
        iVar11 = *(int *)((long)local_78[0] + 0xc);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = iVar10;
    if (iVar10 == 0) {
      return;
    }
  } while( true );
  do {
    plVar15 = (long *)puVar5[2];
    if (((*PTR_DAT_0437a0e8 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a0e8), iVar10 != 0)) {
      if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
        uVar12 = FUN_0087f8f0();
        *(undefined8 *)puVar7 = uVar12;
        __cxa_guard_release(puVar6);
      }
      *(undefined **)PTR_DAT_0437a0f0 = puVar7;
      __cxa_guard_release(PTR_DAT_0437a0e8);
    }
    while( true ) {
      if (plVar15 == (long *)0x0) goto LAB_01f62efc;
      if (plVar15 == (long *)PTR_DAT_0437a0f0) break;
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
        lVar17 = puVar5[3];
        plVar15 = (long *)0x0;
        puVar5 = local_78[0];
        if (lVar17 != 0) {
          plVar15 = (long *)(lVar17 + -0x50);
        }
        goto joined_r0x01f62f20;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = iVar10;
  } while (iVar10 != 0);
LAB_01f62efc:
  plVar15 = (long *)0x0;
  puVar5 = local_78[0];
joined_r0x01f62f20:
  local_78[0] = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar5 + 1);
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
      puVar5[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_68 = *puVar5;
      FUN_02a44274(lVar17 + 0xd8,&local_68);
    }
  }
  if (plVar15 != (long *)0x0) {
    for (plVar13 = (long *)plVar15[0x27]; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
      plVar19 = (long *)plVar13[3];
      if (plVar19 == (long *)0x0) {
        FUN_015916d0(_DAT_00000070,param_2 & 1,2,0);
      }
      else {
        lVar17 = plVar19[0xb];
        if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_01f6308c;
        if (*(long *)(lVar17 + 0x10) == 0) {
          uVar12 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
          *(undefined8 *)(lVar17 + 0x10) = uVar12;
        }
        piVar1 = (int *)(lVar17 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        FUN_015916d0(plVar19[0xe],param_2 & 1,2,0);
        lVar17 = plVar19[0xb];
        piVar1 = (int *)(lVar17 + 0xc);
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
          *(undefined8 *)(lVar17 + 0x18) = 0;
          (**(code **)(*plVar19 + 0x20))(plVar19);
        }
      }
    }
    uVar2 = *(uint *)(plVar15 + 0x47) | 2;
    if ((param_2 & 1) == 0) {
      uVar2 = *(uint *)(plVar15 + 0x47) & 0xfffffffd;
    }
    *(uint *)(plVar15 + 0x47) = uVar2;
    lVar17 = plVar15[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
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
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
      plVar15 = *(long **)(lVar18 + 0x60);
      goto joined_r0x01f62b18;
    }
  }
LAB_01f62b14:
  plVar15 = *(long **)(lVar18 + 0x60);
joined_r0x01f62b18:
  if (plVar15 != (long *)0x0) {
    lVar17 = plVar15[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) {
LAB_01f6308c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar17 = plVar15[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
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
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
    FUN_0256bcdc(plVar15,param_2 & 1);
    lVar17 = *(long *)plVar15[0x9d];
    if ((param_2 & 1) == 0) {
      pcVar14 = *(code **)(lVar17 + 0x48);
    }
    else {
      pcVar14 = *(code **)(lVar17 + 0x40);
    }
    (*pcVar14)((long *)plVar15[0x9d],0);
  }
  if (((*PTR_DAT_0437a648 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a648);
  }
  lVar17 = *(long *)PTR_DAT_0437a650;
  *(long *)PTR_DAT_0437a658 = lVar17;
  plVar15 = *(long **)(lVar17 + 0x278);
  if ((param_2 & 1) == 0) {
    (**(code **)(*plVar15 + 0x48))(plVar15,0);
    (**(code **)(**(long **)(lVar17 + 0x250) + 0x48))(*(long **)(lVar17 + 0x250),0);
    (**(code **)(**(long **)(lVar17 + 600) + 0x48))(*(long **)(lVar17 + 600),0);
    (**(code **)(**(long **)(lVar17 + 0x260) + 0x48))(*(long **)(lVar17 + 0x260),0);
    (**(code **)(**(long **)(lVar17 + 0x268) + 0x48))(*(long **)(lVar17 + 0x268),0);
    plVar15 = *(long **)(lVar17 + 0x270);
    pcVar14 = *(code **)(*plVar15 + 0x48);
  }
  else {
    (**(code **)(*plVar15 + 0x40))(plVar15,0);
    (**(code **)(**(long **)(lVar17 + 0x250) + 0x40))(*(long **)(lVar17 + 0x250),0);
    (**(code **)(**(long **)(lVar17 + 600) + 0x40))(*(long **)(lVar17 + 600),0);
    (**(code **)(**(long **)(lVar17 + 0x260) + 0x40))(*(long **)(lVar17 + 0x260),0);
    (**(code **)(**(long **)(lVar17 + 0x268) + 0x40))(*(long **)(lVar17 + 0x268),0);
    plVar15 = *(long **)(lVar17 + 0x270);
    pcVar14 = *(code **)(*plVar15 + 0x40);
  }
  (*pcVar14)(plVar15,0);
  FUN_019a1c40(local_78,plVar16);
  if (local_78[0] == (undefined8 *)0x0) {
    local_80 = (long *)0x0;
    plVar15 = local_80;
  }
  else {
    FUN_00bd2290(&local_80);
    plVar15 = local_80;
    if (local_78[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_78[0] + 1);
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
        local_78[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar17 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar17;
        local_68 = *local_78[0];
        FUN_02a44274(lVar17 + 0xd8,&local_68);
        plVar15 = local_80;
      }
    }
  }
  local_80 = plVar15;
  if (plVar15 != (long *)0x0) {
    plVar13 = (long *)plVar15[0x20];
    bVar4 = (param_2 & 1) == 0;
    if (bVar4) {
      (**(code **)(*plVar13 + 0x48))(plVar13,0);
    }
    else {
      (**(code **)(*plVar13 + 0x40))(plVar13,0);
    }
    *(bool *)(plVar15 + 0x2d) = !bVar4;
    if (local_80 != (long *)0x0) {
      lVar17 = local_80[0xb];
      piVar1 = (int *)(lVar17 + 0xc);
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
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*local_80 + 0x20))();
      }
    }
  }
  *(byte *)(param_1 + 0x68) = param_2 & 1;
  lVar18 = *(long *)(lVar18 + 8);
  piVar1 = (int *)(lVar18 + 0xc);
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
    *(undefined8 *)(lVar18 + 0x18) = 0;
    (**(code **)(*plVar16 + 0x20))(plVar16);
  }
  return;
}


