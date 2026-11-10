/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00464ad0; name: FUN_00464ad0
 */


bool FUN_00464ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  long local_28;
  
  local_28 = 0;
  iVar2 = FUN_0041f020(param_3,&local_28,param_1);
  if (local_28 == 0) {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_00444ea0(local_28,(long)iVar2,param_4,param_5,param_2,0);
    bVar1 = iVar2 != 0;
    uVar3 = 0x3e;
    if (bVar1) {
      uVar3 = 0x41;
    }
    FUN_00400420(local_28,"external/openssl/crypto/asn1/a_digest.c",uVar3);
  }
  return bVar1;
}


