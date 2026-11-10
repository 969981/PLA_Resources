/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008ccf5c; name: FUN_008ccf5c
 */


void FUN_008ccf5c(byte *param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  plVar3 = DAT_043f1798;
  if (((param_1[0x2e8] & 1) == 0) || (lVar5 = *(long *)(param_1 + 0x2f8), lVar5 == 0)) {
LAB_008cd028:
    if ((param_1[0x2d0] & 1) == 0) goto LAB_008cd0e0;
LAB_008cd030:
    plVar3 = DAT_043f1798;
    lVar5 = *(long *)(param_1 + 0x2e0);
    if (lVar5 == 0) goto LAB_008cd0e0;
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar6 = plVar3;
    }
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) == 0) {
LAB_008cd0c4:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
      goto LAB_008cd0e0;
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008cd0c4;
    FUN_02bcc824(plVar6,lVar5,0,8);
    if ((param_1[0x2b8] & 1) != 0) goto LAB_008cd0e8;
LAB_008cd198:
    if ((param_1[0x2a0] & 1) == 0) goto LAB_008cd250;
LAB_008cd1a0:
    plVar3 = DAT_043f1798;
    lVar5 = *(long *)(param_1 + 0x2b0);
    if (lVar5 == 0) goto LAB_008cd250;
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar6 = plVar3;
    }
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) == 0) {
LAB_008cd234:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
      goto LAB_008cd250;
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008cd234;
    FUN_02bcc824(plVar6,lVar5,0,8);
    if ((param_1[0x288] & 1) != 0) goto LAB_008cd258;
LAB_008cd308:
    if ((param_1[0x270] & 1) == 0) goto LAB_008cd3c0;
LAB_008cd310:
    plVar3 = DAT_043f1798;
    lVar5 = *(long *)(param_1 + 0x280);
    if (lVar5 == 0) goto LAB_008cd3c0;
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar6 = plVar3;
    }
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) == 0) {
LAB_008cd3a4:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
      goto LAB_008cd3c0;
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008cd3a4;
    FUN_02bcc824(plVar6,lVar5,0,8);
    if ((param_1[600] & 1) != 0) goto LAB_008cd3c8;
LAB_008cd478:
    if ((param_1[0x240] & 1) == 0) goto LAB_008cd530;
LAB_008cd480:
    plVar3 = DAT_043f1798;
    lVar5 = *(long *)(param_1 + 0x250);
    if (lVar5 == 0) goto LAB_008cd530;
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar6 = plVar3;
    }
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) == 0) {
LAB_008cd514:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
      goto LAB_008cd530;
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008cd514;
    FUN_02bcc824(plVar6,lVar5,0,8);
    if ((param_1[0x228] & 1) != 0) goto LAB_008cd538;
LAB_008cd5e8:
    if ((param_1[0x210] & 1) == 0) goto LAB_008cd6a0;
LAB_008cd5f0:
    plVar3 = DAT_043f1798;
    lVar5 = *(long *)(param_1 + 0x220);
    if (lVar5 == 0) goto LAB_008cd6a0;
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar6 = plVar3;
    }
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) == 0) {
LAB_008cd684:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
      goto LAB_008cd6a0;
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008cd684;
    FUN_02bcc824(plVar6,lVar5,0,8);
    if ((param_1[0x1f8] & 1) != 0) goto LAB_008cd6a8;
LAB_008cd758:
    if ((param_1[0x1e0] & 1) == 0) goto LAB_008cd810;
LAB_008cd760:
    plVar3 = DAT_043f1798;
    lVar5 = *(long *)(param_1 + 0x1f0);
    if (lVar5 == 0) goto LAB_008cd810;
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar6 = plVar3;
    }
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) == 0) {
LAB_008cd7f4:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
      goto LAB_008cd810;
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008cd7f4;
    FUN_02bcc824(plVar6,lVar5,0,8);
    if ((param_1[0x1c8] & 1) != 0) goto LAB_008cd818;
LAB_008cd8c8:
    if ((param_1[0x1b0] & 1) == 0) goto LAB_008cd980;
LAB_008cd8d0:
    plVar3 = DAT_043f1798;
    lVar5 = *(long *)(param_1 + 0x1c0);
    if (lVar5 == 0) goto LAB_008cd980;
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar6 = plVar3;
    }
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) == 0) {
LAB_008cd964:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
      goto LAB_008cd980;
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008cd964;
    FUN_02bcc824(plVar6,lVar5,0,8);
    if ((param_1[0x198] & 1) != 0) goto LAB_008cd988;
LAB_008cda38:
    if ((param_1[0x180] & 1) == 0) goto LAB_008cdaf0;
LAB_008cda40:
    plVar3 = DAT_043f1798;
    lVar5 = *(long *)(param_1 + 400);
    if (lVar5 == 0) goto LAB_008cdaf0;
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar6 = plVar3;
    }
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) == 0) {
LAB_008cdad4:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
      goto LAB_008cdaf0;
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008cdad4;
    FUN_02bcc824(plVar6,lVar5,0,8);
    if ((param_1[0x168] & 1) != 0) goto LAB_008cdaf8;
LAB_008cdba8:
    if ((param_1[0x150] & 1) == 0) goto LAB_008cdc60;
LAB_008cdbb0:
    plVar3 = DAT_043f1798;
    lVar5 = *(long *)(param_1 + 0x160);
    if (lVar5 == 0) goto LAB_008cdc60;
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar6 = plVar3;
    }
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) == 0) {
LAB_008cdc44:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
      goto LAB_008cdc60;
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008cdc44;
    FUN_02bcc824(plVar6,lVar5,0,8);
    if ((param_1[0x138] & 1) != 0) goto LAB_008cdc68;
LAB_008cdd18:
    if ((param_1[0x120] & 1) == 0) goto LAB_008cddd0;
LAB_008cdd20:
    plVar3 = DAT_043f1798;
    lVar5 = *(long *)(param_1 + 0x130);
    if (lVar5 == 0) goto LAB_008cddd0;
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar6 = plVar3;
    }
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) == 0) {
LAB_008cddb4:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
      goto LAB_008cddd0;
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008cddb4;
    FUN_02bcc824(plVar6,lVar5,0,8);
    if ((param_1[0x108] & 1) != 0) goto LAB_008cddd8;
LAB_008cde88:
    if ((param_1[0xf0] & 1) == 0) goto LAB_008cdf40;
LAB_008cde90:
    plVar3 = DAT_043f1798;
    lVar5 = *(long *)(param_1 + 0x100);
    if (lVar5 == 0) goto LAB_008cdf40;
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar6 = plVar3;
    }
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) == 0) {
LAB_008cdf24:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
      goto LAB_008cdf40;
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008cdf24;
    FUN_02bcc824(plVar6,lVar5,0,8);
    if ((param_1[0xd8] & 1) != 0) goto LAB_008cdf48;
LAB_008cdff8:
    if ((param_1[0xc0] & 1) == 0) goto LAB_008ce0b0;
LAB_008ce000:
    plVar3 = DAT_043f1798;
    lVar5 = *(long *)(param_1 + 0xd0);
    if (lVar5 == 0) goto LAB_008ce0b0;
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar6 = plVar3;
    }
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) == 0) {
LAB_008ce094:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
      goto LAB_008ce0b0;
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008ce094;
    FUN_02bcc824(plVar6,lVar5,0,8);
    if ((param_1[0xa8] & 1) != 0) goto LAB_008ce0b8;
LAB_008ce168:
    if ((param_1[0x90] & 1) == 0) goto LAB_008ce220;
LAB_008ce170:
    plVar3 = DAT_043f1798;
    lVar5 = *(long *)(param_1 + 0xa0);
    if (lVar5 == 0) goto LAB_008ce220;
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar6 = plVar3;
    }
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) == 0) {
LAB_008ce204:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
      goto LAB_008ce220;
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008ce204;
    FUN_02bcc824(plVar6,lVar5,0,8);
    if ((param_1[0x78] & 1) != 0) goto LAB_008ce228;
LAB_008ce2d8:
    if ((param_1[0x60] & 1) == 0) goto LAB_008ce390;
LAB_008ce2e0:
    plVar3 = DAT_043f1798;
    lVar5 = *(long *)(param_1 + 0x70);
    if (lVar5 == 0) goto LAB_008ce390;
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar6 = plVar3;
    }
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) == 0) {
LAB_008ce374:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
      goto LAB_008ce390;
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008ce374;
    FUN_02bcc824(plVar6,lVar5,0,8);
    if ((param_1[0x48] & 1) != 0) goto LAB_008ce398;
LAB_008ce448:
    if ((param_1[0x30] & 1) == 0) goto LAB_008ce500;
LAB_008ce450:
    plVar3 = DAT_043f1798;
    lVar5 = *(long *)(param_1 + 0x40);
    if (lVar5 == 0) goto LAB_008ce500;
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar6 = plVar3;
    }
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) == 0) {
LAB_008ce4e4:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
      goto LAB_008ce500;
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008ce4e4;
    FUN_02bcc824(plVar6,lVar5,0,8);
    bVar1 = param_1[0x18];
    plVar3 = DAT_043f1798;
  }
  else {
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar6 = plVar3;
    }
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) == 0) {
LAB_008cd00c:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
      goto LAB_008cd028;
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008cd00c;
    FUN_02bcc824(plVar6,lVar5,0,8);
    if ((param_1[0x2d0] & 1) != 0) goto LAB_008cd030;
LAB_008cd0e0:
    if ((param_1[0x2b8] & 1) == 0) goto LAB_008cd198;
LAB_008cd0e8:
    plVar3 = DAT_043f1798;
    lVar5 = *(long *)(param_1 + 0x2c8);
    if (lVar5 == 0) goto LAB_008cd198;
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar6 = plVar3;
    }
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) == 0) {
LAB_008cd17c:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
      goto LAB_008cd198;
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008cd17c;
    FUN_02bcc824(plVar6,lVar5,0,8);
    if ((param_1[0x2a0] & 1) != 0) goto LAB_008cd1a0;
LAB_008cd250:
    if ((param_1[0x288] & 1) == 0) goto LAB_008cd308;
LAB_008cd258:
    plVar3 = DAT_043f1798;
    lVar5 = *(long *)(param_1 + 0x298);
    if (lVar5 == 0) goto LAB_008cd308;
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar6 = plVar3;
    }
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) == 0) {
LAB_008cd2ec:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
      goto LAB_008cd308;
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008cd2ec;
    FUN_02bcc824(plVar6,lVar5,0,8);
    if ((param_1[0x270] & 1) != 0) goto LAB_008cd310;
LAB_008cd3c0:
    if ((param_1[600] & 1) == 0) goto LAB_008cd478;
LAB_008cd3c8:
    plVar3 = DAT_043f1798;
    lVar5 = *(long *)(param_1 + 0x268);
    if (lVar5 == 0) goto LAB_008cd478;
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar6 = plVar3;
    }
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) == 0) {
LAB_008cd45c:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
      goto LAB_008cd478;
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008cd45c;
    FUN_02bcc824(plVar6,lVar5,0,8);
    if ((param_1[0x240] & 1) != 0) goto LAB_008cd480;
LAB_008cd530:
    if ((param_1[0x228] & 1) == 0) goto LAB_008cd5e8;
LAB_008cd538:
    plVar3 = DAT_043f1798;
    lVar5 = *(long *)(param_1 + 0x238);
    if (lVar5 == 0) goto LAB_008cd5e8;
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar6 = plVar3;
    }
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) == 0) {
LAB_008cd5cc:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
      goto LAB_008cd5e8;
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008cd5cc;
    FUN_02bcc824(plVar6,lVar5,0,8);
    if ((param_1[0x210] & 1) != 0) goto LAB_008cd5f0;
LAB_008cd6a0:
    if ((param_1[0x1f8] & 1) == 0) goto LAB_008cd758;
LAB_008cd6a8:
    plVar3 = DAT_043f1798;
    lVar5 = *(long *)(param_1 + 0x208);
    if (lVar5 == 0) goto LAB_008cd758;
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar6 = plVar3;
    }
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) == 0) {
LAB_008cd73c:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
      goto LAB_008cd758;
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008cd73c;
    FUN_02bcc824(plVar6,lVar5,0,8);
    if ((param_1[0x1e0] & 1) != 0) goto LAB_008cd760;
LAB_008cd810:
    if ((param_1[0x1c8] & 1) == 0) goto LAB_008cd8c8;
LAB_008cd818:
    plVar3 = DAT_043f1798;
    lVar5 = *(long *)(param_1 + 0x1d8);
    if (lVar5 == 0) goto LAB_008cd8c8;
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar6 = plVar3;
    }
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) == 0) {
LAB_008cd8ac:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
      goto LAB_008cd8c8;
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008cd8ac;
    FUN_02bcc824(plVar6,lVar5,0,8);
    if ((param_1[0x1b0] & 1) != 0) goto LAB_008cd8d0;
LAB_008cd980:
    if ((param_1[0x198] & 1) == 0) goto LAB_008cda38;
LAB_008cd988:
    plVar3 = DAT_043f1798;
    lVar5 = *(long *)(param_1 + 0x1a8);
    if (lVar5 == 0) goto LAB_008cda38;
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar6 = plVar3;
    }
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) == 0) {
LAB_008cda1c:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
      goto LAB_008cda38;
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008cda1c;
    FUN_02bcc824(plVar6,lVar5,0,8);
    if ((param_1[0x180] & 1) != 0) goto LAB_008cda40;
LAB_008cdaf0:
    if ((param_1[0x168] & 1) == 0) goto LAB_008cdba8;
LAB_008cdaf8:
    plVar3 = DAT_043f1798;
    lVar5 = *(long *)(param_1 + 0x178);
    if (lVar5 == 0) goto LAB_008cdba8;
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar6 = plVar3;
    }
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) == 0) {
LAB_008cdb8c:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
      goto LAB_008cdba8;
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008cdb8c;
    FUN_02bcc824(plVar6,lVar5,0,8);
    if ((param_1[0x150] & 1) != 0) goto LAB_008cdbb0;
LAB_008cdc60:
    if ((param_1[0x138] & 1) == 0) goto LAB_008cdd18;
LAB_008cdc68:
    plVar3 = DAT_043f1798;
    lVar5 = *(long *)(param_1 + 0x148);
    if (lVar5 == 0) goto LAB_008cdd18;
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar6 = plVar3;
    }
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) == 0) {
LAB_008cdcfc:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
      goto LAB_008cdd18;
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008cdcfc;
    FUN_02bcc824(plVar6,lVar5,0,8);
    if ((param_1[0x120] & 1) != 0) goto LAB_008cdd20;
LAB_008cddd0:
    if ((param_1[0x108] & 1) == 0) goto LAB_008cde88;
LAB_008cddd8:
    plVar3 = DAT_043f1798;
    lVar5 = *(long *)(param_1 + 0x118);
    if (lVar5 == 0) goto LAB_008cde88;
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar6 = plVar3;
    }
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) == 0) {
LAB_008cde6c:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
      goto LAB_008cde88;
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008cde6c;
    FUN_02bcc824(plVar6,lVar5,0,8);
    if ((param_1[0xf0] & 1) != 0) goto LAB_008cde90;
LAB_008cdf40:
    if ((param_1[0xd8] & 1) == 0) goto LAB_008cdff8;
LAB_008cdf48:
    plVar3 = DAT_043f1798;
    lVar5 = *(long *)(param_1 + 0xe8);
    if (lVar5 == 0) goto LAB_008cdff8;
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar6 = plVar3;
    }
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) == 0) {
LAB_008cdfdc:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
      goto LAB_008cdff8;
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008cdfdc;
    FUN_02bcc824(plVar6,lVar5,0,8);
    if ((param_1[0xc0] & 1) != 0) goto LAB_008ce000;
LAB_008ce0b0:
    if ((param_1[0xa8] & 1) == 0) goto LAB_008ce168;
LAB_008ce0b8:
    plVar3 = DAT_043f1798;
    lVar5 = *(long *)(param_1 + 0xb8);
    if (lVar5 == 0) goto LAB_008ce168;
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar6 = plVar3;
    }
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) == 0) {
LAB_008ce14c:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
      goto LAB_008ce168;
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008ce14c;
    FUN_02bcc824(plVar6,lVar5,0,8);
    if ((param_1[0x90] & 1) != 0) goto LAB_008ce170;
LAB_008ce220:
    if ((param_1[0x78] & 1) == 0) goto LAB_008ce2d8;
LAB_008ce228:
    plVar3 = DAT_043f1798;
    lVar5 = *(long *)(param_1 + 0x88);
    if (lVar5 == 0) goto LAB_008ce2d8;
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar6 = plVar3;
    }
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) == 0) {
LAB_008ce2bc:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
      goto LAB_008ce2d8;
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008ce2bc;
    FUN_02bcc824(plVar6,lVar5,0,8);
    if ((param_1[0x60] & 1) != 0) goto LAB_008ce2e0;
LAB_008ce390:
    if ((param_1[0x48] & 1) == 0) goto LAB_008ce448;
LAB_008ce398:
    plVar3 = DAT_043f1798;
    lVar5 = *(long *)(param_1 + 0x58);
    if (lVar5 == 0) goto LAB_008ce448;
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar6 = plVar3;
    }
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) == 0) {
LAB_008ce42c:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
      goto LAB_008ce448;
    }
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_008ce42c;
    FUN_02bcc824(plVar6,lVar5,0,8);
    if ((param_1[0x30] & 1) != 0) goto LAB_008ce450;
