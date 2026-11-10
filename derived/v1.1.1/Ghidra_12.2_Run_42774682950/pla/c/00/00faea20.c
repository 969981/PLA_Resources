/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00faea20; name: FUN_00faea20
 */


long FUN_00faea20(undefined8 param_1)

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
  
  puVar9 = PTR_DAT_0437dab8;
  if (((*PTR_DAT_0437dab0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_0437dab0), iVar2 != 0))
  {
    *(undefined8 *)puVar9 = 0x20;
    __cxa_guard_release(PTR_DAT_0437dab0);
  }
  if (((*PTR_DAT_0437dac0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_0437dac0), iVar2 != 0))
  {
    *(undefined8 *)PTR_DAT_0437dac8 = 0x1f;
    __cxa_guard_release(PTR_DAT_0437dac0);
  }
  uVar10 = *(ulong *)puVar9;
  lVar3 = FUN_00153520(param_1,uVar10);
  uVar6 = (ulong)(uint)-(int)lVar3 & 7;
  plVar5 = (long *)(lVar3 + uVar6);
  if (((ulong)(uint)-(int)lVar3 & 7 | 8) <= uVar10 && plVar5 != (long *)0x0) {
    plVar7 = plVar5 + 1;
    uVar8 = (ulong)(uint)-(int)plVar7;
    if ((uVar8 & 0xf | 0x10) <= (uVar10 - uVar6) - 8) goto LAB_00faeaac;
  }
  FUN_0014ff10(param_1,0xfffffffe);
  uVar6 = *(ulong *)PTR_DAT_0437dac8;
  lVar3 = FUN_00153520(param_1,uVar6);
  if (((ulong)(uint)-(int)lVar3 & 7 | 8) <= uVar6) {
    uVar10 = (ulong)(uint)-(int)lVar3 & 7;
    plVar5 = (long *)(lVar3 + uVar10);
    if (plVar5 != (long *)0x0) {
      plVar7 = plVar5 + 1;
      uVar8 = (ulong)(uint)-(int)plVar7;
      if ((uVar8 & 0xf | 0x10) <= (uVar6 - uVar10) - 8) {
LAB_00faeaac:
        lVar3 = (long)plVar7 + (uVar8 & 0xf);
        *plVar5 = lVar3;
        return lVar3;
      }
      bVar1 = false;
      goto LAB_00faeb90;
    }
  }
  bVar1 = true;
LAB_00faeb90:
  FUN_0014ff10(param_1,0xfffffffe);
  if (((*PTR_DAT_0437da80 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_0437da80), puVar9 = PTR_DAT_0437da88, iVar2 != 0)) {
    FUN_00fadd70(PTR_DAT_0437da88);
    FUN_00100250(PTR__string_04379718,puVar9,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437da80);
  }
  puVar9 = *(undefined **)(PTR_DAT_0437da88 + 0x10);
  if ((*PTR_DAT_0437da88 & 1) == 0) {
    puVar9 = PTR_DAT_0437da88 + 1;
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


