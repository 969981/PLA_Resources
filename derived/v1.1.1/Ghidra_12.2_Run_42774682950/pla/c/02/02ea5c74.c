/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea5c74; name: FUN_02ea5c74
 */


void FUN_02ea5c74(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if (*(int *)(param_1 + 0x50) != 0) {
    uVar2 = 0;
    lVar3 = 8;
    do {
      FUN_02f59e60(0,*(undefined8 *)(lVar1 + lVar3));
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x10;
      lVar1 = *(long *)(param_1 + 0x48);
    } while (uVar2 < *(uint *)(param_1 + 0x50));
  }
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    FUN_02f59e60(0);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return;
}


