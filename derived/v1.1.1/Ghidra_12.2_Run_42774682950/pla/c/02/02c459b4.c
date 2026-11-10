/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c459b4; name: FUN_02c459b4
 */


void FUN_02c459b4(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_58 [24];
  
  FUN_02bcbe58(auStack_58,0);
  uVar8 = param_1[1];
  if (0x47 < uVar8) {
    uVar9 = 0;
    do {
      plVar5 = (long *)(param_2 + uVar9 * 0x48);
      plVar6 = plVar5 + 1;
      if ((char)*plVar6 != '\0') {
        *(undefined8 *)(param_2 + uVar9 * 0x48 + 0x10) = 0;
        *(char *)plVar6 = '\0';
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) {
        plVar6 = plVar5 + 10;
        do {
          iVar3 = (int)*plVar6 + -1;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *(int *)plVar6 = iVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar3 == 0) {
          (**(code **)(*plVar5 + 0x10))();
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar8 / 0x48);
    uVar8 = param_1[1];
  }
  plVar5 = (long *)*param_1;
  uVar7 = param_1[2];
  uVar9 = (**(code **)(*plVar5 + 0xc0))(plVar5);
  lVar4 = tpidr_el0;
  if ((uVar9 & 1) != 0) {
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar4 + 0x38d480)) {
      FUN_02bcc824(plVar5,param_2,uVar8,uVar7);
      goto LAB_02c45ae8;
    }
  }
  (**(code **)(*plVar5 + 0x18))(plVar5,param_2,uVar8,uVar7);
LAB_02c45ae8:
  if (*(char *)(lVar4 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar4 + 0x38d488) = 1;
    *(undefined8 *)(lVar4 + 0x38d478) = 0;
    *(undefined8 *)(lVar4 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar3 = *(int *)(lVar4 + 0x38d480) + -1;
  *(int *)(lVar4 + 0x38d480) = iVar3;
  if (iVar3 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar4 + 0x38d484) = 0;
  }
  return;
}


