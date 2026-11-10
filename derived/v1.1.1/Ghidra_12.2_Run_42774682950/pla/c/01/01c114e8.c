/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c114e8; name: FUN_01c114e8
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01c114e8(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  long *local_a0 [2];
  long *local_90;
  undefined8 local_88;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  local_b0 = (undefined8 *)0x0;
  uStack_a8 = 0;
  FUN_01b82894(&local_b0);
  puVar16 = local_b0;
  if (local_b0 == (undefined8 *)0x0) goto joined_r0x01c11734;
  lVar17 = param_1[9];
  FUN_01c11c78(&local_90);
  plVar9 = local_90;
  puVar16 = local_b0;
  if (local_90 == (long *)0x0) goto joined_r0x01c11734;
  (**(code **)(*local_90 + 0x48))(&local_70,local_90);
  plVar19 = local_70;
  if (local_70 != (long *)0x0) {
    plVar13 = (long *)(**(code **)local_70[10])(local_70 + 10);
    puVar6 = PTR_DAT_043794b8;
    if (((*PTR_DAT_043794b0 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_043794b0), puVar7 = PTR_DAT_043794c8, iVar11 != 0)) {
      if (((*PTR_DAT_043794c0 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_043794c0), puVar8 = PTR_DAT_043794d8, iVar11 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar11 != 0)) {
          uVar14 = FUN_0087f8f0();
          *(undefined8 *)puVar8 = uVar14;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar7 = puVar8;
        __cxa_guard_release(PTR_DAT_043794c0);
      }
      *(undefined **)puVar6 = puVar7;
      __cxa_guard_release(PTR_DAT_043794b0);
    }
    for (; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
      if (plVar13 == (long *)puVar6) {
        uVar14 = FUN_00aeb4a0(plVar19,plVar19[1],lVar17 + 0x4d0);
        local_90 = (long *)*param_1;
        local_88 = param_1[1];
        local_80 = param_1[2];
        local_78 = (long *)param_1[3];
        if (local_78 == (long *)0x0) {
          lVar21 = *(long *)(lVar17 + 0x308);
          puVar16 = (undefined8 *)PTR_DAT_0437a5c0;
        }
        else {
          (**(code **)(*local_78 + 0x18))();
          lVar21 = *(long *)(lVar17 + 0x308);
          puVar16 = (undefined8 *)PTR_DAT_0437a5c0;
        }
        PTR_DAT_0437a5c0 = (undefined *)puVar16;
        if ((lVar21 == 0) || (*(int *)(lVar21 + 0xc) == 0)) goto LAB_01c11644;
        piVar1 = (int *)(lVar21 + 0xc);
        iVar11 = *(int *)(lVar21 + 0xc);
        goto LAB_01c11904;
      }
    }
    goto LAB_01c116dc;
  }
  goto LAB_01c11700;
LAB_01c11904:
  do {
    plVar19 = *(long **)(lVar21 + 0x10);
    if (((*PTR_DAT_0437a5b8 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a5b8), iVar12 != 0)) {
      uVar15 = FUN_00ab4284();
      *puVar16 = uVar15;
      __cxa_guard_release(PTR_DAT_0437a5b8);
    }
    while( true ) {
      if (plVar19 == (long *)0x0) goto LAB_01c11644;
      if (plVar19 == puVar16) break;
      plVar19 = (long *)*plVar19;
    }
    iVar12 = *piVar1;
    if (iVar12 == iVar11) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar21 = *(long *)(lVar21 + 0x18);
        plVar19 = (long *)(lVar21 + -0x50);
        if (lVar21 != 0) {
          FUN_00aaeed4(local_a0,plVar19);
          plVar13 = local_a0[0];
          puVar6 = PTR_DAT_0437a140;
          if (local_a0[0] == (long *)0x0) goto LAB_01c11970;
          if (*(int *)((long)local_a0[0] + 0xc) == 0) goto LAB_01c11ba0;
          piVar1 = (int *)((long)local_a0[0] + 0xc);
          iVar11 = *(int *)((long)local_a0[0] + 0xc);
          goto LAB_01c11a0c;
        }
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = iVar12;
  } while (iVar12 != 0);
  goto LAB_01c11644;
  while (iVar11 = iVar12, iVar12 != 0) {
LAB_01c11a0c:
    plVar20 = (long *)plVar13[2];
    if (((*PTR_DAT_0437a138 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a138), iVar12 != 0)) {
      uVar15 = FUN_009b19b4();
      *(undefined8 *)puVar6 = uVar15;
      __cxa_guard_release(PTR_DAT_0437a138);
    }
    plVar4 = (long *)0x0;
    plVar5 = local_a0[0];
    if (plVar20 == (long *)0x0) goto joined_r0x01c11a64;
    while (plVar20 != (long *)puVar6) {
      plVar20 = (long *)*plVar20;
      if (plVar20 == (long *)0x0) {
        plVar4 = (long *)0x0;
        goto joined_r0x01c11a64;
      }
    }
    iVar12 = *piVar1;
    if (iVar12 == iVar11) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar18 = plVar13[3];
        plVar4 = (long *)0x0;
        if (lVar18 != 0) {
          plVar4 = (long *)(lVar18 + -0x50);
        }
        goto joined_r0x01c11a64;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
LAB_01c11ba0:
  plVar4 = (long *)0x0;
  plVar5 = local_a0[0];
joined_r0x01c11a64:
  local_a0[0] = plVar5;
  if (plVar5 != (long *)0x0) {
    plVar13 = plVar5 + 1;
    do {
      iVar11 = (int)*plVar13 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *(int *)plVar13 = iVar11;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 == 0) {
      plVar5[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar18;
      local_68 = (long *)*plVar5;
      FUN_02a44274(lVar18 + 0xd8,&local_68);
    }
  }
  if (plVar4 != (long *)0x0) {
    puVar16 = (undefined8 *)FUN_02aac0f0(plVar4);
    plVar13 = (long *)*puVar16;
    if (plVar13 != (long *)0x0) {
      plVar20 = plVar13 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar3) {
          *(int *)plVar20 = (int)*plVar20 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    sVar10 = FUN_02b68184(plVar13,&local_90);
    plVar20 = local_78;
    if (sVar10 == -1) {
      local_90 = (long *)param_1[4];
      local_88 = param_1[5];
      local_80 = param_1[6];
      plVar20 = (long *)param_1[7];
      if (plVar20 != (long *)0x0) {
        (**(code **)(*plVar20 + 0x18))(plVar20);
      }
      if (local_78 != (long *)0x0) {
        lVar18 = *local_78;
        local_78 = plVar20;
        (**(code **)(lVar18 + 0x20))();
        plVar20 = local_78;
      }
    }
    local_78 = plVar20;
    if (plVar13 != (long *)0x0) {
      plVar20 = plVar13 + 10;
      do {
        iVar11 = (int)*plVar20 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar3) {
          *(int *)plVar20 = iVar11;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
    lVar18 = plVar4[0xb];
    piVar1 = (int *)(lVar18 + 0xc);
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
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*plVar4 + 0x20))(plVar4);
    }
  }
LAB_01c11970:
  lVar21 = *(long *)(lVar21 + 8);
  piVar1 = (int *)(lVar21 + 0xc);
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
    *(undefined8 *)(lVar21 + 0x18) = 0;
    (**(code **)(*plVar19 + 0x20))(plVar19);
  }
LAB_01c11644:
  FUN_00956dac(local_a0,lVar17 + 0x4e0);
  if (local_a0[0] != (long *)0x0) {
    local_68 = (long *)FUN_00b13c20(local_a0[0] + 0x1e,&local_68);
    if (local_68 != (long *)0x0) {
      lVar17 = local_68[0xb];
      if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar17 + 0x10) == 0) {
        uVar15 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
        *(undefined8 *)(lVar17 + 0x10) = uVar15;
      }
      piVar1 = (int *)(lVar17 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_00d807f4(uVar14,&local_68,&local_90,*(undefined1 *)(param_1 + 8));
    if (local_68 != (long *)0x0) {
      lVar17 = local_68[0xb];
      piVar1 = (int *)(lVar17 + 0xc);
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
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
      }
    }
    if (local_a0[0] != (long *)0x0) {
      lVar17 = local_a0[0][0xb];
      piVar1 = (int *)(lVar17 + 0xc);
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
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*local_a0[0] + 0x20))();
      }
    }
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
LAB_01c116dc:
  if (local_70 != (long *)0x0) {
    lVar17 = local_70[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
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
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
    }
  }
LAB_01c11700:
  lVar17 = plVar9[0xb];
  piVar1 = (int *)(lVar17 + 0xc);
  do {
    iVar11 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar11 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puVar16 = local_b0;
  if (iVar11 + -1 == 0) {
    *(undefined8 *)(lVar17 + 0x18) = 0;
    (**(code **)(*plVar9 + 0x20))(plVar9);
    puVar16 = local_b0;
  }
joined_r0x01c11734:
  if (puVar16 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar16 + 1);
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
      puVar16[2] = 0;
      local_b0 = puVar16;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_90 = (long *)*puVar16;
      FUN_02a44274(lVar17 + 0xd8,&local_90);
    }
  }
  return 1;
}


