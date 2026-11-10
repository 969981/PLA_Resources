/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004359d0; name: FUN_004359d0
 */


undefined8 FUN_004359d0(void)

{
  undefined8 uVar1;
  long in_x3;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(in_x3 + 0x18) + 0x180);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    FUN_004014b0(0x10,0xf7,0xa0,"external/openssl/crypto/ec/ecdh_ossl.c",0x1a);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x004359e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}


