/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032fdf10; name: FUN_032fdf10
 */


undefined8 FUN_032fdf10(ulong *param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  ulong *puVar4;
  uint uVar5;
  
  puVar4 = param_1;
  if ((*param_1 & 1) == 0) {
    puVar4 = (ulong *)param_1[1];
    bVar2 = (byte)*puVar4;
    while ((bVar2 & 1) == 0) {
      puVar4 = (ulong *)puVar4[1];
      bVar2 = (byte)*puVar4;
    }
  }
  uVar1 = (uint)puVar4[2];
  uVar3 = (uVar1 >> 10 & 1) + (uVar1 >> 0xb & 0x1f) + (uVar1 >> 0x10 & 0xff) + 7 >> 3;
  while( true ) {
    uVar5 = (uint)*param_1;
    if ((uVar5 >> 0x14 & 1) != 0) break;
    if (((*param_1 & 1) != 0) || (param_1 = (ulong *)param_1[1], param_1 == (ulong *)0x0))
    goto LAB_032fdf68;
  }
  if (param_1 != (ulong *)0x0) {
    uVar5 = (uVar5 & 0xfffff) - (uVar5 >> 1 & 0x55555);
    uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
    if (uVar3 != (ushort)param_1[(ulong)((uVar5 + (uVar5 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2
                                ]) {
      return 0;
    }
    goto LAB_032fdfc4;
  }
LAB_032fdf68:
  if (uVar3 == 0) {
LAB_032fdfc4:
    if ((((uVar1 == 0x74605) || (uVar1 == 0x174605)) || (uVar1 == 0x345e05)) ||
       (((uVar1 = uVar1 ^ 0x100, uVar1 == 0x74605 || (uVar1 == 0x174605)) || (uVar1 == 0x345e05))))
    {
      return 1;
    }
  }
  return 0;
}


