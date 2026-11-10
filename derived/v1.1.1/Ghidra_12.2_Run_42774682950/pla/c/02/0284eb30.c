/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0284eb30; name: FUN_0284eb30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0284eb30(long *param_1,undefined4 *param_2,undefined4 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *local_370;
  long local_368;
  long local_360;
  long local_358;
  long local_350;
  undefined4 local_348;
  undefined1 auStack_340 [768];
  
  memset(auStack_340,0,0x300);
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379678), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar6 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar6;
  plVar5 = *(long **)(lVar6 + 0xd0);
  if (plVar5 == (long *)0x0) {
    lVar6 = _DAT_00000188;
  }
  else {
    plVar1 = plVar5 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar6 = plVar5[0x31];
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  FUN_00d3e2a4(lVar6,auStack_340,0x300,param_3);
  FUN_013d33bc(&local_370,auStack_340);
  plVar5 = (long *)*param_1;
  *param_1 = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  plVar5 = local_370;
  local_370 = (long *)0x0;
  *param_1 = (long)plVar5;
  param_1[1] = local_368;
  param_1[2] = local_360;
  plVar5 = (long *)param_1[4];
  param_1[3] = local_358;
  param_1[4] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  lVar6 = local_350;
  local_350 = 0;
  param_1[4] = lVar6;
  *(undefined4 *)(param_1 + 5) = local_348;
  if (local_370 != (long *)0x0) {
    (**(code **)(*local_370 + 0x20))();
  }
  *param_2 = 0;
  return;
}


