/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025c0470; name: FUN_025c0470
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_025c0470(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  char *pcVar17;
  long *plVar18;
  int local_b4;
  long *local_b0;
  undefined8 *local_a8 [2];
  long *local_98;
  undefined8 uStack_90;
  long *local_88;
  long *local_80 [2];
  long *local_70;
  undefined8 local_68;
  
  if (*(long *)(param_1 + 0x210) == 0) {
    return;
  }
  FUN_0095dafc(&local_70);
  if (local_70 == (long *)0x0) {
    return;
  }
  FUN_01a8b908(local_80);
  plVar16 = local_80[0];
  puVar7 = PTR_DAT_04379e80;
  puVar6 = PTR_DAT_04379e78;
  if (local_80[0] == (long *)0x0) goto joined_r0x025c0760;
  if (*(int *)((long)local_80[0] + 0xc) != 0) {
    piVar1 = (int *)((long)local_80[0] + 0xc);
    iVar12 = *(int *)((long)local_80[0] + 0xc);
    do {
      plVar18 = (long *)plVar16[2];
      if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
        uVar13 = FUN_0095a420();
        *(undefined8 *)puVar7 = uVar13;
        __cxa_guard_release(puVar6);
      }
      while( true ) {
        if (plVar18 == (long *)0x0) goto LAB_025c0584;
        if (plVar18 == (long *)puVar7) break;
        plVar18 = (long *)*plVar18;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar12) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar14 = plVar16[3];
          plVar16 = (long *)0x0;
          if (lVar14 != 0) {
            plVar16 = (long *)(lVar14 + -0x50);
          }
          goto LAB_025c059c;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar12 = iVar11;
    } while (iVar11 != 0);
  }
LAB_025c0584:
  plVar16 = (long *)0x0;
LAB_025c059c:
  plVar18 = local_80[0];
  puVar8 = PTR_DAT_043794a8;
  puVar7 = PTR_DAT_043794a0;
  puVar6 = PTR_DAT_04379498;
  if (local_80[0] != (long *)0x0) {
    plVar2 = local_80[0] + 1;
    do {
      iVar12 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 == 0) {
      local_80[0][2] = 0;
      if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)puVar7;
      *(long *)puVar8 = lVar14;
      local_a8[0] = (undefined8 *)*plVar18;
      FUN_02a44274(lVar14 + 0xd8,local_a8);
    }
  }
  if (plVar16 == (long *)0x0) goto joined_r0x025c0760;
  FUN_00aae1c0(local_80,plVar16);
  if (local_80[0] != (long *)0x0) {
    plVar18 = local_80[0];
    if (*(int *)((long)local_80[0] + 0xc) != 0) {
      local_98 = (long *)0x0;
      uStack_90 = 0;
      FUN_00b1b5bc(&local_98,local_80);
      FUN_00ae62b0(&local_88,&local_98);
      plVar18 = local_98;
      if (local_98 != (long *)0x0) {
        plVar2 = local_98 + 1;
        do {
          iVar12 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar12;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar12 == 0) {
          local_98[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar14 = *(long *)puVar7;
          *(long *)puVar8 = lVar14;
          local_a8[0] = (undefined8 *)*plVar18;
          FUN_02a44274(lVar14 + 0xd8,local_a8);
        }
      }
      puVar10 = PTR_DAT_0437b4b8;
      puVar9 = PTR_DAT_0437b4b0;
      pcVar17 = (char *)(param_1 + 600);
LAB_025c06a8:
      if (((*pcVar17 != '\0') && (lVar14 = *(long *)(pcVar17 + 0x28), lVar14 != 0)) &&
         (*(int *)(lVar14 + 0xc) != 0)) {
        piVar1 = (int *)(lVar14 + 0xc);
        local_b4 = *(int *)(lVar14 + 0xc);
        do {
          plVar18 = *(long **)(lVar14 + 0x10);
          if (((*PTR_DAT_0437a878 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a878), iVar12 != 0)) {
            if (((*PTR_DAT_043795d8 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar12 != 0)) {
              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar12 != 0)) {
                uVar13 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar13;
                __cxa_guard_release(PTR_DAT_043794d0);
              }
              *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
              __cxa_guard_release(PTR_DAT_043795d8);
            }
            *(undefined **)PTR_DAT_0437a880 = PTR_DAT_043795e0;
            __cxa_guard_release(PTR_DAT_0437a878);
          }
          while( true ) {
            if (plVar18 == (long *)0x0) goto LAB_025c06b8;
            if (plVar18 == (long *)PTR_DAT_0437a880) break;
            plVar18 = (long *)*plVar18;
          }
          iVar12 = *piVar1;
          if (iVar12 == local_b4) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = local_b4 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar14 = *(long *)(lVar14 + 0x18);
              if (lVar14 != 0) {
                FUN_00d81874(local_a8);
                puVar5 = local_a8[0];
                if (local_a8[0] == (undefined8 *)0x0) goto LAB_025c0b44;
                if (*(int *)((long)local_a8[0] + 0xc) == 0) goto LAB_025c0a68;
                piVar1 = (int *)((long)local_a8[0] + 0xc);
                local_b4 = *(int *)((long)local_a8[0] + 0xc);
                goto LAB_025c09e8;
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          local_b4 = iVar12;
        } while (iVar12 != 0);
      }
      goto LAB_025c06b8;
    }
    goto joined_r0x025c0778;
  }
LAB_025c072c:
  lVar14 = plVar16[0xb];
  piVar1 = (int *)(lVar14 + 0xc);
  do {
    iVar12 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar12 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar12 + -1 == 0) {
    *(undefined8 *)(lVar14 + 0x18) = 0;
    (**(code **)(*plVar16 + 0x20))(plVar16);
  }
joined_r0x025c0760:
  if (local_70 != (long *)0x0) {
    lVar14 = local_70[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
    }
  }
  return;
LAB_025c09e8:
  do {
    plVar18 = (long *)puVar5[2];
    if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
      uVar13 = FUN_00ad3750();
      *(undefined8 *)puVar10 = uVar13;
      __cxa_guard_release(puVar9);
    }
    while( true ) {
      if (plVar18 == (long *)0x0) goto LAB_025c0a68;
      if (plVar18 == (long *)puVar10) break;
      plVar18 = (long *)*plVar18;
    }
    iVar12 = *piVar1;
    if (iVar12 == local_b4) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = local_b4 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar15 = puVar5[3];
        local_b0 = (long *)0x0;
        puVar5 = local_a8[0];
        if (lVar15 != 0) {
          local_b0 = (long *)(lVar15 + -0x50);
        }
        goto joined_r0x025c0a94;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    local_b4 = iVar12;
  } while (iVar12 != 0);
