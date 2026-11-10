/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d6879c; name: FUN_00d6879c
 */


void FUN_00d6879c(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_58 [24];
  
  *param_1 = &PTR_FUN_041eb920;
  param_1[9] = &PTR_LAB_041eb9d0;
  param_1[10] = &PTR_LAB_041eba18;
  FUN_00d3bc90(param_1 + 0xbd);
  puVar8 = (undefined8 *)param_1[0xb8];
  param_1[0xb8] = 0;
  if (puVar8 == (undefined8 *)0x0) {
LAB_00d687e4:
    plVar5 = (long *)param_1[0xb7];
  }
  else {
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*puVar8)(puVar8);
    plVar5 = (long *)param_1[0xb9];
    uVar9 = param_1[0xba];
    uVar10 = param_1[0xbb];
    uVar6 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    lVar7 = tpidr_el0;
    if ((uVar6 & 1) == 0) {
LAB_00d688c8:
      (**(code **)(*plVar5 + 0x18))(plVar5,puVar8,uVar9,uVar10);
    }
    else {
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar7 + 0x38d480) < 1) goto LAB_00d688c8;
      FUN_02bcc824(plVar5,puVar8,uVar9,uVar10);
    }
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar7 + 0x38d480) + -1;
    *(int *)(lVar7 + 0x38d480) = iVar2;
    if (iVar2 != 0) goto LAB_00d687e4;
    FUN_02bcc320();
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar7 + 0x38d484) = 0;
    plVar5 = (long *)param_1[0xb7];
  }
  if (plVar5 != (long *)0x0) {
    lVar7 = plVar5[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
      plVar5 = (long *)param_1[0xb6];
      goto joined_r0x00d6880c;
    }
  }
  plVar5 = (long *)param_1[0xb6];
joined_r0x00d6880c:
  if (plVar5 != (long *)0x0) {
    lVar7 = plVar5[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  FUN_00d415d4(param_1);
  return;
}


