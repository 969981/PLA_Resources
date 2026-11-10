/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00465500; name: FUN_00465500
 */


undefined8 FUN_00465500(long *param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (((param_1 == (long *)0x0) || (*param_1 == 0)) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x58), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    FUN_004014b0(6,0x8e,0x96,"external/openssl/crypto/evp/pmeth_fn.c",0x5c);
    return 0xfffffffe;
  }
  if ((int)param_1[4] == 0x10) {
                    /* WARNING: Could not recover jumptable at 0x00465528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  FUN_004014b0(6,0x8e,0x97,"external/openssl/crypto/evp/pmeth_fn.c",0x60);
  return 0xffffffff;
}


