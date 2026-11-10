/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d37ad4; name: FUN_00d37ad4
 */


byte FUN_00d37ad4(long param_1)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  byte bVar5;
  
  uVar2 = *(uint *)(param_1 + 400);
  if (uVar2 == 0) {
    return 1;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    bVar1 = 1;
  }
  else {
    bVar1 = *(byte *)(*(long *)(param_1 + 0x18) + 0xd8) & 1;
    uVar2 = *(uint *)(param_1 + 400);
  }
  if (1 < uVar2) {
    if (*(long *)(param_1 + 0x30) == 0) {
      bVar5 = 1;
    }
    else {
      bVar5 = *(byte *)(*(long *)(param_1 + 0x30) + 0xd8) & 1;
      uVar2 = *(uint *)(param_1 + 400);
    }
    bVar1 = bVar1 & bVar5;
    if (2 < uVar2) {
      if (*(long *)(param_1 + 0x48) == 0) {
        bVar5 = 1;
      }
      else {
        bVar5 = *(byte *)(*(long *)(param_1 + 0x48) + 0xd8) & 1;
        uVar2 = *(uint *)(param_1 + 400);
      }
      bVar1 = bVar1 & bVar5;
      if (3 < uVar2) {
        plVar3 = (long *)(param_1 + 0x60);
        uVar4 = 3;
        do {
          if (*plVar3 == 0) {
            bVar5 = 1;
          }
          else {
            bVar5 = *(byte *)(*plVar3 + 0xd8) & 1;
            uVar2 = *(uint *)(param_1 + 400);
          }
          uVar4 = uVar4 + 1;
          bVar1 = bVar1 & bVar5;
          plVar3 = plVar3 + 3;
        } while (uVar4 < uVar2);
      }
    }
  }
  return bVar1;
}


