/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004bfe50; name: FUN_004bfe50
 */


void FUN_004bfe50(long param_1)

{
  long lVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0xa8) != 0)) {
    FUN_004e7610(param_1);
    FUN_00423420(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x408));
    lVar1 = *(long *)(param_1 + 0xa8);
    *(undefined8 *)(lVar1 + 0x408) = 0;
    FUN_00423420(*(undefined8 *)(lVar1 + 0x240));
    lVar1 = *(long *)(param_1 + 0xa8);
    *(undefined8 *)(lVar1 + 0x240) = 0;
    FUN_00400420(*(undefined8 *)(lVar1 + 0x250),"external/openssl/ssl/s3_lib.c",0xd03);
    FUN_004078c0(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x260),PTR_FUN_04374178);
    FUN_00400420(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x2a8),"external/openssl/ssl/s3_lib.c",
                 0xd05);
    FUN_00400620(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x2b8),
                 *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x2c0),"external/openssl/ssl/s3_lib.c",
                 0xd06);
    FUN_00400420(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x2e8),"external/openssl/ssl/s3_lib.c",
                 0xd07);
    FUN_00400420(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x2f0),"external/openssl/ssl/s3_lib.c",
                 0xd08);
    FUN_004e76f0(param_1);
    FUN_00400420(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x3e0),"external/openssl/ssl/s3_lib.c",
                 0xd0a);
    FUN_00400420(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x3f0),"external/openssl/ssl/s3_lib.c",
                 0xd0b);
    FUN_004d7200(param_1);
    FUN_00400620(*(undefined8 *)(param_1 + 0xa8),0x410,"external/openssl/ssl/s3_lib.c",0xd10);
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  return;
}


