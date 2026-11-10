/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d12230; name: FUN_00d12230
 */


void FUN_00d12230(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if (DAT_043ab4f0 == (undefined8 *)0x0) goto LAB_00d122e8;
  nn::ngc::ProfanityFilter::Finalize();
  (**(code **)*DAT_043ab4f0)();
  puVar4 = DAT_043ab4f0;
  plVar3 = DAT_043ab4e0;
  uVar5 = (**(code **)(*DAT_043ab4e0 + 0xc0))(DAT_043ab4e0);
  if ((uVar5 & 1) == 0) {
LAB_00d122c8:
    (**(code **)(*plVar3 + 0x18))(plVar3,puVar4,0x30,8);
  }
  else {
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_00d122c8;
    FUN_02bcc824(plVar3,puVar4,0x30,8);
  }
  DAT_043ab4f0 = (undefined8 *)0x0;
LAB_00d122e8:
  lVar1 = DAT_043ab4e8;
  plVar3 = DAT_043ab4e0;
  if (DAT_043ab4e8 == 0) {
    DAT_043ab4e0 = (long *)0x0;
    return;
  }
  uVar5 = (**(code **)(*DAT_043ab4e0 + 0xc0))(DAT_043ab4e0);
  if ((uVar5 & 1) != 0) {
    lVar2 = tpidr_el0;
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar2 + 0x38d480)) {
      FUN_02bcc824(plVar3,lVar1,0x20000,0x1000);
      DAT_043ab4e0 = (long *)0x0;
      DAT_043ab4e8 = 0;
      return;
    }
  }
  (**(code **)(*plVar3 + 0x18))(plVar3,lVar1,0x20000,0x1000);
  DAT_043ab4e8 = 0;
  DAT_043ab4e0 = (long *)0x0;
  return;
}


