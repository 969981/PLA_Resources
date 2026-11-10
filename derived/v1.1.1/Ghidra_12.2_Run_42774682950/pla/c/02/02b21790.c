/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b21790; name: FUN_02b21790
 */


void FUN_02b21790(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  lVar3 = *param_1;
  lVar4 = param_1[1];
  while (lVar4 != lVar3) {
    lVar4 = lVar4 + -0x1b0;
    FUN_02b22e7c(lVar4);
  }
  param_1[1] = lVar3;
  param_1[8] = 0;
  if (param_1[0x19] != 0) {
    if ((long *)param_1[0x14] != (long *)0x0) {
      lVar3 = tpidr_el0;
      plVar5 = (long *)param_1[0x14];
      do {
        while( true ) {
          plVar7 = (long *)*plVar5;
          if ((long *)plVar5[5] != (long *)0x0) {
            (**(code **)(*(long *)plVar5[5] + 0x20))();
          }
          plVar6 = (long *)param_1[0x15];
          uVar1 = (**(code **)(*plVar6 + 0xc0))(plVar6);
          if ((uVar1 & 1) != 0) break;
LAB_02b21878:
          (**(code **)(*plVar6 + 0x18))(plVar6,plVar5,0x38,8);
          plVar5 = plVar7;
          if (plVar7 == (long *)0x0) goto LAB_02b21900;
        }
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_02b21878;
        FUN_02bcc824(plVar6,plVar5,0x38,8);
        plVar5 = plVar7;
      } while (plVar7 != (long *)0x0);
    }
LAB_02b21900:
    uVar1 = param_1[0xf];
    param_1[0x14] = 0;
    if (uVar1 != 0) {
      uVar2 = uVar1 & 3;
      if (uVar1 - 1 < 3) {
        lVar3 = 0;
      }
      else {
        lVar3 = 0;
        do {
          lVar4 = lVar3 * 8;
          lVar3 = lVar3 + 4;
          *(undefined8 *)(param_1[0xe] + lVar4) = 0;
          *(undefined8 *)(param_1[0xe] + lVar4 + 8) = 0;
          *(undefined8 *)(param_1[0xe] + lVar4 + 0x10) = 0;
          *(undefined8 *)(param_1[0xe] + lVar4 + 0x18) = 0;
        } while (uVar1 - uVar2 != lVar3);
      }
      if (uVar2 != 0) {
        lVar3 = lVar3 << 3;
        do {
          *(undefined8 *)(param_1[0xe] + lVar3) = 0;
          uVar2 = uVar2 - 1;
          lVar3 = lVar3 + 8;
        } while (uVar2 != 0);
      }
    }
    param_1[0x19] = 0;
  }
  return;
}


