/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fce3a8; name: FUN_00fce3a8
 */


void FUN_00fce3a8(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  int iVar4;
  string *psVar5;
  ulong uVar6;
  long *plVar7;
  ulong local_48 [3];
  
  if ((DAT_043b75a8 & 1) != 0) {
    return;
  }
  iVar4 = __cxa_guard_acquire(&DAT_043b75a8);
  if (iVar4 == 0) {
    return;
  }
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[0] = 0x2e6c6f7308;
  FUN_00fce5a0();
  uVar2 = DAT_043b75c0;
  if (((byte)DAT_043b75b0 & 1) == 0) {
    uVar2 = 0x43b75b1;
  }
  psVar5 = (string *)std::string::append((char *)local_48,uVar2);
  std::string::string((string *)&DAT_043b7590,psVar5);
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
        goto LAB_00fce504;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,uVar2,0,8);
  }
LAB_00fce504:
  FUN_00100250(PTR__string_04379718,&DAT_043b7590,&PTR_LOOP_0411a000);
  __cxa_guard_release(&DAT_043b75a8);
  return;
}


