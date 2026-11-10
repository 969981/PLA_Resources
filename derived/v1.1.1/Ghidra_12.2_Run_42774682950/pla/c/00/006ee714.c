/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006ee714; name: FUN_006ee714
 */


void FUN_006ee714(ulong *param_1)

{
  if ((param_1[0x11] & 1) != 0) {
    (**(code **)(*(long *)param_1[0x14] + 0x18))
              ((long *)param_1[0x14],param_1[0x13],param_1[0x11] & 0xfffffffffffffffe,1);
  }
  if ((param_1[0xd] & 1) != 0) {
    (**(code **)(*(long *)param_1[0x10] + 0x18))
              ((long *)param_1[0x10],param_1[0xf],param_1[0xd] & 0xfffffffffffffffe,1);
  }
  FUN_02cd5c94(param_1 + 9,param_1[10]);
  if ((param_1[5] & 1) != 0) {
    (**(code **)(*(long *)param_1[8] + 0x18))
              ((long *)param_1[8],param_1[7],param_1[5] & 0xfffffffffffffffe,1);
  }
  FUN_006d9cd8(param_1 + 4);
  if ((*param_1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006ee7c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))
            ((long *)param_1[3],param_1[2],*param_1 & 0xfffffffffffffffe,1);
  return;
}


