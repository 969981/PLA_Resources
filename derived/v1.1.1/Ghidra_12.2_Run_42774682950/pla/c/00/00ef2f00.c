/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ef2f00; name: FUN_00ef2f00
 */


void FUN_00ef2f00(undefined8 *param_1)

{
  ulong uVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_230 [512];
  undefined4 local_24;
  
  iVar3 = FUN_00154450(*param_1,param_1[1]);
  if (iVar3 == 1) {
    memset(auStack_230,0,0x200);
    local_24 = 0;
    FUN_00ef3900(auStack_230,&local_24);
    FUN_00155a20(*param_1,auStack_230,0);
    FUN_00151fe0(*param_1,0,2);
    pbVar4 = (byte *)FUN_00ef3020();
    uVar1 = *(ulong *)(pbVar4 + 8);
    pbVar2 = *(byte **)(pbVar4 + 0x10);
    if ((*pbVar4 & 1) == 0) {
      pbVar2 = pbVar4 + 1;
      uVar1 = (ulong)(*pbVar4 >> 1);
    }
    FUN_001514f0(*param_1,pbVar2,uVar1);
    FUN_00152550(*param_1,0xfffffffe,&DAT_038f8fce);
    FUN_001516f0(*param_1,&LAB_00ef38b0,0);
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


