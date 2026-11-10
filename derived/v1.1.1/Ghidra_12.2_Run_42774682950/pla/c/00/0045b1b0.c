/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0045b1b0; name: FUN_0045b1b0
 */


undefined8 FUN_0045b1b0(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (((*(long *)(param_1 + 0x30) == 0) || (*(long *)(param_1 + 0x28) == 0)) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x28) + 8),
     UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    FUN_004014b0(0x22,0x8e,0x94,"external/openssl/crypto/x509v3/v3_conf.c",0x181);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0045b1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}


