/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0278c520; name: FUN_0278c520
 */


void FUN_0278c520(undefined8 *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  char cVar6;
  long *plVar7;
  char acStack_a2a [25];
  char acStack_a11 [25];
  char local_9f8;
  undefined8 local_9f7;
  undefined8 local_9ef;
  undefined8 local_9e7;
  char local_66;
  undefined8 local_65 [3];
  char local_4d;
  undefined8 local_4c [3];
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04379558), iVar3 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar5 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar5;
  plVar7 = *(long **)(lVar5 + 0x2a8);
  if (plVar7 != (long *)0x0) {
    lVar5 = plVar7[0xb];
    if (*(undefined8 **)(lVar5 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar5 + 0x10) == 0) {
      uVar4 = (**(code **)**(undefined8 **)(lVar5 + 0x18))();
      *(undefined8 *)(lVar5 + 0x10) = uVar4;
    }
    piVar1 = (int *)(lVar5 + 0xc);
    do {
      cVar6 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar2) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    FUN_0110c200(&local_9f8,plVar7);
    lVar5 = 0;
    cVar6 = local_4d;
    do {
      bVar2 = cVar6 == '\0';
      cVar6 = *(char *)((long)local_65 + lVar5 + -1);
      if (bVar2) {
        if (cVar6 != '\0') {
          *(undefined8 *)((long)local_4c + lVar5) = *(undefined8 *)((long)local_65 + lVar5);
          uVar4 = *(undefined8 *)((long)local_65 + lVar5 + 0x10);
          *(undefined8 *)((long)local_4c + lVar5 + 8) = *(undefined8 *)((long)local_65 + lVar5 + 8);
          *(undefined8 *)((long)local_4c + lVar5 + 0x10) = uVar4;
          *(undefined1 *)((long)local_65 + lVar5 + 0x18) = 1;
        }
      }
      else if (cVar6 == '\0') {
        *(undefined1 *)((long)local_65 + lVar5 + 0x18) = 0;
      }
      else {
        *(undefined8 *)((long)local_4c + lVar5) = *(undefined8 *)((long)local_65 + lVar5);
        uVar4 = *(undefined8 *)((long)local_65 + lVar5 + 0x10);
        *(undefined8 *)((long)local_4c + lVar5 + 8) = *(undefined8 *)((long)local_65 + lVar5 + 8);
        *(undefined8 *)((long)local_4c + lVar5 + 0x10) = uVar4;
      }
      bVar2 = lVar5 != -0x992;
      lVar5 = lVar5 + -0x19;
    } while (bVar2);
    local_9f7 = *param_1;
    local_9ef = param_1[1];
    local_9e7 = param_1[2];
    if (local_9f8 == '\0') {
      local_9f8 = '\x01';
    }
    FUN_0110c18c(plVar7,&local_9f8);
    lVar5 = 0x9c4;
    do {
      while (acStack_a11[lVar5] != '\0') {
        acStack_a11[lVar5] = '\0';
        if (acStack_a2a[lVar5] == '\0') goto LAB_0278c670;
LAB_0278c688:
        acStack_a2a[lVar5] = '\0';
        lVar5 = lVar5 + -0x32;
        if (lVar5 == 0) goto LAB_0278c694;
      }
      if (acStack_a2a[lVar5] != '\0') goto LAB_0278c688;
LAB_0278c670:
      lVar5 = lVar5 + -0x32;
    } while (lVar5 != 0);
LAB_0278c694:
    lVar5 = plVar7[0xb];
    piVar1 = (int *)(lVar5 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar6 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar2) {
        *piVar1 = iVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar5 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))(plVar7);
    }
  }
  return;
}


