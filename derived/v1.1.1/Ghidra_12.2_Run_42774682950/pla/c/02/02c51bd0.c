/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c51bd0; name: FUN_02c51bd0
 */


void FUN_02c51bd0(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined1 auStack_58 [24];
  
  plVar5 = DAT_043f2378;
  DAT_043f2378 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  puVar10 = DAT_043f2380;
  DAT_043f2380 = (undefined8 *)0x0;
  if (puVar10 == (undefined8 *)0x0) goto LAB_02c51d40;
  FUN_02bcbe58(auStack_58,0);
  (**(code **)*puVar10)(puVar10);
  uVar7 = DAT_043f2398;
  uVar6 = DAT_043f2390;
  plVar5 = DAT_043f2388;
  uVar8 = (**(code **)(*DAT_043f2388 + 0xc0))(DAT_043f2388);
  lVar11 = tpidr_el0;
  if ((uVar8 & 1) == 0) {
LAB_02c51ca4:
    (**(code **)(*plVar5 + 0x18))(plVar5,puVar10,uVar6,uVar7);
  }
  else {
    if (*(char *)(lVar11 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar11 + 0x38d488) = 1;
      *(undefined8 *)(lVar11 + 0x38d478) = 0;
      *(undefined8 *)(lVar11 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_02c51ca4;
    FUN_02bcc824(plVar5,puVar10,uVar6,uVar7);
  }
  if (*(char *)(lVar11 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar11 + 0x38d488) = 1;
    *(undefined8 *)(lVar11 + 0x38d478) = 0;
    *(undefined8 *)(lVar11 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar4 = *(int *)(lVar11 + 0x38d480) + -1;
  *(int *)(lVar11 + 0x38d480) = iVar4;
  if (iVar4 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar11 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar11 + 0x38d488) = 1;
      *(undefined8 *)(lVar11 + 0x38d478) = 0;
      *(undefined8 *)(lVar11 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar11 + 0x38d484) = 0;
  }
LAB_02c51d40:
  lVar11 = 0x38a;
  puVar10 = &DAT_043f9508;
  do {
    lVar9 = puVar10[-1];
    puVar10[-1] = 0;
    if (lVar9 != 0) {
      FUN_02c54044(puVar10);
    }
    lVar11 = lVar11 + -1;
    puVar10 = puVar10 + 4;
  } while (lVar11 != 0);
  FUN_00937d80(&PTR_PTR_0428ac28);
  FUN_00937d80(&PTR_PTR_0428ab08);
  FUN_00937d80(&PTR_PTR_0428ab38);
  FUN_00937d80(&PTR_PTR_0428ab68);
  FUN_00937d80(&PTR_PTR_0428ab98);
  FUN_00937d80(&PTR_PTR_0428abc8);
  FUN_00937d80(&PTR_PTR_0428abf8);
  lVar11 = 0x38a;
  puVar10 = &DAT_04400668;
  do {
    lVar9 = puVar10[-1];
    puVar10[-1] = 0;
    if (lVar9 != 0) {
      FUN_02c56914(puVar10);
    }
    lVar11 = lVar11 + -1;
    puVar10 = puVar10 + 4;
  } while (lVar11 != 0);
  FUN_00937d80(&PTR_PTR_0428acd8);
  lVar11 = 0x38a;
  puVar10 = &DAT_043f23a8;
  do {
    lVar9 = puVar10[-1];
    puVar10[-1] = 0;
    if (lVar9 != 0) {
      FUN_02c53180(puVar10);
    }
    lVar11 = lVar11 + -1;
    puVar10 = puVar10 + 4;
  } while (lVar11 != 0);
  FUN_00937d80(&PTR_PTR_0428aad8);
  return;
}


