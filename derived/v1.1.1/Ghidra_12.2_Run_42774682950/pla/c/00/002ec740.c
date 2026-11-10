/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ec740; name: FUN_002ec740
 */


undefined8 FUN_002ec740(byte *param_1,long param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    uVar2 = 0;
    while ((*param_1 - 0x30 < 10 && (uVar1 = ((uint)*param_1 + uVar2 * 10) - 0x30, uVar2 <= uVar1)))
    {
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
      uVar2 = uVar1;
      if (param_2 == 0) {
        *param_3 = uVar1;
        return 1;
      }
    }
  }
  return 0;
}


