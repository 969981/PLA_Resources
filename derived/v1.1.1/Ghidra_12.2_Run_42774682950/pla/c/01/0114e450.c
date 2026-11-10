/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0114e450; name: FUN_0114e450
 */


void FUN_0114e450(undefined8 *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_58 [24];
  
  FUN_02bcbe58(auStack_58,0);
  plVar6 = *(long **)(param_2 + 8);
  if (plVar6 != (long *)0x0) {
    lVar8 = plVar6[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))();
    }
  }
  plVar6 = (long *)*param_1;
  uVar3 = param_1[1];
  uVar9 = param_1[2];
  uVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
  lVar8 = tpidr_el0;
  if ((uVar7 & 1) != 0) {
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar8 + 0x38d480)) {
      FUN_02bcc824(plVar6,param_2,uVar3,uVar9);
      goto LAB_0114e51c;
    }
  }
  (**(code **)(*plVar6 + 0x18))(plVar6,param_2,uVar3,uVar9);
LAB_0114e51c:
  if (*(char *)(lVar8 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar8 + 0x38d488) = 1;
    *(undefined8 *)(lVar8 + 0x38d478) = 0;
    *(undefined8 *)(lVar8 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar2 = *(int *)(lVar8 + 0x38d480) + -1;
  *(int *)(lVar8 + 0x38d480) = iVar2;
  if (iVar2 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar8 + 0x38d484) = 0;
  }
  return;
}


