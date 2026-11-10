/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02020a10; name: FUN_02020a10
 */


undefined8 FUN_02020a10(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  int iVar4;
  string *psVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong local_58 [3];
  
  if (((*PTR_DAT_04383918 & 1) != 0) || (iVar4 = __cxa_guard_acquire(PTR_DAT_04383918), iVar4 == 0))
  goto LAB_02020a40;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[0] = 0x2e6c6f7308;
  uVar7 = FUN_02020070();
  psVar5 = (string *)FUN_0201f7a4(local_58,uVar7);
  std::string::string((string *)PTR_DAT_04383920,psVar5);
  uVar3 = local_58[2];
  plVar2 = DAT_043f1798;
  if (((local_58[0] & 1) != 0) && (local_58[2] != 0)) {
    lVar1 = tpidr_el0;
    plVar10 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar10 = plVar2;
    }
    uVar6 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar6 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar10,uVar3,0,8);
        goto LAB_02020bd0;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,uVar3,0,8);
  }
LAB_02020bd0:
  FUN_00100250(PTR__string_04379718,PTR_DAT_04383920,&PTR_LOOP_0411a000);
  __cxa_guard_release(PTR_DAT_04383918);
LAB_02020a40:
  puVar8 = *(undefined **)(PTR_DAT_04383920 + 0x10);
  if ((*PTR_DAT_04383920 & 1) == 0) {
    puVar8 = PTR_DAT_04383920 + 1;
  }
  FUN_00151a70(param_1,0xfff0b9d8,puVar8);
  iVar4 = FUN_00150310(param_1,0xffffffff);
  if ((iVar4 == 0) || (iVar4 = FUN_00150750(param_1,0xffffffff,param_2), iVar4 != 1)) {
    uVar9 = 0;
    uVar7 = 0xfffffffe;
  }
  else {
    uVar9 = 1;
    uVar7 = 0xfffffffd;
  }
  FUN_0014ff10(param_1,uVar7);
  return uVar9;
}


