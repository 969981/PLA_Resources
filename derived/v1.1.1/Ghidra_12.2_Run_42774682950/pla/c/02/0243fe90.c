/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0243fe90; name: FUN_0243fe90
 */


long FUN_0243fe90(undefined8 param_1)

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
  
  if (((DAT_043e5888 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_043e5888), iVar4 != 0)) {
    DAT_043e5880 = 0x40;
    __cxa_guard_release(&DAT_043e5888);
  }
  if (((DAT_043e5898 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_043e5898), iVar4 != 0)) {
    DAT_043e5890 = 0x3f;
    __cxa_guard_release(&DAT_043e5898);
  }
  uVar3 = DAT_043e5880;
  lVar5 = FUN_00153520(param_1,DAT_043e5880);
  uVar8 = (ulong)(uint)-(int)lVar5 & 7;
  plVar7 = (long *)(lVar5 + uVar8);
  if (((ulong)(uint)-(int)lVar5 & 7 | 8) <= uVar3 && plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 1;
    uVar10 = (ulong)(uint)-(int)plVar9;
    if ((uVar10 & 0xf | 0x30) <= (uVar3 - uVar8) - 8) goto LAB_0243ff14;
  }
  FUN_0014ff10(param_1,0xfffffffe);
  uVar3 = DAT_043e5890;
  lVar5 = FUN_00153520(param_1,DAT_043e5890);
  if (((ulong)(uint)-(int)lVar5 & 7 | 8) <= uVar3) {
    uVar8 = (ulong)(uint)-(int)lVar5 & 7;
    plVar7 = (long *)(lVar5 + uVar8);
    if (plVar7 != (long *)0x0) {
      plVar9 = plVar7 + 1;
      uVar10 = (ulong)(uint)-(int)plVar9;
      if ((uVar10 & 0xf | 0x30) <= (uVar3 - uVar8) - 8) {
LAB_0243ff14:
        lVar5 = (long)plVar9 + (uVar10 & 0xf);
        *plVar7 = lVar5;
        return lVar5;
      }
      bVar2 = false;
      goto LAB_0243ffec;
    }
  }
  bVar2 = true;
LAB_0243ffec:
  FUN_0014ff10(param_1,0xfffffffe);
  if (((DAT_043e5808 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_043e5808), iVar4 != 0)) {
    FUN_0243f490();
    FUN_00100250(PTR__string_04379718,&DAT_043e57f0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e5808);
  }
  puVar1 = DAT_043e5800;
  if ((DAT_043e57f0 & 1) == 0) {
    puVar1 = &DAT_043e57f1;
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


