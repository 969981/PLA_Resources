/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ebd7b0; name: FUN_00ebd7b0
 */


long FUN_00ebd7b0(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  
  puVar5 = PTR_DAT_0437c8c0;
  if (((*PTR_DAT_0437c8b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_0437c8b8), iVar2 != 0))
  {
    *(undefined8 *)puVar5 = 0x20;
    __cxa_guard_release(PTR_DAT_0437c8b8);
  }
  if (((*PTR_DAT_0437c8c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_0437c8c8), iVar2 != 0))
  {
    *(undefined8 *)PTR_DAT_0437c8d0 = 0x1f;
    __cxa_guard_release(PTR_DAT_0437c8c8);
  }
  uVar10 = *(ulong *)puVar5;
  lVar3 = FUN_00153520(param_1,uVar10);
  uVar7 = (ulong)(uint)-(int)lVar3 & 7;
  plVar6 = (long *)(lVar3 + uVar7);
  if (((ulong)(uint)-(int)lVar3 & 7 | 8) <= uVar10 && plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 1;
    uVar9 = (ulong)(uint)-(int)plVar8;
    if ((uVar9 & 0xf | 0x10) <= (uVar10 - uVar7) - 8) goto LAB_00ebd83c;
  }
  FUN_0014ff10(param_1,0xfffffffe);
  uVar7 = *(ulong *)PTR_DAT_0437c8d0;
  lVar3 = FUN_00153520(param_1,uVar7);
  if (((ulong)(uint)-(int)lVar3 & 7 | 8) <= uVar7) {
    uVar10 = (ulong)(uint)-(int)lVar3 & 7;
    plVar6 = (long *)(lVar3 + uVar10);
    if (plVar6 != (long *)0x0) {
      plVar8 = plVar6 + 1;
      uVar9 = (ulong)(uint)-(int)plVar8;
      if ((uVar9 & 0xf | 0x10) <= (uVar7 - uVar10) - 8) {
LAB_00ebd83c:
        lVar3 = (long)plVar8 + (uVar9 & 0xf);
        *plVar6 = lVar3;
        return lVar3;
      }
      bVar1 = false;
      goto LAB_00ebd920;
    }
  }
  bVar1 = true;
LAB_00ebd920:
  FUN_0014ff10(param_1,0xfffffffe);
  if (((*PTR_DAT_0437c8a8 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_0437c8a8), puVar5 = PTR_DAT_0437c8b0, iVar2 != 0)) {
    FUN_00ebdb80(PTR_DAT_0437c8b0);
    FUN_00100250(PTR__string_04379718,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437c8a8);
  }
  if ((*PTR_DAT_0437c8b0 & 1) == 0) {
    puVar5 = PTR_DAT_0437c8b0 + 1;
  }
  else {
    puVar5 = *(undefined **)(PTR_DAT_0437c8b0 + 0x10);
  }
  if (bVar1) {
    pcVar4 = "aligned allocation of userdata block (pointer section) for \'%s\' failed";
  }
  else {
    pcVar4 = "aligned allocation of userdata block (data section) for \'%s\' failed";
  }
  FUN_00154110(param_1,pcVar4,puVar5);
  return 0;
}


