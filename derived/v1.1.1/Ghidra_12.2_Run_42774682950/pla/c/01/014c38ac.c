/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014c38ac; name: FUN_014c38ac
 */


void FUN_014c38ac(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  byte local_28;
  byte local_27;
  
  local_50 = FUN_02c5d92c(param_2,7);
  local_4c = FUN_02c5d92c(param_2,4);
  local_48 = FUN_02c5d92c(param_2,5);
  local_44 = FUN_02c5d92c(param_2,6);
  local_40 = FUN_02c5d92c(param_2,3);
  local_3c = FUN_02c5d92c(param_2,0);
  local_38 = FUN_02c5d92c(param_2,1);
  local_34 = FUN_02c5d92c(param_2,2);
  local_30 = FUN_02c5d92c(param_2,9);
  local_2c = FUN_02c5d628(param_2);
  local_28 = FUN_02c63a70(param_2);
  local_28 = local_28 & 1;
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148cdc(&local_58);
  local_27 = FUN_01123e40(local_58,param_2);
  local_27 = local_27 & 1;
  if (local_58 != (long *)0x0) {
    lVar7 = local_58[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
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
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
  }
  uVar6 = FUN_02c62900(param_2,2);
  if ((uVar6 & 1) == 0) {
    uVar4 = FUN_02c624d0(param_2);
    FUN_014c550c(param_1,uVar4,&local_50);
  }
  else {
    FUN_014c5758(param_1,&local_50);
  }
  return;
}


