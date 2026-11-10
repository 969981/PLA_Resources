/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f0930; name: FUN_004f0930
 */


undefined8 FUN_004f0930(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_28;
  
  lVar2 = FUN_0044e660(param_2);
  if (lVar2 == 0) {
    uVar5 = 0x10c;
    uVar6 = 0x143;
  }
  else {
    lVar3 = FUN_004e30e0(lVar2,&local_28);
    if (lVar3 != 0) {
      if (local_28 == 3) {
        FUN_004238d0(lVar2);
        iVar1 = FUN_0042d960();
        if (iVar1 == 0) {
          uVar5 = 0x13e;
          uVar6 = 0x14d;
          goto LAB_004f0aac;
        }
      }
      if (param_1[local_28 * 5 + 5] != 0) {
        FUN_00422d90(lVar2);
        FUN_004016d0();
        iVar1 = FUN_00423a50(param_1[local_28 * 5 + 5]);
        if (iVar1 == 6) {
          FUN_00423740(param_1[local_28 * 5 + 5]);
          uVar4 = FUN_004568b0();
          if ((uVar4 & 1) != 0) goto LAB_004f0a18;
        }
        iVar1 = FUN_0044e670(param_2,param_1[local_28 * 5 + 5]);
        if (iVar1 == 0) {
          FUN_00423420(param_1[local_28 * 5 + 5]);
          param_1[local_28 * 5 + 5] = 0;
          FUN_004016d0();
        }
      }
LAB_004f0a18:
      FUN_00460a80(param_1[local_28 * 5 + 4]);
      FUN_00466c20(param_2);
      param_1[local_28 * 5 + 4] = param_2;
      *param_1 = param_1 + local_28 * 5 + 4;
      return 1;
    }
    uVar5 = 0xf7;
    uVar6 = 0x148;
  }
LAB_004f0aac:
  FUN_004014b0(0x14,0xbf,uVar5,"external/openssl/ssl/ssl_rsa.c",uVar6);
  return 0;
}


