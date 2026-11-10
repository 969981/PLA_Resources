/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00916938; name: FUN_00916938
 */


void FUN_00916938(void)

{
  byte *pbVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  string *psVar8;
  ulong uVar9;
  long *plVar10;
  ulong local_48 [3];
  
  if ((DAT_043a83e8 & 1) != 0) {
    return;
  }
  iVar5 = __cxa_guard_acquire(&DAT_043a83e8);
  if (iVar5 == 0) {
    return;
  }
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[0] = 0x2e6c6f7308;
  pbVar6 = (byte *)FUN_008ecc30();
  pbVar1 = *(byte **)(pbVar6 + 0x10);
  if ((*pbVar6 & 1) == 0) {
    pbVar1 = pbVar6 + 1;
  }
  pcVar7 = (char *)std::string::append((char *)local_48,(ulong)pbVar1);
  psVar8 = (string *)std::string::append(pcVar7);
  std::string::string((string *)&DAT_043a83d0,psVar8);
  uVar4 = local_48[2];
  plVar3 = DAT_043f1798;
  if (((local_48[0] & 1) != 0) && (local_48[2] != 0)) {
    lVar2 = tpidr_el0;
    plVar10 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar10 = plVar3;
    }
    uVar9 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar9 & 1) != 0) {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar2 + 0x38d480)) {
        FUN_02bcc824(plVar10,uVar4,0,8);
        goto LAB_00916a98;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,uVar4,0,8);
  }
LAB_00916a98:
  FUN_00100250(PTR__string_04379718,&DAT_043a83d0,&PTR_LOOP_0411a000);
  __cxa_guard_release(&DAT_043a83e8);
  return;
}


