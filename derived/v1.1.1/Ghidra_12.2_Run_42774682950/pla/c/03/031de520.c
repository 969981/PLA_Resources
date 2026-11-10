/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031de520; name: FUN_031de520
 */


void FUN_031de520(undefined8 param_1,undefined8 param_2,int *param_3,int *param_4,int param_5)

{
  int local_48 [2];
  int local_38 [2];
  
  while (0 < param_5) {
    param_5 = param_5 + -1;
    local_38[0] = param_5 + *param_3;
    local_48[0] = param_5 + *param_4;
    FUN_031de180(param_1,param_2,local_38,local_48);
  }
  return;
}


