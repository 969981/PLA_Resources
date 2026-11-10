/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042d260; name: FUN_0042d260
 */


undefined8 FUN_0042d260(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  if (((param_1 == 0) || (*(long **)(param_1 + 0x18) == (long *)0x0)) ||
     (*(long *)(param_1 + 0x20) == 0)) {
    uVar1 = 0x43;
    uVar2 = 0x102;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_1 + 0x18) + 0x160);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0042d288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
    uVar1 = 0x42;
    uVar2 = 0x107;
  }
  FUN_004014b0(0x10,0xb1,uVar1,"external/openssl/crypto/ec/ec_key.c",uVar2);
  return 0;
}


