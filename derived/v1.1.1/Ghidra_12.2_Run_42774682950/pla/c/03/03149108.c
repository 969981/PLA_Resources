/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03149108; name: FUN_03149108
 */


void FUN_03149108(long param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if (0 < (int)uVar1) {
    uVar3 = 0;
    do {
      plVar2 = *(long **)(*(long *)(param_1 + 0x50) + uVar3 * 8);
      if ((*(long *)(param_1 + 0x60) != 0) && ((*(byte *)(plVar2 + 3) & 1) == 0)) {
        (**(code **)(*plVar2 + 0x20))(plVar2);
        *(byte *)(plVar2 + 3) = *(byte *)(plVar2 + 3) | 1;
      }
      FUN_032d647c(plVar2);
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}


