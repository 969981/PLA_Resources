/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ab9180; name: FUN_01ab9180
 */


void FUN_01ab9180(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  if (param_1[2] != 0) {
    lVar1 = *param_1;
    plVar3 = (long *)param_1[1];
    *(undefined8 *)(*plVar3 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = *plVar3;
    param_1[2] = 0;
    if (plVar3 != param_1) {
      lVar1 = tpidr_el0;
      do {
        plVar5 = (long *)plVar3[1];
        if ((long *)plVar3[3] != (long *)0x0) {
          (**(code **)(*(long *)plVar3[3] + 0x20))();
        }
        if ((long *)plVar3[2] != (long *)0x0) {
          (**(code **)(*(long *)plVar3[2] + 0x20))();
        }
        plVar4 = (long *)param_1[3];
        uVar2 = (**(code **)(*plVar4 + 0xc0))(plVar4);
        if ((uVar2 & 1) == 0) {
LAB_01ab9274:
          (**(code **)(*plVar4 + 0x18))(plVar4,plVar3,0x50,0x10);
        }
        else {
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_01ab9274;
          FUN_02bcc824(plVar4,plVar3,0x50,0x10);
        }
        plVar3 = plVar5;
      } while (plVar5 != param_1);
    }
  }
  return;
}


