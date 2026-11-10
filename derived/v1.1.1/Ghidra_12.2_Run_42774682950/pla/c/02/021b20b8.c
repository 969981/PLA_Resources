/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021b20b8; name: FUN_021b20b8
 */


void FUN_021b20b8(void)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  int iVar5;
  char *pcVar6;
  string *psVar7;
  ulong uVar8;
  long *plVar9;
  ulong local_48 [3];
  
  if ((DAT_043dcd90 & 1) != 0) {
    return;
  }
  iVar5 = __cxa_guard_acquire(&DAT_043dcd90);
  if (iVar5 == 0) {
    return;
  }
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[0] = 0x2e6c6f7308;
  if (((*PTR_DAT_043856d8 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_043856d8), puVar2 = PTR_DAT_043856e0, iVar5 != 0)) {
    FUN_021b34e0(PTR_DAT_043856e0);
    FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_043856d8);
  }
  pcVar6 = (char *)FUN_021b28f4(local_48,PTR_DAT_043856e0);
  psVar7 = (string *)std::string::append(pcVar6);
  std::string::string((string *)&DAT_043dcd78,psVar7);
  uVar4 = local_48[2];
  plVar3 = DAT_043f1798;
  if (((local_48[0] & 1) != 0) && (local_48[2] != 0)) {
    lVar1 = tpidr_el0;
    plVar9 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar9 = plVar3;
    }
    uVar8 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar9,uVar4,0,8);
        goto LAB_021b2214;
      }
    }
    (**(code **)(*plVar9 + 0x18))(plVar9,uVar4,0,8);
  }
LAB_021b2214:
  FUN_00100250(PTR__string_04379718,&DAT_043dcd78,&PTR_LOOP_0411a000);
  __cxa_guard_release(&DAT_043dcd90);
  return;
}


