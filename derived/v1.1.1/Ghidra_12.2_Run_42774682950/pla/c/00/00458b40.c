/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00458b40; name: FUN_00458b40
 */


undefined8 FUN_00458b40(undefined8 param_1,char *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*param_2 == '@') {
    lVar1 = FUN_0045b1b0(param_1,param_2 + 1);
  }
  else {
    lVar1 = FUN_0044c650(param_2);
  }
  if (lVar1 == 0) {
    FUN_004014b0(0x22,0x9c,0x96,"external/openssl/crypto/x509v3/v3_crld.c",0x37);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00459960(0,param_1,lVar1);
    if (*param_2 == '@') {
      FUN_0045b200(param_1,lVar1);
    }
    else {
      FUN_004078c0(lVar1,PTR_LAB_043742b0);
    }
  }
  return uVar2;
}


