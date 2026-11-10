/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0247dbb0; name: FUN_0247dbb0
 */


long FUN_0247dbb0(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  
  puVar9 = PTR_DAT_04387550;
  if (((*PTR_DAT_04387548 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04387548), iVar2 != 0))
  {
    *(undefined8 *)puVar9 = 0x38;
    __cxa_guard_release(PTR_DAT_04387548);
  }
  if (((*PTR_DAT_04387558 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04387558), iVar2 != 0))
  {
    *(undefined8 *)PTR_DAT_04387560 = 0x3f;
    __cxa_guard_release(PTR_DAT_04387558);
  }
  uVar10 = *(ulong *)puVar9;
  lVar3 = FUN_00153520(param_1,uVar10);
  uVar6 = (ulong)(uint)-(int)lVar3 & 7;
  plVar5 = (long *)(lVar3 + uVar6);
  if (((ulong)(uint)-(int)lVar3 & 7 | 8) <= uVar10 && plVar5 != (long *)0x0) {
    plVar7 = plVar5 + 1;
    uVar8 = (ulong)(uint)-(int)plVar7;
    if ((uVar8 & 7 | 0x30) <= (uVar10 - uVar6) - 8) goto LAB_0247dc3c;
  }
  FUN_0014ff10(param_1,0xfffffffe);
  uVar6 = *(ulong *)PTR_DAT_04387560;
  lVar3 = FUN_00153520(param_1,uVar6);
  if (((ulong)(uint)-(int)lVar3 & 7 | 8) <= uVar6) {
    uVar10 = (ulong)(uint)-(int)lVar3 & 7;
    plVar5 = (long *)(lVar3 + uVar10);
    if (plVar5 != (long *)0x0) {
      plVar7 = plVar5 + 1;
      uVar8 = (ulong)(uint)-(int)plVar7;
      if ((uVar8 & 7 | 0x30) <= (uVar6 - uVar10) - 8) {
LAB_0247dc3c:
        lVar3 = (long)plVar7 + (uVar8 & 7);
        *plVar5 = lVar3;
        return lVar3;
      }
      bVar1 = false;
      goto LAB_0247dd20;
    }
  }
  bVar1 = true;
LAB_0247dd20:
  FUN_0014ff10(param_1,0xfffffffe);
  if (((*PTR_DAT_04387538 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04387538), puVar9 = PTR_DAT_04387540, iVar2 != 0)) {
    FUN_0247df80(PTR_DAT_04387540);
    FUN_00100250(PTR__string_04379718,puVar9,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04387538);
  }
  puVar9 = *(undefined **)(PTR_DAT_04387540 + 0x10);
  if ((*PTR_DAT_04387540 & 1) == 0) {
    puVar9 = PTR_DAT_04387540 + 1;
  }
  if (bVar1) {
    pcVar4 = "aligned allocation of userdata block (pointer section) for \'%s\' failed";
  }
  else {
    pcVar4 = "aligned allocation of userdata block (data section) for \'%s\' failed";
  }
  FUN_00154110(param_1,pcVar4,puVar9);
  return 0;
}


