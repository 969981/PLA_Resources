/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012b6ebc; name: FUN_012b6ebc
 */


void FUN_012b6ebc(void)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  int iVar4;
  char *pcVar5;
  string *psVar6;
  ulong uVar7;
  long *plVar8;
  ulong local_48 [3];
  
  if ((DAT_043c0e38 & 1) != 0) {
    return;
  }
  iVar4 = __cxa_guard_acquire(&DAT_043c0e38);
  if (iVar4 == 0) {
    return;
  }
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[0] = 0x2e6c6f7308;
  if (((DAT_043c0de0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_043c0de0), iVar4 != 0)) {
    FUN_012b82f0();
    FUN_00100250(PTR__string_04379718,&DAT_043c0dc8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043c0de0);
  }
  pcVar5 = (char *)FUN_012b76e4(local_48,&DAT_043c0dc8);
  psVar6 = (string *)std::string::append(pcVar5);
  std::string::string((string *)&DAT_043c0e20,psVar6);
  uVar3 = local_48[2];
  plVar2 = DAT_043f1798;
  if (((local_48[0] & 1) != 0) && (local_48[2] != 0)) {
    lVar1 = tpidr_el0;
    plVar8 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar8 = plVar2;
    }
    uVar7 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar7 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar8,uVar3,0,8);
        goto LAB_012b7018;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,uVar3,0,8);
  }
LAB_012b7018:
  FUN_00100250(PTR__string_04379718,&DAT_043c0e20,&PTR_LOOP_0411a000);
  __cxa_guard_release(&DAT_043c0e38);
  return;
}


