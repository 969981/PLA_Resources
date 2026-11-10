/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ecc560; name: FUN_02ecc560
 */


void FUN_02ecc560(long *param_1,int *param_2,ulong param_3)

{
  int iVar1;
  
  if (((param_3 & 1) == 0) &&
     (iVar1 = *(int *)((long)param_1 + 700) + -1, *(int *)((long)param_1 + 700) != 0 && iVar1 != 0))
  {
    *(int *)((long)param_1 + 700) = iVar1;
    return;
  }
  *(undefined4 *)((long)param_1 + 700) = 0;
  (**(code **)(*param_1 + 0xa0))(param_1);
  if (*param_2 != 0) {
    FUN_02ecc8a4(param_1,0,0x8000000,*(undefined8 *)param_2,param_2[2]);
    return;
  }
  if (param_1[0x44] == 0) {
    *(undefined4 *)((long)param_1 + 0x254) = 0x3f800000;
                    /* WARNING: Could not recover jumptable at 0x02ecc5c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x68))(param_1);
    return;
  }
  FUN_02f0f0a8(0x3f800000,DAT_0440a150,param_1[0x44],0x8000000,0,4,0);
  return;
}


