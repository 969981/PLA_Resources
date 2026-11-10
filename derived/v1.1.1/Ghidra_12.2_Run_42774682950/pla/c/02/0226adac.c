/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0226adac; name: FUN_0226adac
 */


void FUN_0226adac(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  void *pvVar5;
  long lVar6;
  undefined8 uVar7;
  long alStack_230 [64];
  undefined1 auStack_28 [4];
  int local_24;
  
  iVar4 = FUN_00154450(*param_1,param_1[1]);
  if (iVar4 == 1) {
    pvVar5 = memset(alStack_230,0,0x200);
    local_24 = 0;
    FUN_0226b070(pvVar5,alStack_230,&local_24,auStack_28);
    lVar6 = FUN_008cca50();
    lVar1 = lVar6 + 0x1c9;
    if ((*(byte *)(lVar6 + 0x1c8) & 1) != 0) {
      lVar1 = *(long *)(lVar6 + 0x1d8);
    }
    alStack_230[(long)local_24 * 2] = lVar1;
    alStack_230[(long)local_24 * 2 + 1] = (long)PTR_FUN_043862f8;
    local_24 = local_24 + 1;
    FUN_00155a20(*param_1,alStack_230,0);
    FUN_00151fe0(*param_1,0,2);
    if ((*PTR_DAT_043862a8 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(PTR_DAT_043862a8);
      puVar3 = PTR_DAT_043862b0;
      if (iVar4 != 0) {
        FUN_02269f60(PTR_DAT_043862b0);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043862a8);
      }
    }
    uVar2 = *(ulong *)(PTR_DAT_043862b0 + 8);
    puVar3 = *(undefined **)(PTR_DAT_043862b0 + 0x10);
    if ((*PTR_DAT_043862b0 & 1) == 0) {
      puVar3 = PTR_DAT_043862b0 + 1;
      uVar2 = (ulong)((byte)*PTR_DAT_043862b0 >> 1);
    }
    FUN_001514f0(*param_1,puVar3,uVar2);
    FUN_00152550(*param_1,0xfffffffe,&DAT_038f8fce);
    FUN_001516f0(*param_1,PTR_LAB_04386300,0);
    FUN_00152550(*param_1,0xfffffffe,&DAT_0397bfcb);
    uVar7 = *param_1;
    lVar6 = FUN_008cca50();
    lVar1 = lVar6 + 0x2d1;
    if ((*(byte *)(lVar6 + 0x2d0) & 1) != 0) {
      lVar1 = *(long *)(lVar6 + 0x2e0);
    }
    FUN_00152550(uVar7,0xfffffffe,lVar1);
  }
  FUN_00152ae0(*param_1,0xfffffffe);
  return;
}


