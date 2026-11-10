/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042ef60; name: FUN_0042ef60
 */


undefined8 FUN_0042ef60(long *param_1,long *param_2)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xe0);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    uVar1 = 0x42;
    uVar2 = 0x36f;
  }
  else {
    if (*param_1 == *param_2) {
      if ((((int)param_1[4] == 0) || ((int)param_2[1] == 0)) || ((int)param_1[4] == (int)param_2[1])
         ) {
                    /* WARNING: Could not recover jumptable at 0x0042efd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*UNRECOVERED_JUMPTABLE)();
        return uVar1;
      }
    }
    uVar1 = 0x65;
    uVar2 = 0x373;
  }
  FUN_004014b0(0x10,0x78,uVar1,"external/openssl/crypto/ec/ec_lib.c",uVar2);
  return 0;
}


