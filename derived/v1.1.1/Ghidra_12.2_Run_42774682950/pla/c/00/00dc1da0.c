/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00dc1da0; name: FUN_00dc1da0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00dc1da0(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  int iVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long *local_a8;
  long *local_a0;
  undefined8 uStack_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  long *local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  long *local_60 [2];
  long local_48;
  
  local_70 = (undefined8 *)0x0;
  uStack_68 = 0;
  local_80 = (long *)0x0;
  uStack_78 = 0;
  FUN_00dbd724(&local_80,&local_70);
  puVar5 = PTR_DAT_04379498;
  puVar6 = PTR_DAT_043794a0;
  puVar7 = PTR_DAT_043794a8;
  puVar8 = PTR_LAB_04379590;
  puVar10 = PTR_LAB_04379590;
  puVar11 = PTR_DAT_043794a8;
  puVar12 = PTR_DAT_043794a0;
  puVar13 = PTR_DAT_04379498;
  if (*(long **)(param_1 + 0x170) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x170) + 0x10))(local_60);
    local_90 = (undefined8 *)0x0;
    uStack_88 = 0;
    FUN_00dbc824(&local_90,local_60);
    plVar15 = local_60[0];
    if (local_60[0] != (long *)0x0) {
      plVar1 = local_60[0] + 1;
      do {
        iVar14 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar14;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar14 == 0) {
        local_60[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar16;
        local_a0 = (long *)*plVar15;
        FUN_02a44274(lVar16 + 0xd8,&local_a0);
      }
    }
    FUN_00dbdc54(&local_80,&local_90);
    puVar9 = local_90;
    puVar5 = PTR_DAT_04379498;
    puVar6 = PTR_DAT_043794a0;
    puVar7 = PTR_DAT_043794a8;
    puVar8 = PTR_LAB_04379590;
    puVar10 = PTR_LAB_04379590;
    puVar11 = PTR_DAT_043794a8;
    puVar12 = PTR_DAT_043794a0;
    puVar13 = PTR_DAT_04379498;
    if (local_90 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_90 + 1);
      do {
        iVar14 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      puVar5 = PTR_DAT_04379498;
      puVar6 = PTR_DAT_043794a0;
      puVar7 = PTR_DAT_043794a8;
      puVar8 = PTR_LAB_04379590;
      puVar10 = PTR_LAB_04379590;
      puVar11 = PTR_DAT_043794a8;
      puVar12 = PTR_DAT_043794a0;
      puVar13 = PTR_DAT_04379498;
      if (iVar14 + -1 == 0) {
        local_90[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar16;
        local_60[0] = (long *)*puVar9;
        FUN_02a44274(lVar16 + 0xd8,local_60);
        puVar5 = PTR_DAT_04379498;
        puVar6 = PTR_DAT_043794a0;
        puVar7 = PTR_DAT_043794a8;
        puVar8 = PTR_LAB_04379590;
        puVar10 = PTR_LAB_04379590;
        puVar11 = PTR_DAT_043794a8;
        puVar12 = PTR_DAT_043794a0;
        puVar13 = PTR_DAT_04379498;
      }
    }
  }
  do {
    PTR_DAT_04379498 = puVar13;
    PTR_DAT_043794a0 = puVar12;
    PTR_DAT_043794a8 = puVar11;
    PTR_LAB_04379590 = puVar10;
    puVar10 = PTR_LAB_04379590;
    puVar11 = PTR_DAT_043794a8;
    puVar12 = PTR_DAT_043794a0;
    puVar13 = PTR_DAT_04379498;
    PTR_DAT_04379498 = puVar5;
    PTR_DAT_043794a0 = puVar6;
    PTR_DAT_043794a8 = puVar7;
    PTR_LAB_04379590 = puVar8;
    puVar9 = local_70;
    if (local_80 == (long *)0x0) {
joined_r0x00dc2254:
      if (puVar9 != (undefined8 *)0x0) {
        piVar2 = (int *)(puVar9 + 1);
        do {
          iVar14 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar14 + -1 == 0) {
          puVar9[2] = 0;
          local_70 = puVar9;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar16 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar16;
          local_60[0] = (long *)*puVar9;
          FUN_02a44274(lVar16 + 0xd8,local_60);
        }
      }
      return;
    }
    FUN_00dbd99c(local_60);
    plVar15 = local_80;
    if (local_60[0] == (long *)0x0) {
      puVar9 = local_70;
      if (local_80 != (long *)0x0) {
        plVar1 = local_80 + 1;
        do {
          iVar14 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar14;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar14 == 0) {
          local_80[2] = 0;
          if (((*puVar13 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)
             ) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar16 = *(long *)puVar12;
          *(long *)puVar11 = lVar16;
          local_60[0] = (long *)*plVar15;
          FUN_02a44274(lVar16 + 0xd8,local_60);
          puVar9 = local_70;
        }
      }
      goto joined_r0x00dc2254;
    }
    lVar16 = local_60[0][0xb];
    piVar2 = (int *)(lVar16 + 0xc);
    do {
      iVar14 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_60[0] + 0x20))();
    }
    local_90 = (undefined8 *)0x0;
    uStack_88 = 0;
    FUN_00dbd724(&local_90,&local_70);
    if (local_80 == (long *)0x0) {
      if (*(long *)(_DAT_00000068 + 0x88) == 0) goto LAB_00dc20c0;
LAB_00dc1fc8:
      FUN_00dbd99c(&local_a8,local_80);
      (**(code **)(**(long **)(local_a8[0xd] + 0x88) + 0x10))(local_60);
      local_a0 = (long *)0x0;
      uStack_98 = 0;
      FUN_00dbc824(&local_a0,local_60);
      plVar15 = local_60[0];
      if (local_60[0] != (long *)0x0) {
        plVar1 = local_60[0] + 1;
        do {
          iVar14 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar14;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar14 == 0) {
          local_60[0][2] = 0;
          if (((*puVar13 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar13), iVar14 != 0)) {
            FUN_00100250(puVar10,puVar12,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar13);
          }
          lVar16 = *(long *)puVar12;
          *(long *)puVar11 = lVar16;
          local_48 = *plVar15;
          FUN_02a44274(lVar16 + 0xd8,&local_48);
        }
      }
      FUN_00dbdc54(&local_90,&local_a0);
      plVar15 = local_a0;
      if (local_a0 != (long *)0x0) {
        plVar1 = local_a0 + 1;
        do {
          iVar14 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar14;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar14 == 0) {
          local_a0[2] = 0;
          if (((*puVar13 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar13), iVar14 != 0)) {
            FUN_00100250(puVar10,puVar12,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar13);
          }
          lVar16 = *(long *)puVar12;
          *(long *)puVar11 = lVar16;
          local_60[0] = (long *)*plVar15;
          FUN_02a44274(lVar16 + 0xd8,local_60);
        }
      }
      if (local_a8 == (long *)0x0) goto LAB_00dc20c0;
      lVar16 = local_a8[0xb];
      piVar2 = (int *)(lVar16 + 0xc);
      do {
        iVar14 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar14 + -1 != 0) goto LAB_00dc20c0;
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_a8 + 0x20))();
      if (local_80 != (long *)0x0) goto LAB_00dc229c;
