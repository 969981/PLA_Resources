/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012fa418; name: FUN_012fa418
 */


void FUN_012fa418(long param_1)

{
  ulong uVar1;
  
  if (*(char *)(param_1 + 0x1e9) == '\x01') {
    if (*(long *)(param_1 + 8) != 0) {
      uVar1 = FUN_012f9bd8(param_1);
      if ((uVar1 & 1) == 0) {
        return;
      }
      FUN_012f9b2c(param_1);
    }
    *(undefined1 *)(param_1 + 0x1e9) = 2;
  }
  else if ((*(char *)(param_1 + 0x1e9) == '\x02') &&
          ((*(long *)(param_1 + 8) == 0 || (uVar1 = FUN_012f9f10(param_1), (uVar1 & 1) != 0)))) {
    FUN_012f8ddc(param_1,param_1 + 0x1f0);
    FUN_012f901c(param_1,param_1 + 0x1f0);
    *(undefined4 *)(param_1 + 0x1ec) = 0;
    *(undefined4 *)(param_1 + 0x200) = 0;
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    *(undefined8 *)(param_1 + 0x204) = 0;
    *(undefined8 *)(param_1 + 0x20c) = 0;
    *(undefined8 *)(param_1 + 0x214) = 0;
    *(undefined4 *)(param_1 + 0x21c) = 0;
    *(undefined1 *)(param_1 + 0x1e9) = 0;
  }
  return;
}


