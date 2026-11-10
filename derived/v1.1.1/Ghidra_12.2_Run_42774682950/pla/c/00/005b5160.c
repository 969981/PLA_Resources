/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005b5160; name: FUN_005b5160
 */


void FUN_005b5160(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_0418ac48;
                    /* try { // try from 005b517c to 005b517f has its CatchHandler @ 005b51d8 */
  FUN_003fafc0(param_1[7]);
  if ((*(byte *)(param_1 + 0xb) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 8);
  }
  else {
    FUN_002e2ea0(PTR_LAB_04373088,param_1[0xd]);
    bVar1 = *(byte *)(param_1 + 8);
  }
  if ((bVar1 & 1) == 0) {
    FUN_003f693c(param_1);
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088,param_1[10]);
  FUN_003f693c(param_1);
  return;
}


