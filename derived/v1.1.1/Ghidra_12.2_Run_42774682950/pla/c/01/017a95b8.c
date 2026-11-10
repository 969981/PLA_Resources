/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017a95b8; name: FUN_017a95b8
 */


void FUN_017a95b8(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  byte *pbVar3;
  int iVar4;
  void *pvVar5;
  byte *pbVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_230 [512];
  undefined1 auStack_28 [4];
  undefined4 local_24;
  
  iVar4 = FUN_00154450(*param_1,param_1[1]);
  if (iVar4 == 1) {
    pvVar5 = memset(auStack_230,0,0x200);
    local_24 = 0;
    FUN_017a9df0(pvVar5,auStack_230,&local_24,auStack_28);
    FUN_00155a20(*param_1,auStack_230,0);
    FUN_00151fe0(*param_1,0,2);
    pbVar6 = (byte *)FUN_017a96e0();
    uVar2 = *(ulong *)(pbVar6 + 8);
    pbVar3 = *(byte **)(pbVar6 + 0x10);
    if ((*pbVar6 & 1) == 0) {
      pbVar3 = pbVar6 + 1;
      uVar2 = (ulong)(*pbVar6 >> 1);
    }
    FUN_001514f0(*param_1,pbVar3,uVar2);
    FUN_00152550(*param_1,0xfffffffe,&DAT_038f8fce);
    FUN_001516f0(*param_1,PTR_LAB_043812f8,0);
    FUN_00152550(*param_1,0xfffffffe,&DAT_0397bfcb);
    uVar8 = *param_1;
    lVar7 = FUN_008cca50();
    lVar1 = lVar7 + 0x2d1;
    if ((*(byte *)(lVar7 + 0x2d0) & 1) != 0) {
      lVar1 = *(long *)(lVar7 + 0x2e0);
    }
    FUN_00152550(uVar8,0xfffffffe,lVar1);
  }
  FUN_00152ae0(*param_1,0xfffffffe);
  return;
}


