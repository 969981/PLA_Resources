/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e6dc8; name: FUN_032e6dc8
 */


void FUN_032e6dc8(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  puVar1 = *(ulong **)(param_1 + 8);
  if (puVar1 != (ulong *)0x0) {
    do {
      uVar2 = *puVar1;
      if (((uint)uVar2 >> 2 & 1) != 0) {
        uVar2 = puVar1[(uVar2 >> 1 & 1) + (uVar2 & 1) + 2];
        if ((uVar2 & 1) != 0) {
          FUN_032e0c28(uVar2 & 0xfffffffffffffffe);
        }
        goto LAB_032e6e08;
      }
      puVar1 = (ulong *)puVar1[1];
    } while (puVar1 != (ulong *)0x0);
    uVar2 = 0;
LAB_032e6e08:
    uVar3 = *(ulong *)(param_1 + 0x10);
    *(ulong *)(param_1 + 0x10) = uVar2;
    if ((uVar3 & 1) != 0) {
      FUN_032e0c40(uVar3 & 0xfffffffffffffffe);
      return;
    }
  }
  return;
}


