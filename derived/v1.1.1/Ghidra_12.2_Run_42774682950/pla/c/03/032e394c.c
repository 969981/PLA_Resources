/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e394c; name: FUN_032e394c
 */


void FUN_032e394c(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 == (ulong *)0x0) {
    *param_1 = 0;
  }
  else {
    puVar1 = param_2;
    do {
      uVar3 = (uint)*puVar1;
      if ((uVar3 >> 3 & 1) != 0) {
        uVar3 = (uVar3 & 7) - (uVar3 >> 1 & 1);
        uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
        uVar2 = puVar1[(ulong)((uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
        goto LAB_032e39ac;
      }
      if ((*puVar1 & 1) != 0) {
        uVar2 = 0;
        goto LAB_032e39ac;
      }
      puVar1 = (ulong *)puVar1[1];
    } while (puVar1 != (ulong *)0x0);
    uVar2 = 0;
LAB_032e39ac:
    *param_1 = uVar2;
    do {
      uVar3 = (uint)*param_2;
      if ((uVar3 >> 0xf & 1) != 0) {
        uVar3 = (uVar3 & 0x7fff) - (uVar3 >> 1 & 0x1555);
        uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
        param_1[1] = param_2[(ulong)((uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
        return;
      }
      if ((*param_2 & 9) != 0) {
        param_1[1] = 0;
        return;
      }
      param_2 = (ulong *)param_2[1];
    } while (param_2 != (ulong *)0x0);
  }
  param_1[1] = 0;
  return;
}


