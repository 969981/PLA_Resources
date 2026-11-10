/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0292adc8; name: FUN_0292adc8
 */


void FUN_0292adc8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  uVar3 = DAT_03a7e9cc;
  uVar2 = DAT_03a7e9c4;
  uVar1 = CONCAT26(DAT_03a7e9d4._6_2_,(undefined6)DAT_03a7e9d4);
  *(ulong *)((long)param_1 + 0x16) = CONCAT62((undefined6)DAT_03a7e9dc,DAT_03a7e9d4._6_2_);
  param_1[1] = uVar3;
  param_1[2] = uVar1;
  *param_1 = uVar2;
  if (param_1[0xf] != 0) {
    if ((long *)param_1[10] != (long *)0x0) {
      lVar6 = tpidr_el0;
      plVar8 = (long *)param_1[10];
      do {
        while( true ) {
          plVar9 = (long *)param_1[0xb];
          plVar10 = (long *)*plVar8;
          uVar4 = (**(code **)(*plVar9 + 0xc0))(plVar9);
          if ((uVar4 & 1) != 0) break;
LAB_0292ae94:
          (**(code **)(*plVar9 + 0x18))(plVar9,plVar8,0x38,8);
          plVar8 = plVar10;
          if (plVar10 == (long *)0x0) goto LAB_0292af1c;
        }
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_0292ae94;
        FUN_02bcc824(plVar9,plVar8,0x38,8);
        plVar8 = plVar10;
      } while (plVar10 != (long *)0x0);
    }
LAB_0292af1c:
    uVar4 = param_1[5];
    param_1[10] = 0;
    if (uVar4 != 0) {
      uVar5 = uVar4 & 3;
      if (uVar4 - 1 < 3) {
        lVar6 = 0;
      }
      else {
        lVar6 = 0;
        do {
          lVar7 = lVar6 * 8;
          lVar6 = lVar6 + 4;
          *(undefined8 *)(param_1[4] + lVar7) = 0;
          *(undefined8 *)(param_1[4] + lVar7 + 8) = 0;
          *(undefined8 *)(param_1[4] + lVar7 + 0x10) = 0;
          *(undefined8 *)(param_1[4] + lVar7 + 0x18) = 0;
        } while (uVar4 - uVar5 != lVar6);
      }
      if (uVar5 != 0) {
        lVar6 = lVar6 << 3;
        do {
          *(undefined8 *)(param_1[4] + lVar6) = 0;
          uVar5 = uVar5 - 1;
          lVar6 = lVar6 + 8;
        } while (uVar5 != 0);
      }
    }
    param_1[0xf] = 0;
  }
  if (param_1[0x1c] != 0) {
    if ((long *)param_1[0x17] != (long *)0x0) {
      lVar6 = tpidr_el0;
      plVar8 = (long *)param_1[0x17];
      do {
        while( true ) {
          plVar9 = (long *)param_1[0x18];
          plVar10 = (long *)*plVar8;
          uVar4 = (**(code **)(*plVar9 + 0xc0))(plVar9);
          if ((uVar4 & 1) != 0) break;
LAB_0292b034:
          (**(code **)(*plVar9 + 0x18))(plVar9,plVar8,0x38,8);
          plVar8 = plVar10;
          if (plVar10 == (long *)0x0) goto LAB_0292b0bc;
        }
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_0292b034;
        FUN_02bcc824(plVar9,plVar8,0x38,8);
        plVar8 = plVar10;
      } while (plVar10 != (long *)0x0);
    }
LAB_0292b0bc:
    uVar4 = param_1[0x12];
    param_1[0x17] = 0;
    if (uVar4 != 0) {
      uVar5 = uVar4 & 3;
      if (uVar4 - 1 < 3) {
        lVar6 = 0;
      }
      else {
        lVar6 = 0;
        do {
          lVar7 = lVar6 * 8;
          lVar6 = lVar6 + 4;
          *(undefined8 *)(param_1[0x11] + lVar7) = 0;
          *(undefined8 *)(param_1[0x11] + lVar7 + 8) = 0;
          *(undefined8 *)(param_1[0x11] + lVar7 + 0x10) = 0;
          *(undefined8 *)(param_1[0x11] + lVar7 + 0x18) = 0;
        } while (uVar4 - uVar5 != lVar6);
      }
      if (uVar5 != 0) {
        lVar6 = lVar6 << 3;
        do {
          *(undefined8 *)(param_1[0x11] + lVar6) = 0;
          uVar5 = uVar5 - 1;
          lVar6 = lVar6 + 8;
        } while (uVar5 != 0);
      }
    }
    param_1[0x1c] = 0;
  }
  return;
}


