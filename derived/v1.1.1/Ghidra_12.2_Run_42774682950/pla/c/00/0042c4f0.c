/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042c4f0; name: FUN_0042c4f0
 */


undefined4
FUN_0042c4f0(undefined8 param_1,undefined8 param_2,undefined4 param_3,void *param_4,int param_5,
            undefined8 param_6)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  void *local_50;
  void *local_48;
  undefined8 *local_38;
  
  local_50 = (void *)0x0;
  local_48 = param_4;
  local_38 = (undefined8 *)FUN_004002a0(0x10,"external/openssl/crypto/dsa/dsa_asn1.c",0x1a);
  if (local_38 == (undefined8 *)0x0) {
    FUN_004014b0(10,0x66,0x41,"external/openssl/crypto/dsa/dsa_asn1.c",0x1c);
    uVar4 = 0xffffffff;
  }
  else {
    lVar5 = FUN_0041d030(&local_38,&local_48,(long)param_5,&DAT_04164080);
    if (lVar5 == 0) {
      iVar2 = -1;
      uVar4 = 0xffffffff;
    }
    else {
      iVar2 = FUN_0041f020(local_38,&local_50,&DAT_04164080);
      if (iVar2 == param_5) {
        iVar3 = memcmp(param_4,local_50,(long)param_5);
        iVar2 = param_5;
        if (iVar3 == 0) {
          uVar4 = FUN_0042c9c0(param_2,param_3,local_38,param_6);
        }
        else {
          uVar4 = 0xffffffff;
        }
      }
      else {
        uVar4 = 0xffffffff;
      }
    }
    FUN_00400620(local_50,(long)iVar2,"external/openssl/crypto/dsa/dsa_asn1.c",0x98);
    puVar1 = local_38;
    if (local_38 != (undefined8 *)0x0) {
      FUN_0040c140(*local_38);
      FUN_0040c140(puVar1[1]);
      FUN_00400420(puVar1,"external/openssl/crypto/dsa/dsa_asn1.c",0x26);
    }
  }
  return uVar4;
}


