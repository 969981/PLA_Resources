/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0294484c; name: FUN_0294484c
 */


undefined8 FUN_0294484c(long param_1,int *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  code *pcVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_68 [24];
  
  *(undefined1 *)(param_1 + 0x13b) = 1;
  iVar8 = *param_2;
  if (iVar8 == 2) {
    FUN_00937d80(param_1 + 0x3b0);
    *param_2 = *param_2 + 1;
    return 1;
  }
  if (iVar8 == 1) {
    pcVar9 = *(code **)(param_1 + 0x88);
    uVar7 = *(ulong *)(param_1 + 0x90);
    if ((pcVar9 == (code *)0x0) && (uVar7 == 0 || (uVar7 & 1) == 0)) {
      iVar8 = 2;
      goto LAB_02944a6c;
    }
    plVar2 = (long *)(param_1 + ((long)uVar7 >> 1));
    if ((uVar7 & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *plVar2);
    }
    uVar7 = (*pcVar9)(plVar2,param_1 + 0x98);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
  }
  else {
    if (iVar8 != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x98) = 0;
    plVar2 = DAT_043ecdf0;
    if (DAT_043ecdf0 != (long *)0x0) {
      DAT_043ecdf0 = (long *)0x0;
      plVar1 = plVar2 + 10;
      do {
        iVar8 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    FUN_0293dd40();
    FUN_02944bbc(param_1);
    FUN_02955f34();
    lVar10 = *(long *)(param_1 + 0x1c8);
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    if (lVar10 != 0) {
      FUN_02bcbe58(auStack_68,0);
      FUN_0294aaec(lVar10);
      plVar2 = *(long **)(param_1 + 0x1d0);
      uVar3 = *(undefined8 *)(param_1 + 0x1d8);
      uVar11 = *(undefined8 *)(param_1 + 0x1e0);
      uVar7 = (**(code **)(*plVar2 + 0xc0))(plVar2);
      lVar6 = tpidr_el0;
      if ((uVar7 & 1) == 0) {
LAB_0294494c:
        (**(code **)(*plVar2 + 0x18))(plVar2,lVar10,uVar3,uVar11);
      }
      else {
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_0294494c;
        FUN_02bcc824(plVar2,lVar10,uVar3,uVar11);
      }
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar8 = *(int *)(lVar6 + 0x38d480) + -1;
      *(int *)(lVar6 + 0x38d480) = iVar8;
      if (iVar8 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar6 + 0x38d484) = 0;
      }
    }
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined1 **)(param_1 + 0x88) = &LAB_029457f8;
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  iVar8 = *param_2 + 1;
LAB_02944a6c:
  *param_2 = iVar8;
  return 0;
}


