/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bcc320; name: FUN_02bcc320
 */


void FUN_02bcc320(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long local_70;
  long lStack_68;
  
  lVar1 = tpidr_el0;
  if (*(char *)(lVar1 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar1 + 0x38d488) = 1;
    *(undefined8 *)(lVar1 + 0x38d478) = 0;
    *(undefined8 *)(lVar1 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
  }
  lVar2 = *(long *)(lVar1 + 0x38d478);
  if (lVar2 != 0) {
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(long *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      lVar2 = *(long *)(lVar1 + 0x38d478);
    }
    lStack_68 = lVar1 + 0x80078;
    local_70 = lStack_68 + lVar2 * 0x20;
    FUN_02bccb60(&lStack_68,&local_70);
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    plVar3 = *(long **)(lVar1 + 0x80078);
    lVar2 = *(long *)(lVar1 + 0x38d478) * 0x20;
    if (lVar2 == 0) {
      lVar8 = 0;
      lVar4 = 0;
    }
    else {
      puVar6 = (undefined8 *)(lVar1 + 0x80078);
      lVar8 = 1;
      plVar5 = plVar3;
      lVar7 = 0;
      while( true ) {
        lVar2 = lVar2 + -0x20;
        (**(code **)(*plVar5 + 0xa8))(plVar5);
        lVar4 = lVar7;
        if ((long *)*puVar6 != plVar3) {
          lVar4 = lVar8 + -1;
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          (**(code **)(*plVar3 + 200))(plVar3,lVar1 + 0x80078 + lVar7 * 0x20,puVar6);
          plVar3 = (long *)*puVar6;
        }
        if (lVar2 == 0) break;
        puVar6 = puVar6 + 4;
        plVar5 = (long *)*puVar6;
        lVar8 = lVar8 + 1;
        lVar7 = lVar4;
      }
    }
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    (**(code **)(*plVar3 + 200))
              (plVar3,lVar1 + 0x80078 + lVar4 * 0x20,lVar1 + 0x80078 + lVar8 * 0x20);
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined8 *)(lVar1 + 0x38d478) = 0;
  }
  return;
}


