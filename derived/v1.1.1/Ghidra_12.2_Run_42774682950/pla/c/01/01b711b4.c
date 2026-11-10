/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b711b4; name: FUN_01b711b4
 */


void FUN_01b711b4(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 *local_38 [2];
  undefined8 local_28;
  
  lVar6 = FUN_01b71378(param_1,param_1[1],param_1 + 0x7c);
  param_1[0xbe] = lVar6;
  (**(code **)(*param_1 + 0x18))(local_38,param_1);
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  FUN_01b7bc64(&local_48,local_38);
  puVar4 = local_38[0];
  if (local_38[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_38[0] + 1);
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
      local_38[0][2] = 0;
      if ((*PTR_DAT_04379498 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(PTR_DAT_04379498);
        if (iVar5 != 0) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_28 = *puVar4;
      FUN_02a44274(lVar7 + 0xd8,&local_28);
    }
  }
  FUN_01b6a890(lVar6 + 0x220,&local_48);
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
      local_38[0] = (undefined8 *)*puVar4;
      FUN_02a44274(lVar6 + 0xd8,local_38);
    }
  }
  *(undefined1 *)(param_1[0xbe] + 0x1f5) = 0;
  (**(code **)(*param_1 + 0x120))(param_1);
  return;
}


