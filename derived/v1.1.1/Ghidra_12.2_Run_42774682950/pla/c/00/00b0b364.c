/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b0b364; name: FUN_00b0b364
 */


void FUN_00b0b364(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  if (param_1 == param_2) {
    return;
  }
  plVar6 = (long *)param_1[3];
  if (plVar6 == (long *)param_2[3]) goto LAB_00b0b4f8;
  plVar1 = (long *)*param_1;
  plVar7 = (long *)param_1[1];
  if (plVar7 == plVar1) {
    plVar7 = plVar1;
  }
  else {
    if ((long *)plVar7[-1] != (long *)0x0) {
      (**(code **)(*(long *)plVar7[-1] + 0x20))();
    }
    if ((long *)plVar7[-5] != (long *)0x0) {
      (**(code **)(*(long *)plVar7[-5] + 0x20))();
    }
    if ((long *)plVar7[-10] != (long *)0x0) {
      (**(code **)(*(long *)plVar7[-10] + 0x20))();
    }
    plVar6 = (long *)plVar7[-0xe];
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))();
    }
    if (plVar7 + -0xe != plVar1) {
      if ((long *)plVar7[-0xf] != (long *)0x0) {
        (**(code **)(*(long *)plVar7[-0xf] + 0x20))();
      }
      if ((long *)plVar7[-0x13] != (long *)0x0) {
        (**(code **)(*(long *)plVar7[-0x13] + 0x20))();
      }
      if ((long *)plVar7[-0x18] != (long *)0x0) {
        (**(code **)(*(long *)plVar7[-0x18] + 0x20))();
      }
      plVar6 = (long *)plVar7[-0x1c];
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))();
      }
      if (plVar7 + -0x1c != plVar1) {
        do {
          if ((long *)plVar7[-0x1d] != (long *)0x0) {
            (**(code **)(*(long *)plVar7[-0x1d] + 0x20))();
          }
          if ((long *)plVar7[-0x21] != (long *)0x0) {
            (**(code **)(*(long *)plVar7[-0x21] + 0x20))();
          }
          if ((long *)plVar7[-0x26] != (long *)0x0) {
            (**(code **)(*(long *)plVar7[-0x26] + 0x20))();
          }
          if ((long *)plVar7[-0x2a] != (long *)0x0) {
            (**(code **)(*(long *)plVar7[-0x2a] + 0x20))();
          }
          plVar7 = plVar7 + -0xe;
        } while (plVar1 + 0x1c != plVar7);
      }
    }
    plVar6 = (long *)param_1[3];
    plVar7 = (long *)*param_1;
  }
  lVar4 = param_1[2];
  param_1[1] = (long)plVar1;
  uVar3 = (**(code **)(*plVar6 + 0xc0))(plVar6);
  if ((uVar3 & 1) == 0) {
LAB_00b0b4d4:
    (**(code **)(*plVar6 + 0x18))(plVar6,plVar7,lVar4 - (long)plVar7,8);
  }
  else {
    lVar2 = tpidr_el0;
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00b0b4d4;
    FUN_02bcc824(plVar6,plVar7,lVar4 - (long)plVar7,8);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
LAB_00b0b4f8:
  lVar4 = param_2[3];
  lVar2 = param_2[4];
  lVar5 = param_2[5];
  *(int *)(param_1 + 6) = (int)param_2[6];
  param_1[4] = lVar2;
  param_1[5] = lVar5;
  param_1[3] = lVar4;
  FUN_00b0f558(param_1,*param_2,param_2[1]);
  return;
}


