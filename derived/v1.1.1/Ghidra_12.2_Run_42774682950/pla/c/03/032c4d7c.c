/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c4d7c; name: FUN_032c4d7c
 */


undefined8 * FUN_032c4d7c(undefined8 *param_1,long param_2,int param_3)

{
  if (param_2 == 0) {
    FUN_032c4fd4(param_1);
  }
  else {
    if (param_3 < 0) {
      param_3 = FUN_032c4900(param_2);
    }
    FUN_032c4fd4(param_1,param_3);
    FUN_032c4af0(*param_1,param_2,*(int *)(param_1 + 1) + -1);
  }
  return param_1;
}


