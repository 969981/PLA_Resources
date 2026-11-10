/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005c4100; name: FUN_005c4100
 */


void FUN_005c4100(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  ulong local_50 [6];
  
  local_50[4] = 0;
  local_50[1] = 0;
  local_50[0] = 0;
  local_50[3] = 0;
  local_50[2] = 0;
                    /* try { // try from 005c4128 to 005c412f has its CatchHandler @ 005c41b0 */
  FUN_003f9a3c(local_50,param_2);
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
                    /* try { // try from 005c413c to 005c4147 has its CatchHandler @ 005c4178 */
  FUN_003f9a3c(param_1,local_50);
  param_1[5] = param_3;
  *(undefined4 *)(param_1 + 6) = param_4;
  if ((local_50[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_50[2]);
  }
  return;
}


