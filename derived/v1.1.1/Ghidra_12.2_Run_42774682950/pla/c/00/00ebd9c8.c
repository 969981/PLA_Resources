/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ebd9c8; name: FUN_00ebd9c8
 */


void FUN_00ebd9c8(undefined8 *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  int iVar3;
  void *pvVar4;
  long lVar5;
  undefined8 uVar6;
  long alStack_230 [64];
  undefined1 auStack_28 [4];
  int local_24;
  
  iVar3 = FUN_00154450(*param_1,param_1[1]);
  if (iVar3 == 1) {
    pvVar4 = memset(alStack_230,0,0x200);
    local_24 = 0;
    FUN_00ebe250(pvVar4,alStack_230,&local_24,auStack_28);
    lVar5 = FUN_008cca50();
    if ((*(byte *)(lVar5 + 0x1c8) & 1) == 0) {
      lVar5 = lVar5 + 0x1c9;
    }
    else {
      lVar5 = *(long *)(lVar5 + 0x1d8);
    }
    alStack_230[(long)local_24 * 2] = lVar5;
    alStack_230[(long)local_24 * 2 + 1] = (long)PTR_FUN_0437c8d8;
    local_24 = local_24 + 1;
    FUN_00155a20(*param_1,alStack_230,0);
    FUN_00151fe0(*param_1,0,2);
    if ((*PTR_DAT_0437c8a8 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_0437c8a8);
      puVar2 = PTR_DAT_0437c8b0;
      if (iVar3 != 0) {
        FUN_00ebdb80(PTR_DAT_0437c8b0);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437c8a8);
      }
    }
    uVar1 = *(ulong *)(PTR_DAT_0437c8b0 + 8);
    puVar2 = *(undefined **)(PTR_DAT_0437c8b0 + 0x10);
    if ((*PTR_DAT_0437c8b0 & 1) == 0) {
      puVar2 = PTR_DAT_0437c8b0 + 1;
      uVar1 = (ulong)((byte)*PTR_DAT_0437c8b0 >> 1);
    }
    FUN_001514f0(*param_1,puVar2,uVar1);
    FUN_00152550(*param_1,0xfffffffe,&DAT_038f8fce);
    FUN_001516f0(*param_1,PTR_LAB_0437c8e0,0);
    FUN_00152550(*param_1,0xfffffffe,&DAT_0397bfcb);
    uVar6 = *param_1;
    lVar5 = FUN_008cca50();
    if ((*(byte *)(lVar5 + 0x2d0) & 1) == 0) {
      lVar5 = lVar5 + 0x2d1;
    }
    else {
      lVar5 = *(long *)(lVar5 + 0x2e0);
    }
    FUN_00152550(uVar6,0xfffffffe,lVar5);
  }
  FUN_00152ae0(*param_1,0xfffffffe);
  return;
}


