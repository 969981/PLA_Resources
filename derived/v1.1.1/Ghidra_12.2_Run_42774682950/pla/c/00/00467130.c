/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00467130; name: FUN_00467130
 */


undefined8 FUN_00467130(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  
  if (*(long *)(param_1 + 8) == 0) {
    uVar5 = 0x69;
    uVar6 = 0x107;
  }
  else {
    if (*(long *)(param_1 + 0x98) == 0) {
      lVar8 = *(long *)(param_1 + 0xe8);
      lVar3 = FUN_004071e0();
      *(long *)(param_1 + 0x98) = lVar3;
      if ((lVar3 == 0) || (iVar1 = FUN_00407800(lVar3,*(undefined8 *)(param_1 + 8)), iVar1 == 0)) {
        FUN_004014b0(0xb,0x7f,0x41,"external/openssl/crypto/x509/x509_vfy.c",0x11c);
        uVar7 = 0x11;
        goto LAB_00467188;
      }
      FUN_00466c20(*(undefined8 *)(param_1 + 8));
      *(undefined4 *)(param_1 + 0x94) = 1;
      lVar3 = FUN_0044e660(*(undefined8 *)(param_1 + 8));
      iVar1 = *(int *)(*(long *)(param_1 + 0x20) + 0x2c);
      if (0 < iVar1) {
        if (lVar3 != 0) {
          if (4 < iVar1) {
            iVar1 = 5;
          }
          iVar2 = FUN_00422d50();
          if (*(int *)(&BYTE_03a0c8d4 + (long)iVar1 * 4) <= iVar2) goto LAB_00467248;
        }
        lVar3 = *(long *)(param_1 + 8);
        *(undefined4 *)(param_1 + 0xac) = 0;
        if (lVar3 == 0) {
          lVar3 = FUN_00407970(*(undefined8 *)(param_1 + 0x98),0);
        }
        *(undefined4 *)(param_1 + 0xb0) = 0x42;
        *(long *)(param_1 + 0xb8) = lVar3;
        uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
        if ((int)uVar5 == 0) {
          return uVar5;
        }
      }
LAB_00467248:
      if ((lVar8 == 0) || (iVar1 = FUN_00407950(*(undefined8 *)(lVar8 + 8)), iVar1 < 1)) {
LAB_00467374:
        uVar5 = FUN_00467470(param_1);
        iVar1 = (int)uVar5;
joined_r0x00467380:
        if (0 < iVar1) {
          return uVar5;
        }
      }
      else {
        lVar8 = *(long *)(param_1 + 0xe8);
        lVar3 = *(long *)(param_1 + 8);
        FUN_00460a80(*(undefined8 *)(lVar8 + 0x20));
        *(undefined8 *)(lVar8 + 0x18) = 0;
        *(undefined8 *)(lVar8 + 0x20) = 0;
        *(undefined8 *)(lVar8 + 0x2c) = 0xffffffffffffffff;
        iVar1 = FUN_00469e40(*(undefined4 *)(param_1 + 0x94),*(undefined8 *)(param_1 + 0xe8),
                             *(undefined8 *)(param_1 + 8),0);
        if (iVar1 == 0) {
          if (((lVar8 != 0) && ((*(byte *)(lVar8 + 0x28) & 5) != 0)) ||
             (-1 < *(int *)(lVar8 + 0x2c))) goto LAB_00467374;
          FUN_004687d0(0,*(undefined8 *)(param_1 + 0x98));
          iVar1 = FUN_0044e740(0,lVar3,0,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
          if (iVar1 != 0) {
            *(undefined4 *)(param_1 + 0xac) = 0;
            lVar8 = lVar3;
            if (lVar3 == 0) {
              lVar8 = FUN_00407970(*(undefined8 *)(param_1 + 0x98),0);
            }
            *(long *)(param_1 + 0xb8) = lVar8;
            *(int *)(param_1 + 0xb0) = iVar1;
            uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
            if ((int)uVar5 == 0) goto LAB_00467444;
          }
          *(undefined4 *)(param_1 + 0xac) = 0;
          if (lVar3 == 0) {
            lVar3 = FUN_00407970(*(undefined8 *)(param_1 + 0x98),0);
          }
          *(undefined4 *)(param_1 + 0xb0) = 0x41;
          *(long *)(param_1 + 0xb8) = lVar3;
          uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
          iVar1 = (int)uVar5;
          goto joined_r0x00467380;
        }
        FUN_004687d0(0,*(undefined8 *)(param_1 + 0x98));
        uVar6 = DAT_0388a6b8;
        if (iVar1 < 1) {
          *(long *)(param_1 + 0xb8) = lVar3;
          uVar5 = 0xffffffff;
          *(undefined8 *)(param_1 + 0xac) = uVar6;
          iVar1 = *(int *)(param_1 + 0xb0);
          goto joined_r0x004673a0;
        }
        iVar1 = FUN_0044e740(0,lVar3,0,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
        if (iVar1 == 0) {
LAB_004672fc:
          if (((*(byte *)(lVar8 + 0x38) & 1) != 0) ||
             (uVar5 = FUN_004699d0(param_1), (int)uVar5 != 0)) {
            *(undefined4 *)(param_1 + 0xac) = 0;
            *(long *)(param_1 + 0xb8) = lVar3;
            uVar5 = (**(code **)(param_1 + 0x38))(1,param_1);
            iVar1 = (int)uVar5;
            goto joined_r0x00467380;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0xac) = 0;
          lVar4 = lVar3;
          if (lVar3 == 0) {
            lVar4 = FUN_00407970(*(undefined8 *)(param_1 + 0x98),0);
          }
          *(long *)(param_1 + 0xb8) = lVar4;
          *(int *)(param_1 + 0xb0) = iVar1;
          uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
          if ((int)uVar5 != 0) goto LAB_004672fc;
        }
      }
LAB_00467444:
      iVar1 = *(int *)(param_1 + 0xb0);
joined_r0x004673a0:
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0xb0) = 1;
        return uVar5;
      }
      return uVar5;
    }
    uVar5 = 0x42;
    uVar6 = 0x111;
  }
  FUN_004014b0(0xb,0x7f,uVar5,"external/openssl/crypto/x509/x509_vfy.c",uVar6);
  uVar7 = 0x45;
LAB_00467188:
  *(undefined4 *)(param_1 + 0xb0) = uVar7;
  return 0xffffffff;
}


