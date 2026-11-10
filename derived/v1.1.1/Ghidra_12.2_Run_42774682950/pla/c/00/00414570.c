/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00414570; name: FUN_00414570
 */


long FUN_00414570(undefined8 param_1,char *param_2)

{
  undefined8 uVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  int *piVar5;
  undefined4 uVar6;
  
  lVar2 = FUN_0040aa80();
  pcVar3 = strchr(param_2,0x62);
  uVar1 = 0x11;
  if (pcVar3 != (char *)0x0) {
    uVar1 = 1;
  }
  if (lVar2 == 0) {
    piVar5 = __errno_location();
    FUN_004014b0(2,1,*piVar5,"external/openssl/nnsdk/crypto/bio/bss_file.c",0x108);
    FUN_00402170(5,"fopen(\'",param_1,&DAT_038e59d2,param_2,&DAT_038c8b9e);
    piVar5 = __errno_location();
    uVar6 = 0x80;
    if (*piVar5 != 2) {
      uVar6 = 2;
    }
    FUN_004014b0(0x20,0x6d,uVar6,"external/openssl/nnsdk/crypto/bio/bss_file.c",0x10a);
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_00403d80(&DAT_04163720);
    if (lVar4 == 0) {
      FUN_0040ab80(lVar2);
    }
    else {
      FUN_00404040(lVar4,0);
      FUN_00404920(lVar4,0x6a,uVar1,lVar2);
    }
  }
  return lVar4;
}


