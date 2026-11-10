/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0254a420; name: FUN_0254a420
 */


long FUN_0254a420(undefined8 param_1)

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
  
  if (((DAT_043e9408 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_043e9408), iVar4 != 0)) {
    DAT_043e9400 = 0x40;
    __cxa_guard_release(&DAT_043e9408);
  }
  if (((DAT_043e9418 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_043e9418), iVar4 != 0)) {
    DAT_043e9410 = 0x3f;
    __cxa_guard_release(&DAT_043e9418);
  }
  uVar3 = DAT_043e9400;
  lVar5 = FUN_00153520(param_1,DAT_043e9400);
  uVar8 = (ulong)(uint)-(int)lVar5 & 7;
  plVar7 = (long *)(lVar5 + uVar8);
  if (((ulong)(uint)-(int)lVar5 & 7 | 8) <= uVar3 && plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 1;
    uVar10 = (ulong)(uint)-(int)plVar9;
    if ((uVar10 & 0xf | 0x30) <= (uVar3 - uVar8) - 8) goto LAB_0254a4a4;
  }
  FUN_0014ff10(param_1,0xfffffffe);
  uVar3 = DAT_043e9410;
  lVar5 = FUN_00153520(param_1,DAT_043e9410);
  if (((ulong)(uint)-(int)lVar5 & 7 | 8) <= uVar3) {
    uVar8 = (ulong)(uint)-(int)lVar5 & 7;
    plVar7 = (long *)(lVar5 + uVar8);
    if (plVar7 != (long *)0x0) {
      plVar9 = plVar7 + 1;
      uVar10 = (ulong)(uint)-(int)plVar9;
      if ((uVar10 & 0xf | 0x30) <= (uVar3 - uVar8) - 8) {
LAB_0254a4a4:
        lVar5 = (long)plVar9 + (uVar10 & 0xf);
        *plVar7 = lVar5;
        return lVar5;
      }
      bVar2 = false;
      goto LAB_0254a57c;
    }
  }
  bVar2 = true;
LAB_0254a57c:
  FUN_0014ff10(param_1,0xfffffffe);
  if (((DAT_043e9388 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_043e9388), iVar4 != 0)) {
    FUN_025497c0();
    FUN_00100250(PTR__string_04379718,&DAT_043e9370,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e9388);
  }
  puVar1 = DAT_043e9380;
  if ((DAT_043e9370 & 1) == 0) {
    puVar1 = &DAT_043e9371;
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


