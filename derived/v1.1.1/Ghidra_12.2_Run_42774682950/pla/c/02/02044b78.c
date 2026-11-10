/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02044b78; name: FUN_02044b78
 */


void FUN_02044b78(undefined8 *param_1)

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
    FUN_02044e10(alStack_230,&local_24);
    lVar4 = FUN_008cca50();
    if ((*(byte *)(lVar4 + 0x1c8) & 1) == 0) {
      lVar4 = lVar4 + 0x1c9;
    }
    else {
      lVar4 = *(long *)(lVar4 + 0x1d8);
    }
    alStack_230[(long)local_24 * 2] = lVar4;
    alStack_230[(long)local_24 * 2 + 1] = (long)FUN_02045ee0;
    local_24 = local_24 + 1;
    FUN_00155a20(*param_1,alStack_230,0);
    FUN_00151fe0(*param_1,0,2);
    if (((DAT_043d72e0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043d72e0), iVar3 != 0)) {
      FUN_0203ba20();
      FUN_00100250(PTR__string_04379718,&DAT_043d72c8,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043d72e0);
    }
    if ((DAT_043d72c8 & 1) == 0) {
      uVar1 = (ulong)(DAT_043d72c8 >> 1);
      puVar2 = &DAT_043d72c9;
    }
    else {
      uVar1 = DAT_043d72d0;
      puVar2 = DAT_043d72d8;
    }
    FUN_001514f0(*param_1,puVar2,uVar1);
    FUN_00152550(*param_1,0xfffffffe,&DAT_038f8fce);
    FUN_001516f0(*param_1,&LAB_02044dc0,0);
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


