/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004bff70; name: FUN_004bff70
 */


undefined8 FUN_004bff70(undefined4 *param_1)

{
  undefined8 uVar1;
  
  FUN_004e7610();
  FUN_00400420(*(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x250),"external/openssl/ssl/s3_lib.c",
               0xd17);
  FUN_004078c0(*(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x260),PTR_FUN_04374178);
  FUN_00400420(*(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x2a8),"external/openssl/ssl/s3_lib.c",
               0xd19);
  FUN_00400620(*(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x2b8),
               *(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x2c0),"external/openssl/ssl/s3_lib.c",
               0xd1a);
  FUN_00400420(*(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x2e8),"external/openssl/ssl/s3_lib.c",
               0xd1b);
  FUN_00400420(*(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x2f0),"external/openssl/ssl/s3_lib.c",
               0xd1c);
  FUN_00423420(*(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x240));
  FUN_00423420(*(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x408));
  FUN_004e76f0(param_1);
  FUN_00400420(*(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x3e0),"external/openssl/ssl/s3_lib.c",
               0xd25);
  FUN_00400420(*(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x3f0),"external/openssl/ssl/s3_lib.c",
               0xd26);
  memset(*(void **)(param_1 + 0x2a),0,0x410);
  uVar1 = FUN_004c3060(param_1);
  if ((int)uVar1 != 0) {
    *param_1 = 0x300;
    FUN_00400420(*(undefined8 *)(param_1 + 0x1b6),"external/openssl/ssl/s3_lib.c",0xd31);
    uVar1 = 1;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined8 *)(param_1 + 0x1b6) = 0;
  }
  return uVar1;
}


