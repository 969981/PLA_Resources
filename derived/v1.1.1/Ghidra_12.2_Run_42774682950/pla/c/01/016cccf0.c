/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016cccf0; name: FUN_016cccf0
 */


long FUN_016cccf0(undefined8 param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  
  if (((DAT_043cc9c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_043cc9c0), iVar4 != 0)) {
    DAT_043cc9b8 = 0x18;
    __cxa_guard_release(&DAT_043cc9c0);
  }
  if (((DAT_043cc9d0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_043cc9d0), iVar4 != 0)) {
    DAT_043cc9c8 = 0x1f;
    __cxa_guard_release(&DAT_043cc9d0);
  }
  uVar3 = DAT_043cc9b8;
  lVar5 = FUN_00153520(param_1,DAT_043cc9b8);
  uVar8 = (ulong)(uint)-(int)lVar5 & 7;
  plVar7 = (long *)(lVar5 + uVar8);
  if (((ulong)(uint)-(int)lVar5 & 7 | 8) <= uVar3 && plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 1;
    uVar10 = (ulong)(uint)-(int)plVar9;
    if ((uVar10 & 7 | 0x10) <= (uVar3 - uVar8) - 8) goto LAB_016ccd74;
  }
  FUN_0014ff10(param_1,0xfffffffe);
  uVar3 = DAT_043cc9c8;
  lVar5 = FUN_00153520(param_1,DAT_043cc9c8);
  if (((ulong)(uint)-(int)lVar5 & 7 | 8) <= uVar3) {
    uVar8 = (ulong)(uint)-(int)lVar5 & 7;
    plVar7 = (long *)(lVar5 + uVar8);
    if (plVar7 != (long *)0x0) {
      plVar9 = plVar7 + 1;
      uVar10 = (ulong)(uint)-(int)plVar9;
      if ((uVar10 & 7 | 0x10) <= (uVar3 - uVar8) - 8) {
LAB_016ccd74:
        lVar5 = (long)plVar9 + (uVar10 & 7);
        *plVar7 = lVar5;
        return lVar5;
      }
      bVar2 = false;
      goto LAB_016ccdf8;
    }
  }
  bVar2 = true;
LAB_016ccdf8:
  FUN_0014ff10(param_1,0xfffffffe);
  if (((DAT_043cc940 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_043cc940), iVar4 != 0)) {
    FUN_016cc000();
    FUN_00100250(PTR__string_04379718,&DAT_043cc928,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043cc940);
  }
  puVar1 = DAT_043cc938;
  if ((DAT_043cc928 & 1) == 0) {
    puVar1 = &DAT_043cc929;
  }
  if (bVar2) {
    pcVar6 = "aligned allocation of userdata block (pointer section) for \'%s\' failed";
  }
  else {
    pcVar6 = "aligned allocation of userdata block (data section) for \'%s\' failed";
  }
  FUN_00154110(param_1,pcVar6,puVar1);
  return 0;
}


