/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008ecad0; name: FUN_008ecad0
 */


void FUN_008ecad0(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  byte *pbVar3;
  int iVar4;
  void *pvVar5;
  long lVar6;
  byte *pbVar7;
  undefined8 uVar8;
  long alStack_230 [64];
  undefined1 auStack_28 [4];
  int local_24;
  
  iVar4 = FUN_00154450(*param_1,param_1[1]);
  if (iVar4 == 1) {
    pvVar5 = memset(alStack_230,0,0x200);
    local_24 = 0;
    FUN_008ed100(pvVar5,alStack_230,&local_24,auStack_28);
    lVar6 = FUN_008cca50();
    lVar1 = lVar6 + 0x1c9;
    if ((*(byte *)(lVar6 + 0x1c8) & 1) != 0) {
      lVar1 = *(long *)(lVar6 + 0x1d8);
    }
    alStack_230[(long)local_24 * 2] = lVar1;
    alStack_230[(long)local_24 * 2 + 1] = (long)PTR_LAB_04379b40;
    local_24 = local_24 + 1;
    FUN_00155a20(*param_1,alStack_230,0);
    FUN_00151fe0(*param_1,0,2);
    pbVar7 = (byte *)FUN_008ecc30();
    uVar2 = *(ulong *)(pbVar7 + 8);
    pbVar3 = *(byte **)(pbVar7 + 0x10);
    if ((*pbVar7 & 1) == 0) {
      pbVar3 = pbVar7 + 1;
      uVar2 = (ulong)(*pbVar7 >> 1);
    }
    FUN_001514f0(*param_1,pbVar3,uVar2);
    FUN_00152550(*param_1,0xfffffffe,&DAT_038f8fce);
    FUN_001516f0(*param_1,PTR_LAB_04379b48,0);
    FUN_00152550(*param_1,0xfffffffe,&DAT_0397bfcb);
    uVar8 = *param_1;
    lVar6 = FUN_008cca50();
    lVar1 = lVar6 + 0x2d1;
    if ((*(byte *)(lVar6 + 0x2d0) & 1) != 0) {
      lVar1 = *(long *)(lVar6 + 0x2e0);
    }
    FUN_00152550(uVar8,0xfffffffe,lVar1);
  }
  FUN_00152ae0(*param_1,0xfffffffe);
  return;
}


