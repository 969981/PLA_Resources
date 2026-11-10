/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0278cf28; name: FUN_0278cf28
 */


bool FUN_0278cf28(char *param_1)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  long *plVar10;
  char acStack_a3a [25];
  char acStack_a21 [25];
  char local_a08 [25];
  char acStack_9ef [2475];
  char acStack_44 [4];
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379558), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar8 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar8;
  plVar10 = *(long **)(lVar8 + 0x2a8);
  if (plVar10 == (long *)0x0) {
    bVar5 = false;
  }
  else {
    lVar8 = plVar10[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_0110c200(local_a08,plVar10);
    lVar8 = 0;
    if (local_a08[0] != '\0') goto LAB_0278cfe0;
    do {
      do {
        lVar2 = lVar8 + 0x19;
        if (lVar2 == 0x9c4) {
          pcVar9 = acStack_44;
          goto LAB_0278d004;
        }
        pcVar9 = acStack_9ef + lVar8;
        lVar8 = lVar2;
      } while (*pcVar9 == '\0');
LAB_0278cfe0:
      iVar6 = strcmp(local_a08 + lVar8 + 1,param_1);
    } while (iVar6 != 0);
    pcVar9 = local_a08 + lVar8;
LAB_0278d004:
    lVar8 = 0x9c4;
    do {
      while (acStack_a21[lVar8] != '\0') {
        acStack_a21[lVar8] = '\0';
        if (acStack_a3a[lVar8] == '\0') goto LAB_0278d020;
LAB_0278d038:
        acStack_a3a[lVar8] = '\0';
        lVar8 = lVar8 + -0x32;
        if (lVar8 == 0) goto LAB_0278d044;
      }
      if (acStack_a3a[lVar8] != '\0') goto LAB_0278d038;
LAB_0278d020:
      lVar8 = lVar8 + -0x32;
    } while (lVar8 != 0);
LAB_0278d044:
    bVar5 = pcVar9 != acStack_44;
    lVar8 = plVar10[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
  }
  return bVar5;
}


