/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00845e18; name: FUN_00845e18
 */


void FUN_00845e18(long param_1)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  ushort uVar6;
  
  uVar2 = *(ushort *)(param_1 + 0x10);
  uVar4 = 0;
  do {
    uVar6 = uVar4;
    uVar1 = *(int *)(param_1 + 0x1c) + (uint)uVar6;
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar1 / uVar2;
    }
    uVar5 = (uint)uVar2;
    uVar4 = uVar6 + 1;
  } while (uVar1 - uVar3 * uVar5 != *(int *)(param_1 + 0x14));
  *(ushort *)(param_1 + 0x12) = uVar6;
  uVar1 = *(int *)(param_1 + 0x1c) + 1;
  uVar3 = 0;
  if (uVar5 != 0) {
    uVar3 = uVar1 / uVar5;
  }
  *(uint *)(param_1 + 0x1c) = uVar1 - uVar3 * uVar5;
  *(undefined8 *)(param_1 + 0x20) = 0xffffffffffffffff;
  return;
}


