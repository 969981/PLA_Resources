/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042efe0; name: FUN_0042efe0
 */


undefined8 FUN_0042efe0(long *param_1,long param_2,long *param_3)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xe8);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    uVar1 = 0x42;
    uVar2 = 0x37f;
  }
  else {
    if (param_2 == 0) {
LAB_0042f084:
                    /* WARNING: Could not recover jumptable at 0x0042f088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
    plVar3 = (long *)*param_3;
    lVar4 = *plVar3;
    while ((*param_1 == lVar4 &&
           (((int)param_1[4] == 0 || ((int)plVar3[1] == 0 || (int)param_1[4] == (int)plVar3[1])))))
    {
      param_2 = param_2 + -1;
      param_3 = param_3 + 1;
      if (param_2 == 0) goto LAB_0042f084;
      plVar3 = (long *)*param_3;
      lVar4 = *plVar3;
    }
    uVar1 = 0x65;
    uVar2 = 900;
  }
  FUN_004014b0(0x10,0x88,uVar1,"external/openssl/crypto/ec/ec_lib.c",uVar2);
  return 0;
}


