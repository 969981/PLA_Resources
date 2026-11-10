/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008c7714; name: FUN_008c7714
 */


int FUN_008c7714(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar7 = FUN_00933eec(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0xd0));
  lVar8 = FUN_00933eec(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0xd0),param_3);
  if (lVar7 == 0 || lVar8 == 0) {
    iVar6 = 0;
  }
  else {
    iVar1 = FUN_009321f8(lVar7);
    iVar2 = FUN_009321f8(lVar8);
    uVar3 = FUN_00931f18(lVar8);
    uVar4 = FUN_00931f24(lVar8);
    uVar5 = FUN_00932208(lVar8);
    uVar9 = FUN_00923c40(*(undefined8 *)(param_1 + 0xb0));
    iVar6 = FUN_0091a834(uVar9,uVar3,uVar4,param_4,0,uVar5);
    iVar6 = (iVar1 - iVar2) + iVar6;
  }
  return iVar6;
}


