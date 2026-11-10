/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0201fbcc; name: FUN_0201fbcc
 */


undefined8 FUN_0201fbcc(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  string *psVar6;
  ulong uVar7;
  long *plVar8;
  ulong local_58;
  undefined *puStack_50;
  long local_48;
  
  if (((*PTR_DAT_04383918 & 1) != 0) || (iVar3 = __cxa_guard_acquire(PTR_DAT_04383918), iVar3 == 0))
  goto LAB_0201fbf8;
  puStack_50 = (undefined *)0x0;
  local_48 = 0;
  local_58 = 0x2e6c6f7308;
  uVar5 = FUN_02020070();
  psVar6 = (string *)FUN_0201f7a4(&local_58,uVar5);
  std::string::string((string *)PTR_DAT_04383920,psVar6);
  lVar2 = local_48;
  plVar4 = DAT_043f1798;
  if (((local_58 & 1) != 0) && (local_48 != 0)) {
    lVar1 = tpidr_el0;
    plVar8 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar8 = plVar4;
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
        FUN_02bcc824(plVar8,lVar2,0,8);
        goto LAB_0201fd5c;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar2,0,8);
  }
LAB_0201fd5c:
  FUN_00100250(PTR__string_04379718,PTR_DAT_04383920,&PTR_LOOP_0411a000);
  __cxa_guard_release(PTR_DAT_04383918);
LAB_0201fbf8:
  puStack_50 = *(undefined **)(PTR_DAT_04383920 + 0x10);
  if ((*PTR_DAT_04383920 & 1) == 0) {
    puStack_50 = PTR_DAT_04383920 + 1;
  }
  local_58 = param_1;
  if (param_2 == 0) {
    FUN_00151490();
  }
  else {
    plVar4 = (long *)FUN_0201fe00();
    *plVar4 = param_2;
    FUN_0201ff4c(&local_58);
  }
  return 1;
}


