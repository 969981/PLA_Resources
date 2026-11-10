/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f1dc0; name: FUN_004f1dc0
 */


long FUN_004f1dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  char *local_18;
  
  local_18 = (char *)0x0;
  local_30 = 0;
  local_28 = 0;
  iVar1 = FUN_004421d0(&local_30,&local_38,&local_18,"DH PARAMETERS",param_1,param_3,param_4);
  if (iVar1 == 0) {
    lVar2 = 0;
  }
  else {
    local_28 = local_30;
    iVar1 = strcmp(local_18,"X9.42 DH PARAMETERS");
    if (iVar1 == 0) {
      lVar2 = FUN_0047d570(param_2,&local_28,local_38);
    }
    else {
      lVar2 = FUN_0047d550(param_2);
    }
    if (lVar2 == 0) {
      FUN_004014b0(9,0x8d,0xd,"external/openssl/crypto/pem/pem_pkey.c",0xde);
    }
    FUN_00400420(local_18,"external/openssl/crypto/pem/pem_pkey.c",0xdf);
    FUN_00400420(local_30,"external/openssl/crypto/pem/pem_pkey.c",0xe0);
  }
  return lVar2;
}