LAB_025c0a68:
  local_b0 = (long *)0x0;
  puVar5 = local_a8[0];
joined_r0x025c0a94:
  local_a8[0] = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar5 + 1);
    do {
      iVar12 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      puVar5[2] = 0;
      if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,puVar7,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar6);
      }
      lVar15 = *(long *)puVar7;
      *(long *)puVar8 = lVar15;
      local_68 = *puVar5;
      FUN_02a44274(lVar15 + 0xd8,&local_68);
    }
  }
  if (local_b0 != (long *)0x0) {
    FUN_02a4afa8(local_b0);
    lVar15 = local_b0[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_b0 + 0x20))();
    }
  }
LAB_025c0b44:
  lVar15 = *(long *)(lVar14 + 8);
  piVar1 = (int *)(lVar15 + 0xc);
  do {
    iVar12 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar12 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar12 + -1 == 0) {
    *(undefined8 *)(lVar15 + 0x18) = 0;
    (**(code **)(*(long *)(lVar14 + -0x50) + 0x20))();
  }
LAB_025c06b8:
  pcVar17 = pcVar17 + 0x48;
  if (pcVar17 == (char *)(param_1 + 0x378)) goto code_r0x025c06c4;
  goto LAB_025c06a8;
code_r0x025c06c4:
  plVar18 = local_80[0];
  if (local_88 != (long *)0x0) {
    plVar2 = local_88 + 10;
    do {
      iVar12 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*local_88 + 0x10))();
      plVar18 = local_80[0];
    }
  }
joined_r0x025c0778:
  if (plVar18 != (long *)0x0) {
    plVar2 = plVar18 + 1;
    do {
      iVar12 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 == 0) {
      plVar18[2] = 0;
      if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)puVar7;
      *(long *)puVar8 = lVar14;
      local_a8[0] = (undefined8 *)*plVar18;
      FUN_02a44274(lVar14 + 0xd8,local_a8);
    }
  }
  goto LAB_025c072c;
}


