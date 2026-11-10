/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046f590; name: FUN_0046f590
 */


long FUN_0046f590(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_18;
  
  local_18 = 0;
  local_28 = 0;
  iVar1 = FUN_004421d0(&local_28,&local_30,0,param_2,param_3,param_5,param_6);
  if (iVar1 == 0) {
    lVar2 = 0;
  }
  else {
    local_18 = local_28;
    lVar2 = (*param_1)(param_4,&local_18,local_30);
    if (lVar2 == 0) {
      FUN_004014b0(9,0x67,0xd,"external/openssl/crypto/pem/pem_oth.c",0x21);
    }
    FUN_00400420(local_28,"external/openssl/crypto/pem/pem_oth.c",0x22);
  }
  return lVar2;
}


