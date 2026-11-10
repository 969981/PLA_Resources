/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029571a4; name: FUN_029571a4
 */


undefined8 FUN_029571a4(long param_1,undefined8 *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x1c);
  if (uVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0x100000000;
    *(undefined8 *)(param_1 + 0x10) = *param_2;
    return 1;
  }
  if ((*(uint *)(param_1 + 8) < 0x13) &&
     (uVar1 < *(uint *)(&DAT_03a7f17c +
                       *(long *)(&DAT_03a7f0e0 + (long)(int)*(uint *)(param_1 + 8) * 8) * 8))) {
    *(uint *)(param_1 + 0x1c) = uVar1 + 1;
    return 1;
  }
  return 0;
}


