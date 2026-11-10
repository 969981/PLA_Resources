/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009030dc; name: FUN_009030dc
 */


void FUN_009030dc(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  byte *pbVar3;
  int iVar4;
  long lVar5;
  byte *pbVar6;
  undefined8 uVar7;
  long alStack_230 [64];
  int local_24;
  
  iVar4 = FUN_00154450(*param_1,param_1[1]);
  if (iVar4 == 1) {
    memset(alStack_230,0,0x200);
    local_24 = 0;
    FUN_00903320(alStack_230,&local_24);
    lVar5 = FUN_008cca50();
    lVar1 = lVar5 + 0x1c9;
    if ((*(byte *)(lVar5 + 0x1c8) & 1) != 0) {
      lVar1 = *(long *)(lVar5 + 0x1d8);
    }
    lVar5 = (long)local_24;
    alStack_230[lVar5 * 2] = lVar1;
    alStack_230[lVar5 * 2 + 1] = (long)&LAB_009033c0;
    FUN_00155a20(*param_1,alStack_230,0);
    FUN_00151fe0(*param_1,0,2);
    pbVar6 = (byte *)FUN_008d9d20();
    uVar2 = *(ulong *)(pbVar6 + 8);
    pbVar3 = *(byte **)(pbVar6 + 0x10);
    if ((*pbVar6 & 1) == 0) {
      pbVar3 = pbVar6 + 1;
      uVar2 = (ulong)(*pbVar6 >> 1);
    }
    FUN_001514f0(*param_1,pbVar3,uVar2);
    FUN_00152550(*param_1,0xfffffffe,&DAT_038f8fce);
    FUN_001516f0(*param_1,&LAB_009032d0,0);
    FUN_00152550(*param_1,0xfffffffe,&DAT_0397bfcb);
    uVar7 = *param_1;
    lVar5 = FUN_008cca50();
    lVar1 = lVar5 + 0x2d1;
    if ((*(byte *)(lVar5 + 0x2d0) & 1) != 0) {
      lVar1 = *(long *)(lVar5 + 0x2e0);
    }
    FUN_00152550(uVar7,0xfffffffe,lVar1);
  }
  FUN_00152ae0(*param_1,0xfffffffe);
  return;
}


