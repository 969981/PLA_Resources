/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032ebc30; name: FUN_032ebc30
 */


void FUN_032ebc30(undefined8 param_1,ulong *param_2,undefined4 param_3,undefined4 param_4)

{
  ulong *puVar1;
  uint uVar2;
  
  puVar1 = param_2;
  do {
    uVar2 = (uint)*puVar1;
    if ((uVar2 >> 8 & 1) != 0) {
      if ((puVar1 == (ulong *)0x0) ||
         (uVar2 = (uVar2 & 0xff) - (uVar2 >> 1 & 0x55),
         uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333),
         puVar1[(ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] == 0)) {
        return;
      }
      FUN_032ec790(puVar1[(ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2],
                   param_1,param_2,param_3,param_4);
      return;
    }
    if ((*puVar1 & 1) != 0) {
      return;
    }
    puVar1 = (ulong *)puVar1[1];
  } while (puVar1 != (ulong *)0x0);
  return;
}


