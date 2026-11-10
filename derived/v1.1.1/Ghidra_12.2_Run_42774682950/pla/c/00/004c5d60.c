/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c5d60; name: FUN_004c5d60
 */


bool FUN_004c5d60(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  int *piVar4;
  ulong uVar5;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  if (uVar3 == 0) {
    return false;
  }
  if (*(int *)(param_1 + 0x580) == 0) {
    return true;
  }
  piVar4 = (int *)(param_1 + 0x5d0);
  uVar2 = 1;
  do {
    uVar5 = uVar2;
    if (uVar3 == uVar5) break;
    iVar1 = *piVar4;
    piVar4 = piVar4 + 0x14;
    uVar2 = uVar5 + 1;
  } while (iVar1 != 0);
  return uVar5 < uVar3;
}


