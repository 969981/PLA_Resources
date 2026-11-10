/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00420ce0; name: FUN_00420ce0
 */


long FUN_00420ce0(undefined4 *param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((param_1[1] & 0xfffffeff) != 2) {
    FUN_004014b0(0xd,0xe4,0xe1,"external/openssl/crypto/asn1/a_int.c",499);
    return 0;
  }
  lVar1 = FUN_0040c710(*(undefined8 *)(param_1 + 2),*param_1,param_2);
  if (lVar1 == 0) {
    FUN_004014b0(0xd,0xe4,0x69,"external/openssl/crypto/asn1/a_int.c",0x1f9);
    return 0;
  }
  if ((*(byte *)((long)param_1 + 5) & 1) != 0) {
    FUN_0040cea0(lVar1,1);
  }
  return lVar1;
}


