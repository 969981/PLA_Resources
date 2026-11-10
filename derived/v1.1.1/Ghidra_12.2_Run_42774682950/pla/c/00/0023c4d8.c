/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0023c4d8; name: FUN_0023c4d8
 */


void FUN_0023c4d8(undefined8 param_1,ushort *param_2,long param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  int iVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_4 + 0x30);
  iVar1 = FUN_002362c4(*(undefined8 *)(param_4 + 0xa0));
  uVar3 = FUN_002512e0(param_5);
  if (lVar7 == param_3) {
    iVar6 = iVar1;
  }
  else {
    iVar6 = *(int *)(param_4 + 0x94);
    iVar2 = FUN_00251360(param_5);
    iVar6 = iVar2 + iVar6;
  }
  uVar4 = FUN_002362b8(*(undefined8 *)(param_4 + 0xa0),iVar6);
  lVar7 = FUN_00235f2c(uVar4,uVar3);
  if (lVar7 == 0) {
    FUN_00235afc(uVar4,uVar3);
    uVar5 = *param_2 | 0x100;
    *param_2 = uVar5;
  }
  else {
    uVar5 = *param_2;
  }
  *param_2 = uVar5 & 0xf1ff | ((short)iVar1 - (short)iVar6) * 0x200 & 0xe00U;
  return;
}


