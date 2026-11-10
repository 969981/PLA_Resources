/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003918e8; name: FUN_003918e8
 */


void FUN_003918e8(undefined8 param_1,undefined8 param_2)

{
  ulong local_28 [3];
  
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[0] = 0;
                    /* try { // try from 003918fc to 00391903 has its CatchHandler @ 00391928 */
  FUN_0039c810(param_1,local_28,param_2);
  if ((local_28[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_28[2]);
  }
  return;
}


