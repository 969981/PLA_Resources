/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013f7bd8; name: FUN_013f7bd8
 */


undefined4 FUN_013f7bd8(long param_1,uint param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  uint *puVar3;
  int *piVar4;
  
  uVar1 = 5;
  if (((int)param_2 < 0x38a) && (piVar4 = *(int **)(param_1 + 0x38), piVar4 != (int *)0x0)) {
    uVar2 = *(ulong *)(param_1 + (ulong)param_2 * 0x10 + 0x42);
    if ((~uVar2 & 0xf000000000000) == 0) {
      return 5;
    }
    puVar3 = (uint *)((long)piVar4 + (ulong)*(ushort *)((long)piVar4 + (4 - (long)*piVar4)));
    puVar3 = (uint *)((long)puVar3 +
                     (uVar2 >> 0x2e & 0x3c) +
                     (ulong)*(ushort *)(param_1 + (ulong)param_2 * 0x10 + 0x40) * 4 + (ulong)*puVar3
                     + 4);
    piVar4 = (int *)((long)puVar3 + (ulong)*puVar3);
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0xf) ||
       (uVar2 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[7], uVar2 == 0)) {
      return 0;
    }
    uVar1 = *(undefined4 *)((long)piVar4 + uVar2);
  }
  return uVar1;
}