LAB_00dc20c8:
      local_60[0] = (long *)0x0;
      plVar15 = local_80;
    }
    else {
      FUN_00dbd99c(local_60);
      lVar16 = *(long *)(local_60[0][0xd] + 0x88);
      if (local_60[0] != (long *)0x0) {
        lVar17 = local_60[0][0xb];
        piVar2 = (int *)(lVar17 + 0xc);
        do {
          iVar14 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar14 + -1 == 0) {
          *(undefined8 *)(lVar17 + 0x18) = 0;
          (**(code **)(*local_60[0] + 0x20))();
        }
      }
      if (lVar16 != 0) goto LAB_00dc1fc8;
LAB_00dc20c0:
      if (local_80 == (long *)0x0) goto LAB_00dc20c8;
LAB_00dc229c:
      FUN_00dbd99c(local_60);
      plVar15 = local_60[0];
    }
    FUN_00dbc608(plVar15);
    if (local_60[0] != (long *)0x0) {
      lVar16 = local_60[0][0xb];
      piVar2 = (int *)(lVar16 + 0xc);
      do {
        iVar14 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar14 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_60[0] + 0x20))();
      }
    }
    FUN_00dbd724(&local_80,&local_90);
    puVar9 = local_90;
    puVar5 = PTR_DAT_04379498;
    puVar6 = PTR_DAT_043794a0;
    puVar7 = PTR_DAT_043794a8;
    puVar8 = PTR_LAB_04379590;
    if (local_90 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_90 + 1);
      do {
        iVar14 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      puVar5 = PTR_DAT_04379498;
      puVar6 = PTR_DAT_043794a0;
      puVar7 = PTR_DAT_043794a8;
      puVar8 = PTR_LAB_04379590;
      if (iVar14 + -1 == 0) {
        local_90[2] = 0;
        if (((*puVar13 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar13), iVar14 != 0)) {
          FUN_00100250(puVar10,puVar12,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar13);
        }
        lVar16 = *(long *)puVar12;
        *(long *)puVar11 = lVar16;
        local_60[0] = (long *)*puVar9;
        FUN_02a44274(lVar16 + 0xd8,local_60);
        puVar5 = PTR_DAT_04379498;
        puVar6 = PTR_DAT_043794a0;
        puVar7 = PTR_DAT_043794a8;
        puVar8 = PTR_LAB_04379590;
      }
    }
  } while( true );
}


