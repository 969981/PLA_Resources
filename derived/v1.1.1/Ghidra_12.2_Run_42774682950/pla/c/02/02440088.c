/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02440088; name: FUN_02440088
 */


void FUN_02440088(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long alStack_230 [64];
  int local_24;
  
  iVar4 = FUN_00154450(*param_1,param_1[1]);
  if (iVar4 == 1) {
    memset(alStack_230,0,0x200);
    local_24 = 0;
    FUN_02440280(alStack_230,&local_24);
    lVar5 = FUN_008cca50();
    lVar2 = lVar5 + 0x1c9;
    if ((*(byte *)(lVar5 + 0x1c8) & 1) != 0) {
      lVar2 = *(long *)(lVar5 + 0x1d8);
    }
    alStack_230[(long)local_24 * 2] = lVar2;
    alStack_230[(long)local_24 * 2 + 1] = (long)FUN_02440fc0;
    local_24 = local_24 + 1;
    FUN_00155a20(*param_1,alStack_230,0);
    FUN_00151fe0(*param_1,0,2);
    if (((DAT_043e5808 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_043e5808), iVar4 != 0)) {
      FUN_0243f490();
      FUN_00100250(PTR__string_04379718,&DAT_043e57f0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043e5808);
    }
    if ((DAT_043e57f0 & 1) == 0) {
      uVar1 = (ulong)(DAT_043e57f0 >> 1);
      puVar3 = &DAT_043e57f1;
    }
    else {
      uVar1 = DAT_043e57f8;
      puVar3 = DAT_043e5800;
    }
    FUN_001514f0(*param_1,puVar3,uVar1);
    FUN_00152550(*param_1,0xfffffffe,&DAT_038f8fce);
    FUN_001516f0(*param_1,&LAB_02440230,0);
    FUN_00152550(*param_1,0xfffffffe,&DAT_0397bfcb);
    uVar6 = *param_1;
    lVar5 = FUN_008cca50();
    lVar2 = lVar5 + 0x2d1;
    if ((*(byte *)(lVar5 + 0x2d0) & 1) != 0) {
      lVar2 = *(long *)(lVar5 + 0x2e0);
    }
    FUN_00152550(uVar6,0xfffffffe,lVar2);
  }
  FUN_00152ae0(*param_1,0xfffffffe);
  return;
}


