/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0044c450; name: FUN_0044c450
 */


undefined8 FUN_0044c450(undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  char *__s1;
  
  __s1 = (char *)param_1[2];
  if (__s1 != (char *)0x0) {
    iVar1 = strcmp(__s1,"TRUE");
    if ((((iVar1 == 0) || (iVar1 = strcmp(__s1,"true"), iVar1 == 0)) ||
        (iVar1 = strcmp(__s1,"Y"), iVar1 == 0)) ||
       (((iVar1 = strcmp(__s1,"y"), iVar1 == 0 || (iVar1 = strcmp(__s1,"YES"), iVar1 == 0)) ||
        (iVar1 = strcmp(__s1,"yes"), iVar1 == 0)))) {
      *param_2 = 0xff;
      return 1;
    }
    iVar1 = strcmp(__s1,"FALSE");
    if (((iVar1 == 0) || (iVar1 = strcmp(__s1,"false"), iVar1 == 0)) ||
       ((iVar1 = strcmp(__s1,"N"), iVar1 == 0 ||
        (((iVar1 = strcmp(__s1,"n"), iVar1 == 0 || (iVar1 = strcmp(__s1,"NO"), iVar1 == 0)) ||
         (iVar1 = strcmp(__s1,"no"), iVar1 == 0)))))) {
      *param_2 = 0;
      return 1;
    }
  }
  FUN_004014b0(0x22,0x6e,0x68,"external/openssl/crypto/x509v3/v3_utl.c",0x107);
  FUN_00402170(6,"section:",*param_1,",name:",param_1[1],",value:",param_1[2]);
  return 0;
}


