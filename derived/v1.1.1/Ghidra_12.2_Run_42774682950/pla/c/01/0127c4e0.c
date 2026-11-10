/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0127c4e0; name: FUN_0127c4e0
 */


void FUN_0127c4e0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_48;
  char *pcStack_40;
  undefined8 local_38;
  long *local_30;
  long *local_28;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_011490f0(&local_28);
  iVar4 = 0;
  do {
    uVar5 = FUN_01143250(local_28,iVar4);
    if ((uVar5 & 1) != 0) {
      uVar8 = 1;
      goto LAB_0127c550;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x100);
  uVar8 = 0;
LAB_0127c550:
  local_48 = 0x4e037850425419da;
  pcStack_40 = "button_00";
  local_38 = 9;
  local_30 = (long *)0x0;
  uVar6 = thunk_FUN_00d2e944(param_1 + 0x180,&local_48);
  FUN_0280779c(uVar6,uVar8);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    lVar7 = local_28[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}


