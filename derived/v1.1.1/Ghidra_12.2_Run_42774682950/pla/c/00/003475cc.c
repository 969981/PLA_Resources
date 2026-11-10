/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003475cc; name: FUN_003475cc
 */


void FUN_003475cc(char *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte local_38 [8];
  ulong local_30;
  ulong local_28;
  
  if (*param_1 != '\0') {
    if ((param_1[0x30] & 1U) == 0) {
      if ((byte)param_1[0x30] >> 1 == 0) {
        return;
      }
    }
    else if (*(long *)(param_1 + 0x38) == 0) {
      return;
    }
    FUN_00364e80(local_38);
    uVar1 = (ulong)(local_38[0] >> 1);
    uVar2 = (ulong)local_38 | 1;
    if ((local_38[0] & 1) != 0) {
      uVar1 = local_30;
      uVar2 = local_28;
    }
                    /* try { // try from 00347630 to 00347637 has its CatchHandler @ 00347660 */
    FUN_002e4094(param_2,uVar2,uVar1);
    if ((local_38[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_28);
    }
  }
  return;
}


