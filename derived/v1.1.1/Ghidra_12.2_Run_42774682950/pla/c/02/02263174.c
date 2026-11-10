/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02263174; name: FUN_02263174
 */


void FUN_02263174(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  int iVar4;
  string *psVar5;
  ulong uVar6;
  long *plVar7;
  ulong local_48 [3];
  
  if ((DAT_043df798 & 1) != 0) {
    return;
  }
  iVar4 = __cxa_guard_acquire(&DAT_043df798);
  if (iVar4 == 0) {
    return;
  }
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[0] = 0x2e6c6f7308;
  FUN_022646c0();
  uVar2 = DAT_043df7b0;
  if (((byte)DAT_043df7a0 & 1) == 0) {
    uVar2 = 0x43df7a1;
  }
  psVar5 = (string *)std::string::append((char *)local_48,uVar2);
  std::string::string((string *)&DAT_043df780,psVar5);
  uVar2 = local_48[2];
  plVar3 = DAT_043f1798;
  if (((local_48[0] & 1) != 0) && (local_48[2] != 0)) {
    lVar1 = tpidr_el0;
    plVar7 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar7 = plVar3;
    }
    uVar6 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar6 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar7,uVar2,0,8);
        goto LAB_022632d0;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,uVar2,0,8);
  }
LAB_022632d0:
  FUN_00100250(PTR__string_04379718,&DAT_043df780,&PTR_LOOP_0411a000);
  __cxa_guard_release(&DAT_043df798);
  return;
}


