/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027dabb4; name: FUN_027dabb4
 */


void FUN_027dabb4(int *param_1,void *param_2,long *param_3)

{
  undefined8 local_40;
  int local_38 [2];
  
  if ((ulong)param_3[1] < param_3[2] + 0x17cU) {
    *param_1 = 0xd;
    return;
  }
  *(undefined1 *)(*param_3 + param_3[2]) = 0xbc;
  param_3[2] = param_3[2] + 1;
  local_40 = 0x178;
  FUN_027619cc(local_38,&local_40);
  if (local_38[0] == 0) {
    memcpy((void *)(*param_3 + param_3[2]),param_2,0x178);
    param_3[2] = param_3[2] + 0x178;
  }
  *param_1 = local_38[0];
  return;
}


