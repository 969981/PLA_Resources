/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0203411c; name: FUN_0203411c
 */


void FUN_0203411c(undefined8 *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long alStack_230 [64];
  int local_24;
  
  iVar3 = FUN_00154450(*param_1,param_1[1]);
  if (iVar3 == 1) {
    memset(alStack_230,0,0x200);
    local_24 = 0;
    FUN_020343c0(alStack_230,&local_24);
    lVar4 = FUN_008cca50();
    if ((*(byte *)(lVar4 + 0x1c8) & 1) == 0) {
      lVar4 = lVar4 + 0x1c9;
    }
    else {
      lVar4 = *(long *)(lVar4 + 0x1d8);
    }
    alStack_230[(long)local_24 * 2] = lVar4;
    alStack_230[(long)local_24 * 2 + 1] = (long)&LAB_02034460;
    local_24 = local_24 + 1;
    FUN_00155a20(*param_1,alStack_230,0);
    FUN_00151fe0(*param_1,0,2);
    if ((*PTR_DAT_04383038 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_04383038);
      puVar2 = PTR_DAT_04383040;
      if (iVar3 != 0) {
        FUN_01ef1180(PTR_DAT_04383040);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04383038);
      }
    }
    uVar1 = *(ulong *)(PTR_DAT_04383040 + 8);
    puVar2 = *(undefined **)(PTR_DAT_04383040 + 0x10);
    if ((*PTR_DAT_04383040 & 1) == 0) {
      puVar2 = PTR_DAT_04383040 + 1;
      uVar1 = (ulong)((byte)*PTR_DAT_04383040 >> 1);
    }
    FUN_001514f0(*param_1,puVar2,uVar1);
    FUN_00152550(*param_1,0xfffffffe,&DAT_038f8fce);
    FUN_001516f0(*param_1,&LAB_02034370,0);
    FUN_00152550(*param_1,0xfffffffe,&DAT_0397bfcb);
    uVar5 = *param_1;
    lVar4 = FUN_008cca50();
    if ((*(byte *)(lVar4 + 0x2d0) & 1) == 0) {
      lVar4 = lVar4 + 0x2d1;
    }
    else {
      lVar4 = *(long *)(lVar4 + 0x2e0);
    }
    FUN_00152550(uVar5,0xfffffffe,lVar4);
  }
  FUN_00152ae0(*param_1,0xfffffffe);
  return;
}


