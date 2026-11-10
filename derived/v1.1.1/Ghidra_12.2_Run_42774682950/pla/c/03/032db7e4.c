/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032db7e4; name: FUN_032db7e4
 */


undefined8 FUN_032db7e4(long param_1,ulong *param_2,int param_3)

{
  ulong uVar1;
  ulong *puVar2;
  uint uVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  puVar2 = param_2;
  while( true ) {
    uVar3 = (uint)*puVar2;
    if ((uVar3 >> 0x16 & 1) != 0) break;
    if (((*puVar2 & 1) != 0) || (puVar2 = (ulong *)puVar2[1], puVar2 == (ulong *)0x0))
    goto LAB_032db8b0;
  }
  if ((puVar2 != (ulong *)0x0) &&
     (uVar3 = (uVar3 & 0x3fffff) - (uVar3 >> 1 & 0x155555),
     uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333),
     pcVar5 = (code *)puVar2[(ulong)((uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2],
     pcVar5 != (code *)0x0)) goto LAB_032db874;
LAB_032db8b0:
  puVar2 = param_2;
  while( true ) {
    uVar3 = (uint)*puVar2;
    if ((uVar3 >> 6 & 1) != 0) break;
    if ((*puVar2 & 1) != 0) {
      return 0x80040200;
    }
    puVar2 = (ulong *)puVar2[1];
    if (puVar2 == (ulong *)0x0) {
      return 0x80040200;
    }
  }
  if ((puVar2 == (ulong *)0x0) ||
     (uVar3 = (uVar3 & 0x3f) - (uVar3 >> 1 & 0x15),
     uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333),
     pcVar5 = (code *)puVar2[(ulong)((uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2],
     pcVar5 == (code *)0x0)) {
    return 0x80040200;
  }
LAB_032db874:
  uVar1 = FUN_032e225c(param_2,&DAT_043568f0);
  if ((uVar1 & 1) == 0) {
    (*pcVar5)(param_1,param_2,param_3);
  }
  else if (0 < param_3) {
    puVar2 = param_2;
    while( true ) {
      uVar3 = (uint)*puVar2;
      if ((uVar3 >> 0x14 & 1) != 0) break;
      if (((*puVar2 & 1) != 0) || (puVar2 = (ulong *)puVar2[1], puVar2 == (ulong *)0x0))
      goto LAB_032db8a8;
    }
    if (puVar2 != (ulong *)0x0) {
      uVar3 = (uVar3 & 0xfffff) - (uVar3 >> 1 & 0x55555);
      uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
      uVar1 = (ulong)(ushort)puVar2[(ulong)((uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18)
                                    + 2];
      goto LAB_032db948;
    }
LAB_032db8a8:
    uVar1 = 0;
LAB_032db948:
    uVar4 = *(undefined8 *)(param_1 + 8);
    (*pcVar5)(param_1,param_2,1);
    *(undefined8 *)(param_1 + 8) = uVar4;
    param_3 = param_3 + -1;
    if (param_3 != 0) {
      do {
        param_1 = uVar1 + param_1;
        uVar4 = *(undefined8 *)(param_1 + 8);
        (*pcVar5)(param_1,param_2,1);
        *(undefined8 *)(param_1 + 8) = uVar4;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      return 0;
    }
  }
  return 0;
}