LAB_008ce500:
    bVar1 = param_1[0x18];
    plVar3 = DAT_043f1798;
  }
  DAT_043f1798 = plVar3;
  if (((bVar1 & 1) != 0) && (lVar5 = *(long *)(param_1 + 0x28), lVar5 != 0)) {
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = plVar3;
      plVar6 = plVar3;
    }
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) != 0) {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar2 + 0x38d480)) {
        FUN_02bcc824(plVar6,lVar5,0,8);
        bVar1 = *param_1;
        plVar3 = DAT_043f1798;
        goto joined_r0x008ce9a8;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
  }
  bVar1 = *param_1;
  plVar3 = DAT_043f1798;
joined_r0x008ce9a8:
  if (((bVar1 & 1) == 0) || (lVar5 = *(long *)(param_1 + 0x10), lVar5 == 0)) {
    DAT_043f1798 = plVar3;
    return;
  }
  lVar2 = tpidr_el0;
  plVar6 = *(long **)(lVar2 + 0x20);
  DAT_043f1798 = plVar3;
  if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
    *(long **)(lVar2 + 0x20) = plVar3;
    plVar6 = plVar3;
  }
  uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
  if ((uVar4 & 1) != 0) {
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar2 + 0x38d480)) {
      FUN_02bcc824(plVar6,lVar5,0,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x008cea64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
  return;
}


