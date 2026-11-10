/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0108f4c8; name: FUN_0108f4c8
 */


uint FUN_0108f4c8(undefined8 param_1,undefined8 param_2,undefined2 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  int local_64;
  
  iVar1 = FUN_02c4fc60(param_2,0x11);
  if (iVar1 != 1) goto LAB_0108f770;
  uVar2 = FUN_02c601b8(param_1);
  switch(uVar2) {
  case 1:
    iVar1 = FUN_02c4fc60(param_2,0x22);
    uVar3 = (uint)(iVar1 == 0);
    uVar11 = uVar3;
    break;
  case 2:
    iVar1 = FUN_02c4fc60(param_2,0x1e);
    uVar3 = (uint)(iVar1 == 0) << 1;
    uVar11 = (uint)(iVar1 == 0);
    break;
  case 3:
    iVar1 = FUN_02c4fc60(param_2,0x21);
    uVar3 = 3;
    goto LAB_0108fb58;
  case 4:
    iVar1 = FUN_02c4fc60(param_2,0x20);
    uVar3 = (uint)(iVar1 == 0) << 2;
    uVar11 = (uint)(iVar1 == 0);
    break;
  case 5:
    iVar1 = FUN_02c4fc60(param_2,0x1f);
    uVar3 = 5;
LAB_0108fb58:
    if (iVar1 != 0) {
      uVar3 = 0;
    }
    uVar11 = (uint)(iVar1 == 0);
    break;
  default:
    uVar11 = 0;
    goto LAB_0108f520;
  }
  uVar11 = uVar11 ^ 1;
  if (uVar2 == uVar3) {
LAB_0108f520:
    uVar2 = 0;
  }
  else {
    FUN_02c601c8(param_1);
    uVar2 = 1;
  }
  uVar3 = FUN_02c5fbd4(param_1);
  uVar4 = FUN_02c5e2ec(param_1);
  iVar1 = FUN_02c4fc60(param_2,0x26);
  if (((iVar1 == 0) && (iVar1 = FUN_02c4fc60(param_2,0x27), iVar1 == 0)) ||
     (iVar1 = FUN_02c4fc60(param_2,0x28), iVar1 != 0)) {
    iVar1 = FUN_02c4fc60(param_2,0x35);
    if (((iVar1 != 0) && (uVar11 = 1, uVar3 != 0)) && (uVar3 < uVar4)) goto LAB_0108f594;
  }
  else if (uVar3 == 0) {
LAB_0108f594:
    uVar9 = FUN_02c4fc60(param_2,0);
    FUN_0108fcb4(param_1,uVar4,uVar9);
    uVar11 = 1;
    uVar2 = 1;
  }
  else {
    uVar11 = 1;
  }
  iVar1 = FUN_02c4fc60(param_2,0x28);
  if (iVar1 != 0) {
    uVar3 = FUN_02c5fb2c(param_1);
    uVar11 = 1;
    if (uVar3 < 100) {
      FUN_02c5fce4(param_1,1);
      uVar2 = 1;
    }
  }
  iVar1 = FUN_02c4fc60(param_2,0x29);
  iVar5 = FUN_02c4fc60(param_2,0x31);
  if (iVar5 == 0) {
    iVar5 = FUN_02c4fc60(param_2,0x32);
    if (iVar5 != 0) {
      uVar13 = 3;
      goto LAB_0108f7ac;
    }
    uVar11 = uVar11 | iVar1 != 0;
  }
  else {
    uVar13 = 1;
LAB_0108f7ac:
    uVar11 = FUN_0108fd08(param_1,param_3,uVar13);
    uVar2 = uVar2 | uVar11;
    uVar11 = 1;
  }
  iVar1 = FUN_02c4fc60(param_2,0x33);
  if (iVar1 == 0) {
    iVar1 = FUN_02c4fc60(param_2,0x34);
    if (iVar1 != 0) {
      uVar9 = FUN_02c4fc60(param_2,0x47);
      uVar11 = FUN_0108fda8(param_1,0,uVar9);
      uVar9 = FUN_02c4fc60(param_2,0x47);
      uVar3 = FUN_0108fda8(param_1,1,uVar9);
      uVar9 = FUN_02c4fc60(param_2,0x47);
      uVar4 = FUN_0108fda8(param_1,2,uVar9);
      uVar2 = uVar2 | uVar11 | uVar3 | uVar4;
      param_3 = 3;
      goto LAB_0108f834;
    }
  }
  else {
LAB_0108f834:
    uVar9 = FUN_02c4fc60(param_2,0x47);
    uVar11 = FUN_0108fda8(param_1,param_3,uVar9);
    uVar2 = uVar2 | uVar11;
    uVar11 = 1;
  }
  local_64 = FUN_02c5dc80(param_1,0);
  iVar5 = FUN_02c5dc80(param_1,1);
  iVar6 = FUN_02c5dc80(param_1,2);
  iVar7 = FUN_02c5dc80(param_1,5);
  iVar1 = FUN_02c5dc80(param_1,3);
  iVar8 = FUN_02c5dc80(param_1,4);
  uVar9 = FUN_02c4fc60(param_2,0x3c);
  iVar10 = FUN_02c4fc60(param_2,0x36);
  if ((iVar10 != 0) &&
     ((iVar10 = FUN_02c4fc60(param_2,0x40), iVar10 < 1 ||
      (iVar12 = FUN_02c5be48(param_1), iVar12 != 0x124)))) {
    iVar12 = FUN_0108fe20(local_64,iVar8 + iVar1 + iVar5 + iVar6 + iVar7,iVar10,uVar9);
    if (iVar12 != -1) {
      FUN_02c5dcdc(param_1,0,iVar12);
      uVar2 = 1;
      local_64 = iVar12;
    }
    uVar11 = uVar11 | 0 < iVar10;
  }
  iVar10 = FUN_02c4fc60(param_2,0x37);
  if (iVar10 != 0) {
    iVar10 = FUN_02c4fc60(param_2,0x41);
    iVar12 = FUN_0108fe20(iVar5,iVar8 + iVar1 + iVar6 + iVar7 + local_64,iVar10,uVar9);
    if (iVar12 != -1) {
      uVar2 = 1;
      FUN_02c5dcdc(param_1,1,iVar12);
      iVar5 = iVar12;
    }
    uVar11 = uVar11 | 0 < iVar10;
  }
  iVar10 = FUN_02c4fc60(param_2,0x38);
  if (iVar10 != 0) {
    iVar10 = FUN_02c4fc60(param_2,0x42);
    iVar12 = FUN_0108fe20(iVar6,iVar8 + iVar1 + iVar7 + local_64 + iVar5,iVar10,uVar9);
    if (iVar12 != -1) {
      FUN_02c5dcdc(param_1,2,iVar12);
      uVar2 = 1;
      iVar6 = iVar12;
    }
    uVar11 = uVar11 | 0 < iVar10;
  }
  iVar10 = FUN_02c4fc60(param_2,0x39);
  if (iVar10 != 0) {
    iVar10 = FUN_02c4fc60(param_2,0x43);
    iVar12 = FUN_0108fe20(iVar7,iVar8 + iVar1 + local_64 + iVar5 + iVar6,iVar10,uVar9);
    if (iVar12 != -1) {
      FUN_02c5dcdc(param_1,5,iVar12);
      uVar2 = 1;
      iVar7 = iVar12;
    }
    uVar11 = uVar11 | 0 < iVar10;
  }
  iVar10 = FUN_02c4fc60(param_2,0x3a);
  if (iVar10 != 0) {
    iVar10 = FUN_02c4fc60(param_2,0x44);
    iVar12 = FUN_0108fe20(iVar1,local_64 + iVar8 + iVar5 + iVar6 + iVar7,iVar10,uVar9);
    if (iVar12 != -1) {
      FUN_02c5dcdc(param_1,3,iVar12);
      uVar2 = 1;
      iVar1 = iVar12;
    }
    uVar11 = uVar11 | 0 < iVar10;
  }
  iVar10 = FUN_02c4fc60(param_2,0x3b);
  if (iVar10 != 0) {
    iVar10 = FUN_02c4fc60(param_2,0x45);
    iVar1 = FUN_0108fe20(iVar8,iVar5 + local_64 + iVar6 + iVar7 + iVar1,iVar10,uVar9);
    if (iVar1 != -1) {
      FUN_02c5dcdc(param_1,4,iVar1);
      uVar2 = 1;
    }
    uVar11 = uVar11 | 0 < iVar10;
  }
  if (((uVar2 & 1) == 0) && (uVar11 != 0)) {
LAB_0108f770:
    uVar2 = 0;
  }
  else {
    uVar9 = FUN_02c4fc60(param_2,0);
    FUN_0109fca8(param_1,uVar9);
  }
  return uVar2 & 1;
}


