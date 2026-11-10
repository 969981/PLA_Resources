/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004152f0; name: FUN_004152f0
 */


undefined8 *
FUN_004152f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_0439e6f0 != 0) || (DAT_0439e6f0 = FUN_004071e0(), DAT_0439e6f0 != 0)) {
    puVar2 = (undefined8 *)FUN_004002a0(0x30,"external/openssl/crypto/conf/conf_mod.c",0xee);
    if (puVar2 == (undefined8 *)0x0) {
      FUN_004014b0(0xe,0x7a,0x41,"external/openssl/crypto/conf/conf_mod.c",0xef);
      return (undefined8 *)0x0;
    }
    *puVar2 = param_1;
    lVar3 = FUN_00404f10(param_2,"external/openssl/crypto/conf/conf_mod.c",0xf4);
    puVar2[1] = lVar3;
    puVar2[2] = param_3;
    puVar2[3] = param_4;
    if (lVar3 == 0) {
      uVar4 = 0xf8;
    }
    else {
      iVar1 = FUN_00407800(DAT_0439e6f0,puVar2);
      if (iVar1 != 0) {
        return puVar2;
      }
      FUN_00400420(puVar2[1],"external/openssl/crypto/conf/conf_mod.c",0xfd);
      uVar4 = 0xfe;
    }
    FUN_00400420(puVar2,"external/openssl/crypto/conf/conf_mod.c",uVar4);
  }
  return (undefined8 *)0x0;
}


