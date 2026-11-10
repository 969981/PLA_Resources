/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042e5c0; name: FUN_0042e5c0
 */


undefined8 FUN_0042e5c0(long *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x48) == (code *)0x0) {
    FUN_004014b0(0x10,0xab,0x42,"external/openssl/crypto/ec/ec_lib.c",0x1df);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0042e5d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x48))();
  return uVar1;
}


