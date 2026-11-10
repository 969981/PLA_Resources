/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050c46c; name: FUN_0050c46c
 */


uint FUN_0050c46c(undefined8 param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong local_30 [4];
  
  local_30[2] = 0;
  local_30[3] = 0;
  local_30[0] = 0;
  local_30[1] = 0;
                    /* try { // try from 0050c488 to 0050c493 has its CatchHandler @ 0050c4e4 */
  puVar2 = (undefined8 *)FUN_0050c518(DAT_0439ebd0,param_1,local_30 + 3,local_30);
  if (puVar2 == (undefined8 *)0x0) {
    uVar1 = 0;
  }
  else {
                    /* try { // try from 0050c4a4 to 0050c4bb has its CatchHandler @ 0050c4f4 */
    uVar1 = (**(code **)*puVar2)(puVar2,local_30[3]);
  }
  FUN_003ec320(local_30[3]);
  if ((local_30[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_30[2]);
  }
  return uVar1 & 1;
}


