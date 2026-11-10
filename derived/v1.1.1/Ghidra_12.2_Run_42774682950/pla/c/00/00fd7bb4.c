/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fd7bb4; name: FUN_00fd7bb4
 */


void FUN_00fd7bb4(undefined8 *param_1)

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
    FUN_00fd8490(alStack_230,&local_24);
    lVar5 = FUN_008cca50();
    lVar2 = lVar5 + 0x1c9;
    if ((*(byte *)(lVar5 + 0x1c8) & 1) != 0) {
      lVar2 = *(long *)(lVar5 + 0x1d8);
    }
    lVar5 = (long)local_24;
    alStack_230[lVar5 * 2] = lVar2;
    alStack_230[lVar5 * 2 + 1] = (long)FUN_00fdabd0;
    FUN_00155a20(*param_1,alStack_230,0);
    FUN_00151fe0(*param_1,0,2);
    FUN_00fd7db0();
    if ((DAT_043b78d8 & 1) == 0) {
      uVar1 = (ulong)(DAT_043b78d8 >> 1);
      puVar3 = &DAT_043b78d9;
    }
    else {
      uVar1 = DAT_043b78e0;
      puVar3 = DAT_043b78e8;
    }
    FUN_001514f0(*param_1,puVar3,uVar1);
    FUN_00152550(*param_1,0xfffffffe,&DAT_038f8fce);
    FUN_001516f0(*param_1,&LAB_00fd8440,0);
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


