/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d70750; name: FUN_00d70750
 */


void FUN_00d70750(long param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *local_50;
  char *pcStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar8 = *param_2;
  *(undefined4 *)(param_1 + 0x768) = 0;
  *(undefined8 *)(param_1 + 0x760) = uVar8;
  uVar4 = FUN_00d6ea0c(*(undefined8 *)(param_1 + 0x5b8),param_1 + 0x760);
  *(uint *)(param_1 + 0x76c) = uVar4;
  if (1 < uVar4) {
    local_50 = (long *)0x8f31cd06928d1181;
    pcStack_48 = "baseInputChangePageL";
    local_40 = 0x14;
    uStack_38 = 0;
    FUN_00d703f8(param_1,&local_50,1);
  }
  else {
    local_50 = (long *)0x8f31cd06928d1181;
    pcStack_48 = "baseInputChangePageL";
    local_40 = 0x14;
    uStack_38 = 0;
    FUN_00d703f8(param_1,&local_50,0);
  }
  uStack_38 = 0;
  local_40 = 0x14;
  pcStack_48 = "baseInputChangePageR";
  local_50 = (long *)&DAT_8f31b706928cec1f;
  FUN_00d703f8(param_1,&local_50,1 < uVar4);
  FUN_00d7091c(param_1);
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379558), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_011490f0(&local_50);
  uVar5 = FUN_00d6e818(*(undefined8 *)(param_1 + 0x5b8),param_1 + 0x760);
  uVar7 = FUN_01143250(local_50,uVar5);
  if ((uVar7 & 1) == 0) {
    FUN_0114321c(local_50,uVar5);
  }
  if (local_50 != (long *)0x0) {
    lVar9 = local_50[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_50 + 0x20))();
    }
  }
  return;
}


