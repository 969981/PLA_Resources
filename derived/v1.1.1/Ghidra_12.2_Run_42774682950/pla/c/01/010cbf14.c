/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010cbf14; name: FUN_010cbf14
 */


undefined8 FUN_010cbf14(long param_1,ulong param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  
  iVar4 = *(int *)(param_1 + 0x50);
  if (iVar4 == 3) {
    if ((*(char *)(param_1 + 0x6c) != '\0') && ((param_2 & 1) == 0)) {
      if (((*PTR_DAT_04379690 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379690), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379690);
      }
      lVar6 = *(long *)PTR_DAT_04379698;
      *(long *)PTR_DAT_043796a0 = lVar6;
      plVar8 = *(long **)(*(long *)(lVar6 + 0x50) + 0x30);
      if (plVar8 == (long *)0x0) {
        uVar5 = FUN_01469398(0);
      }
      else {
        lVar6 = plVar8[0xb];
        if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar6 + 0x10) == 0) {
          uVar7 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
          *(undefined8 *)(lVar6 + 0x10) = uVar7;
        }
        piVar1 = (int *)(lVar6 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar5 = FUN_01469398(plVar8);
        lVar6 = plVar8[0xb];
        piVar1 = (int *)(lVar6 + 0xc);
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
          *(undefined8 *)(lVar6 + 0x18) = 0;
          (**(code **)(*plVar8 + 0x20))(plVar8);
        }
      }
      if ((uVar5 & 1) == 0) {
        return 0;
      }
    }
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    uVar7 = *(undefined8 *)PTR_DAT_04379560;
    *(undefined8 *)PTR_DAT_04379568 = uVar7;
    uVar5 = FUN_01148690(uVar7,*(undefined4 *)(param_1 + 0x68));
    if ((uVar5 & 1) != 0) {
      FUN_011486f8(uVar7,*(undefined4 *)(param_1 + 0x68));
      return 1;
    }
  }
  else if (iVar4 == 2) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    uVar7 = *(undefined8 *)PTR_DAT_04379560;
    *(undefined8 *)PTR_DAT_04379568 = uVar7;
    uVar5 = FUN_011485c0(uVar7,*(undefined4 *)(param_1 + 0x68));
    if ((uVar5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x50) = 3;
      return 0;
    }
  }
  else if (iVar4 == 1) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    uVar7 = *(undefined8 *)PTR_DAT_04379560;
    *(undefined8 *)PTR_DAT_04379568 = uVar7;
    uVar5 = FUN_01148354(uVar7,*(undefined4 *)(param_1 + 0x68));
    if ((uVar5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x50) = 2;
      FUN_01148558(uVar7,*(undefined4 *)(param_1 + 0x68));
    }
  }
  return 0;
}


