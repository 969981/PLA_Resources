/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00415b10; name: FUN_00415b10
 */


undefined8 FUN_00415b10(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar1 = 0x69;
    uVar2 = 0xf5;
  }
  else {
    if (param_2 != 0) {
      uVar1 = FUN_00417ae0();
      return uVar1;
    }
    uVar1 = 0x6b;
    uVar2 = 0xfa;
  }
  FUN_004014b0(0xe,0x6c,uVar1,"external/openssl/crypto/conf/conf_lib.c",uVar2);
  return 0;
}


