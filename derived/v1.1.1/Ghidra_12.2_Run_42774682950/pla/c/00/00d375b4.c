/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d375b4; name: FUN_00d375b4
 */


void FUN_00d375b4(undefined8 *param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                 undefined8 param_6)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  lVar8 = param_1[4];
  lVar3 = param_2;
  if (lVar8 != param_4 && lVar8 != 0) {
    lVar5 = lVar8;
    do {
      FUN_00d34f80(param_1,lVar3,lVar5);
      lVar5 = lVar5 + 0x120;
      lVar3 = lVar3 + 0x120;
    } while (param_4 != lVar5);
  }
  FUN_00d373e0(param_1,lVar3,param_6);
  lVar3 = lVar3 + param_5 * 0x120;
  if (lVar8 != 0) {
    lVar5 = param_1[5];
    lVar6 = lVar8 + lVar5 * 0x120;
    if (lVar6 != param_4) {
      do {
        FUN_00d34f80(param_1,lVar3,param_4);
        param_4 = param_4 + 0x120;
        lVar3 = lVar3 + 0x120;
      } while (lVar6 != param_4);
      lVar5 = param_1[5];
    }
    if (lVar5 != 0) {
      lVar8 = lVar8 + 0xc0;
      do {
        pcVar2 = *(code **)(lVar8 + -0x18);
        if (pcVar2 != (code *)0x0) {
          *(undefined8 *)(lVar8 + -0x10) = 0;
          *(undefined8 *)(lVar8 + -8) = 0;
          *(undefined8 *)(lVar8 + -0x20) = 0;
          *(undefined8 *)(lVar8 + -0x18) = 0;
          (*pcVar2)(lVar8);
        }
        pcVar2 = *(code **)(lVar8 + -0x98);
        if (pcVar2 != (code *)0x0) {
          *(undefined8 *)(lVar8 + -0x90) = 0;
          *(undefined8 *)(lVar8 + -0x88) = 0;
          *(undefined8 *)(lVar8 + -0xa0) = 0;
          *(undefined8 *)(lVar8 + -0x98) = 0;
          (*pcVar2)(lVar8 + -0x80);
        }
        lVar5 = lVar5 + -1;
        if (*(long **)(lVar8 + -0xa8) != (long *)0x0) {
          (**(code **)(**(long **)(lVar8 + -0xa8) + 0x20))();
        }
        lVar8 = lVar8 + 0x120;
      } while (lVar5 != 0);
    }
    lVar8 = param_1[6];
    plVar7 = (long *)*param_1;
    uVar4 = param_1[4];
    uVar1 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar1 & 1) != 0) {
      lVar5 = tpidr_el0;
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar7,uVar4,lVar8 * 0x120,0x10);
        goto LAB_00d37704;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,uVar4,lVar8 * 0x120,0x10);
  }
LAB_00d37704:
  param_1[6] = param_3;
  param_1[4] = param_2;
  param_1[5] = (lVar3 - param_2 >> 5) * -0x71c71c71c71c71c7;
  return;
}


