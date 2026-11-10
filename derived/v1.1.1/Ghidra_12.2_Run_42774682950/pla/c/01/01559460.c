/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01559460; name: FUN_01559460
 */


void FUN_01559460(undefined8 param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 local_34;
  long *local_28;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148cdc(&local_28);
  local_34 = 0;
  puVar5 = (undefined1 *)FUN_0155dd78(param_1,&local_34);
  *puVar5 = 1;
  cVar3 = FUN_01123ce8(local_28);
  local_34 = 1;
  uVar6 = FUN_0155dd78(param_1,&local_34);
  *(bool *)uVar6 = cVar3 == '\0';
  cVar3 = FUN_01123ce8(local_28);
  local_34 = 2;
  uVar6 = FUN_0155dd78(param_1,&local_34);
  *(bool *)uVar6 = cVar3 == '\x01';
  local_34 = 7;
  puVar5 = (undefined1 *)FUN_0155dd78(param_1,&local_34);
  *puVar5 = 1;
  if (local_28 != (long *)0x0) {
    lVar7 = local_28[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar3 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar2) {
        *piVar1 = iVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}


