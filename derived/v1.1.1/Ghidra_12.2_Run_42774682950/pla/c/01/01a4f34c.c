/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a4f34c; name: FUN_01a4f34c
 */


void FUN_01a4f34c(long *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x62) = 1;
  uVar1 = (undefined4)param_1[99];
  *(undefined4 *)(param_1 + 0x41) = *(undefined4 *)((long)param_1 + 0x20c);
  *(undefined4 *)(param_1 + 0x3f) = uVar1;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((long)param_1 + 0x214) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x01a4f378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x180))(uVar1);
  return;
}


