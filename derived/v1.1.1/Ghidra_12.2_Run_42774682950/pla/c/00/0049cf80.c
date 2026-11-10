/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0049cf80; name: FUN_0049cf80
 */


void FUN_0049cf80(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  *(int *)(param_1 + 0x18) = (int)param_2[2];
  *(undefined4 *)((long)param_1 + 0xc4) = *(undefined4 *)((long)param_2 + 0x14);
  *(int *)(param_1 + 0x19) = (int)param_2[3];
  *(undefined4 *)((long)param_1 + 0xcc) = *(undefined4 *)((long)param_2 + 0x1c);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = *param_2 & 0xffffffc0fffffff;
  uVar1 = param_2[1];
  param_1[0x1c] = 0;
  param_1[4] = uVar1 & 0xffffffc0ffffffc;
  return;
}


