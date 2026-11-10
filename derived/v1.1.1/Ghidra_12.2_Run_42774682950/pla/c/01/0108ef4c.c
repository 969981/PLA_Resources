/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0108ef4c; name: FUN_0108ef4c
 */


undefined8 FUN_0108ef4c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  
  iVar1 = FUN_02c4fc60(param_2,0x11);
  if (iVar1 != 1) {
    return 0;
  }
  iVar1 = FUN_02c601b8(param_1);
  iVar2 = FUN_02c4fc60(param_2,0x1e);
  if (((((iVar1 != 2) || (iVar2 == 0)) &&
       ((iVar2 = FUN_02c4fc60(param_2,0x1f), iVar1 != 5 || (iVar2 == 0)))) &&
      (((iVar2 = FUN_02c4fc60(param_2,0x20), iVar1 != 4 || (iVar2 == 0)) &&
       ((iVar2 = FUN_02c4fc60(param_2,0x21), iVar1 != 3 || (iVar2 == 0)))))) &&
     ((((iVar2 = FUN_02c4fc60(param_2,0x22), iVar1 != 1 || (iVar2 == 0)) &&
       ((iVar2 = FUN_02c4fc60(param_2,0x4b), iVar1 != 6 || (iVar2 == 0)))) &&
      ((iVar2 = FUN_02c4fc60(param_2,0x4c), iVar1 != 7 || (iVar2 == 0)))))) {
    uVar3 = FUN_02c5fbd4(param_1);
    iVar1 = FUN_02c4fc60(param_2,0x26);
    if (((iVar1 == 0) && (iVar1 = FUN_02c4fc60(param_2,0x27), iVar1 == 0)) ||
       (iVar1 = FUN_02c4fc60(param_2,0x28), iVar1 != 0)) {
      iVar1 = FUN_02c4fc60(param_2,0x35);
      if (((uVar3 != 0) && (iVar1 != 0)) && (uVar4 = FUN_02c5e2ec(param_1), uVar3 < uVar4)) {
        return 1;
      }
    }
    else if (uVar3 == 0) {
      return 1;
    }
    iVar1 = FUN_02c4fc60(param_2,0x28);
    if ((((iVar1 == 0) || (uVar3 = FUN_02c5fb2c(param_1), 99 < uVar3)) &&
        (((iVar1 = FUN_02c4fc60(param_2,0x31), iVar1 == 0 &&
          (iVar1 = FUN_02c4fc60(param_2,0x32), iVar1 == 0)) ||
         ((uVar3 = FUN_02c60688(param_1,param_3), 2 < uVar3 ||
          (uVar3 = FUN_02c602a0(param_1,param_3), uVar3 < 5)))))) &&
       ((iVar1 = FUN_02c4fc60(param_2,0x33), iVar1 == 0 ||
        (uVar10 = FUN_0108fbbc(param_1,param_3 & 0xff), (uVar10 & 1) == 0)))) {
      iVar1 = FUN_02c4fc60(param_2,0x34);
      if (iVar1 != 0) {
        uVar10 = FUN_0108fbbc(param_1,0);
        if ((uVar10 & 1) != 0) {
          return 1;
        }
        uVar10 = FUN_0108fbbc(param_1,1);
        if ((uVar10 & 1) != 0) {
          return 1;
        }
        uVar10 = FUN_0108fbbc(param_1,2);
        if ((uVar10 & 1) != 0) {
          return 1;
        }
        uVar10 = FUN_0108fbbc(param_1,3);
        if ((uVar10 & 1) != 0) {
          return 1;
        }
      }
      uVar4 = FUN_02c5dc80(param_1,0);
      uVar5 = FUN_02c5dc80(param_1,1);
      uVar6 = FUN_02c5dc80(param_1,2);
      uVar7 = FUN_02c5dc80(param_1,5);
      uVar8 = FUN_02c5dc80(param_1,3);
      uVar9 = FUN_02c5dc80(param_1,4);
      FUN_02c4fc60(param_2,0x3c);
      uVar3 = uVar5 + uVar4 + uVar6 + uVar7 + uVar8 + uVar9;
      iVar1 = FUN_02c4fc60(param_2,0x36);
      if (iVar1 != 0) {
        iVar1 = FUN_02c4fc60(param_2,0x40);
        if (iVar1 < 1) {
          if (iVar1 < 0) {
            if (uVar4 != 0) {
              return 1;
            }
            uVar10 = FUN_0108fc1c(param_1,param_2);
            if ((uVar10 & 1) != 0) {
              return 1;
            }
          }
        }
        else {
          iVar1 = FUN_02c5be48(param_1);
          if (((iVar1 != 0x124) && (uVar4 < 0xfc)) && (uVar3 < 0x1fe)) {
            return 1;
          }
        }
      }
      iVar1 = FUN_02c4fc60(param_2,0x37);
      if (iVar1 != 0) {
        iVar1 = FUN_02c4fc60(param_2,0x41);
        if (iVar1 < 1) {
          if (iVar1 < 0) {
            if (uVar5 != 0) {
              return 1;
            }
            uVar10 = FUN_0108fc1c(param_1,param_2);
            if ((uVar10 & 1) != 0) {
              return 1;
            }
          }
        }
        else if ((uVar5 < 0xfc) && (uVar3 < 0x1fe)) {
          return 1;
        }
      }
      iVar1 = FUN_02c4fc60(param_2,0x38);
      if (iVar1 != 0) {
        iVar1 = FUN_02c4fc60(param_2,0x42);
        if (iVar1 < 1) {
          if (iVar1 < 0) {
            if (uVar6 != 0) {
              return 1;
            }
            uVar10 = FUN_0108fc1c(param_1,param_2);
            if ((uVar10 & 1) != 0) {
              return 1;
            }
          }
        }
        else if ((uVar6 < 0xfc) && (uVar3 < 0x1fe)) {
          return 1;
        }
      }
      iVar1 = FUN_02c4fc60(param_2,0x39);
      if (iVar1 != 0) {
        iVar1 = FUN_02c4fc60(param_2,0x43);
        if (iVar1 < 1) {
          if (iVar1 < 0) {
            if (uVar7 != 0) {
              return 1;
            }
            uVar10 = FUN_0108fc1c(param_1,param_2);
            if ((uVar10 & 1) != 0) {
              return 1;
            }
          }
        }
        else if ((uVar7 < 0xfc) && (uVar3 < 0x1fe)) {
          return 1;
        }
      }
      iVar1 = FUN_02c4fc60(param_2,0x3a);
      if (iVar1 != 0) {
        iVar1 = FUN_02c4fc60(param_2,0x44);
        if (iVar1 < 1) {
          if (iVar1 < 0) {
            if (uVar8 != 0) {
              return 1;
            }
            uVar10 = FUN_0108fc1c(param_1,param_2);
            if ((uVar10 & 1) != 0) {
              return 1;
            }
          }
        }
        else if ((uVar8 < 0xfc) && (uVar3 < 0x1fe)) {
          return 1;
        }
      }
      iVar1 = FUN_02c4fc60(param_2,0x3b);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = FUN_02c4fc60(param_2,0x45);
      if (iVar1 < 1) {
        if (-1 < iVar1) {
          return 0;
        }
        if ((uVar9 == 0) && (uVar10 = FUN_0108fc1c(param_1,param_2), (uVar10 & 1) == 0)) {
          return 0;
        }
      }
      else {
        if (0xfb < uVar9) {
          return 0;
        }
        if (0x1fd < uVar3) {
          return 0;
        }
      }
    }
  }
  return 1;
}


