/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006dd448; name: FUN_006dd448
 */


void FUN_006dd448(ulong *param_1)

{
  byte *pbVar1;
  
  if ((byte)param_1[4] != 0) {
    if ((*param_1 & 1) == 0) {
      pbVar1 = (byte *)((long)param_1 + 1);
    }
    else {
      pbVar1 = (byte *)param_1[2];
    }
    nn::fs::Unmount((char *)pbVar1);
    *(byte *)(param_1 + 4) = 0;
  }
  if ((*param_1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006dd4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))
            ((long *)param_1[3],param_1[2],*param_1 & 0xfffffffffffffffe,1);
  return;
}


