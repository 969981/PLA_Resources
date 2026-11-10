/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02201bdc; name: FUN_02201bdc
 */


void FUN_02201bdc(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_230 [512];
  undefined4 local_24;
  
  iVar4 = FUN_00154450(*param_1,param_1[1]);
  if (iVar4 == 1) {
    memset(auStack_230,0,0x200);
    local_24 = 0;
    FUN_022025a0(auStack_230,&local_24);
    FUN_00155a20(*param_1,auStack_230,0);
    FUN_00151fe0(*param_1,0,2);
    pbVar5 = (byte *)FUN_02201d00();
    uVar2 = *(ulong *)(pbVar5 + 8);
    pbVar3 = *(byte **)(pbVar5 + 0x10);
    if ((*pbVar5 & 1) == 0) {
      pbVar3 = pbVar5 + 1;
      uVar2 = (ulong)(*pbVar5 >> 1);
    }
    FUN_001514f0(*param_1,pbVar3,uVar2);
    FUN_00152550(*param_1,0xfffffffe,&DAT_038f8fce);
    FUN_001516f0(*param_1,&LAB_02202550,0);
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


