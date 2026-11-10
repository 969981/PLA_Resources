/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a75858; name: FUN_02a75858
 */


void FUN_02a75858(long *param_1,long *param_2,long param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *local_68;
  long local_60;
  undefined8 *local_58 [2];
  undefined8 *local_48;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  (**(code **)(*param_2 + 0x10))(local_58,param_2);
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_0093bcac(&local_68,local_58);
  puVar9 = local_58[0];
  puVar6 = PTR_DAT_043794a8;
  puVar5 = PTR_DAT_043794a0;
  puVar4 = PTR_DAT_04379498;
  if (local_58[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_58[0] + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      local_58[0][2] = 0;
      if ((*puVar4 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(PTR_DAT_04379498);
        if (iVar7 != 0) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
      }
      lVar10 = *(long *)puVar5;
      *(long *)puVar6 = lVar10;
      local_48 = (undefined8 *)*puVar9;
      FUN_02a44274(lVar10 + 0xd8,&local_48);
    }
  }
  do {
    lVar10 = local_60;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(&local_60,0x10);
    if (bVar3) {
      local_60 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  uVar8 = *(undefined8 *)puVar5;
  *(undefined8 *)puVar6 = uVar8;
  FUN_02a44e0c(&local_48,uVar8,lVar10);
  puVar9 = local_68;
  local_68 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar9 + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      puVar9[2] = 0;
      if ((*puVar4 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(PTR_DAT_04379498);
        if (iVar7 != 0) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
      }
      lVar11 = *(long *)puVar5;
      *(long *)puVar6 = lVar11;
      local_58[0] = (undefined8 *)*puVar9;
      FUN_02a44274(lVar11 + 0xd8,local_58);
    }
  }
  puVar9 = (undefined8 *)param_1[1];
  param_1[1] = 0;
  if (local_48 == (undefined8 *)0x0) {
    if (puVar9 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar9 + 1);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 == 1) {
        puVar9[2] = 0;
        if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)puVar5;
        *(long *)puVar6 = lVar10;
        local_58[0] = (undefined8 *)*puVar9;
        FUN_02a44274(lVar10 + 0xd8,local_58);
      }
    }
    lVar10 = 0;
  }
  else {
    puVar12 = local_48;
    if (puVar9 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar9 + 1);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        puVar9[2] = 0;
        if ((*puVar4 & 1) == 0) {
          iVar7 = __cxa_guard_acquire(PTR_DAT_04379498);
          if (iVar7 != 0) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
        }
        lVar11 = *(long *)puVar5;
        *(long *)puVar6 = lVar11;
        local_58[0] = (undefined8 *)*puVar9;
        FUN_02a44274(lVar11 + 0xd8,local_58);
      }
      puVar12 = local_48;
    }
    local_48 = (undefined8 *)0x0;
    param_1[1] = (long)puVar12;
  }
  puVar9 = local_48;
  param_1[2] = lVar10;
  if (local_48 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_48 + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      local_48[2] = 0;
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)puVar5;
      *(long *)puVar6 = lVar10;
      local_58[0] = (undefined8 *)*puVar9;
      FUN_02a44274(lVar10 + 0xd8,local_58);
    }
  }
  puVar9 = local_68;
  if (local_68 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_68 + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      local_68[2] = 0;
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)puVar5;
      *(long *)puVar6 = lVar10;
      local_58[0] = (undefined8 *)*puVar9;
      FUN_02a44274(lVar10 + 0xd8,local_58);
    }
  }
  *param_1 = param_3;
  if ((param_3 != 0) && ((*(byte *)(param_3 + 0xc) & 1) == 0)) {
    *(ulong *)(param_3 + 0x18) = param_3 + (ulong)*(uint *)(param_3 + 0x18);
    lVar10 = *param_1;
    if (*(int *)(lVar10 + 0x10) != 0) {
      uVar13 = 0;
      lVar11 = 0x10;
      do {
        uVar13 = uVar13 + 1;
        *(ulong *)(*(long *)(lVar10 + 0x18) + lVar11) =
             param_3 + (ulong)*(uint *)(*(long *)(lVar10 + 0x18) + lVar11);
        lVar10 = *param_1;
        lVar11 = lVar11 + 0x18;
      } while (uVar13 < *(uint *)(lVar10 + 0x10));
    }
    *(ulong *)(lVar10 + 0x20) = param_3 + (ulong)*(uint *)(lVar10 + 0x20);
    lVar10 = *param_1;
    if (*(int *)(lVar10 + 0x14) != 0) {
      uVar13 = 0;
      lVar11 = 0x28;
      do {
        *(ulong *)(lVar10 + lVar11) = param_3 + (ulong)*(uint *)(lVar10 + lVar11);
        lVar10 = *param_1;
        uVar13 = uVar13 + 1;
        lVar11 = lVar11 + 8;
      } while (uVar13 < *(uint *)(lVar10 + 0x14));
    }
    *(uint *)(lVar10 + 0xc) = *(uint *)(lVar10 + 0xc) | 1;
  }
  return;
}


