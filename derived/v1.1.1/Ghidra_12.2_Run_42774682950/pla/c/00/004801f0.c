/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004801f0; name: FUN_004801f0
 */


undefined8 FUN_004801f0(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if ((*(byte *)*param_1 >> 1 & 1) != 0) {
    return 1;
  }
  if (param_2 == 0) {
    lVar5 = FUN_0040de30();
    if (lVar5 != 0) {
      iVar1 = FUN_0042e5c0(param_1,lVar5);
      param_2 = lVar5;
      goto joined_r0x00480250;
    }
    uVar3 = 0x41;
    uVar4 = 0x1b;
  }
  else {
    lVar5 = 0;
    iVar1 = FUN_0042e5c0(param_1,param_2);
joined_r0x00480250:
    if (iVar1 == 0) {
      uVar3 = 0x76;
      uVar4 = 0x22;
    }
    else if (param_1[1] == 0) {
      uVar3 = 0x71;
      uVar4 = 0x28;
    }
    else {
      iVar1 = FUN_0042eb40(param_1,param_1[1],param_2);
      if (0 < iVar1) {
        lVar6 = FUN_0042df90(param_1);
        if ((lVar6 != 0) && (lVar2 = FUN_0042e350(param_1), lVar2 != 0)) {
          iVar1 = FUN_0040c130();
          if (iVar1 == 0) {
            iVar1 = FUN_0042f280(param_1,lVar6,lVar2,0,0,param_2);
            if (iVar1 == 0) goto LAB_004802b4;
            iVar1 = FUN_0042ed00(param_1,lVar6);
            if (iVar1 != 0) {
              uVar3 = 1;
              goto LAB_00480328;
            }
            uVar3 = 0x7a;
            uVar4 = 0x3e;
          }
          else {
            uVar4 = 0x37;
            uVar3 = 0x80;
          }
          FUN_004014b0(0x10,0xaa,uVar3,"external/openssl/crypto/ec/ec_check.c",uVar4);
        }
LAB_004802b4:
        uVar3 = 0;
        goto LAB_00480328;
      }
      uVar3 = 0x6b;
      uVar4 = 0x2c;
    }
  }
  FUN_004014b0(0x10,0xaa,uVar3,"external/openssl/crypto/ec/ec_check.c",uVar4);
  uVar3 = 0;
  lVar6 = 0;
LAB_00480328:
  FUN_0040def0(lVar5);
  FUN_0042db80(lVar6);
  return uVar3;
}


