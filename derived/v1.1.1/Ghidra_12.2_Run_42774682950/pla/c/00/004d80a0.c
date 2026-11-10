/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004d80a0; name: FUN_004d80a0
 */


long FUN_004d80a0(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (param_5 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_6 == 0) {
    return 0;
  }
  lVar2 = FUN_0040de30();
  if (lVar2 == 0) {
    return 0;
  }
  lVar3 = FUN_0040c260();
  if (lVar3 == 0) {
    lVar4 = 0;
LAB_004d81f4:
    lVar5 = 0;
LAB_004d81f8:
    lVar6 = 0;
  }
  else {
    lVar4 = FUN_0040c260();
    if (lVar4 == 0) goto LAB_004d81f4;
    lVar5 = FUN_0040c260();
    if ((lVar5 == 0) || (iVar1 = FUN_00424be0(lVar3,param_3,param_4,param_1,lVar2), iVar1 == 0))
    goto LAB_004d81f8;
    lVar6 = FUN_004d7ad0(param_1,param_3,param_1);
    if ((((lVar6 != 0) && (iVar1 = FUN_00413180(lVar4,lVar3,lVar6,param_1,lVar2), iVar1 != 0)) &&
        (iVar1 = FUN_00412f20(lVar3,param_2,lVar4,param_1,lVar2), iVar1 != 0)) &&
       ((iVar1 = FUN_004129a0(lVar5,param_6,param_4,lVar2), iVar1 != 0 &&
        (iVar1 = FUN_00411730(lVar4,param_5,lVar5), iVar1 != 0)))) {
      lVar7 = FUN_0040c260();
      if ((lVar7 == 0) || (iVar1 = FUN_00424be0(lVar7,lVar3,lVar4,param_1,lVar2), iVar1 != 0))
      goto LAB_004d8200;
      FUN_0040c1e0(lVar7);
    }
  }
  lVar7 = 0;
LAB_004d8200:
  FUN_0040def0(lVar2);
  FUN_0040c140(lVar3);
  FUN_0040c140(lVar4);
  FUN_0040c140(lVar5);
  FUN_0040c1e0(lVar6);
  return lVar7;
}


