/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00df9470; name: FUN_00df9470
 */


void FUN_00df9470(undefined8 *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long local_230;
  undefined *puStack_228;
  long local_220;
  undefined *puStack_218;
  undefined1 auStack_210 [480];
  
  iVar3 = FUN_00154450(*param_1,param_1[1]);
  if (iVar3 == 1) {
    memset(auStack_210,0,0x1e0);
    FUN_008cca50();
    FUN_008cca50();
    lVar4 = FUN_008cca50();
    local_230 = lVar4 + 0x181;
    if ((*(byte *)(lVar4 + 0x180) & 1) != 0) {
      local_230 = *(long *)(lVar4 + 400);
    }
    puStack_228 = PTR_LAB_0437bdc8;
    lVar4 = FUN_008cca50();
    local_220 = lVar4 + 0x289;
    if ((*(byte *)(lVar4 + 0x288) & 1) != 0) {
      local_220 = *(long *)(lVar4 + 0x298);
    }
    puStack_218 = PTR_LAB_0437bdd0;
    FUN_00155a20(*param_1,&local_230,0);
    FUN_00151fe0(*param_1,0,2);
    if ((*PTR_DAT_0437bd98 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_0437bd98);
      puVar2 = PTR_DAT_0437bda0;
      if (iVar3 != 0) {
        FUN_00df9630(PTR_DAT_0437bda0);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437bd98);
      }
    }
    uVar1 = *(ulong *)(PTR_DAT_0437bda0 + 8);
    puVar2 = *(undefined **)(PTR_DAT_0437bda0 + 0x10);
    if ((*PTR_DAT_0437bda0 & 1) == 0) {
      puVar2 = PTR_DAT_0437bda0 + 1;
      uVar1 = (ulong)((byte)*PTR_DAT_0437bda0 >> 1);
    }
    FUN_001514f0(*param_1,puVar2,uVar1);
    FUN_00152550(*param_1,0xfffffffe,&DAT_038f8fce);
    FUN_001516f0(*param_1,PTR_LAB_0437bdd8,0);
    FUN_00152550(*param_1,0xfffffffe,&DAT_0397bfcb);
    uVar6 = *param_1;
    lVar5 = FUN_008cca50();
    lVar4 = lVar5 + 0x2d1;
    if ((*(byte *)(lVar5 + 0x2d0) & 1) != 0) {
      lVar4 = *(long *)(lVar5 + 0x2e0);
    }
    FUN_00152550(uVar6,0xfffffffe,lVar4);
  }
  FUN_00152ae0(*param_1,0xfffffffe);
  return;
}


