/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d95998; name: FUN_01d95998
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01d95998(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined4 uVar19;
  long *local_140;
  long *local_130;
  undefined8 local_128;
  undefined8 *local_120;
  char *local_118;
  undefined8 local_110;
  long *local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  long *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  undefined8 local_80 [2];
  undefined8 *local_68;
  
  puVar5 = PTR_DAT_043796e8;
  puVar4 = PTR_DAT_043796e0;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  lVar15 = *(long *)(param_1 + 0x90);
  if (lVar15 == 0) {
    return;
  }
  if (*(int *)(lVar15 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(lVar15 + 0xc);
  iVar9 = *(int *)(lVar15 + 0xc);
  do {
    plVar17 = *(long **)(lVar15 + 0x10);
    if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar4), iVar10 != 0)) {
      if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
        uVar12 = FUN_0087f8f0();
        *(undefined8 *)puVar7 = uVar12;
        __cxa_guard_release(puVar6);
      }
      *(undefined **)puVar5 = puVar7;
      __cxa_guard_release(puVar4);
    }
    while( true ) {
      if (plVar17 == (long *)0x0) {
        return;
      }
      if (plVar17 == (long *)puVar5) break;
      plVar17 = (long *)*plVar17;
    }
    iVar10 = *piVar1;
    if (iVar10 == iVar9) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar15 = *(long *)(lVar15 + 0x18);
        plVar17 = (long *)(lVar15 + -0x50);
        if (lVar15 == 0) {
          return;
        }
        FUN_0199c138(&local_98,plVar17);
        FUN_0199bf58(&local_e8,plVar17);
        plVar16 = local_e8;
        puVar5 = PTR_DAT_04379fd0;
        puVar4 = PTR_DAT_04379fc8;
        if (local_e8 == (long *)0x0) {
          local_140 = (long *)0x0;
          goto LAB_01d95a9c;
        }
        if (*(int *)((long)local_e8 + 0xc) == 0) goto LAB_01d97938;
        piVar1 = (int *)((long)local_e8 + 0xc);
        iVar9 = *(int *)((long)local_e8 + 0xc);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar9 = iVar10;
    if (iVar10 == 0) {
      return;
    }
  } while( true );
