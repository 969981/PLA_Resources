/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032db604; name: FUN_032db604
 */


void FUN_032db604(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  puVar2 = param_2;
  do {
    uVar3 = (uint)*puVar2;
    if ((uVar3 >> 0x13 & 1) != 0) {
      uVar3 = (uVar3 & 0x7ffff) - (uVar3 >> 1 & 0x15555);
      uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
      plVar1 = (long *)puVar2[(ulong)((uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
      if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032db66c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
        return;
      }
      break;
    }
    puVar2 = (undefined8 *)puVar2[1];
  } while (puVar2 != (undefined8 *)0x0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}


