/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009a8c68; name: FUN_009a8c68
 */


void FUN_009a8c68(long param_1)

{
  if (*(int *)(param_1 + 0x778) == 1) {
    *(undefined4 *)(param_1 + 0x778) = 2;
    *(undefined4 *)(param_1 + 0x780) = *(undefined4 *)(param_1 + 0x784);
    *(undefined1 *)(param_1 + 0x77c) = 0;
    *(ulong *)(param_1 + 0x770) = *(ulong *)(param_1 + 0x770) | 1;
  }
  if (*(int *)(param_1 + 0x788) == 1) {
    *(undefined4 *)(param_1 + 0x788) = 2;
    *(undefined4 *)(param_1 + 0x790) = *(undefined4 *)(param_1 + 0x794);
    *(undefined1 *)(param_1 + 0x78c) = 0;
    *(ulong *)(param_1 + 0x770) = *(ulong *)(param_1 + 0x770) | 2;
  }
  if (*(int *)(param_1 + 0x798) == 1) {
    *(undefined4 *)(param_1 + 0x798) = 2;
    *(undefined4 *)(param_1 + 0x7a0) = *(undefined4 *)(param_1 + 0x7a4);
    *(undefined1 *)(param_1 + 0x79c) = 0;
    *(ulong *)(param_1 + 0x770) = *(ulong *)(param_1 + 0x770) | 4;
  }
  if (*(int *)(param_1 + 0x7a8) == 1) {
    *(undefined4 *)(param_1 + 0x7a8) = 2;
    *(undefined4 *)(param_1 + 0x7b0) = *(undefined4 *)(param_1 + 0x7b4);
    *(undefined1 *)(param_1 + 0x7ac) = 0;
    *(ulong *)(param_1 + 0x770) = *(ulong *)(param_1 + 0x770) | 8;
  }
  if (*(int *)(param_1 + 0x7b8) == 1) {
    *(undefined4 *)(param_1 + 0x7b8) = 2;
    *(undefined4 *)(param_1 + 0x7c0) = *(undefined4 *)(param_1 + 0x7c4);
    *(undefined1 *)(param_1 + 0x7bc) = 0;
    *(ulong *)(param_1 + 0x770) = *(ulong *)(param_1 + 0x770) | 0x10;
  }
  return;
}


