/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a4aa4; name: FUN_031a4aa4
 */


void FUN_031a4aa4(byte *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 local_18 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = CONCAT44((float)((ulong)param_2[1] >> 0x20) -
                        (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20),
                        (float)param_2[1] - (float)*(undefined8 *)(param_1 + 0x18));
  *param_2 = CONCAT44((float)((ulong)*param_2 >> 0x20) - (float)((ulong)uVar1 >> 0x20),
                      (float)*param_2 - (float)uVar1);
  local_18[0] = (&DAT_03aadcd8)[*param_1];
  FUN_03159c80(local_18);
  return;
}


