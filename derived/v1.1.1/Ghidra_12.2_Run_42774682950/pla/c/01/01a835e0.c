/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a835e0; name: FUN_01a835e0
 */


void FUN_01a835e0(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *local_48;
  undefined8 uStack_40;
  long *local_38;
  undefined8 local_28;
  
  uVar8 = param_3[1];
  uVar7 = *param_3;
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  FUN_01a0703c(&local_48,param_2 + 0xad0);
  FUN_01839c8c(&local_38,&local_48);
  puVar4 = local_48;
  if (local_48 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_48 + 1);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      local_48[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar6 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar6;
      local_28 = *puVar4;
      FUN_02a44274(lVar6 + 0xd8,&local_28);
    }
  }
  if ((local_38 == (long *)0x0) || (((int)local_38[0x50] != 3 && ((int)local_38[0x50] != 1)))) {
    *(undefined1 *)(param_1 + 2) = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[1] = uVar8;
    *param_1 = uVar7;
  }
  else {
    FUN_01a952a4(param_1,param_2,param_3);
  }
  if (local_38 != (long *)0x0) {
    lVar6 = local_38[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


