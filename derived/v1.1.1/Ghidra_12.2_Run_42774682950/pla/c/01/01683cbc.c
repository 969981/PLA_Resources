/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01683cbc; name: FUN_01683cbc
 */


undefined8 FUN_01683cbc(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  undefined **ppuVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long lVar17;
  long *plVar18;
  undefined **local_150;
  long *local_148;
  long *local_138;
  long *local_128;
  long *local_118;
  long *local_108;
  long *local_e8;
  long *local_e0;
  undefined8 *local_d8 [2];
  undefined8 *local_c8;
  undefined8 uStack_c0;
  undefined8 *local_b8 [2];
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98 [2];
  undefined1 local_88;
  undefined8 local_78;
  undefined *local_70 [2];
  
  FUN_0165a7a0(&local_150);
  ppuVar7 = local_150;
  puVar10 = PTR_DAT_043796e8;
  puVar9 = PTR_DAT_043796e0;
  puVar8 = PTR_DAT_043794d8;
  puVar16 = PTR_DAT_043794d0;
  if (local_150 != (undefined **)0x0) {
    if (*(int *)((long)local_150 + 0xc) != 0) {
      piVar1 = (int *)((long)local_150 + 0xc);
      iVar13 = *(int *)((long)local_150 + 0xc);
      do {
        plVar18 = (long *)ppuVar7[2];
        if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
          if (((*puVar16 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar16), iVar12 != 0)) {
            uVar15 = FUN_0087f8f0();
            *(undefined8 *)puVar8 = uVar15;
            __cxa_guard_release(puVar16);
          }
          *(undefined **)puVar10 = puVar8;
          __cxa_guard_release(puVar9);
        }
        while( true ) {
          if (plVar18 == (long *)0x0) goto LAB_01684460;
          if (plVar18 == (long *)puVar10) break;
          plVar18 = (long *)*plVar18;
        }
        iVar12 = *piVar1;
        if (iVar12 == iVar13) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            puVar16 = ppuVar7[3];
            plVar18 = (long *)0x0;
            ppuVar7 = local_150;
            if (puVar16 != (undefined *)0x0) {
              plVar18 = (long *)(puVar16 + -0x50);
            }
            goto joined_r0x01683d94;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar13 = iVar12;
      } while (iVar12 != 0);
    }
LAB_01684460:
    plVar18 = (long *)0x0;
    ppuVar7 = local_150;
joined_r0x01683d94:
    if (ppuVar7 != (undefined **)0x0) {
      ppuVar2 = ppuVar7 + 1;
      do {
        iVar13 = *(int *)ppuVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar6) {
          *(int *)ppuVar2 = iVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar13 + -1 == 0) {
        ppuVar7[2] = (undefined *)0x0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar17 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar17;
        local_d8[0] = (undefined8 *)*ppuVar7;
        FUN_02a44274(lVar17 + 0xd8,local_d8);
      }
    }
    if (plVar18 != (long *)0x0) {
      local_78 = FUN_01673270(param_2,0);
      FUN_0199d048(local_d8,plVar18);
      local_150 = (undefined **)0x0;
      local_148 = (long *)0x0;
      FUN_008802f0(&local_150,plVar18[0x15] + 0x58);
      local_c8 = (undefined8 *)0x0;
      uStack_c0 = 0;
      FUN_00ca524c(&local_c8,&local_150);
      ppuVar7 = local_150;
      if (local_150 != (undefined **)0x0) {
        ppuVar2 = local_150 + 1;
        do {
          iVar13 = *(int *)ppuVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
          if (bVar6) {
            *(int *)ppuVar2 = iVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar13 + -1 == 0) {
          local_150[2] = (undefined *)0x0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar17 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar17;
          local_70[0] = *ppuVar7;
          FUN_02a44274(lVar17 + 0xd8,local_70);
        }
      }
      puVar16 = PTR_DAT_04379558;
      if (((*PTR_DAT_04379558 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379558), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379558);
      }
      puVar9 = PTR_DAT_04379568;
      puVar8 = PTR_DAT_04379560;
      *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
      FUN_01149334(&local_e0);
      FUN_0168485c(local_b8,local_e0);
      if (((*puVar16 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379558), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379558);
      }
      *(undefined8 *)puVar9 = *(undefined8 *)puVar8;
      FUN_01148a98(&local_e8);
      local_150 = (undefined **)0x0;
      local_148 = (long *)0x0;
      FUN_008802f0(&local_150,local_e8 + 0xb);
      local_a8 = (undefined8 *)0x0;
      uStack_a0 = 0;
      FUN_01685098(&local_a8,&local_150);
      ppuVar7 = local_150;
      if (local_150 != (undefined **)0x0) {
        ppuVar2 = local_150 + 1;
        do {
          iVar13 = *(int *)ppuVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
          if (bVar6) {
            *(int *)ppuVar2 = iVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar13 + -1 == 0) {
          local_150[2] = (undefined *)0x0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar17 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar17;
          local_70[0] = *ppuVar7;
          FUN_02a44274(lVar17 + 0xd8,local_70);
        }
      }
      if (((*puVar16 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379558), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379558);
      }
      *(undefined8 *)puVar9 = *(undefined8 *)puVar8;
      FUN_01148f20(&local_150);
      FUN_0168493c(local_98,local_150);
      ppuVar7 = local_150;
      local_88 = 0;
      if ((local_150 != (undefined **)0x0) &&
         (uVar14 = FUN_02a43a5c(local_150[0xb]), (uVar14 & 1) != 0)) {
        (**(code **)(*ppuVar7 + 0x20))(ppuVar7);
      }
      plVar3 = local_e0;
      if ((local_e8 != (long *)0x0) &&
         (uVar14 = FUN_02a43a5c(local_e8[0xb]), plVar3 = local_e0, (uVar14 & 1) != 0)) {
        (**(code **)(*local_e8 + 0x20))(local_e8);
        plVar3 = local_e0;
      }
      if ((plVar3 != (long *)0x0) && (uVar14 = FUN_02a43a5c(plVar3[0xb]), (uVar14 & 1) != 0)) {
        (**(code **)(*plVar3 + 0x20))(plVar3);
      }
      FUN_0192d1e0(&local_150,local_d8);
      FUN_01930d68(&local_150,&local_78);
      local_150 = &PTR_LAB_04221e20;
      if (local_108 != (long *)0x0) {
        plVar3 = local_108 + 1;
        do {
          iVar13 = (int)*plVar3 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *(int *)plVar3 = iVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar13 == 0) {
          local_108[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar17 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar17;
          local_70[0] = (undefined *)*local_108;
          FUN_02a44274(lVar17 + 0xd8,local_70);
        }
      }
      if (local_118 != (long *)0x0) {
        plVar3 = local_118 + 1;
        do {
          iVar13 = (int)*plVar3 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *(int *)plVar3 = iVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar13 == 0) {
          local_118[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar17 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar17;
          local_70[0] = (undefined *)*local_118;
          FUN_02a44274(lVar17 + 0xd8,local_70);
        }
      }
      if (local_128 != (long *)0x0) {
        plVar3 = local_128 + 1;
        do {
          iVar13 = (int)*plVar3 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *(int *)plVar3 = iVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar13 == 0) {
          local_128[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar17 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar17;
          local_70[0] = (undefined *)*local_128;
          FUN_02a44274(lVar17 + 0xd8,local_70);
        }
      }
      if (local_138 != (long *)0x0) {
        plVar3 = local_138 + 1;
        do {
          iVar13 = (int)*plVar3 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *(int *)plVar3 = iVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar13 == 0) {
          local_138[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar17 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar17;
          local_70[0] = (undefined *)*local_138;
          FUN_02a44274(lVar17 + 0xd8,local_70);
        }
      }
      plVar3 = local_148;
      if (local_148 != (long *)0x0) {
        plVar4 = local_148 + 1;
        do {
          iVar13 = (int)*plVar4 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar6) {
            *(int *)plVar4 = iVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar13 == 0) {
          local_148[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar17 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar17;
          local_70[0] = (undefined *)*plVar3;
          FUN_02a44274(lVar17 + 0xd8,local_70);
        }
      }
      if (local_98[0] != (undefined8 *)0x0) {
        piVar1 = (int *)(local_98[0] + 1);
        do {
          iVar13 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar13 + -1 == 0) {
          local_98[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar17 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar17;
          local_150 = (undefined **)*local_98[0];
          FUN_02a44274(lVar17 + 0xd8,&local_150);
        }
      }
      puVar11 = local_a8;
      if (local_a8 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_a8 + 1);
        do {
          iVar13 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar13 + -1 == 0) {
          local_a8[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar17 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar17;
          local_150 = (undefined **)*puVar11;
          FUN_02a44274(lVar17 + 0xd8,&local_150);
        }
      }
      if (local_b8[0] != (undefined8 *)0x0) {
        piVar1 = (int *)(local_b8[0] + 1);
        do {
          iVar13 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar13 + -1 == 0) {
          local_b8[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar17 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar17;
          local_150 = (undefined **)*local_b8[0];
          FUN_02a44274(lVar17 + 0xd8,&local_150);
        }
      }
      puVar11 = local_c8;
      if (local_c8 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_c8 + 1);
        do {
          iVar13 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar13 + -1 == 0) {
          local_c8[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar17 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar17;
          local_150 = (undefined **)*puVar11;
          FUN_02a44274(lVar17 + 0xd8,&local_150);
        }
      }
      puVar11 = local_d8[0];
      if (local_d8[0] != (undefined8 *)0x0) {
        piVar1 = (int *)(local_d8[0] + 1);
        do {
          iVar13 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar13 + -1 == 0) {
          local_d8[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar17 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar17;
          local_150 = (undefined **)*puVar11;
          FUN_02a44274(lVar17 + 0xd8,&local_150);
        }
      }
      uVar14 = FUN_02a43a5c(plVar18[0xb]);
      if ((uVar14 & 1) != 0) {
        (**(code **)(*plVar18 + 0x20))(plVar18);
      }
    }
  }
  return 0;
}


