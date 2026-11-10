/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008c7680; name: FUN_008c7680
 */


int FUN_008c7680(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar6 = FUN_00933eec(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0xd0));
  iVar5 = 0;
  if (lVar6 != 0) {
    uVar1 = FUN_00931f18();
    uVar2 = FUN_00931f24(lVar6);
    uVar3 = FUN_00932208(lVar6);
    uVar7 = FUN_00923c40(*(undefined8 *)(param_1 + 0xb0));
    iVar4 = FUN_0091a750(uVar7,uVar1,uVar2,param_3,0,uVar3);
    iVar5 = FUN_00932200(lVar6);
    iVar5 = iVar5 + iVar4;
  }
  return iVar5;
}


