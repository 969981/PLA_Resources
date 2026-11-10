/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042c6b0; name: FUN_0042c6b0
 */


undefined8 FUN_0042c6b0(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long local_20;
  long local_18;
  
  local_18 = 0;
  if (param_2 != 0) {
    iVar1 = FUN_0041f020(param_2,&local_18,param_1);
    if (local_18 != 0) {
      local_20 = local_18;
      uVar2 = FUN_0041d030(0,&local_20,(long)iVar1,param_1);
      FUN_00400420(local_18,"external/openssl/crypto/asn1/a_dup.c",0x42);
      return uVar2;
    }
    FUN_004014b0(0xd,0xbf,0x41,"external/openssl/crypto/asn1/a_dup.c",0x3d);
  }
  return 0;
}


