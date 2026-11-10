/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00845dcc; name: FUN_00845dcc
 */


void FUN_00845dcc(long param_1)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  
  if (-1 < *(long *)(param_1 + 0x20)) {
    uVar2 = *(ushort *)(param_1 + 0x10);
    uVar4 = 0;
    do {
      uVar5 = uVar4;
      uVar1 = *(int *)(param_1 + 0x1c) + (uint)uVar5;
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar1 / uVar2;
      }
      uVar4 = uVar5 + 1;
    } while (uVar1 - uVar3 * uVar2 != *(int *)(param_1 + 0x14));
    *(ushort *)(param_1 + 0x12) = uVar5;
    *(int *)(param_1 + 0x1c) = (int)*(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0xffffffffffffffff;
  }
  return;
}


