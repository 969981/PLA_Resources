/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bdb9bc; name: FUN_02bdb9bc
 */


undefined8 FUN_02bdb9bc(long param_1,undefined8 param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *local_40 [2];
  long local_28;
  
  if ((*(long *)(param_1 + 0x3c0) != 0) && (*(int *)(*(long *)(param_1 + 0x3c0) + 0xc) != 0)) {
    cVar4 = DAT_00000068;
    if (*(long *)(param_1 + 0x3c0) != 0) {
      FUN_02bdbfc4(local_40);
      cVar4 = (char)local_40[0][0xd];
      if (local_40[0] != (long *)0x0) {
        lVar7 = local_40[0][0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          iVar6 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*local_40[0] + 0x20))();
        }
      }
    }
    if (cVar4 != '\0') {
      return 0;
    }
  }
  if (((*PTR_DAT_0437a648 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a648);
  }
  lVar7 = *(long *)PTR_DAT_0437a650;
  *(long *)PTR_DAT_0437a658 = lVar7;
  FUN_02bf8024(local_40,*(undefined8 *)(lVar7 + 0x230),3,*(undefined4 *)(param_1 + 0xd8),param_2);
  FUN_02bdc148(param_1 + 0x3c0,local_40);
  if (local_40[0] != (long *)0x0) {
    plVar2 = local_40[0] + 1;
    do {
      iVar6 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      local_40[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_28 = *local_40[0];
      FUN_02a44274(lVar7 + 0xd8,&local_28);
    }
  }
  return 1;
}


