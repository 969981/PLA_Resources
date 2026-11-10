/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004973f0; name: FUN_004973f0
 */


undefined4 FUN_004973f0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  
  local_50 = 0;
  local_48 = 0;
  local_38 = param_2;
  iVar1 = FUN_00407f40(*param_3);
  if (iVar1 != 0x390) {
    FUN_004014b0(4,0x9b,0x9b,"external/openssl/crypto/rsa/rsa_ameth.c",0x28e);
    return 0xffffffff;
  }
  lVar3 = FUN_0041ed70(PTR_DAT_043742f0,param_3[1]);
  if ((lVar3 != 0) && (puVar8 = *(undefined8 **)(lVar3 + 8), puVar8 != (undefined8 *)0x0)) {
    iVar1 = FUN_00407f40(*puVar8);
    if (iVar1 == 0x38f) {
      lVar4 = FUN_0041ed70(PTR_DAT_04374288,puVar8[1]);
      *(long *)(lVar3 + 0x20) = lVar4;
      if (lVar4 != 0) goto LAB_004974a8;
    }
    else {
      *(undefined8 *)(lVar3 + 0x20) = 0;
    }
    FUN_00452d20(lVar3);
    lVar3 = 0;
  }
LAB_004974a8:
  iVar1 = FUN_00495950(lVar3,&local_50,&local_48,&local_3c);
  if (iVar1 == 0) {
    uVar5 = 0x95;
    uVar6 = 0x295;
LAB_004974f8:
    FUN_004014b0(4,0x9b,uVar5,"external/openssl/crypto/rsa/rsa_ameth.c",uVar6);
LAB_00497500:
    uVar7 = 0xffffffff;
  }
  else {
    if (param_4 == 0) {
      iVar1 = FUN_00422a60(param_2,0xffffffff,0xf8,0xd,0,&local_58);
      if (iVar1 < 1) goto LAB_00497500;
      iVar1 = FUN_0041ccb0(local_50);
      iVar2 = FUN_0041ccb0(local_58);
      if (iVar1 != iVar2) {
        uVar5 = 0x9e;
        uVar6 = 0x2a2;
        goto LAB_004974f8;
      }
    }
    else {
      iVar1 = FUN_00464d50(param_1,&local_38,local_50,0,param_4);
      if (iVar1 == 0) goto LAB_00497500;
    }
    uVar7 = 0xffffffff;
    iVar1 = FUN_00452510(local_38,0xffffffff,0x1001,6,0);
    if (0 < iVar1) {
      iVar1 = FUN_00452510(local_38,0x18,0x1002,local_3c,0);
      uVar7 = 0xffffffff;
      if (0 < iVar1) {
        iVar1 = FUN_00452510(local_38,0x3f8,0x1005,0,local_48);
        uVar7 = 1;
        if (iVar1 < 1) {
          uVar7 = 0xffffffff;
        }
      }
    }
  }
  FUN_00452d20(lVar3);
  return uVar7;
}


