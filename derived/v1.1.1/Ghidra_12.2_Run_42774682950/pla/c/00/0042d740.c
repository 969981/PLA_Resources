/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042d740; name: FUN_0042d740
 */


undefined8 FUN_0042d740(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  
  if ((*(long **)(param_1 + 0x18) != (long *)0x0) &&
     (lVar2 = **(long **)(param_1 + 0x18), lVar2 != 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x148);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0042d760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
    FUN_004014b0(0x10,0xff,0x42,"external/openssl/crypto/ec/ec_key.c",0x239);
  }
  return 0;
}


