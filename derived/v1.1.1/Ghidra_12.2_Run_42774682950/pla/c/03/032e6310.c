/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e6310; name: FUN_032e6310
 */


void FUN_032e6310(long *param_1,uint param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint uVar4;
  
  if (*param_1 != 0) {
    if ((param_2 & 1) != 0) {
      puVar1 = (ulong *)param_1[1];
      while( true ) {
        uVar4 = (uint)*puVar1;
        if ((uVar4 >> 8 & 1) != 0) break;
        if (((*puVar1 & 1) != 0) || (puVar1 = (ulong *)puVar1[1], puVar1 == (ulong *)0x0))
        goto LAB_032e63a8;
      }
      if ((puVar1 != (ulong *)0x0) &&
         (uVar4 = (uVar4 & 0xff) - (uVar4 >> 1 & 0x55),
         uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333),
         (code *)puVar1[(ulong)((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] !=
         (code *)0x0)) {
        (*(code *)puVar1[(ulong)((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2])
                  (*param_1,(ulong *)param_1[1],1);
      }
    }
LAB_032e63a8:
    if ((param_2 >> 1 & 1) != 0) {
      puVar2 = (undefined8 *)param_1[1];
      uVar4 = (uint)*puVar2;
      if ((uVar4 >> 0x13 & 1) == 0) {
        puVar2 = (undefined8 *)puVar2[1];
        uVar4 = (uint)*puVar2;
        while ((uVar4 >> 0x13 & 1) == 0) {
          puVar2 = (undefined8 *)puVar2[1];
          uVar4 = (uint)*puVar2;
        }
      }
      uVar4 = (uVar4 & 0x7ffff) - (uVar4 >> 1 & 0x15555);
      uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
      (**(code **)(*(long *)puVar2[(ulong)((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
                                   2] + 0x20))
                ((long *)puVar2[(ulong)((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2]
                 ,*param_1);
      uVar3 = param_1[2];
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      if ((uVar3 & 1) != 0) {
        FUN_032e0c40(uVar3 & 0xfffffffffffffffe);
        return;
      }
    }
  }
  return;
}


