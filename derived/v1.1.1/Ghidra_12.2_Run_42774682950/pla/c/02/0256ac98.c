/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0256ac98; name: FUN_0256ac98
 */


undefined8 FUN_0256ac98(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *local_30 [2];
  long *local_18;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    return 1;
  }
  FUN_02be88ac(local_30,*(undefined8 *)(param_1 + 0x490),0);
  FUN_00ab5ae0(&local_18,local_30);
  if (local_18 != (long *)0x0) {
    lVar7 = local_18[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    iVar6 = *(int *)((long)local_18 + 0x7c);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_18 + 0x20))();
    }
    if (iVar6 == 2) {
      uVar8 = 1;
      puVar5 = local_30[0];
      goto joined_r0x0256ad7c;
    }
  }
  uVar8 = 0;
  puVar5 = local_30[0];
joined_r0x0256ad7c:
  if (puVar5 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar5 + 1);
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
      puVar5[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_18 = (long *)*puVar5;
      FUN_02a44274(lVar7 + 0xd8,&local_18);
    }
  }
  return uVar8;
}


