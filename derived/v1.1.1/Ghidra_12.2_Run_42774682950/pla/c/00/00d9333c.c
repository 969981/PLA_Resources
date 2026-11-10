/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d9333c; name: FUN_00d9333c
 */


void FUN_00d9333c(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  
  if ((ulong)param_1[1] < (ulong)param_1[2]) {
    FUN_00d9361c(param_1 + 3,param_1[1],param_2);
    param_1[1] = param_1[1] + 0x80;
    return;
  }
  plVar5 = param_1 + 3;
  lVar1 = FUN_00d93730(param_1,(param_1[1] - *param_1 >> 7) + 1);
  lVar8 = *param_1;
  lVar9 = param_1[1];
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (**(code **)(*(long *)*plVar5 + 0x10))((long *)*plVar5,lVar1 << 7,0x10);
    if (lVar2 == 0) {
      (**(code **)(*(long *)*plVar5 + 0xb8))();
    }
  }
  lVar9 = lVar2 + (lVar9 - lVar8 >> 7) * 0x80;
  FUN_00d9361c(plVar5,lVar9,param_2);
  puVar7 = (undefined8 *)*param_1;
  puVar10 = (undefined8 *)param_1[1];
  lVar8 = lVar9 + 0x80;
  if (puVar10 == puVar7) {
    puVar10 = puVar7;
  }
  else {
    lVar9 = lVar9 + -0x80;
    FUN_00d9361c(plVar5,lVar9,puVar10 + -0x10);
    if (puVar10 + -0x10 != puVar7) {
      do {
        lVar9 = lVar9 + -0x80;
        FUN_00d9361c(plVar5,lVar9,puVar10 + -0x20);
        puVar10 = puVar10 + -0x10;
      } while (puVar7 + 0x10 != puVar10);
    }
    puVar7 = (undefined8 *)*param_1;
    puVar10 = (undefined8 *)param_1[1];
  }
  *param_1 = lVar9;
  param_1[1] = lVar8;
  lVar8 = param_1[2];
  param_1[2] = lVar2 + lVar1 * 0x80;
  if (puVar10 != puVar7) {
    pcVar4 = (code *)puVar10[-0xf];
    puVar6 = puVar10 + -0x10;
    if (pcVar4 != (code *)0x0) {
      puVar10[-0xe] = 0;
      puVar10[-0xd] = 0;
      *puVar6 = 0;
      puVar10[-0xf] = 0;
      (*pcVar4)(puVar10 + -0xc);
    }
    while (puVar10 = puVar6, puVar10 != puVar7) {
      pcVar4 = (code *)puVar10[-0xf];
      puVar6 = puVar10 + -0x10;
      if (pcVar4 != (code *)0x0) {
        puVar10[-0xe] = 0;
        puVar10[-0xd] = 0;
        puVar10[-0x10] = 0;
        puVar10[-0xf] = 0;
        (*pcVar4)(puVar10 + -0xc);
      }
    }
  }
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
  plVar5 = (long *)*plVar5;
  uVar3 = (**(code **)(*plVar5 + 0xc0))(plVar5);
  if ((uVar3 & 1) != 0) {
    lVar9 = tpidr_el0;
    if (*(char *)(lVar9 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar9 + 0x38d488) = 1;
      *(undefined8 *)(lVar9 + 0x38d478) = 0;
      *(undefined8 *)(lVar9 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar9 + 0x38d480)) {
      FUN_02bcc824(plVar5,puVar7,lVar8 - (long)puVar7,0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00d93580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))(plVar5,puVar7,lVar8 - (long)puVar7,0x10);
  return;
}


