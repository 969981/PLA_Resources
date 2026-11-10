/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00415ce0; name: FUN_00415ce0
 */


undefined8 FUN_00415ce0(long *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (long *)0x0) {
    FUN_004014b0(0xe,0x71,0x69,"external/openssl/crypto/conf/conf_lib.c",0xd2);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00415cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x48))();
  return uVar1;
}


