/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01354890; name: FUN_01354890
 */


void FUN_01354890(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  
  plVar6 = (long *)*param_1;
  if (plVar6 == (long *)0x0) {
    return;
  }
  plVar5 = (long *)param_1[1];
  if (plVar5 == plVar6) {
    plVar5 = plVar6;
  }
  else {
    plVar3 = (long *)plVar5[-1];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))();
    }
    if (plVar5 + -1 != plVar6) {
      plVar3 = (long *)plVar5[-2];
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x20))();
      }
      if (plVar5 + -2 != plVar6) {
        plVar3 = (long *)plVar5[-3];
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x20))();
        }
        if (plVar5 + -3 != plVar6) {
          plVar3 = (long *)plVar5[-4];
          while( true ) {
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x20))();
            }
            if (plVar6 + 3 == plVar5 + -1) break;
            plVar3 = (long *)plVar5[-5];
            plVar5 = plVar5 + -1;
          }
        }
      }
    }
    plVar5 = (long *)*param_1;
  }
  lVar1 = param_1[2];
  plVar3 = (long *)param_1[3];
  param_1[1] = plVar6;
  uVar4 = (**(code **)(*plVar3 + 0xc0))(plVar3);
  if ((uVar4 & 1) != 0) {
    lVar2 = tpidr_el0;
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar2 + 0x38d480)) {
      FUN_02bcc824(plVar3,plVar5,lVar1 - (long)plVar5,8);
      goto LAB_013549b4;
    }
  }
  (**(code **)(*plVar3 + 0x18))(plVar3,plVar5,lVar1 - (long)plVar5,8);
LAB_013549b4:
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}


