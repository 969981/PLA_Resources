/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ecc4e4; name: FUN_02ecc4e4
 */


void FUN_02ecc4e4(long *param_1,int *param_2)

{
  *(int *)((long)param_1 + 700) = *(int *)((long)param_1 + 700) + 1;
  if (*param_2 != 0) {
    FUN_02ecc8a4(param_1,0,0x4000000,*(undefined8 *)param_2,param_2[2]);
    return;
  }
  if ((*(byte *)((long)param_1 + 0x2a2) & 0x78) == 0) {
                    /* WARNING: Could not recover jumptable at 0x02ecc510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x98))(param_1,0);
    return;
  }
  if (param_1[0x44] == 0) {
                    /* WARNING: Could not recover jumptable at 0x02ecc528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x98))(param_1,1);
    return;
  }
  FUN_02f0f0a8(0,DAT_0440a150,param_1[0x44],0x4000000,0,4,0);
  return;
}


