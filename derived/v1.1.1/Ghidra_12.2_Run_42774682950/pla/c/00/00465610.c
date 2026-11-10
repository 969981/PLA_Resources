/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00465610; name: FUN_00465610
 */


undefined8
FUN_00465610(long *param_1,long param_2,ulong *param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  
  if (((param_1 == (long *)0x0) || (lVar3 = *param_1, lVar3 == 0)) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0x98), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    FUN_004014b0(6,0x69,0x96,"external/openssl/crypto/evp/pmeth_fn.c",0x9f);
    return 0xfffffffe;
  }
  if ((int)param_1[4] != 0x100) {
    FUN_004014b0(6,0x69,0x97,"external/openssl/crypto/evp/pmeth_fn.c",0xa3);
    return 0xffffffff;
  }
  if ((*(byte *)(lVar3 + 4) >> 1 & 1) == 0) {
LAB_00465658:
                    /* WARNING: Could not recover jumptable at 0x00465678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5);
    return uVar2;
  }
  iVar1 = FUN_00422d70(param_1[2]);
  if (iVar1 == 0) {
    uVar2 = 0xa3;
  }
  else {
    if (param_2 == 0) {
      *param_3 = (long)iVar1;
      return 1;
    }
    if ((ulong)(long)iVar1 <= *param_3) {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x98);
      goto LAB_00465658;
    }
    uVar2 = 0x9b;
  }
  FUN_004014b0(6,0x69,uVar2,"external/openssl/crypto/evp/pmeth_fn.c",0xa6);
  return 0;
}


