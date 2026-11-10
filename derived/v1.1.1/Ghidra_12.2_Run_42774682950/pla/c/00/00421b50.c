/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00421b50; name: FUN_00421b50
 */


void FUN_00421b50(long *param_1,char *param_2,int param_3)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  
  if (param_2 == (char *)0x0) {
    iVar1 = *(int *)*param_1;
    param_1 = (long *)((int *)*param_1 + 2);
    lVar2 = *param_1;
  }
  else {
    lVar2 = *(long *)(param_2 + 0x20);
    if (param_3 == 0) {
      if (lVar2 != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x18);
        goto joined_r0x00421be8;
      }
    }
    else if (lVar2 != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x20);
joined_r0x00421be8:
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00421b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(param_1);
        return;
      }
    }
    if (*param_2 == '\x05') {
      if (*param_1 == 0) {
        return;
      }
      goto switchD_00421bac_caseD_fffffffd;
    }
    iVar1 = *(int *)(param_2 + 8);
    if (iVar1 == 1) goto LAB_00421c38;
    lVar2 = *param_1;
  }
  if (lVar2 == 0) {
    return;
  }
  switch(iVar1) {
  case 1:
    if (param_2 == (char *)0x0) {
      *(int *)param_1 = -1;
      return;
    }
LAB_00421c38:
    *(int *)param_1 = (int)*(undefined8 *)(param_2 + 0x28);
    return;
  case 6:
    FUN_00409be0(*param_1);
  case 5:
    *param_1 = 0;
    return;
  case -4:
    FUN_00421b50(param_1,0,0);
    FUN_00400420(*param_1,"external/openssl/crypto/asn1/tasn_fre.c",200);
    *param_1 = 0;
    return;
  }
switchD_00421bac_caseD_fffffffd:
  FUN_0040a5b0(*param_1,param_3);
  *param_1 = 0;
  return;
}


