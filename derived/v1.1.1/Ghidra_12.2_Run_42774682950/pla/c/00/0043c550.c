/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0043c550; name: FUN_0043c550
 */


long FUN_0043c550(undefined8 param_1,undefined8 param_2,undefined4 param_3,long *param_4,
                 undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_0043c3f0();
  if (lVar1 != 0) {
    lVar2 = FUN_00400260(lVar1,"external/openssl/crypto/ec/ec_oct.c",0x8b);
    if (lVar2 == 0) {
      FUN_004014b0(0x10,0x119,0x41,"external/openssl/crypto/ec/ec_oct.c",0x8c);
    }
    else {
      lVar1 = FUN_0043c3f0(param_1,param_2,param_3,lVar2,lVar1,param_5);
      if (lVar1 != 0) {
        *param_4 = lVar2;
        return lVar1;
      }
      FUN_00400420(lVar2,"external/openssl/crypto/ec/ec_oct.c",0x91);
    }
  }
  return 0;
}


