/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00495950; name: FUN_00495950
 */


undefined8 FUN_00495950(undefined8 *param_1,long *param_2,long *param_3,int *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  if ((undefined8 *)*param_1 == (undefined8 *)0x0) {
    lVar2 = FUN_0044f830();
    *param_2 = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
    puVar5 = (undefined8 *)param_1[4];
    if (puVar5 == (undefined8 *)0x0) goto LAB_00495a08;
LAB_004959b0:
    FUN_00407f40(*puVar5);
    FUN_00407d80();
    lVar2 = FUN_00446540();
    if (lVar2 == 0) {
      FUN_004014b0(4,0x9c,0xa6,"external/openssl/crypto/rsa/rsa_ameth.c",0x233);
      *param_3 = 0;
      return 0;
    }
    *param_3 = lVar2;
    if (param_1[2] != 0) goto LAB_00495a1c;
LAB_00495a88:
    *param_4 = 0x14;
    lVar2 = param_1[3];
  }
  else {
    FUN_00407f40(*(undefined8 *)*param_1);
    FUN_00407d80();
    lVar2 = FUN_00446540();
    if (lVar2 == 0) {
      FUN_004014b0(4,0x9c,0xa6,"external/openssl/crypto/rsa/rsa_ameth.c",0x233);
      *param_2 = 0;
      return 0;
    }
    *param_2 = lVar2;
    puVar5 = (undefined8 *)param_1[4];
    if (puVar5 != (undefined8 *)0x0) goto LAB_004959b0;
LAB_00495a08:
    lVar2 = FUN_0044f830();
    *param_3 = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
    if (param_1[2] == 0) goto LAB_00495a88;
LAB_00495a1c:
    iVar1 = FUN_00420b50();
    *param_4 = iVar1;
    if (iVar1 < 0) {
      uVar3 = 0x96;
      uVar4 = 0x2c5;
      goto LAB_00495ac0;
    }
    lVar2 = param_1[3];
  }
  if (lVar2 == 0) {
    return 1;
  }
  lVar2 = FUN_00420b50();
  if (lVar2 == 1) {
    return 1;
  }
  uVar3 = 0x8b;
  uVar4 = 0x2d1;
LAB_00495ac0:
  FUN_004014b0(4,0x97,uVar3,"external/openssl/crypto/rsa/rsa_ameth.c",uVar4);
  return 0;
}


