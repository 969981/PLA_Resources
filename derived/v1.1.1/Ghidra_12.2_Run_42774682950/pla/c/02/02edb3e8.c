/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edb3e8; name: FUN_02edb3e8
 */


void FUN_02edb3e8(undefined4 *param_1)

{
  *param_1 = 0;
  if (*(long *)(param_1 + 0xc) != 0) {
    param_1[0xe] = 0;
    FUN_02f59e60(0);
    *(undefined8 *)(param_1 + 0xc) = 0;
    param_1[0xf] = 0;
  }
  if ((*(byte *)(param_1 + 10) >> 1 & 1) != 0) {
    if (*(long *)(param_1 + 4) != 0) {
      FUN_02e9ecd8();
    }
    *(undefined8 *)(param_1 + 4) = 0;
  }
  if (*(long *)(param_1 + 0x22) != 0) {
    param_1[0x24] = 0;
    FUN_02f59e60(0);
    *(undefined8 *)(param_1 + 0x22) = 0;
    param_1[0x25] = 0;
  }
  return;
}


