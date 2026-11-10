/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00417b30; name: FUN_00417b30
 */


undefined8 FUN_00417b30(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[2];
  *param_3 = *param_2;
  uVar1 = FUN_00407800(uVar3,param_3);
  if ((int)uVar1 != 0) {
    lVar2 = FUN_00405810(*(undefined8 *)(param_1 + 0x10),param_3);
    if (lVar2 != 0) {
      FUN_004075d0(uVar3,lVar2);
      FUN_00400420(*(undefined8 *)(lVar2 + 8),"external/openssl/crypto/conf/conf_api.c",0x3f);
      FUN_00400420(*(undefined8 *)(lVar2 + 0x10),"external/openssl/crypto/conf/conf_api.c",0x40);
      FUN_00400420(lVar2,"external/openssl/crypto/conf/conf_api.c",0x41);
    }
    uVar1 = 1;
  }
  return uVar1;
}


