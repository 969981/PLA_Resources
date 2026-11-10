/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a44f44; name: FUN_02a44f44
 */


void FUN_02a44f44(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  
  *param_1 = &PTR_FUN_0427d370;
  param_1[9] = &PTR_LAB_0427d3a0;
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x1a4));
  lVar6 = param_1[0x2c];
  lVar3 = tpidr_el0;
  if (lVar6 != 0) {
    lVar5 = param_1[0x2e];
    plVar8 = (long *)param_1[0x2f];
    param_1[0x2d] = lVar6;
    uVar4 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar4 & 1) != 0) {
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar3 + 0x38d480)) {
        FUN_02bcc824(plVar8,lVar6,lVar5 - lVar6,8);
        goto LAB_02a45008;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar6,lVar5 - lVar6,8);
  }
LAB_02a45008:
  FUN_02a459e4(param_1 + 0x1d);
  puVar9 = (undefined8 *)param_1[0xe];
  puVar2 = (undefined8 *)param_1[0xf];
  lVar6 = (long)puVar2 - (long)puVar9;
  if (lVar6 != 0) {
    uVar4 = param_1[0x15];
    plVar8 = (long *)((long)puVar9 + (uVar4 >> 4 & 0xffffffffffffff8));
    lVar5 = *plVar8 + (uVar4 & 0x7f) * 0x20;
    lVar1 = *(long *)((long)puVar9 + (param_1[0x16] + uVar4 >> 4 & 0xffffffffffffff8)) +
            (param_1[0x16] + uVar4 & 0x7f) * 0x20;
    while (lVar1 != lVar5) {
      while (lVar5 = lVar5 + 0x20, lVar5 - *plVar8 == 0x1000) {
        plVar8 = plVar8 + 1;
        lVar5 = *plVar8;
        if (lVar1 == lVar5) goto LAB_02a45088;
      }
    }
  }
LAB_02a45088:
  param_1[0x16] = 0;
  while (uVar4 = lVar6 >> 3, 2 < uVar4) {
    plVar8 = (long *)param_1[0x17];
    uVar7 = *puVar9;
    uVar4 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar4 & 1) == 0) {
LAB_02a4510c:
      (**(code **)(*plVar8 + 0x18))(plVar8,uVar7,0x1000,8);
    }
    else {
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_02a4510c;
      FUN_02bcc824(plVar8,uVar7,0x1000,8);
    }
    puVar2 = (undefined8 *)param_1[0xf];
    puVar9 = (undefined8 *)(param_1[0xe] + 8);
    param_1[0xe] = puVar9;
    lVar6 = (long)puVar2 - (long)puVar9;
  }
  if (uVar4 == 1) {
    uVar7 = 0x40;
LAB_02a451c0:
    param_1[0x15] = uVar7;
  }
  else if (uVar4 == 2) {
    uVar7 = 0x80;
    goto LAB_02a451c0;
  }
  if (puVar9 != puVar2) {
    do {
      plVar8 = (long *)param_1[0x17];
      uVar7 = *puVar9;
      uVar4 = (**(code **)(*plVar8 + 0xc0))(plVar8);
      if ((uVar4 & 1) == 0) {
LAB_02a45240:
        (**(code **)(*plVar8 + 0x18))(plVar8,uVar7,0x1000,8);
      }
      else {
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_02a45240;
        FUN_02bcc824(plVar8,uVar7,0x1000,8);
      }
      puVar9 = puVar9 + 1;
    } while (puVar2 != puVar9);
    lVar6 = param_1[0xf] - param_1[0xe];
    if (lVar6 != 0) {
      param_1[0xf] = param_1[0xf] + (lVar6 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  lVar6 = param_1[0xd];
  if (lVar6 != 0) {
    lVar5 = param_1[0x10];
    plVar8 = (long *)param_1[0x11];
    uVar4 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar4 & 1) != 0) {
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar3 + 0x38d480)) {
        FUN_02bcc824(plVar8,lVar6,lVar5 - lVar6,8);
        goto LAB_02a45368;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar6,lVar5 - lVar6,8);
  }
LAB_02a45368:
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x54));
  return;
}


