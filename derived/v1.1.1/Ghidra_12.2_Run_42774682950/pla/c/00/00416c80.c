/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00416c80; name: FUN_00416c80
 */


/* WARNING: Removing unreachable block (ram,0x00416d2c) */

long FUN_00416c80(char *param_1,undefined8 *param_2)

{
  int iVar1;
  char *__s;
  size_t sVar2;
  size_t sVar3;
  char *pcVar4;
  long lVar5;
  long unaff_x24;
  
LAB_00416ccc:
  do {
    __s = (char *)FUN_00417910(param_2,param_1);
    if (__s == (char *)0x0) goto LAB_00416e00;
    sVar2 = strlen(__s);
    if (sVar2 < 6) {
      if (sVar2 != 5) goto LAB_00416ccc;
LAB_00416d10:
      iVar1 = strcasecmp(__s + (sVar2 - 4),".cnf");
      if (iVar1 != 0) goto LAB_00416ccc;
    }
    else {
      iVar1 = strcasecmp(__s + (sVar2 - 5),".conf");
      if (iVar1 != 0) goto LAB_00416d10;
    }
    sVar3 = strlen(param_1);
    lVar5 = sVar2 + sVar3 + 2;
    pcVar4 = (char *)FUN_004002a0(lVar5,"external/openssl/crypto/conf/conf_def.c",0x2d0);
    if (pcVar4 == (char *)0x0) {
      FUN_004014b0(0xe,0x6b,0x41,"external/openssl/crypto/conf/conf_def.c",0x2d2);
      iVar1 = 3;
      goto LAB_00416df8;
    }
    if (*pcVar4 == '\0') {
      FUN_004050b0(pcVar4,param_1,lVar5);
      FUN_00405120(pcVar4,&DAT_0389ffa9,lVar5);
    }
    FUN_00405120(pcVar4,__s,lVar5);
    lVar5 = FUN_00414570(pcVar4,&DAT_03948cf6);
    FUN_00400420(pcVar4,"external/openssl/crypto/conf/conf_def.c",0x2eb);
    if (lVar5 != 0) {
      iVar1 = 1;
      unaff_x24 = lVar5;
LAB_00416df8:
      if (iVar1 == 3) {
LAB_00416e00:
        FUN_00417a20(param_2);
        unaff_x24 = 0;
        *param_2 = 0;
      }
      return unaff_x24;
    }
  } while( true );
}


