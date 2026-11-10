/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00af55ec; name: FUN_00af55ec
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00af55ec(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  long *local_98;
  undefined8 uStack_90;
  undefined8 *local_88 [3];
  long *local_70;
  undefined8 local_68;
  
  puVar8 = PTR_DAT_0437a558;
  puVar7 = PTR_DAT_0437a550;
  puVar1 = (undefined8 *)(param_2 + 0x220);
  if ((*(long *)(param_2 + 0x220) != 0) && (*(int *)(*(long *)(param_2 + 0x220) + 0xc) != 0))
  goto LAB_00af562c;
  lVar16 = *(long *)(param_2 + 0x200);
  if (lVar16 == 0) {
LAB_00af5668:
    bVar6 = false;
  }
  else {
    if (*(int *)(lVar16 + 0xc) != 0) {
      piVar2 = (int *)(lVar16 + 0xc);
      iVar11 = *(int *)(lVar16 + 0xc);
      do {
        puVar19 = *(undefined8 **)(lVar16 + 0x10);
        if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
          uVar13 = FUN_00aa0310();
          *(undefined8 *)puVar8 = uVar13;
          __cxa_guard_release(puVar7);
        }
        if (puVar19 == (undefined8 *)0x0) goto LAB_00af5820;
        while (puVar19 != (undefined8 *)puVar8) {
          puVar19 = (undefined8 *)*puVar19;
          if (puVar19 == (undefined8 *)0x0) goto LAB_00af5668;
        }
        iVar12 = *piVar2;
        if (iVar12 == iVar11) {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar16 = *(long *)(lVar16 + 0x18);
            plVar15 = (long *)(lVar16 + -0x50);
            if (lVar16 == 0) goto LAB_00af5820;
            FUN_00a9ecd4(local_88,plVar15);
            puVar19 = local_88[0];
            puVar9 = PTR_DAT_0437a130;
            puVar8 = PTR_DAT_0437a128;
            puVar7 = PTR_DAT_043794d0;
            if (local_88[0] == (undefined8 *)0x0) {
              bVar6 = false;
              goto joined_r0x00af57e8;
            }
            if (*(int *)((long)local_88[0] + 0xc) == 0) goto LAB_00af5be0;
            piVar2 = (int *)((long)local_88[0] + 0xc);
            iVar11 = *(int *)((long)local_88[0] + 0xc);
            goto LAB_00af5864;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar12;
      } while (iVar12 != 0);
      goto LAB_00af5668;
    }
LAB_00af5820:
    bVar6 = false;
  }
LAB_00af568c:
  if (bVar6) {
    return;
  }
  goto LAB_00af5690;
LAB_00af5864:
  do {
    plVar17 = (long *)puVar19[2];
    if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
      if (((*PTR_DAT_043795d8 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar12 != 0)) {
        if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
          uVar13 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar13;
          __cxa_guard_release(puVar7);
        }
        *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
        __cxa_guard_release(PTR_DAT_043795d8);
      }
      *(undefined **)puVar9 = PTR_DAT_043795e0;
      __cxa_guard_release(puVar8);
    }
    while( true ) {
      if (plVar17 == (long *)0x0) goto LAB_00af5be0;
      if (plVar17 == (long *)puVar9) break;
      plVar17 = (long *)*plVar17;
    }
    iVar12 = *piVar2;
    if (iVar12 == iVar11) {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar14 = puVar19[3];
        plVar17 = (long *)0x0;
        puVar19 = local_88[0];
        if (lVar14 != 0) {
          plVar17 = (long *)(lVar14 + -0x50);
        }
        goto joined_r0x00af58b8;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = iVar12;
  } while (iVar12 != 0);
LAB_00af5be0:
  plVar17 = (long *)0x0;
  puVar19 = local_88[0];
joined_r0x00af58b8:
  local_88[0] = puVar19;
  if (puVar19 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar19 + 1);
    do {
      iVar11 = *piVar2;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      puVar19[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_98 = (long *)*puVar19;
      FUN_02a44274(lVar14 + 0xd8,&local_98);
    }
  }
  if (plVar17 == (long *)0x0) {
LAB_00af5c08:
    bVar6 = false;
  }
  else {
    FUN_02a4754c(local_88,PTR_DAT_0437a3d8);
    puVar19 = (undefined8 *)FUN_0289f734(plVar17,local_88);
    plVar18 = (long *)*puVar19;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    bVar6 = false;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x28))(local_88,plVar18);
      local_98 = (long *)0x0;
      uStack_90 = 0;
      FUN_00af8910(&local_98,local_88);
      puVar19 = local_88[0];
      if (local_88[0] != (undefined8 *)0x0) {
        piVar2 = (int *)(local_88[0] + 1);
        do {
          iVar11 = *piVar2;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 + -1 == 0) {
          local_88[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar14 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar14;
          local_68 = *puVar19;
          FUN_02a44274(lVar14 + 0xd8,&local_68);
        }
      }
      FUN_00af8c10(puVar1,&local_98);
      *param_1 = 0;
      param_1[1] = 0;
      FUN_00af8f10(param_1,puVar1);
      plVar10 = local_98;
      if (local_98 != (long *)0x0) {
        plVar3 = local_98 + 1;
        do {
          iVar11 = (int)*plVar3 + -1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *(int *)plVar3 = iVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 == 0) {
          local_98[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar14 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar14;
          local_88[0] = (undefined8 *)*plVar10;
          FUN_02a44274(lVar14 + 0xd8,local_88);
        }
      }
      (**(code **)(*plVar18 + 0x18))(plVar18);
      bVar6 = true;
    }
    lVar14 = plVar17[0xb];
    piVar2 = (int *)(lVar14 + 0xc);
    do {
      iVar11 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))(plVar17);
    }
    if (!bVar6) goto LAB_00af5c08;
    bVar6 = true;
  }
joined_r0x00af57e8:
  if (plVar15 == (long *)0x0) goto LAB_00af568c;
  lVar16 = *(long *)(lVar16 + 8);
  piVar2 = (int *)(lVar16 + 0xc);
  do {
    iVar11 = *piVar2;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar5) {
      *piVar2 = iVar11 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar11 + -1 != 0) goto LAB_00af568c;
  *(undefined8 *)(lVar16 + 0x18) = 0;
  (**(code **)(*plVar15 + 0x20))();
  if (bVar6) {
    return;
  }
LAB_00af5690:
  plVar15 = (long *)*puVar1;
  *puVar1 = 0;
  if (plVar15 != (long *)0x0) {
    plVar17 = plVar15 + 1;
    do {
      iVar11 = (int)*plVar17 + -1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = iVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 == 0) {
      plVar15[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_88[0] = (undefined8 *)*plVar15;
      FUN_02a44274(lVar16 + 0xd8,local_88);
    }
  }
  *(undefined8 *)(param_2 + 0x228) = 0;
LAB_00af562c:
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00af8f10(param_1,puVar1);
  return;
}


