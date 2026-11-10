/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f04d70; name: FUN_00f04d70
 */


long FUN_00f04d70(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  undefined *puVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  
  if (((DAT_043b3e78 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043b3e78), iVar3 != 0)) {
    DAT_043b3e70 = 0x30;
    __cxa_guard_release(&DAT_043b3e78);
  }
  if (((DAT_043b3e88 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043b3e88), iVar3 != 0)) {
    DAT_043b3e80 = 0x37;
    __cxa_guard_release(&DAT_043b3e88);
  }
  uVar2 = DAT_043b3e70;
  lVar4 = FUN_00153520(param_1,DAT_043b3e70);
  uVar8 = (ulong)(uint)-(int)lVar4 & 7;
  plVar7 = (long *)(lVar4 + uVar8);
  if (((ulong)(uint)-(int)lVar4 & 7 | 8) <= uVar2 && plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 1;
    uVar10 = (ulong)(uint)-(int)plVar9;
    if ((uVar10 & 7 | 0x28) <= (uVar2 - uVar8) - 8) goto LAB_00f04df8;
  }
  FUN_0014ff10(param_1,0xfffffffe);
  uVar2 = DAT_043b3e80;
  lVar4 = FUN_00153520(param_1,DAT_043b3e80);
  if (((ulong)(uint)-(int)lVar4 & 7 | 8) <= uVar2) {
    uVar8 = (ulong)(uint)-(int)lVar4 & 7;
    plVar7 = (long *)(lVar4 + uVar8);
    if (plVar7 != (long *)0x0) {
      plVar9 = plVar7 + 1;
      uVar10 = (ulong)(uint)-(int)plVar9;
      if ((uVar10 & 7 | 0x28) <= (uVar2 - uVar8) - 8) {
LAB_00f04df8:
        lVar4 = (long)plVar9 + (uVar10 & 7);
        *plVar7 = lVar4;
        return lVar4;
      }
      bVar1 = false;
      goto LAB_00f04e80;
    }
  }
  bVar1 = true;
LAB_00f04e80:
  FUN_0014ff10(param_1,0xfffffffe);
  if (((*PTR_DAT_0437d398 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_0437d398), puVar6 = PTR_DAT_0437d3a0, iVar3 != 0)) {
    FUN_00f05130(PTR_DAT_0437d3a0);
    FUN_00100250(PTR__string_04379718,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437d398);
  }
  if ((*PTR_DAT_0437d3a0 & 1) == 0) {
    puVar6 = PTR_DAT_0437d3a0 + 1;
  }
  else {
    puVar6 = *(undefined **)(PTR_DAT_0437d3a0 + 0x10);
  }
  if (bVar1) {
    pcVar5 = "aligned allocation of userdata block (pointer section) for \'%s\' failed";
  }
  else {
    pcVar5 = "aligned allocation of userdata block (data section) for \'%s\' failed";
  }
  FUN_00154110(param_1,pcVar5,puVar6);
  return 0;
}


