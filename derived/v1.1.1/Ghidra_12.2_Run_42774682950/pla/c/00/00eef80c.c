/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00eef80c; name: FUN_00eef80c
 */


void FUN_00eef80c(undefined8 *param_1)

{
  ulong uVar1;
  byte *pbVar2;
  int iVar3;
  void *pvVar4;
  byte *pbVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_230 [512];
  undefined1 auStack_28 [4];
  undefined4 local_24;
  
  iVar3 = FUN_00154450(*param_1,param_1[1]);
  if (iVar3 == 1) {
    pvVar4 = memset(auStack_230,0,0x200);
    local_24 = 0;
    FUN_00ef0220(pvVar4,auStack_230,&local_24,auStack_28);
    FUN_00155a20(*param_1,auStack_230,0);
    FUN_00151fe0(*param_1,0,2);
    pbVar5 = (byte *)FUN_00eef930();
    uVar1 = *(ulong *)(pbVar5 + 8);
    pbVar2 = *(byte **)(pbVar5 + 0x10);
    if ((*pbVar5 & 1) == 0) {
      pbVar2 = pbVar5 + 1;
      uVar1 = (ulong)(*pbVar5 >> 1);
    }
    FUN_001514f0(*param_1,pbVar2,uVar1);
    FUN_00152550(*param_1,0xfffffffe,&DAT_038f8fce);
    FUN_001516f0(*param_1,PTR_LAB_0437cdd0,0);
    FUN_00152550(*param_1,0xfffffffe,&DAT_0397bfcb);
    uVar7 = *param_1;
    lVar6 = FUN_008cca50();
    if ((*(byte *)(lVar6 + 0x2d0) & 1) == 0) {
      lVar6 = lVar6 + 0x2d1;
    }
    else {
      lVar6 = *(long *)(lVar6 + 0x2e0);
    }
    FUN_00152550(uVar7,0xfffffffe,lVar6);
  }
  FUN_00152ae0(*param_1,0xfffffffe);
  return;
}


