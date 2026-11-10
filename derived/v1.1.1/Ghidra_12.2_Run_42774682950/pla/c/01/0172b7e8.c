/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0172b7e8; name: FUN_0172b7e8
 */


void FUN_0172b7e8(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long alStack_230 [64];
  int local_24;
  
  iVar4 = FUN_00154450(*param_1,param_1[1]);
  if (iVar4 == 1) {
    memset(alStack_230,0,0x200);
    local_24 = 0;
    FUN_0172bae0(alStack_230,&local_24);
    lVar5 = FUN_008cca50();
    lVar1 = lVar5 + 0x1c9;
    if ((*(byte *)(lVar5 + 0x1c8) & 1) != 0) {
      lVar1 = *(long *)(lVar5 + 0x1d8);
    }
    alStack_230[(long)local_24 * 2] = lVar1;
    alStack_230[(long)local_24 * 2 + 1] = (long)FUN_0172bb80;
    local_24 = local_24 + 1;
    FUN_00155a20(*param_1,alStack_230,0);
    FUN_00151fe0(*param_1,0,2);
    if ((*PTR_DAT_04380120 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(PTR_DAT_04380120);
      puVar3 = PTR_DAT_04380128;
      if (iVar4 != 0) {
        FUN_015cc390(PTR_DAT_04380128);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04380120);
      }
    }
    uVar2 = *(ulong *)(PTR_DAT_04380128 + 8);
    puVar3 = *(undefined **)(PTR_DAT_04380128 + 0x10);
    if ((*PTR_DAT_04380128 & 1) == 0) {
      puVar3 = PTR_DAT_04380128 + 1;
      uVar2 = (ulong)((byte)*PTR_DAT_04380128 >> 1);
    }
    FUN_001514f0(*param_1,puVar3,uVar2);
    FUN_00152550(*param_1,0xfffffffe,&DAT_038f8fce);
    FUN_001516f0(*param_1,&LAB_0172ba90,0);
    FUN_00152550(*param_1,0xfffffffe,&DAT_0397bfcb);
    uVar6 = *param_1;
    lVar5 = FUN_008cca50();
    lVar1 = lVar5 + 0x2d1;
    if ((*(byte *)(lVar5 + 0x2d0) & 1) != 0) {
      lVar1 = *(long *)(lVar5 + 0x2e0);
    }
    FUN_00152550(uVar6,0xfffffffe,lVar1);
  }
  FUN_00152ae0(*param_1,0xfffffffe);
  return;
}


