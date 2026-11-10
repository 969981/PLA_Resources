/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032db67c; name: FUN_032db67c
 */


void FUN_032db67c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  uint uVar2;
  
  do {
    uVar2 = (uint)*param_3;
    if ((uVar2 >> 0x13 & 1) != 0) {
      uVar2 = (uVar2 & 0x7ffff) - (uVar2 >> 1 & 0x15555);
      uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
      plVar1 = (long *)param_3[(ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
      if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032db6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
        return;
      }
      break;
    }
    param_3 = (undefined8 *)param_3[1];
  } while (param_3 != (undefined8 *)0x0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}


