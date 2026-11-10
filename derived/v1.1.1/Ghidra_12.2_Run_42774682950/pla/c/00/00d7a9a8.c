/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d7a9a8; name: FUN_00d7a9a8
 */


void FUN_00d7a9a8(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar4 = (long *)param_1[0x67];
  *param_1 = &PTR_FUN_041ec308;
  param_1[9] = &PTR_LAB_041ec340;
  lVar1 = tpidr_el0;
  while (plVar6 = plVar4, plVar4 != (long *)0x0) {
    while( true ) {
      plVar4 = (long *)*plVar6;
      if ((long *)plVar6[5] != (long *)0x0) {
        (**(code **)(*(long *)plVar6[5] + 0x20))();
      }
      plVar5 = (long *)param_1[0x68];
      uVar2 = (**(code **)(*plVar5 + 0xc0))(plVar5);
      if ((uVar2 & 1) == 0) break;
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar1 + 0x38d480) < 1) break;
      FUN_02bcc824(plVar5,plVar6,0x38,8);
      plVar6 = plVar4;
      if (plVar4 == (long *)0x0) goto LAB_00d7aafc;
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,plVar6,0x38,8);
  }
LAB_00d7aafc:
  lVar3 = param_1[0x61];
  param_1[0x61] = 0;
  if (lVar3 != 0) {
    FUN_00d7adcc(param_1 + 0x62);
  }
  FUN_00d7aedc(param_1 + 0x54);
  FUN_00d7b184(param_1 + 0x47);
  FUN_00d7b184(param_1 + 0x3a);
  FUN_00d7b440(param_1 + 0x2d);
  plVar4 = (long *)param_1[0x26];
  while (plVar6 = plVar4, plVar4 != (long *)0x0) {
    while( true ) {
      plVar4 = (long *)*plVar6;
      if ((long *)plVar6[5] != (long *)0x0) {
        (**(code **)(*(long *)plVar6[5] + 0x20))();
      }
      plVar5 = (long *)param_1[0x27];
      uVar2 = (**(code **)(*plVar5 + 0xc0))(plVar5);
      if ((uVar2 & 1) == 0) break;
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar1 + 0x38d480) < 1) break;
      FUN_02bcc824(plVar5,plVar6,0x38,8);
      plVar6 = plVar4;
      if (plVar4 == (long *)0x0) goto LAB_00d7ac4c;
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,plVar6,0x38,8);
  }
LAB_00d7ac4c:
  lVar3 = param_1[0x20];
  param_1[0x20] = 0;
  if (lVar3 != 0) {
    FUN_00d7b6e8(param_1 + 0x21);
  }
  plVar4 = (long *)param_1[0x19];
  do {
    while( true ) {
      if (plVar4 == (long *)0x0) {
        FUN_00d7b7f8(param_1 + 0x13);
        if ((long *)param_1[0x12] != (long *)0x0) {
          (**(code **)(*(long *)param_1[0x12] + 0x20))();
        }
        FUN_00936104(param_1 + 0xb);
        return;
      }
      plVar6 = (long *)*plVar4;
      if ((long *)plVar4[5] != (long *)0x0) {
        (**(code **)(*(long *)plVar4[5] + 0x20))();
      }
      plVar5 = (long *)param_1[0x1a];
      uVar2 = (**(code **)(*plVar5 + 0xc0))(plVar5);
      if ((uVar2 & 1) != 0) break;
LAB_00d7acf4:
      (**(code **)(*plVar5 + 0x18))(plVar5,plVar4,0x38,8);
      plVar4 = plVar6;
    }
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_00d7acf4;
    FUN_02bcc824(plVar5,plVar4,0x38,8);
    plVar4 = plVar6;
  } while( true );
}


