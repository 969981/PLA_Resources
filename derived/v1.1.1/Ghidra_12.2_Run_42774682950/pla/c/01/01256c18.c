/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01256c18; name: FUN_01256c18
 */


void FUN_01256c18(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_48;
  char *pcStack_40;
  undefined8 local_38;
  long *local_30;
  long *local_28;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148c68(&local_28);
  if (local_28 != (long *)0x0) {
    FUN_011171f4(local_28,*(undefined4 *)(param_1 + 0x14e0));
    uVar4 = FUN_011171a4(local_28);
    *(undefined4 *)(param_1 + 0x1494) = uVar4;
  }
  FUN_012544dc(param_1);
  FUN_01256d90(param_1,*(undefined4 *)(param_1 + 0x14e0));
  local_48 = 0x1e37f28f1ac9380a;
  pcStack_40 = "PLAY_UI_COMMON_REGISTER";
  local_38 = 0x17;
  local_30 = (long *)0x0;
  FUN_028354b0(&local_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  FUN_01255464(param_1);
  FUN_0281a2d0();
  uVar6 = FUN_01253da0(*(undefined1 *)(param_1 + 0x14a8),*(undefined4 *)(param_1 + 0x1498));
  uVar4 = 4;
  if ((uVar6 & 1) != 0) {
    uVar4 = 5;
  }
  FUN_01247188(param_1 + 0x1430,uVar4);
  *(undefined4 *)(param_1 + 0x14f8) = uVar4;
  if (local_28 != (long *)0x0) {
    lVar7 = local_28[0xb];
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
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}


