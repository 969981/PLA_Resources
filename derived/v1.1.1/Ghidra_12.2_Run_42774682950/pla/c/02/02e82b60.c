/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e82b60; name: FUN_02e82b60
 */


void FUN_02e82b60(long param_1,undefined8 param_2)

{
  int iVar1;
  ushort uVar2;
  undefined1 auStack_24 [4];
  
  iVar1 = FUN_02e869b4(param_2,*(undefined4 *)(param_1 + 4));
  if ((iVar1 != 0 && *(int *)(param_1 + 4) != 0) &&
     (FUN_02e44d58(param_2,*(undefined8 *)(param_1 + 8),auStack_24), 1 < *(uint *)(param_1 + 4))) {
    uVar2 = 1;
    do {
      FUN_02e44d58(param_2,*(undefined8 *)(param_1 + (ulong)uVar2 * 8 + 8),auStack_24);
      uVar2 = uVar2 + 1;
    } while ((uint)uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}


