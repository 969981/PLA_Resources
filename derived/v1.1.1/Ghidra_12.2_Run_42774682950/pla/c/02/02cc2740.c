/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cc2740; name: FUN_02cc2740
 */


void FUN_02cc2740(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  
  if (DAT_04408ad8 == (long *)0x0 || DAT_04408ae0 == 0) {
    return;
  }
  nn::socket::Finalize();
  lVar3 = DAT_04408ae0;
  plVar2 = DAT_04408ad8;
  uVar4 = (**(code **)(*DAT_04408ad8 + 0xc0))(DAT_04408ad8);
  if ((uVar4 & 1) != 0) {
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar1 + 0x38d480)) {
      FUN_02bcc824(plVar2,lVar3,0x600000,0x1000);
      DAT_04408ae0 = 0;
      return;
    }
  }
  (**(code **)(*plVar2 + 0x18))(plVar2,lVar3,0x600000,0x1000);
  DAT_04408ae0 = 0;
  return;
}


