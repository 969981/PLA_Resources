/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e2464; name: FUN_032e2464
 */


undefined1  [16] FUN_032e2464(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  puVar1 = param_1;
  while( true ) {
    uVar3 = (uint)*puVar1;
    if ((uVar3 >> 3 & 1) != 0) {
      uVar2 = 0;
      if (puVar1 != (ulong *)0x0) {
        uVar3 = (uVar3 & 7) - (uVar3 >> 1 & 1);
        uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
        uVar2 = puVar1[(ulong)((uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
      }
      goto LAB_032e24c4;
    }
    if ((*puVar1 & 1) != 0) break;
    puVar1 = (ulong *)puVar1[1];
    if (puVar1 == (ulong *)0x0) {
      uVar2 = 0;
LAB_032e24c4:
      do {
        uVar3 = (uint)*param_1;
        if ((uVar3 >> 0xf & 1) != 0) {
          uVar3 = (uVar3 & 0x7fff) - (uVar3 >> 1 & 0x1555);
          uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
          auVar5._8_8_ = param_1[(ulong)((uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2
                                ];
          auVar5._0_8_ = uVar2;
          return auVar5;
        }
      } while (((*param_1 & 9) == 0) && (param_1 = (ulong *)param_1[1], param_1 != (ulong *)0x0));
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar2;
      return auVar4;
    }
  }
  uVar2 = 0;
  goto LAB_032e24c4;
}


