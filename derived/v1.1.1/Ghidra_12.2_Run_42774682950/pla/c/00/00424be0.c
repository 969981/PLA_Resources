/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00424be0; name: FUN_00424be0
 */


undefined8
FUN_00424be0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
            undefined8 param_5)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  long local_70;
  long local_68;
  
  iVar4 = FUN_0040d2b0(param_4);
  if (iVar4 == 0) {
    uVar6 = FUN_00425710(param_1,param_2,param_3,param_4,param_5);
    return uVar6;
  }
  if ((((*(int *)(param_2 + 1) != 1) || (*(int *)(param_2 + 2) != 0)) ||
      (iVar4 = FUN_0040c1d0(param_3,4), iVar4 != 0)) ||
     ((iVar4 = FUN_0040c1d0(param_2,4), iVar4 != 0 || (iVar4 = FUN_0040c1d0(param_4,4), iVar4 != 0))
     )) {
    uVar6 = FUN_004250f0(param_1,param_2,param_3,param_4,param_5,0);
    return uVar6;
  }
  uVar10 = *(uint *)*param_2;
  iVar4 = FUN_0040c1d0(param_3,4);
  if ((iVar4 != 0) || (iVar4 = FUN_0040c1d0(param_4,4), iVar4 != 0)) {
    uVar6 = 0x42;
    uVar8 = 0x486;
LAB_00424d38:
    FUN_004014b0(3,0x75,uVar6,"external/openssl/crypto/bn/bn_exp.c",uVar8);
    return 0;
  }
  iVar4 = FUN_0040d2b0(param_4);
  if (iVar4 == 0) {
    uVar6 = 0x66;
    uVar8 = 0x48e;
    goto LAB_00424d38;
  }
  if (*(int *)(param_4 + 1) == 1) {
    uVar13 = *(uint *)*param_4;
    uVar12 = 0;
    if (uVar13 != 0) {
      uVar12 = uVar10 / uVar13;
    }
    uVar10 = uVar10 - uVar12 * uVar13;
  }
  iVar4 = FUN_0040c070(param_3);
  if (iVar4 == 0) {
    iVar4 = FUN_0040d1e0(param_4,1);
    if (iVar4 == 0) {
      uVar6 = FUN_0040c6b0(param_1,1);
      return uVar6;
    }
LAB_00424e28:
    FUN_0040c6b0(param_1,0);
    return 1;
  }
  if (uVar10 == 0) goto LAB_00424e28;
  FUN_0040e090(param_5);
  lVar7 = FUN_0040e240(param_5);
  local_68 = FUN_0040e240(param_5);
  if (local_68 == 0) {
    local_70 = 0;
    uVar6 = 0;
    goto LAB_004250d4;
  }
  local_70 = FUN_0040d8e0();
  if (local_70 == 0) {
    uVar6 = 0;
    local_70 = 0;
    goto LAB_004250d4;
  }
  iVar5 = FUN_0040d9b0(local_70,param_4,param_5);
  if (iVar5 == 0) {
    uVar6 = 0;
    goto LAB_004250d4;
  }
  if (-1 < iVar4 + -2) {
    iVar4 = iVar4 + -1;
    bVar3 = true;
    uVar13 = uVar10 * uVar10;
    uVar12 = 0;
    if (uVar10 != 0) {
      uVar12 = uVar13 / uVar10;
    }
    if (uVar12 == uVar10) goto LAB_00424e64;
LAB_00424e70:
    if (bVar3) {
      iVar5 = FUN_0040c6b0();
      if ((iVar5 == 0) || (iVar5 = FUN_0040d2f0(lVar7,lVar7,local_70,param_5), iVar5 == 0))
      goto LAB_004250b4;
      uVar13 = 1;
      lVar9 = local_68;
      local_68 = lVar7;
    }
    else {
      iVar5 = FUN_0040bf40(lVar7);
      if ((iVar5 == 0) || (iVar5 = FUN_0040e5a0(0,local_68,lVar7,param_4,param_5), iVar5 == 0))
      goto LAB_004250b4;
      uVar13 = 1;
      lVar9 = lVar7;
    }
    while( true ) {
      iVar5 = FUN_0040d3e0(local_68,local_68,local_68,local_70,param_5);
      bVar2 = false;
      bVar3 = false;
      lVar11 = local_68;
      local_68 = lVar9;
      if (iVar5 == 0) break;
      while( true ) {
        iVar4 = iVar4 + -1;
        iVar5 = FUN_0040cdc0(param_3,iVar4);
        uVar12 = uVar13;
        lVar7 = lVar11;
        if (iVar5 != 0) {
          uVar12 = uVar13 * uVar10;
          uVar1 = 0;
          if (uVar10 != 0) {
            uVar1 = uVar12 / uVar10;
          }
          if (uVar1 != uVar13) {
            if (bVar2) {
              iVar5 = FUN_0040c6b0();
              if (iVar5 == 0) goto LAB_004250b4;
              iVar5 = FUN_0040d2f0(lVar11,lVar11,local_70,param_5);
              bVar3 = false;
              uVar12 = uVar10;
              if (iVar5 == 0) {
                uVar6 = 0;
                goto LAB_004250d4;
              }
            }
            else {
              iVar5 = FUN_0040bf40(lVar11,uVar13);
              if (iVar5 == 0) goto LAB_004250b4;
              iVar5 = FUN_0040e5a0(0,local_68,lVar11,param_4,param_5);
              lVar7 = local_68;
              uVar12 = uVar10;
              local_68 = lVar11;
              if (iVar5 == 0) goto LAB_004250b4;
            }
          }
        }
        if (iVar4 < 1) goto LAB_00425008;
        uVar13 = uVar12 * uVar12;
        uVar1 = 0;
        if (uVar12 != 0) {
          uVar1 = uVar13 / uVar12;
        }
        if (uVar1 != uVar12) goto LAB_00424e70;
LAB_00424e64:
        if (!bVar3) break;
        bVar2 = true;
        lVar11 = lVar7;
      }
      lVar9 = local_68;
      local_68 = lVar7;
    }
    goto LAB_004250d0;
  }
  bVar3 = true;
  uVar12 = uVar10;
LAB_00425008:
  if (uVar12 == 1) {
    local_68 = lVar7;
    if (!bVar3) {
LAB_00425090:
      iVar4 = FUN_0040d7d0(param_1,local_68,local_70,param_5);
      if (iVar4 == 0) goto LAB_004250b4;
    }
    else {
      iVar4 = FUN_0040c6b0(param_1,1);
      if (iVar4 == 0) goto LAB_004250b4;
    }
    uVar6 = 1;
  }
  else {
    if (bVar3) {
      iVar4 = FUN_0040c6b0();
      if (iVar4 != 0) {
        iVar4 = FUN_0040d2f0(lVar7,lVar7,local_70,param_5);
        local_68 = lVar7;
        if (iVar4 != 0) goto LAB_00425090;
      }
    }
    else {
      iVar4 = FUN_0040bf40(lVar7,uVar12);
      if (iVar4 != 0) {
        iVar4 = FUN_0040e5a0(0,local_68,lVar7,param_4,param_5);
        if (iVar4 == 0) {
LAB_004250d0:
          uVar6 = 0;
          goto LAB_004250d4;
        }
        goto LAB_00425090;
      }
    }
LAB_004250b4:
    uVar6 = 0;
  }
LAB_004250d4:
  FUN_0040d960(local_70);
  FUN_0040e1b0(param_5);
  return uVar6;
}


