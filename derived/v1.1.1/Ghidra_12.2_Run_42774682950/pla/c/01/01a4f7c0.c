/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a4f7c0; name: FUN_01a4f7c0
 */


void FUN_01a4f7c0(long *param_1)

{
  *(int *)(param_1 + 0x42) = (int)param_1[0x3f];
  *(undefined4 *)((long)param_1 + 0x214) = *(undefined4 *)((long)param_1 + 0x314);
  *(undefined4 *)(param_1 + 0x62) = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
                    /* WARNING: Could not recover jumptable at 0x01a4f7e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x198))(0);
  return;
}


