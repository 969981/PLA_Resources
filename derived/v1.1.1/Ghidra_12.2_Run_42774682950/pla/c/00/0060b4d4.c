/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060b4d4; name: FUN_0060b4d4
 */


void FUN_0060b4d4(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
                    /* try { // try from 0060b4ec to 0060b4f7 has its CatchHandler @ 0060b504 */
  FUN_0060b82c(param_1 + 2,0x1000,0);
  return;
}