LAB_01d97844:
  plVar18 = (long *)plVar16[2];
  if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar4), iVar10 != 0)) {
    if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
      uVar12 = FUN_0087f8f0();
      *(undefined8 *)puVar7 = uVar12;
      __cxa_guard_release(puVar6);
    }
    *(undefined **)puVar5 = puVar7;
    __cxa_guard_release(puVar4);
  }
  while( true ) {
    if (plVar18 == (long *)0x0) goto LAB_01d97938;
    if (plVar18 == (long *)puVar5) break;
    plVar18 = (long *)*plVar18;
  }
  iVar10 = *piVar1;
  if (iVar10 == iVar9) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar9 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      lVar11 = plVar16[3];
      local_140 = (long *)0x0;
      plVar16 = local_e8;
      if (lVar11 != 0) {
        local_140 = (long *)(lVar11 + -0x50);
      }
      goto joined_r0x01d9788c;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar9 = iVar10;
  if (iVar10 == 0) {
LAB_01d97938:
    local_140 = (long *)0x0;
    plVar16 = local_e8;
joined_r0x01d9788c:
    local_e8 = plVar16;
    if (plVar16 != (long *)0x0) {
      plVar18 = plVar16 + 1;
      do {
        iVar9 = (int)*plVar18 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar3) {
          *(int *)plVar18 = iVar9;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 == 0) {
        plVar16[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_120 = (undefined8 *)*plVar16;
        FUN_02a44274(lVar11 + 0xd8,&local_120);
      }
    }
LAB_01d95a9c:
    FUN_019a0e34(&local_e8,plVar17);
    if (local_e8 == (long *)0x0) {
      local_a0 = (long *)0x0;
    }
    else {
      FUN_01d2b828(&local_a0);
      if (local_e8 != (long *)0x0) {
        plVar16 = local_e8 + 1;
        do {
          iVar9 = (int)*plVar16 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar3) {
            *(int *)plVar16 = iVar9;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 == 0) {
          local_e8[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_120 = (undefined8 *)*local_e8;
          FUN_02a44274(lVar11 + 0xd8,&local_120);
        }
      }
    }
    if ((local_140 == (long *)0x0) || (local_98 == (long *)0x0)) {
      if (local_a0 != (long *)0x0) {
        lVar11 = local_a0[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*local_a0 + 0x20))();
        }
      }
    }
    else if (local_a0 != (long *)0x0) {
      uVar19 = 0x41f00000;
      if ((*(long *)(param_1 + 0x1b8) != 0) &&
         (plVar16 = *(long **)(*(long *)(param_1 + 0x1b8) + 0x5e8), plVar16 != (long *)0x0)) {
        plVar18 = plVar16 + 10;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar3) {
            *(int *)plVar18 = (int)*plVar18 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        iVar9 = FUN_02c6849c(plVar16[0x13]);
        if ((iVar9 - 0x281U < 5 && (1 << (ulong)(iVar9 - 0x281U & 0x1f) & 0x13U) != 0) ||
           (iVar9 == 0x389)) {
          uVar19 = 0x42700000;
        }
        else {
          uVar19 = 0x41f00000;
        }
        do {
          iVar9 = (int)*plVar18 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar3) {
            *(int *)plVar18 = iVar9;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
      local_e8 = (long *)0x0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      FUN_0199ce28(&local_120,plVar17);
      FUN_018ff388(&local_e0,&local_120);
      puVar8 = local_120;
      if (local_120 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_120 + 1);
        do {
          iVar9 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 + -1 == 0) {
          local_120[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar15 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar15;
          local_88 = (long *)*puVar8;
          FUN_02a44274(lVar15 + 0xd8,&local_88);
        }
      }
      plVar17 = local_a0;
      local_120 = (undefined8 *)0x53c7f052f0199e12;
      local_118 = "PokePlateCheckVisible";
      local_110 = 0x15;
      local_108 = (long *)0x0;
      if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar9 != 0)) {
        FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437a0d0);
      }
      local_130 = (long *)&DAT_cbf29ce484222645;
      FUN_0115410c(&local_88,plVar17,&local_120,param_1 + 0xa0,PTR_DAT_0437a0d8,&local_130);
      plVar17 = local_e8;
      local_e8 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        lVar15 = plVar17[0xb];
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*plVar17 + 0x20))();
        }
      }
      local_e8 = local_88;
      local_88 = (long *)0x0;
      if (local_108 != (long *)0x0) {
        (**(code **)(*local_108 + 0x20))();
      }
      local_120 = (undefined8 *)0x0;
      local_118 = (char *)0x0;
      FUN_008802f0(&local_120,*(long *)(param_1 + 0x1c0) + 0x58);
      local_88 = (long *)0x0;
      local_80[0] = 0;
      FUN_00880560(&local_88,&local_120);
      puVar8 = local_120;
      if (local_120 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_120 + 1);
        do {
          iVar9 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 + -1 == 0) {
          local_120[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar15 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar15;
          local_130 = (long *)*puVar8;
          FUN_02a44274(lVar15 + 0xd8,&local_130);
        }
      }
      local_120 = (undefined8 *)0x0;
      local_118 = (char *)0x0;
      FUN_01da42ac(&local_120,&local_88);
      plVar17 = local_88;
      if (local_88 != (long *)0x0) {
        plVar16 = local_88 + 1;
        do {
          iVar9 = (int)*plVar16 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar3) {
            *(int *)plVar16 = iVar9;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 == 0) {
          local_88[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar15 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar15;
          local_130 = (long *)*plVar17;
          FUN_02a44274(lVar15 + 0xd8,&local_130);
        }
      }
      FUN_01adf064(&local_d0,&local_120);
      puVar8 = local_120;
      if (local_120 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_120 + 1);
        do {
          iVar9 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 + -1 == 0) {
          local_120[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar15 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar15;
          local_88 = (long *)*puVar8;
          FUN_02a44274(lVar15 + 0xd8,&local_88);
        }
      }
      (**(code **)(**(long **)(param_1 + 0x1b8) + 0x10))(&local_120);
      local_88 = (long *)0x0;
      local_80[0] = 0;
      FUN_009cc414(&local_88,&local_120);
      puVar8 = local_120;
      if (local_120 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_120 + 1);
        do {
          iVar9 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 + -1 == 0) {
          local_120[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar15 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar15;
          local_130 = (long *)*puVar8;
          FUN_02a44274(lVar15 + 0xd8,&local_130);
        }
      }
      FUN_01cad9e0(&local_c0,&local_88);
      plVar17 = local_88;
      if (local_88 != (long *)0x0) {
        plVar16 = local_88 + 1;
        do {
          iVar9 = (int)*plVar16 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar3) {
            *(int *)plVar16 = iVar9;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 == 0) {
          local_88[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar15 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar15;
          local_120 = (undefined8 *)*plVar17;
          FUN_02a44274(lVar15 + 0xd8,&local_120);
        }
      }
      (**(code **)(*local_140 + 0x10))(&local_120);
      local_88 = (long *)0x0;
      local_80[0] = 0;
      FUN_0198be48(&local_88,&local_120);
      puVar8 = local_120;
      if (local_120 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_120 + 1);
        do {
          iVar9 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 + -1 == 0) {
          local_120[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar15 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar15;
          local_130 = (long *)*puVar8;
          FUN_02a44274(lVar15 + 0xd8,&local_130);
        }
      }
      FUN_009643ac(&local_b0,&local_88);
      plVar17 = local_88;
      if (local_88 != (long *)0x0) {
        plVar16 = local_88 + 1;
        do {
          iVar9 = (int)*plVar16 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar3) {
            *(int *)plVar16 = iVar9;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 == 0) {
          local_88[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar15 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar15;
          local_120 = (undefined8 *)*plVar17;
          FUN_02a44274(lVar15 + 0xd8,&local_120);
        }
      }
      puVar6 = PTR_DAT_04379520;
      lVar15 = *(long *)(param_1 + 0x68);
      plVar17 = *(long **)(lVar15 + 8);
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar9 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      puVar7 = PTR_DAT_04379528;
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (*(ulong *)(lVar11 + 0x80) < 0x10) {
        *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar17;
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
        plVar16 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x240,0x10);
        if (plVar16 == (long *)0x0) {
          (**(code **)(*plVar17 + 0xb8))(plVar17);
        }
        FUN_01c1c4f0(plVar16,&local_e8);
        plVar16[1] = (long)plVar17;
        plVar16[2] = (long)plVar16;
        plVar16[3] = 0x240;
        plVar16[4] = 0x10;
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
        if (plVar16 != (long *)0x0) {
          lVar11 = plVar16[0xb];
          if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar11 + 0x10) == 0) {
            uVar12 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
            *(undefined8 *)(lVar11 + 0x10) = uVar12;
          }
          piVar1 = (int *)(lVar11 + 0xc);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plVar17 = (long *)0x0;
        if (plVar16 != (long *)0x0) {
          plVar17 = plVar16 + 9;
        }
        (**(code **)(*plVar17 + 0xb8))(plVar17,lVar15);
        local_120 = (undefined8 *)0x0;
        local_118 = (char *)0x0;
        FUN_009ad580(&local_120,lVar15 + 0x318);
        (**(code **)(*plVar17 + 0xc0))(plVar17,&local_120);
        puVar8 = local_120;
        if (local_120 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_120 + 1);
          do {
            iVar9 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar9 + -1 == 0) {
            local_120[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar11 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar11;
            local_88 = (long *)*puVar8;
            FUN_02a44274(lVar11 + 0xd8,&local_88);
          }
        }
        (**(code **)(*plVar17 + 200))(plVar17,*(undefined1 *)(lVar15 + 0x33b));
        (**(code **)(*plVar17 + 0x90))(plVar17);
        local_88 = plVar16;
        FUN_02a4dad4(lVar15 + 0xf0,&local_88);
        if (local_88 != (long *)0x0) {
          lVar15 = local_88[0xb];
          piVar1 = (int *)(lVar15 + 0xc);
          do {
            iVar9 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*local_88 + 0x20))();
          }
        }
        local_108 = (long *)0x0;
        local_100 = (undefined8 *)0x0;
        local_120 = (undefined8 *)0x0;
        local_f8 = 0;
        local_f0 = 0x4170000041f00000;
        local_118 = (char *)0x0;
        local_110 = 0;
        (**(code **)(*local_98 + 0x10))(&local_88);
        local_130 = (long *)0x0;
        local_128 = 0;
        FUN_00d07698(&local_130,&local_88);
        plVar17 = local_88;
        if (local_88 != (long *)0x0) {
          plVar18 = local_88 + 1;
          do {
            iVar9 = (int)*plVar18 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar3) {
              *(int *)plVar18 = iVar9;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar9 == 0) {
            local_88[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar15 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar15;
            local_68 = (undefined8 *)*plVar17;
            FUN_02a44274(lVar15 + 0xd8,&local_68);
          }
        }
        FUN_00d07998(&local_120,&local_130);
        plVar17 = local_130;
        if (local_130 != (long *)0x0) {
          plVar18 = local_130 + 1;
          do {
            iVar9 = (int)*plVar18 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar3) {
              *(int *)plVar18 = iVar9;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar9 == 0) {
            local_130[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar15 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar15;
            local_88 = (long *)*plVar17;
            FUN_02a44274(lVar15 + 0xd8,&local_88);
          }
        }
        (**(code **)(**(long **)(param_1 + 0x1b8) + 0x10))(&local_88);
        local_130 = (long *)0x0;
        local_128 = 0;
        FUN_009cc414(&local_130,&local_88);
        plVar17 = local_88;
        if (local_88 != (long *)0x0) {
          plVar18 = local_88 + 1;
          do {
            iVar9 = (int)*plVar18 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar3) {
              *(int *)plVar18 = iVar9;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar9 == 0) {
            local_88[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar15 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar15;
            local_68 = (undefined8 *)*plVar17;
            FUN_02a44274(lVar15 + 0xd8,&local_68);
          }
        }
        FUN_00b6051c(&local_110,&local_130);
        plVar17 = local_130;
        if (local_130 != (long *)0x0) {
          plVar18 = local_130 + 1;
          do {
            iVar9 = (int)*plVar18 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar3) {
              *(int *)plVar18 = iVar9;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar9 == 0) {
            local_130[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar15 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar15;
            local_88 = (long *)*plVar17;
            FUN_02a44274(lVar15 + 0xd8,&local_88);
          }
        }
        (**(code **)(*plVar16 + 0x18))(&local_88,plVar16);
        local_130 = (long *)0x0;
        local_128 = 0;
        do {
          uVar12 = local_80[0];
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(local_80,0x10);
          if (bVar3) {
            local_80[0] = 0;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        puVar5 = PTR_DAT_043794a8;
        puVar4 = PTR_DAT_043794a0;
        uVar13 = *(undefined8 *)PTR_DAT_043794a0;
        *(undefined8 *)PTR_DAT_043794a8 = uVar13;
        FUN_02a44e0c(&local_90,uVar13,uVar12);
        plVar17 = local_88;
        local_88 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          plVar16 = plVar17 + 1;
          do {
            iVar9 = (int)*plVar16 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar3) {
              *(int *)plVar16 = iVar9;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar9 == 0) {
            plVar17[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar15 = *(long *)puVar4;
            *(long *)puVar5 = lVar15;
            local_68 = (undefined8 *)*plVar17;
            FUN_02a44274(lVar15 + 0xd8,&local_68);
          }
        }
        plVar17 = local_130;
        local_130 = (long *)0x0;
        if (local_90 == (long *)0x0) {
          if (plVar17 != (long *)0x0) {
            plVar16 = plVar17 + 1;
            do {
              lVar15 = *plVar16;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar3) {
                *(int *)plVar16 = (int)lVar15 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((int)lVar15 == 1) {
              plVar17[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar15 = *(long *)puVar4;
              *(long *)puVar5 = lVar15;
              local_68 = (undefined8 *)*plVar17;
              FUN_02a44274(lVar15 + 0xd8,&local_68);
            }
          }
          uVar12 = 0;
        }
        else {
          plVar16 = local_90;
          if (plVar17 != (long *)0x0) {
            plVar16 = plVar17 + 1;
            do {
              iVar9 = (int)*plVar16 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar3) {
                *(int *)plVar16 = iVar9;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar9 == 0) {
              plVar17[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar15 = *(long *)puVar4;
              *(long *)puVar5 = lVar15;
              local_68 = (undefined8 *)*plVar17;
              FUN_02a44274(lVar15 + 0xd8,&local_68);
            }
            plVar16 = local_90;
          }
          local_90 = (long *)0x0;
          local_130 = plVar16;
        }
        plVar17 = local_90;
        local_128 = uVar12;
        if (local_90 != (long *)0x0) {
          plVar16 = local_90 + 1;
          do {
            iVar9 = (int)*plVar16 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar3) {
              *(int *)plVar16 = iVar9;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar9 == 0) {
            local_90[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar15 = *(long *)puVar4;
            *(long *)puVar5 = lVar15;
            local_68 = (undefined8 *)*plVar17;
            FUN_02a44274(lVar15 + 0xd8,&local_68);
          }
        }
        plVar17 = local_88;
        if (local_88 != (long *)0x0) {
          plVar16 = local_88 + 1;
          do {
            iVar9 = (int)*plVar16 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar3) {
              *(int *)plVar16 = iVar9;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar9 == 0) {
            local_88[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar15 = *(long *)puVar4;
            *(long *)puVar5 = lVar15;
            local_68 = (undefined8 *)*plVar17;
            FUN_02a44274(lVar15 + 0xd8,&local_68);
          }
        }
        do {
          uVar12 = local_128;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(&local_128,0x10);
          if (bVar3) {
            local_128 = 0;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        uVar13 = *(undefined8 *)puVar4;
        *(undefined8 *)puVar5 = uVar13;
        FUN_02a44e0c(&local_68,uVar13,uVar12);
        plVar17 = local_130;
        local_130 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          plVar16 = plVar17 + 1;
          do {
            iVar9 = (int)*plVar16 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar3) {
              *(int *)plVar16 = iVar9;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar9 == 0) {
            plVar17[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar15 = *(long *)puVar4;
            *(long *)puVar5 = lVar15;
            local_88 = (long *)*plVar17;
            FUN_02a44274(lVar15 + 0xd8,&local_88);
          }
        }
        puVar8 = local_100;
        local_100 = (undefined8 *)0x0;
        if (local_68 == (undefined8 *)0x0) {
          if (puVar8 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar8 + 1);
            do {
              iVar9 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar9 == 1) {
              puVar8[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar15 = *(long *)puVar4;
              *(long *)puVar5 = lVar15;
              local_88 = (long *)*puVar8;
              FUN_02a44274(lVar15 + 0xd8,&local_88);
            }
          }
          uVar12 = 0;
        }
        else {
          puVar14 = local_68;
          if (puVar8 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar8 + 1);
            do {
              iVar9 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar9 + -1 == 0) {
              puVar8[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar15 = *(long *)puVar4;
              *(long *)puVar5 = lVar15;
              local_88 = (long *)*puVar8;
              FUN_02a44274(lVar15 + 0xd8,&local_88);
            }
            puVar14 = local_68;
          }
          local_68 = (undefined8 *)0x0;
          local_100 = puVar14;
        }
        puVar8 = local_68;
        local_f8 = uVar12;
        if (local_68 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_68 + 1);
          do {
            iVar9 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar9 + -1 == 0) {
            local_68[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar15 = *(long *)puVar4;
            *(long *)puVar5 = lVar15;
            local_88 = (long *)*puVar8;
            FUN_02a44274(lVar15 + 0xd8,&local_88);
          }
        }
        plVar17 = local_130;
        if (local_130 != (long *)0x0) {
          plVar16 = local_130 + 1;
          do {
            iVar9 = (int)*plVar16 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar3) {
              *(int *)plVar16 = iVar9;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar9 == 0) {
            local_130[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar15 = *(long *)puVar4;
            *(long *)puVar5 = lVar15;
            local_88 = (long *)*plVar17;
            FUN_02a44274(lVar15 + 0xd8,&local_88);
          }
        }
        local_f0 = CONCAT44(local_f0._4_4_,uVar19);
        plVar17 = *(long **)(*(long *)(param_1 + 0x68) + 8);
        if (((*puVar6 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar9 != 0)) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar15 = nn::os::GetTlsValue(*(undefined4 *)puVar7);
        if (*(ulong *)(lVar15 + 0x80) < 0x10) {
          *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar17;
          *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
          lVar15 = (**(code **)(*plVar17 + 0x10))(plVar17,0x240,0x10);
          if (lVar15 == 0) {
            (**(code **)(*plVar17 + 0xb8))(plVar17);
          }
                    /* WARNING: Subroutine does not return */
          FUN_02a4c0f4(lVar15,0);
        }
      }
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (local_140 != (long *)0x0) {
      lVar11 = local_140[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_140 + 0x20))();
      }
    }
    if (local_98 != (long *)0x0) {
      lVar11 = local_98[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_98 + 0x20))();
      }
    }
    lVar15 = *(long *)(lVar15 + 8);
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))();
    }
    return;
  }
  goto LAB_01d97844;
}


