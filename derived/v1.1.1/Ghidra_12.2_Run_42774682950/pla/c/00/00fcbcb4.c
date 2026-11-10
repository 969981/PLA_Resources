/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fcbcb4; name: FUN_00fcbcb4
 */


void FUN_00fcbcb4(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long alStack_230 [64];
  int local_24;
  
  iVar3 = FUN_00154450(*param_1,param_1[1]);
  if (iVar3 == 1) {
    memset(alStack_230,0,0x200);
    local_24 = 0;
    FUN_00fcc760(alStack_230,&local_24);
    lVar4 = FUN_008cca50();
    lVar2 = lVar4 + 0x1c9;
    if ((*(byte *)(lVar4 + 0x1c8) & 1) != 0) {
      lVar2 = *(long *)(lVar4 + 0x1d8);
    }
    lVar4 = (long)local_24;
    alStack_230[lVar4 * 2] = lVar2;
    alStack_230[lVar4 * 2 + 1] = (long)&LAB_00fcf470;
    FUN_00155a20(*param_1,alStack_230,0);
    FUN_00151fe0(*param_1,0,2);
    FUN_00fcbeb0();
    if (((byte)DAT_043b7440 & 1) == 0) {
      uVar1 = (ulong)((byte)DAT_043b7440 >> 1);
      uVar5 = 0x43b7441;
    }
    else {
      uVar1 = DAT_043b7448;
      uVar5 = DAT_043b7450;
    }
    FUN_001514f0(*param_1,uVar5,uVar1);
    FUN_00152550(*param_1,0xfffffffe,&DAT_038f8fce);
    FUN_001516f0(*param_1,&LAB_00fcc710,0);
    FUN_00152550(*param_1,0xfffffffe,&DAT_0397bfcb);
    uVar5 = *param_1;
    lVar4 = FUN_008cca50();
    lVar2 = lVar4 + 0x2d1;
    if ((*(byte *)(lVar4 + 0x2d0) & 1) != 0) {
      lVar2 = *(long *)(lVar4 + 0x2e0);
    }
    FUN_00152550(uVar5,0xfffffffe,lVar2);
  }
  FUN_00152ae0(*param_1,0xfffffffe);
  return;
}


