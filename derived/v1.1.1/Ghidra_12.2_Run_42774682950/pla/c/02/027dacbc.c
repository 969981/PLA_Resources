/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027dacbc; name: FUN_027dacbc
 */


void FUN_027dacbc(int *param_1,void *param_2,long *param_3)

{
  int local_38 [2];
  long local_28;
  
  local_28 = 0;
  FUN_02765cd8(local_38,&local_28);
  if (local_38[0] == 0) {
    if (local_28 == 0x178) {
      memcpy(param_2,(void *)(*param_3 + param_3[2]),0x178);
      param_3[2] = param_3[2] + 0x178;
      *param_1 = 0;
    }
    else {
      *param_1 = 4;
    }
  }
  else {
    *param_1 = local_38[0];
  }
  return;
}


