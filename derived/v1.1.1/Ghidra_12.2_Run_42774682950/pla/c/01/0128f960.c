/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0128f960; name: FUN_0128f960
 */


void FUN_0128f960(undefined8 param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long *local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01149164(&local_40);
  uVar4 = FUN_010d90c0(local_40);
  FUN_0128fbec(param_1,uVar4);
  if (local_40 != (long *)0x0) {
    lVar6 = local_40[0xb];
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
      (**(code **)(*local_40 + 0x20))();
    }
  }
  local_40 = (long *)0xa41a9067b14f84fb;
  pcStack_38 = "pane_L_money_00_T_param_money_00";
  local_30 = 0x20;
  local_28 = (long *)0x0;
  FUN_0128d2ac(param_1,0,0xb04cbd7b5a91acc8,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


