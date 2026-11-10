/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032db6f4; name: FUN_032db6f4
 */


void FUN_032db6f4(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*param_2;
  if ((uVar1 >> 0x13 & 1) == 0) {
    param_2 = (undefined8 *)param_2[1];
    uVar1 = (uint)*param_2;
    while ((uVar1 >> 0x13 & 1) == 0) {
      param_2 = (undefined8 *)param_2[1];
      uVar1 = (uint)*param_2;
    }
  }
  uVar1 = (uVar1 & 0x7ffff) - (uVar1 >> 1 & 0x15555);
  uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
                    /* WARNING: Could not recover jumptable at 0x032db76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_2[(ulong)((uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2]
              + 0x20))
            ((long *)param_2[(ulong)((uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2],
             param_1);
  return;
}


