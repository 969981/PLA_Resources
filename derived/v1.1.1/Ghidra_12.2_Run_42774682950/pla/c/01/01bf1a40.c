/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bf1a40; name: FUN_01bf1a40
 */


void FUN_01bf1a40(long param_1,undefined4 param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  
  *(undefined4 *)(param_1 + 0x1234) = param_2;
  *(undefined1 *)(param_1 + 0x1230) = 1;
  puVar5 = PTR_DAT_04379498;
  uVar14 = *(undefined8 *)(param_3 + 8);
  if (((*PTR_DAT_04379498 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  uVar10 = *(undefined8 *)PTR_DAT_043794a0;
  *(undefined8 *)PTR_DAT_043794a8 = uVar10;
  FUN_02a44e0c(&local_58,uVar10,uVar14);
  puVar11 = *(undefined8 **)(param_1 + 0x1238);
  *(undefined8 *)(param_1 + 0x1238) = 0;
  if (local_58 == (undefined8 *)0x0) {
    if (puVar11 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar11 + 1);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 == 1) {
        puVar11[2] = 0;
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)puVar6;
        *(long *)puVar7 = lVar12;
        local_68 = (undefined8 *)*puVar11;
        FUN_02a44274(lVar12 + 0xd8,&local_68);
      }
    }
    uVar14 = 0;
  }
  else {
    puVar13 = local_58;
    if (puVar11 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar11 + 1);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        puVar11[2] = 0;
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)puVar6;
        *(long *)puVar7 = lVar12;
        local_68 = (undefined8 *)*puVar11;
        FUN_02a44274(lVar12 + 0xd8,&local_68);
      }
      puVar13 = local_58;
    }
    local_58 = (undefined8 *)0x0;
    *(undefined8 **)(param_1 + 0x1238) = puVar13;
  }
  puVar11 = local_58;
  *(undefined8 *)(param_1 + 0x1240) = uVar14;
  if (local_58 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_58 + 1);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      local_58[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)puVar6;
      *(long *)puVar7 = lVar12;
      local_68 = (undefined8 *)*puVar11;
      FUN_02a44274(lVar12 + 0xd8,&local_68);
    }
  }
  FUN_01a4f4d4(param_1,param_1 + 0x3a0,0);
  FUN_01a56fa4(param_1,0);
  *(undefined1 *)(param_1 + 0x8a3) = 0;
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  FUN_01a6a07c(&local_68,param_1 + 0x6b8);
  puVar11 = local_68;
  puVar8 = PTR_DAT_04382698;
  if (local_68 != (undefined8 *)0x0) {
    if (*(int *)((long)local_68 + 0xc) != 0) {
      piVar1 = (int *)((long)local_68 + 0xc);
      iVar9 = *(int *)((long)local_68 + 0xc);
      do {
        plVar15 = (long *)puVar11[2];
        FUN_01bfbad8();
        while( true ) {
          if (plVar15 == (long *)0x0) goto LAB_01bf1e00;
          if (plVar15 == (long *)puVar8) break;
          plVar15 = (long *)*plVar15;
        }
        iVar2 = *piVar1;
        if (iVar2 == iVar9) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar12 = puVar11[3];
            plVar15 = (long *)0x0;
            puVar11 = local_68;
            if (lVar12 != 0) {
              plVar15 = (long *)(lVar12 + -0x50);
            }
            goto joined_r0x01bf1d74;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = iVar2;
      } while (iVar2 != 0);
    }
LAB_01bf1e00:
    plVar15 = (long *)0x0;
    puVar11 = local_68;
joined_r0x01bf1d74:
    local_68 = puVar11;
    if (puVar11 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar11 + 1);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        puVar11[2] = 0;
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)puVar6;
        *(long *)puVar7 = lVar12;
        local_58 = (undefined8 *)*puVar11;
        FUN_02a44274(lVar12 + 0xd8,&local_58);
      }
    }
    if (plVar15 != (long *)0x0) {
      FUN_025cf5f4(plVar15);
      lVar12 = plVar15[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
    }
  }
  return;
}


