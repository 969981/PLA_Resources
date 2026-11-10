/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b2674c; name: FUN_00b2674c
 */


void FUN_00b2674c(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  
  if (param_2 != (long *)0x0) {
    lVar1 = tpidr_el0;
    do {
      while( true ) {
        plVar4 = (long *)*param_2;
        if ((long *)param_2[0x22] != (long *)0x0) {
          (**(code **)(*(long *)param_2[0x22] + 0x20))();
        }
        if ((long *)param_2[0x1e] != (long *)0x0) {
          (**(code **)(*(long *)param_2[0x1e] + 0x20))();
        }
        if ((long *)param_2[0x1a] != (long *)0x0) {
          (**(code **)(*(long *)param_2[0x1a] + 0x20))();
        }
        if ((long *)param_2[0x16] != (long *)0x0) {
          (**(code **)(*(long *)param_2[0x16] + 0x20))();
        }
        if ((long *)param_2[0x12] != (long *)0x0) {
          (**(code **)(*(long *)param_2[0x12] + 0x20))();
        }
        if ((long *)param_2[0xe] != (long *)0x0) {
          (**(code **)(*(long *)param_2[0xe] + 0x20))();
        }
        if ((long *)param_2[10] != (long *)0x0) {
          (**(code **)(*(long *)param_2[10] + 0x20))();
        }
        if ((long *)param_2[6] != (long *)0x0) {
          (**(code **)(*(long *)param_2[6] + 0x20))();
        }
        plVar3 = *(long **)(param_1 + 0x38);
        uVar2 = (**(code **)(*plVar3 + 0xc0))(plVar3);
        if ((uVar2 & 1) != 0) break;
LAB_00b26890:
        (**(code **)(*plVar3 + 0x18))(plVar3,param_2,0x120,8);
        param_2 = plVar4;
        if (plVar4 == (long *)0x0) {
          return;
        }
      }
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_00b26890;
      FUN_02bcc824(plVar3,param_2,0x120,8);
      param_2 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
  return;
}


