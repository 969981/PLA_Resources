/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00404920; name: FUN_00404920
 */


long FUN_00404920(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  if ((*param_1 == 0) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x40), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    FUN_004014b0(0x20,0x67,0x79,"external/openssl/crypto/bio/bio_lib.c",0x206);
    return -2;
  }
  pcVar1 = (code *)param_1[2];
  if ((code *)param_1[1] == (code *)0x0) {
    if (pcVar1 == (code *)0x0) goto LAB_00404a00;
LAB_004049c8:
    lVar2 = (*pcVar1)(param_1,6,param_4,0,param_2,param_3,1,0);
  }
  else {
    if (pcVar1 != (code *)0x0) goto LAB_004049c8;
    lVar2 = (*(code *)param_1[1])(param_1,6,param_4,param_2,param_3,1);
  }
  if (lVar2 < 1) {
    return lVar2;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x40);
LAB_00404a00:
  lVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  UNRECOVERED_JUMPTABLE = (code *)param_1[2];
  if ((code *)param_1[1] == (code *)0x0) {
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return lVar2;
    }
  }
  else if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00404a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = (*(code *)param_1[1])(param_1,0x86,param_4,param_2,param_3,lVar2);
    return lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00404a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,0x86,param_4,0,param_2,param_3,lVar2,0);
  return lVar2;
}


