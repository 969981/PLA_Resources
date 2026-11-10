/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01724b90; name: FUN_01724b90
 */


long FUN_01724b90(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined *puVar10;
  
  if (((DAT_043ce240 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043ce240), iVar3 != 0)) {
    DAT_043ce238 = 0x80;
    __cxa_guard_release(&DAT_043ce240);
  }
  if (((DAT_043ce250 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043ce250), iVar3 != 0)) {
    DAT_043ce248 = 0x87;
    __cxa_guard_release(&DAT_043ce250);
  }
  uVar2 = DAT_043ce238;
  lVar4 = FUN_00153520(param_1,DAT_043ce238);
  uVar7 = (ulong)(uint)-(int)lVar4 & 7;
  plVar6 = (long *)(lVar4 + uVar7);
  if (((ulong)(uint)-(int)lVar4 & 7 | 8) <= uVar2 && plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 1;
    uVar9 = (ulong)(uint)-(int)plVar8;
    if ((uVar9 & 7 | 0x78) <= (uVar2 - uVar7) - 8) goto LAB_01724c78;
  }
  FUN_0014ff10(param_1,0xfffffffe);
  uVar2 = DAT_043ce248;
  lVar4 = FUN_00153520(param_1,DAT_043ce248);
  if (((ulong)(uint)-(int)lVar4 & 7 | 8) <= uVar2) {
    uVar7 = (ulong)(uint)-(int)lVar4 & 7;
    plVar6 = (long *)(lVar4 + uVar7);
    if (plVar6 != (long *)0x0) {
      plVar8 = plVar6 + 1;
      uVar9 = (ulong)(uint)-(int)plVar8;
      if ((uVar9 & 7 | 0x78) <= (uVar2 - uVar7) - 8) {
LAB_01724c78:
        lVar4 = (long)plVar8 + (uVar9 & 7);
        *plVar6 = lVar4;
        return lVar4;
      }
      bVar1 = false;
      goto LAB_01724c98;
    }
  }
  bVar1 = true;
LAB_01724c98:
  FUN_0014ff10(param_1,0xfffffffe);
  if (((*PTR_DAT_0437be18 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_0437be18), puVar10 = PTR_DAT_0437be20, iVar3 != 0)) {
    FUN_00dfa490(PTR_DAT_0437be20);
    FUN_00100250(PTR__string_04379718,puVar10,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437be18);
  }
  puVar10 = *(undefined **)(PTR_DAT_0437be20 + 0x10);
  if ((*PTR_DAT_0437be20 & 1) == 0) {
    puVar10 = PTR_DAT_0437be20 + 1;
  }
  if (bVar1) {
    pcVar5 = "aligned allocation of userdata block (pointer section) for \'%s\' failed";
  }
  else {
    pcVar5 = "aligned allocation of userdata block (data section) for \'%s\' failed";
  }
  FUN_00154110(param_1,pcVar5,puVar10);
  return 0;
}


