/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00acc168; name: FUN_00acc168
 */


void FUN_00acc168(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *local_58;
  undefined8 uStack_50;
  long *local_48;
  undefined8 uStack_40;
  long *local_30;
  long local_28;
  
  FUN_009c69bc(&local_48);
  lVar7 = FUN_00acf14c(local_48,local_48[1]);
  if (local_48 != (long *)0x0) {
    lVar8 = local_48[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  local_58 = (long *)(*(long *)(param_1 + 0x4c0) + 0x48);
  plVar5 = (long *)0x0;
  if (*(long *)(param_1 + 0x4c0) != 0) {
    (**(code **)(*local_58 + 0x10))();
    plVar5 = local_58;
  }
  local_58 = plVar5;
  FUN_02a4754c(&local_48,PTR_DAT_0437a3d8);
  FUN_0289ea54(lVar7,&local_58,&local_48,0);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))();
  }
  local_48 = (long *)0x0;
  uStack_40 = 0;
  FUN_008802f0(&local_48,lVar7 + 0x58);
  local_58 = (long *)0x0;
  uStack_50 = 0;
  FUN_00aa03f0(&local_58,&local_48);
  plVar5 = local_48;
  if (local_48 != (long *)0x0) {
    plVar2 = local_48 + 1;
    do {
      iVar6 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      local_48[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_28 = *plVar5;
      FUN_02a44274(lVar7 + 0xd8,&local_28);
    }
  }
  FUN_00ab166c(param_1 + 0x4b0,&local_58);
  plVar5 = local_58;
  if (local_58 != (long *)0x0) {
    plVar2 = local_58 + 1;
    do {
      iVar6 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      local_58[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_48 = (long *)*plVar5;
      FUN_02a44274(lVar7 + 0xd8,&local_48);
    }
  }
  return;
}


