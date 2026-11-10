/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0095cb70; name: FUN_0095cb70
 */


void FUN_0095cb70(long *param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  undefined2 uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long *local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined6 uStack_78;
  undefined2 local_72;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  undefined8 local_58;
  
  local_c0 = (long *)*param_1;
  *param_1 = 0;
  local_b0 = 0;
  local_b8 = (undefined8 *)0x0;
  FUN_0087fcf0((ulong)&local_c0 | 8,param_1 + 1);
  local_a8 = param_1[3];
  local_a0 = param_1[4];
  local_98 = param_1[5];
  local_90 = param_1[6];
  local_88 = param_1[7];
  local_80 = param_1[8];
  uStack_70 = (undefined4)((ulong)*(undefined8 *)((long)param_1 + 0x4e) >> 0x10);
  uStack_6c = (undefined2)((ulong)*(undefined8 *)((long)param_1 + 0x4e) >> 0x30);
  uStack_78 = (undefined6)param_1[9];
  local_72 = (undefined2)((ulong)param_1[9] >> 0x30);
  plVar8 = (long *)*param_1;
  *param_1 = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      iVar7 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  lVar9 = *param_2;
  *param_2 = 0;
  *param_1 = lVar9;
  FUN_0087fcf0(param_1 + 1,param_2 + 1);
  lVar9 = param_2[4];
  param_1[3] = param_2[3];
  *(short *)(param_1 + 4) = (short)lVar9;
  lVar9 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = lVar9;
  lVar9 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = lVar9;
  uVar3 = *(undefined2 *)((long)param_2 + 0x54);
  *(int *)(param_1 + 10) = (int)param_2[10];
  *(undefined2 *)((long)param_1 + 0x54) = uVar3;
  plVar8 = (long *)*param_2;
  *param_2 = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      iVar7 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  plVar8 = local_c0;
  local_c0 = (long *)0x0;
  *param_2 = (long)plVar8;
  FUN_0087fcf0(param_2 + 1,(ulong)&local_c0 | 8);
  puVar6 = local_b8;
  *(undefined2 *)(param_2 + 4) = (undefined2)local_a0;
  param_2[3] = local_a8;
  param_2[7] = local_88;
  param_2[6] = local_90;
  param_2[9] = CONCAT26(local_72,uStack_78);
  param_2[8] = local_80;
  *(undefined2 *)((long)param_2 + 0x54) = uStack_6c;
  *(undefined4 *)(param_2 + 10) = uStack_70;
  if (local_b8 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_b8 + 1);
    do {
      iVar7 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      local_b8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_58 = *puVar6;
      FUN_02a44274(lVar9 + 0xd8,&local_58);
    }
  }
  if (local_c0 != (long *)0x0) {
    plVar8 = local_c0 + 10;
    do {
      iVar7 = (int)*plVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_c0 + 0x10))();
    }
  }
  return;
}


