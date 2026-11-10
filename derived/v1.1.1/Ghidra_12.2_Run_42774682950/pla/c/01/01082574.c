/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01082574; name: FUN_01082574
 */


void FUN_01082574(void)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  string *psVar4;
  ulong uVar5;
  long *plVar6;
  byte local_48 [16];
  long local_38;
  
  if ((DAT_043ba0f8 & 1) != 0) {
    return;
  }
  iVar3 = __cxa_guard_acquire(&DAT_043ba0f8);
  if (iVar3 == 0) {
    return;
  }
  FUN_010816b0(local_48,&DAT_039285d6);
  FUN_01082740();
  psVar4 = (string *)FUN_010821c0(local_48,&DAT_043ba100);
  std::string::string((string *)&DAT_043ba0e0,psVar4);
  plVar2 = DAT_043f1798;
  if (((local_48[0] & 1) != 0) && (local_38 != 0)) {
    lVar1 = tpidr_el0;
    plVar6 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar6 = plVar2;
    }
    uVar5 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar5 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar6,local_38,0,8);
        goto LAB_010826a8;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,local_38,0,8);
  }
LAB_010826a8:
  FUN_00100250(PTR__string_04379718,&DAT_043ba0e0,&PTR_LOOP_0411a000);
  __cxa_guard_release(&DAT_043ba0f8);
  return;
}


