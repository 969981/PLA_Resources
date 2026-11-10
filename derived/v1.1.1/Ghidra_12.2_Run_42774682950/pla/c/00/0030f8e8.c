/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030f8e8; name: FUN_0030f8e8
 */


void FUN_0030f8e8(int *param_1)

{
  if ((*(long **)(param_1 + 4) != (long *)0x0) &&
     (0 < param_1[0xb] + (param_1[2] - *param_1) + param_1[7])) {
                    /* try { // try from 0030f924 to 0030f927 has its CatchHandler @ 0030f958 */
    (**(code **)(**(long **)(param_1 + 4) + 0x18))();
    param_1[6] = param_1[6] - (param_1[0xb] + (param_1[2] - (int)*(undefined8 *)param_1));
    param_1[7] = 0;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)param_1;
    param_1[0xb] = 0;
  }
  return;
}


