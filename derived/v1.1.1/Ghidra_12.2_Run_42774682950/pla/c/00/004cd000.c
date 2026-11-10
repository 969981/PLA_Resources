/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004cd000; name: FUN_004cd000
 */


long FUN_004cd000(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_00400260(0x68,"external/openssl/ssl/statem/statem_dtls.c",0x3e);
  if (lVar1 == 0) {
    FUN_004014b0(0x14,0x26f,0x41,"external/openssl/ssl/statem/statem_dtls.c",0x3f);
    return 0;
  }
  if (param_1 == 0) {
    lVar2 = 0;
    *(undefined8 *)(lVar1 + 0x58) = 0;
    if (param_2 != 0) goto LAB_004cd058;
LAB_004cd0e0:
    lVar3 = 0;
LAB_004cd0e4:
    *(long *)(lVar1 + 0x60) = lVar3;
  }
  else {
    lVar2 = FUN_00400260(param_1,"external/openssl/ssl/statem/statem_dtls.c",0x44);
    if (lVar2 == 0) {
      FUN_004014b0(0x14,0x26f,0x41,"external/openssl/ssl/statem/statem_dtls.c",0x45);
      uVar4 = 0x46;
    }
    else {
      *(long *)(lVar1 + 0x58) = lVar2;
      if (param_2 == 0) goto LAB_004cd0e0;
LAB_004cd058:
      lVar3 = FUN_004002a0(param_1 + 7U >> 3,"external/openssl/ssl/statem/statem_dtls.c",0x50);
      if (lVar3 != 0) goto LAB_004cd0e4;
      FUN_004014b0(0x14,0x26f,0x41,"external/openssl/ssl/statem/statem_dtls.c",0x52);
      FUN_00400420(lVar2,"external/openssl/ssl/statem/statem_dtls.c",0x53);
      uVar4 = 0x54;
    }
    FUN_00400420(lVar1,"external/openssl/ssl/statem/statem_dtls.c",uVar4);
    lVar1 = 0;
  }
  return lVar1;
}


