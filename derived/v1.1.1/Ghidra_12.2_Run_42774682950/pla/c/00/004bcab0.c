/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004bcab0; name: FUN_004bcab0
 */


long FUN_004bcab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 *param_5,int param_6)

{
  long lVar1;
  int local_2c;
  undefined8 local_28;
  undefined8 local_18;
  
  lVar1 = FUN_004bc8f0(param_1,param_3,param_4,*(undefined8 *)(param_5 + 2),*param_5,&local_18,
                       &local_2c,0);
  if (lVar1 == 0) {
    FUN_004014b0(0x23,0x6a,0x75,"external/openssl/crypto/pkcs12/p12_decr.c",0x5e);
    lVar1 = 0;
  }
  else {
    local_28 = local_18;
    lVar1 = FUN_0041d030(0,&local_28,(long)local_2c,param_2);
    if (param_6 != 0) {
      FUN_004006a0(local_18,(long)local_2c);
    }
    if (lVar1 == 0) {
      FUN_004014b0(0x23,0x6a,0x65,"external/openssl/crypto/pkcs12/p12_decr.c",0x72);
    }
    FUN_00400420(local_18,"external/openssl/crypto/pkcs12/p12_decr.c",0x73);
  }
  return lVar1;
}


