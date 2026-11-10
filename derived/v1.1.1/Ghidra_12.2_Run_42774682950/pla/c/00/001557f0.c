/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001557f0; name: FUN_001557f0
 */


void FUN_001557f0(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  ulong uVar6;
  
  uVar6 = param_2 & 0xffffffff;
  iVar1 = FUN_001556c0(param_1,param_2,"__tostring");
  if (iVar1 != 0) {
    iVar1 = FUN_001506a0(param_1,0xffffffff);
    if (iVar1 == 0) {
      FUN_00154110(param_1,"\'__tostring\' must return a string");
    }
    goto LAB_001559fc;
  }
  uVar2 = FUN_00150310(param_1,uVar6);
  switch(uVar2) {
  case 0:
    pcVar5 = "nil";
    goto LAB_001558a4;
  case 1:
    iVar1 = FUN_00150cc0(param_1,uVar6);
    pcVar5 = "false";
    if (iVar1 != 0) {
      pcVar5 = "true";
    }
LAB_001558a4:
    FUN_00151570(param_1,pcVar5);
    break;
  default:
    iVar1 = FUN_00152090(param_1,uVar6);
    if (iVar1 == 0) {
      iVar1 = 0;
LAB_0015599c:
      uVar2 = FUN_00150310(param_1,uVar6);
      uVar3 = FUN_001503f0(param_1,uVar2);
    }
    else {
      FUN_00151570(param_1,"__name");
      iVar1 = FUN_00151d20(param_1,0xfffffffe);
      if (iVar1 == 0) {
        FUN_0014ff10(param_1,0xfffffffd);
        goto LAB_0015599c;
      }
      FUN_0014ff70(param_1,0xfffffffe,0xffffffff);
      FUN_0014ff10(param_1,0xfffffffe);
      if (iVar1 != 4) goto LAB_0015599c;
      uVar3 = FUN_00150da0(param_1,0xffffffff,0);
    }
    uVar4 = FUN_001513b0(param_1,uVar6);
    FUN_00151650(param_1,"%s: %p",uVar3,uVar4);
    if (iVar1 != 0) {
      FUN_0014ff70(param_1,0xfffffffe,0xffffffff);
      FUN_0014ff10(param_1,0xfffffffe);
    }
    break;
  case 3:
    iVar1 = FUN_001504d0(param_1,uVar6);
    if (iVar1 == 0) {
      FUN_00150a90(param_1,uVar6,0);
      FUN_00151650(param_1,&DAT_038ee2d6);
    }
    else {
      uVar3 = FUN_00150ba0(param_1,uVar6,0);
      FUN_00151650(param_1,&DAT_038d01ef,uVar3);
    }
    break;
  case 4:
    FUN_00150260(param_1,uVar6);
  }
LAB_001559fc:
  FUN_00150da0(param_1,0xffffffff,param_3);
  return;
}


