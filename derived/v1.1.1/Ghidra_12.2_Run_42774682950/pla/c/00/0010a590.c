/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0010a590; name: FUN_0010a590
 */


byte * FUN_0010a590(uint *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  
  pbVar5 = param_2 + 1;
  bVar1 = *param_2;
  if ((bVar1 & 0xf) == 0xc) {
    uVar4 = bVar1 >> 4 & 3 | 4;
    *param_1 = uVar4;
    if (uVar4 != 4) {
      return (byte *)0x0;
    }
    param_1[3] = bVar1 >> 6 & 1;
    param_1[4] = (uint)(bVar1 >> 7);
    bVar1 = param_2[1];
    param_1[5] = (uint)(bVar1 >> 7);
    uVar4 = bVar1 & 0x7f;
    param_1[1] = uVar4;
    param_1[2] = 0;
    if (uVar4 - 7 < 3) {
      param_1[1] = 7;
      param_1[2] = uVar4 - 7;
      return param_2 + 2;
    }
    pbVar5 = (byte *)0x0;
    if (uVar4 < 0xd) {
      pbVar5 = param_2 + 2;
    }
    return pbVar5;
  }
  uVar4 = bVar1 & 3;
  *param_1 = uVar4;
  if (uVar4 == 1) {
    uVar4 = bVar1 >> 2 & 7;
    if (uVar4 < 4) {
      uVar3 = 7;
    }
    else if (uVar4 == 4) {
      uVar3 = 0;
      uVar4 = 0;
    }
    else {
      if (uVar4 != 5) {
        return (byte *)0x0;
      }
      uVar4 = 0;
      uVar3 = 1;
    }
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = bVar1 >> 5 & 1;
    param_1[4] = bVar1 >> 6 & 1;
    param_1[5] = (uint)(bVar1 >> 7);
    return pbVar5;
  }
  if ((bVar1 & 3) == 0) {
    bVar2 = bVar1 >> 2 & 3;
    param_1[2] = bVar1 >> 4 & 3;
    if (bVar2 == 2) {
      param_1[1] = 0;
    }
    else if (bVar2 == 1) {
      param_1[1] = 7;
      param_1[3] = 0;
    }
    else {
      if (bVar2 != 0) {
        return (byte *)0x0;
      }
      param_1[1] = 7;
      param_1[3] = 1;
    }
    param_1[4] = bVar1 >> 6 & 1;
    param_1[5] = (uint)(bVar1 >> 7);
    return pbVar5;
  }
  uVar3 = (uint)(bVar1 >> 2);
  param_1[2] = 0;
  if (uVar4 != 2) {
    if (bVar1 < 0x40) {
      uVar4 = bVar1 >> 2 & 7;
      param_1[1] = uVar4;
      param_1[3] = 1;
      param_1[4] = (uint)(0x1f < bVar1);
      param_1[5] = 0;
    }
    else {
      uVar3 = uVar3 - 0x10;
      param_1[3] = 0;
      param_1[4] = uVar3 & 1;
      uVar4 = uVar3 >> 2;
      param_1[5] = uVar3 >> 1 & 1;
      param_1[1] = uVar4;
      if (0x1b < uVar3) {
        param_1[2] = uVar4 - 7;
        if (3 < (int)(uVar4 - 7)) {
          return (byte *)0x0;
        }
        param_1[1] = 7;
switchD_0010a80c_caseD_7:
        param_1[1] = 7;
        param_1[2] = 0;
        return pbVar5;
      }
    }
    switch(uVar4) {
    case 0:
      param_1[1] = 0;
      return pbVar5;
    case 1:
      param_1[1] = 1;
      return pbVar5;
    case 2:
      param_1[1] = 2;
      return pbVar5;
    case 3:
      param_1[1] = 3;
      return pbVar5;
    case 4:
      param_1[1] = 4;
      return pbVar5;
    case 5:
      param_1[1] = 5;
      return pbVar5;
    default:
      FUN_0010a430();
      if (*(code **)PTR_PTR_043722f8 != (code *)0x0) {
        (**(code **)PTR_PTR_043722f8)
                  (0,"v:\\devel\\projects\\oodle2\\core\\rrlzh_lzhlw_shared.cpp",0x1d9,
                   "OODLE ERROR : invalid V3 decodetype\n");
      }
      FUN_0010a450();
      return pbVar5;
    case 7:
    case 8:
    case 9:
      goto switchD_0010a80c_caseD_7;
    }
  }
  if (bVar1 < 0x30) {
    param_1[3] = 1;
    param_1[4] = 1;
    param_1[5] = 0;
    if (bVar1 >> 2 < 4) {
LAB_0010a790:
      param_1[1] = 7;
      param_1[2] = uVar3;
      return pbVar5;
    }
  }
  else {
    uVar4 = uVar3 - 0xc;
    uVar3 = uVar4 >> 2;
    param_1[3] = 0;
    param_1[4] = uVar4 & 1;
    param_1[5] = uVar4 >> 1 & 1;
    if (uVar3 < 4) goto LAB_0010a790;
  }
  if (uVar3 - 4 < 4) {
    param_1[1] = uVar3 - 4;
    return pbVar5;
  }
  return (byte *)0x0;
}


