/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e2a90; name: FUN_004e2a90
 */


undefined8 FUN_004e2a90(undefined8 param_1,char *param_2)

{
  int iVar1;
  char *__s;
  size_t sVar2;
  size_t sVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_440 [1024];
  long local_38;
  
  local_38 = 0;
  __s = (char *)FUN_00417910(&local_38);
  if (__s != (char *)0x0) {
    do {
      sVar2 = strlen(param_2);
      sVar3 = strlen(__s);
      if (0x400 < sVar2 + sVar3 + 2) {
        uVar5 = 0x10e;
        uVar6 = 0x2f5;
        goto LAB_004e2bc0;
      }
      iVar1 = FUN_00403120(auStack_440,0x400,"%s/%s",param_2,__s);
      if ((0x3fe < iVar1 - 1U) || (iVar1 = FUN_004e2960(param_1,auStack_440), iVar1 == 0))
      goto LAB_004e2bc4;
      __s = (char *)FUN_00417910(&local_38,param_2);
    } while (__s != (char *)0x0);
  }
  piVar4 = __errno_location();
  if (*piVar4 == 0) {
    uVar5 = 1;
  }
  else {
    piVar4 = __errno_location();
    FUN_004014b0(2,10,*piVar4,"external/openssl/ssl/ssl_cert.c",0x304);
    FUN_00402170(3,"OPENSSL_DIR_read(&ctx, \'",param_2,&DAT_038c8b9e);
    uVar6 = 0x306;
    uVar5 = 2;
LAB_004e2bc0:
    FUN_004014b0(0x14,0xd7,uVar5,"external/openssl/ssl/ssl_cert.c",uVar6);
LAB_004e2bc4:
    uVar5 = 0;
  }
  if (local_38 != 0) {
    FUN_00417a20(&local_38);
  }
  return uVar5;
}


