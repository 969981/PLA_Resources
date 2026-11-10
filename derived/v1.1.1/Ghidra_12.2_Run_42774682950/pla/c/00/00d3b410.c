/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d3b410; name: FUN_00d3b410
 */


void FUN_00d3b410(undefined8 *param_1)

{
  long *plVar1;
  int *piVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 auStack_58 [24];
  
  *param_1 = &PTR_FUN_041eaa60;
  param_1[9] = &PTR_LAB_041eab60;
  param_1[10] = &PTR_LAB_041eaba8;
  plVar7 = (long *)param_1[0x99];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  FUN_00d3c808(param_1 + 0x8a);
  FUN_00d3c808(param_1 + 0x7c);
  FUN_00d3c808(param_1 + 0x6e);
  plVar7 = (long *)param_1[0x6d];
  if (plVar7 == (long *)0x0) {
LAB_00d3b4a0:
    plVar7 = (long *)param_1[0x6b];
  }
  else {
    lVar9 = plVar7[0xb];
    piVar2 = (int *)(lVar9 + 0xc);
    do {
      iVar6 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 != 0) goto LAB_00d3b4a0;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*plVar7 + 0x20))();
    plVar7 = (long *)param_1[0x6b];
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  param_1[0x23] = &PTR_LAB_041ead70;
  FUN_00d3bc90(param_1 + 0x46);
  FUN_00d3bc90(param_1 + 0x25);
  puVar10 = (undefined8 *)param_1[0x1f];
  param_1[0x1f] = 0;
  if (puVar10 == (undefined8 *)0x0) goto LAB_00d3b4dc;
  FUN_02bcbe58(auStack_58,0);
  (**(code **)*puVar10)(puVar10);
  plVar7 = (long *)param_1[0x20];
  uVar3 = param_1[0x21];
  uVar11 = param_1[0x22];
  uVar8 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  lVar9 = tpidr_el0;
  if ((uVar8 & 1) == 0) {
LAB_00d3b580:
    (**(code **)(*plVar7 + 0x18))(plVar7,puVar10,uVar3,uVar11);
  }
  else {
    if (*(char *)(lVar9 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar9 + 0x38d488) = 1;
      *(undefined8 *)(lVar9 + 0x38d478) = 0;
      *(undefined8 *)(lVar9 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar9 + 0x38d480) < 1) goto LAB_00d3b580;
    FUN_02bcc824(plVar7,puVar10,uVar3,uVar11);
  }
  if (*(char *)(lVar9 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar9 + 0x38d488) = 1;
    *(undefined8 *)(lVar9 + 0x38d478) = 0;
    *(undefined8 *)(lVar9 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar6 = *(int *)(lVar9 + 0x38d480) + -1;
  *(int *)(lVar9 + 0x38d480) = iVar6;
  if (iVar6 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar9 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar9 + 0x38d488) = 1;
      *(undefined8 *)(lVar9 + 0x38d478) = 0;
      *(undefined8 *)(lVar9 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar9 + 0x38d484) = 0;
  }
LAB_00d3b4dc:
  lVar9 = param_1[0x1b];
  param_1[0x1b] = 0;
  if (lVar9 != 0) {
    FUN_00d3c348(param_1 + 0x1c);
  }
  FUN_00d910b8(param_1);
  return;
}


