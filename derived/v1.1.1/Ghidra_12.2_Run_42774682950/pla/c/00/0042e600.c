/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042e600; name: FUN_0042e600
 */


undefined8 FUN_0042e600(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  
  if ((*(int *)((byte *)*param_1 + 4) != *(int *)(*param_2 + 4)) ||
     ((((int)param_1[4] != 0 && ((int)param_2[4] != 0)) && ((int)param_1[4] != (int)param_2[4])))) {
    return 1;
  }
  if ((*(byte *)*param_1 >> 1 & 1) != 0) {
    return 0;
  }
  if (param_3 == 0) {
    param_3 = FUN_0040de30();
    lVar10 = param_3;
    if (param_3 == 0) {
      return 0xffffffff;
    }
  }
  else {
    lVar10 = 0;
  }
  FUN_0040e090(param_3);
  uVar2 = FUN_0040e240(param_3);
  uVar3 = FUN_0040e240(param_3);
  uVar4 = FUN_0040e240(param_3);
  uVar5 = FUN_0040e240(param_3);
  uVar6 = FUN_0040e240(param_3);
  lVar7 = FUN_0040e240(param_3);
  if (lVar7 == 0) {
LAB_0042e840:
    FUN_0040e1b0(param_3);
    FUN_0040def0(lVar10);
    return 0xffffffff;
  }
  iVar1 = (**(code **)(*param_1 + 0x30))(param_1,uVar2,uVar3,uVar4,param_3);
  if (((iVar1 != 0) &&
      (iVar1 = (**(code **)(*param_2 + 0x30))(param_2,uVar5,uVar6,lVar7,param_3), iVar1 != 0)) &&
     ((iVar1 = FUN_0040cc60(uVar2,uVar5), iVar1 == 0 &&
      ((iVar1 = FUN_0040cc60(uVar3,uVar6), iVar1 == 0 &&
       (iVar1 = FUN_0040cc60(uVar4,lVar7), iVar1 == 0)))))) {
    lVar7 = *param_1;
    if (*(code **)(lVar7 + 0xd8) == (code *)0x0) {
      uVar2 = 0x42;
      uVar3 = 0x362;
    }
    else {
      plVar8 = (long *)param_1[1];
      if (lVar7 == *plVar8) {
        plVar9 = (long *)param_2[1];
        iVar1 = (int)param_1[4];
        if (((((iVar1 == 0) || ((int)plVar8[1] == 0)) || (iVar1 == (int)plVar8[1])) &&
            (lVar7 == *plVar9)) &&
           (((iVar1 == 0 || ((int)plVar9[1] == 0)) || (iVar1 == (int)plVar9[1])))) {
          iVar1 = (**(code **)(lVar7 + 0xd8))(param_1,plVar8,plVar9,param_3);
          if (iVar1 == 0) {
            if ((param_1[2] == 0) || (param_2[2] == 0)) goto LAB_0042e840;
            lVar11 = param_1[3];
            lVar7 = param_2[3];
            iVar1 = FUN_0040cc60();
            if ((iVar1 == 0) && (iVar1 = FUN_0040cc60(lVar11,lVar7), iVar1 == 0)) {
              uVar2 = 0;
              goto LAB_0042e7d0;
            }
          }
          goto LAB_0042e7cc;
        }
      }
      uVar2 = 0x65;
      uVar3 = 0x366;
    }
    FUN_004014b0(0x10,0x71,uVar2,"external/openssl/crypto/ec/ec_lib.c",uVar3);
  }
LAB_0042e7cc:
  uVar2 = 1;
LAB_0042e7d0:
  FUN_0040e1b0(param_3);
  FUN_0040def0(lVar10);
  return uVar2;
}


