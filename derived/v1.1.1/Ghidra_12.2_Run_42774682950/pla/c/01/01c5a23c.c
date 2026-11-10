/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c5a23c; name: FUN_01c5a23c
 */


void FUN_01c5a23c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *local_100;
  code *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  long *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long *local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  
  puVar5 = PTR_DAT_04379c28;
  if (((*PTR_DAT_04379c28 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  puVar4 = PTR_DAT_04379c38;
  puVar6 = PTR_DAT_04379c30;
  local_90 = 0;
  uStack_88 = 0;
  uVar10 = *(undefined8 *)PTR_DAT_04379c30;
  local_70 = 0x19;
  local_68 = (long *)0x0;
  local_a0 = 0;
  uStack_98 = 0;
  local_80 = (long *)0x7d6ae7ce61d9193d;
  pcStack_78 = "STOP_SPACETIME_DISTORTION";
  *(undefined8 *)PTR_DAT_04379c38 = uVar10;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = (long *)0x0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = (undefined8 *)0x0;
  local_f8 = (code *)0x0;
  FUN_02913338(uVar10,&local_80,&local_100,0,0,0);
  pcVar7 = local_f8;
  if (local_f8 == (code *)0x0) {
    local_f8 = (code *)0x0;
  }
  else {
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = (undefined8 *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar7)(&local_e0);
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  uVar10 = *(undefined8 *)puVar6;
  local_70 = 0x26;
  local_68 = (long *)0x0;
  *(undefined8 *)puVar4 = uVar10;
  local_80 = (long *)0xa35eb9c6592a6635;
  pcStack_78 = "SET_STATE_WORMHOLE_MATERIALIZATION_END";
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = (long *)0x0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = (undefined8 *)0x0;
  local_f8 = (code *)0x0;
  FUN_02913338(uVar10,&local_80,&local_100,0,0,0);
  pcVar7 = local_f8;
  if (local_f8 == (code *)0x0) {
    local_f8 = (code *)0x0;
  }
  else {
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = (undefined8 *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar7)(&local_e0);
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  puVar5 = PTR_DAT_04379e40;
  local_80 = (long *)&DAT_8d81cfe451e0a778;
  pcStack_78 = "WORMHOLE";
  local_70 = 8;
  local_68 = (long *)0x0;
  if (((*PTR_DAT_04379e40 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379e40);
  }
  puVar4 = PTR_DAT_04379e50;
  puVar6 = PTR_DAT_04379e48;
  uVar10 = *(undefined8 *)PTR_DAT_04379e48;
  *(undefined8 *)PTR_DAT_04379e50 = uVar10;
  FUN_029278b4(&local_100,uVar10,&local_80);
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379e40);
  }
  uVar10 = *(undefined8 *)puVar6;
  *(undefined8 *)puVar4 = uVar10;
  FUN_02928c7c(uVar10,&local_f8,0,0);
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  puVar4 = PTR_LAB_04379590;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  puVar12 = *(undefined8 **)(param_1 + 0x2c0);
  puVar15 = *(undefined8 **)(param_1 + 0x2c8);
  if (puVar12 != puVar15) {
    plVar14 = (long *)PTR_DAT_043794a8;
    do {
      local_100 = (undefined8 *)0x0;
      local_f8 = (code *)0x0;
      FUN_01c66fe8(&local_100,puVar12);
      if (local_100 != (undefined8 *)0x0) {
        FUN_01c67260(&local_80);
        plVar14 = local_80;
        if (local_80 != (long *)0x0) {
          FUN_01c4d1d8(local_80);
          lVar11 = plVar14[0xb];
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
            (**(code **)(*plVar14 + 0x20))(plVar14);
          }
        }
        puVar13 = local_100;
        plVar14 = (long *)PTR_DAT_043794a8;
        if (local_100 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_100 + 1);
          do {
            iVar9 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          plVar14 = (long *)PTR_DAT_043794a8;
          if (iVar9 + -1 == 0) {
            local_100[2] = 0;
            if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
              FUN_00100250(puVar4,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
            plVar14 = (long *)PTR_DAT_043794a8;
            lVar11 = *(long *)puVar6;
            *(long *)PTR_DAT_043794a8 = lVar11;
            local_80 = (long *)*puVar13;
            FUN_02a44274(lVar11 + 0xd8,&local_80);
          }
        }
      }
      puVar12 = puVar12 + 2;
    } while (puVar12 != puVar15);
    puVar12 = *(undefined8 **)(param_1 + 0x2c0);
    if (*(undefined8 **)(param_1 + 0x2c8) != puVar12) {
      puVar15 = *(undefined8 **)(param_1 + 0x2c8) + -2;
      puVar13 = (undefined8 *)*puVar15;
      puVar4 = PTR_LAB_04379590;
      puVar8 = PTR_LAB_04379590;
      if (puVar13 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar13 + 1);
        do {
          iVar9 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        puVar4 = PTR_LAB_04379590;
        puVar8 = PTR_LAB_04379590;
        if (iVar9 + -1 == 0) {
          puVar13[2] = 0;
          if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)puVar6;
          *plVar14 = lVar11;
          local_100 = (undefined8 *)*puVar13;
          FUN_02a44274(lVar11 + 0xd8,&local_100);
          puVar4 = PTR_LAB_04379590;
          puVar8 = PTR_LAB_04379590;
        }
      }
      while (PTR_LAB_04379590 = puVar8, puVar8 = PTR_LAB_04379590, PTR_LAB_04379590 = puVar4,
            puVar15 != puVar12) {
        puVar15 = puVar15 + -2;
        puVar13 = (undefined8 *)*puVar15;
        if (puVar13 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar13 + 1);
          do {
            iVar9 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          puVar4 = PTR_LAB_04379590;
          if (iVar9 + -1 == 0) {
            puVar13[2] = 0;
            if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
              FUN_00100250(puVar8,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
            lVar11 = *(long *)puVar6;
            *plVar14 = lVar11;
            local_100 = (undefined8 *)*puVar13;
            FUN_02a44274(lVar11 + 0xd8,&local_100);
            puVar4 = PTR_LAB_04379590;
          }
        }
      }
    }
  }
  *(undefined8 **)(param_1 + 0x2c8) = puVar12;
  *(undefined1 *)(param_1 + 0x4a5) = 0;
  *(undefined4 *)(param_1 + 0x4a8) = 0;
  *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_1 + 0x2f8);
  FUN_01c5f898(param_1,1);
  return;
}


