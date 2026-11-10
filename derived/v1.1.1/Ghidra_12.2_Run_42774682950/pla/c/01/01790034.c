/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01790034; name: FUN_01790034
 */


void FUN_01790034(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  int iVar5;
  string *psVar6;
  ulong uVar7;
  long *plVar8;
  ulong local_48 [3];
  
  if ((DAT_043cf908 & 1) != 0) {
    return;
  }
  iVar5 = __cxa_guard_acquire(&DAT_043cf908);
  if (iVar5 == 0) {
    return;
  }
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[0] = 0x2e6c6f7308;
  if (((*PTR_DAT_04380fc0 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04380fc0), puVar1 = PTR_DAT_04380fc8, iVar5 != 0)) {
    FUN_01791a20(PTR_DAT_04380fc8);
    FUN_00100250(PTR__string_04379718,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04380fc0);
  }
  puVar1 = *(undefined **)(PTR_DAT_04380fc8 + 0x10);
  if ((*PTR_DAT_04380fc8 & 1) == 0) {
    puVar1 = PTR_DAT_04380fc8 + 1;
  }
  psVar6 = (string *)std::string::append((char *)local_48,(ulong)puVar1);
  std::string::string((string *)&DAT_043cf8f0,psVar6);
  uVar4 = local_48[2];
  plVar3 = DAT_043f1798;
  if (((local_48[0] & 1) != 0) && (local_48[2] != 0)) {
    lVar2 = tpidr_el0;
    plVar8 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar8 = plVar3;
    }
    uVar7 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar7 & 1) != 0) {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar2 + 0x38d480)) {
        FUN_02bcc824(plVar8,uVar4,0,8);
        goto LAB_0179019c;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,uVar4,0,8);
  }
LAB_0179019c:
  FUN_00100250(PTR__string_04379718,&DAT_043cf8f0,&PTR_LOOP_0411a000);
  __cxa_guard_release(&DAT_043cf908);
  return;
}


