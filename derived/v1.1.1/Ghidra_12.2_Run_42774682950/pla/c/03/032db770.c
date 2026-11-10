/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032db770; name: FUN_032db770
 */


undefined8 FUN_032db770(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  puVar3 = param_1;
  do {
    uVar4 = (uint)*puVar3;
    if ((uVar4 >> 0x13 & 1) != 0) {
      uVar4 = (uVar4 & 0x7ffff) - (uVar4 >> 1 & 0x15555);
      uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
      plVar1 = (long *)puVar3[(ulong)((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
      if (plVar1 == (long *)0x0) {
        return 0;
      }
                    /* WARNING: Could not recover jumptable at 0x032db7d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
      return uVar2;
    }
    puVar3 = (undefined8 *)puVar3[1];
  } while (puVar3 != (undefined8 *)0x0);
  return 0;
}


