/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0041eeb0; name: FUN_0041eeb0
 */


long FUN_0041eeb0(int *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_18;
  
  local_18 = *(undefined8 *)(param_1 + 2);
  lVar1 = FUN_0041d030(0,&local_18,(long)*param_1,param_2);
  if (lVar1 == 0) {
    FUN_004014b0(0xd,199,0x6e,"external/openssl/crypto/asn1/asn_pack.c",0x3c);
    return 0;
  }
  return lVar1;
}


