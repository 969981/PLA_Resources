/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e64a8; name: FUN_007e64a8
 */


void FUN_007e64a8(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x58);
  while (iVar1 == 1) {
    *(undefined1 *)(param_1 + 0x48) = 1;
    FUN_007ec500(param_1,5);
    iVar1 = *(int *)(param_1 + 0x58);
  }
  lVar2 = 0;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  lVar3 = param_1;
  do {
    *(undefined2 *)(lVar3 + 0xb9) = 0;
    lVar2 = lVar2 + 4;
    *(undefined1 *)(lVar3 + 0xbb) = 0;
    lVar3 = param_1 + lVar2;
    *(undefined1 *)(lVar3 + 0xb8) = 0;
  } while (lVar2 != 0x400);
  *(undefined8 *)(param_1 + 0xa4) = 0;
  FUN_007e5bd8((int *)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  return;
}


