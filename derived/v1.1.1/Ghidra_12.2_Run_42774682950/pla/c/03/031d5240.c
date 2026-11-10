/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d5240; name: FUN_031d5240
 */


void FUN_031d5240(int *param_1,long param_2,long param_3,int *param_4,undefined8 param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  short *psVar9;
  int local_88 [2];
  int local_80 [4];
  int local_70 [2];
  int local_68 [2];
  
  if (*(char *)(param_3 + 0x30) == '\x01') {
    lVar7 = *(long *)(param_3 + 0x20);
    lVar6 = lVar7;
  }
  else {
    lVar6 = FUN_02898b44();
    lVar7 = *(long *)(param_3 + 0x20);
  }
  lVar1 = *(long *)(lVar6 + 0xd0) + (long)*param_4 * 0x10;
  iVar2 = *(int *)(lVar7 + 0x30);
  iVar3 = *(int *)(lVar7 + 0x20);
  psVar9 = (short *)(lVar1 + 10);
  sVar5 = *psVar9;
  iVar4 = *(int *)(lVar7 + 0xe8);
  FUN_0318aeac(param_3,sVar5 + 1);
  if (sVar5 == 0) {
    iVar8 = iVar4;
  }
  else {
    local_70[0] = *(int *)(lVar1 + 4) - iVar2;
    local_68[0] = iVar4;
    FUN_031de520(*(undefined8 *)(param_2 + 0x18),param_3,local_68,local_70,(int)sVar5);
    iVar8 = iVar4 + sVar5;
  }
  local_80[0] = iVar8;
  FUN_031867f4(param_5,lVar6,local_80);
  *(int *)(lVar1 + 4) = iVar4 + iVar2;
  *psVar9 = *psVar9 + 1;
  *(int *)(lVar6 + 0x164) = *(int *)(lVar6 + 0x164) + (int)sVar5;
  local_88[0] = *param_4 + iVar3;
  FUN_0318ac98(param_3,local_88);
  *param_1 = iVar8 + iVar2;
  return;
}


