/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ff1140; name: FUN_01ff1140
 */


long FUN_01ff1140(undefined8 param_1)

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
  
  if (((DAT_043d5e58 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043d5e58), iVar3 != 0)) {
    DAT_043d5e50 = 0xe0;
    __cxa_guard_release(&DAT_043d5e58);
  }
  if (((DAT_043d5e68 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043d5e68), iVar3 != 0)) {
    DAT_043d5e60 = 0xdf;
    __cxa_guard_release(&DAT_043d5e68);
  }
  uVar2 = DAT_043d5e50;
  lVar4 = FUN_00153520(param_1,DAT_043d5e50);
  uVar7 = (ulong)(uint)-(int)lVar4 & 7;
  plVar6 = (long *)(lVar4 + uVar7);
  if (((ulong)(uint)-(int)lVar4 & 7 | 8) <= uVar2 && plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 1;
    uVar9 = (ulong)(uint)-(int)plVar8;
    if ((uVar9 & 0xf | 0xd0) <= (uVar2 - uVar7) - 8) goto LAB_01ff11c8;
  }
  FUN_0014ff10(param_1,0xfffffffe);
  uVar2 = DAT_043d5e60;
  lVar4 = FUN_00153520(param_1,DAT_043d5e60);
  if (((ulong)(uint)-(int)lVar4 & 7 | 8) <= uVar2) {
    uVar7 = (ulong)(uint)-(int)lVar4 & 7;
    plVar6 = (long *)(lVar4 + uVar7);
    if (plVar6 != (long *)0x0) {
      plVar8 = plVar6 + 1;
      uVar9 = (ulong)(uint)-(int)plVar8;
      if ((uVar9 & 0xf | 0xd0) <= (uVar2 - uVar7) - 8) {
LAB_01ff11c8:
        lVar4 = (long)plVar8 + (uVar9 & 0xf);
        *plVar6 = lVar4;
        return lVar4;
      }
      bVar1 = false;
      goto LAB_01ff12a4;
    }
  }
  bVar1 = true;
LAB_01ff12a4:
  FUN_0014ff10(param_1,0xfffffffe);
  if (((*PTR_DAT_043836f8 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_043836f8), puVar10 = PTR_DAT_04383700, iVar3 != 0)) {
    FUN_01fdf9a0(PTR_DAT_04383700);
    FUN_00100250(PTR__string_04379718,puVar10,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_043836f8);
  }
  puVar10 = *(undefined **)(PTR_DAT_04383700 + 0x10);
  if ((*PTR_DAT_04383700 & 1) == 0) {
    puVar10 = PTR_DAT_04383700 + 1;
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


