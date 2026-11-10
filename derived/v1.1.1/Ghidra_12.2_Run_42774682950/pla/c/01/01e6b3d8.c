/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e6b3d8; name: FUN_01e6b3d8
 */


void FUN_01e6b3d8(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  if (param_2 == (long *)0x0) {
    return;
  }
  lVar2 = tpidr_el0;
LAB_01e6b418:
  do {
    plVar5 = (long *)*param_2;
    if ((long *)param_2[0x25] != (long *)0x0) {
      (**(code **)(*(long *)param_2[0x25] + 0x20))();
    }
    lVar6 = param_2[0x1b];
    if (lVar6 == 0) {
LAB_01e6b4ac:
      plVar4 = (long *)param_2[0x1a];
    }
    else {
      lVar1 = param_2[0x1d];
      plVar4 = (long *)param_2[0x1e];
      param_2[0x1c] = lVar6;
      uVar3 = (**(code **)(*plVar4 + 0xc0))(plVar4);
      if ((uVar3 & 1) == 0) {
LAB_01e6b490:
        (**(code **)(*plVar4 + 0x18))(plVar4,lVar6,lVar1 - lVar6,4);
        goto LAB_01e6b4ac;
      }
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_01e6b490;
      FUN_02bcc824(plVar4,lVar6,lVar1 - lVar6,4);
      plVar4 = (long *)param_2[0x1a];
    }
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))();
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
    plVar4 = *(long **)(param_1 + 0x38);
    uVar3 = (**(code **)(*plVar4 + 0xc0))(plVar4);
    if ((uVar3 & 1) == 0) {
LAB_01e6b574:
      (**(code **)(*plVar4 + 0x18))(plVar4,param_2,0x138,8);
      param_2 = plVar5;
      if (plVar5 == (long *)0x0) {
        return;
      }
      goto LAB_01e6b418;
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_01e6b574;
    FUN_02bcc824(plVar4,param_2,0x138,8);
    param_2 = plVar5;
    if (plVar5 == (long *)0x0) {
      return;
    }
  } while( true );
}


