/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3a7d8; name: FUN_02f3a7d8
 */


void FUN_02f3a7d8(long *param_1,int *param_2)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x10))();
  iVar1 = *param_2;
  if (iVar1 == 0) {
    FUN_02f36e78(param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,param_2[4]);
  }
  else if (iVar1 == 1) {
    FUN_02f3743c(param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,param_2[4]);
  }
  else if (iVar1 == 2) {
    FUN_02f37640(param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,
                 *(undefined1 *)((long)param_2 + 0x22),param_2[4]);
  }
  FUN_02e990a8(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x02f3a834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}


