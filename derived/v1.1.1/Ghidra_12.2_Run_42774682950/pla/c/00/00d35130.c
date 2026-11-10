/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d35130; name: FUN_00d35130
 */


void FUN_00d35130(undefined8 *param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = param_1[5];
  if (lVar5 != 0) {
    lVar4 = param_1[4] + 0xc0;
    do {
      pcVar2 = *(code **)(lVar4 + -0x18);
      if (pcVar2 != (code *)0x0) {
        *(undefined8 *)(lVar4 + -0x10) = 0;
        *(undefined8 *)(lVar4 + -8) = 0;
        *(undefined8 *)(lVar4 + -0x20) = 0;
        *(undefined8 *)(lVar4 + -0x18) = 0;
        (*pcVar2)(lVar4);
      }
      pcVar2 = *(code **)(lVar4 + -0x98);
      if (pcVar2 != (code *)0x0) {
        *(undefined8 *)(lVar4 + -0x90) = 0;
        *(undefined8 *)(lVar4 + -0x88) = 0;
        *(undefined8 *)(lVar4 + -0xa0) = 0;
        *(undefined8 *)(lVar4 + -0x98) = 0;
        (*pcVar2)(lVar4 + -0x80);
      }
      lVar5 = lVar5 + -1;
      if (*(long **)(lVar4 + -0xa8) != (long *)0x0) {
        (**(code **)(**(long **)(lVar4 + -0xa8) + 0x20))();
      }
      lVar4 = lVar4 + 0x120;
    } while (lVar5 != 0);
  }
  if (param_1[6] == 0) {
    return;
  }
  plVar6 = (long *)*param_1;
  uVar3 = param_1[4];
  lVar5 = param_1[6] * 0x120;
  uVar1 = (**(code **)(*plVar6 + 0xc0))(plVar6);
  if ((uVar1 & 1) != 0) {
    lVar4 = tpidr_el0;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar4 + 0x38d480)) {
      FUN_02bcc824(plVar6,uVar3,lVar5,0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00d351e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))(plVar6,uVar3,lVar5,0x10);
  return;
}


