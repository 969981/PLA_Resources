/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011db494; name: FUN_011db494
 */


void FUN_011db494(long param_1)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (*(char *)(param_1 + 0x5ab) != '\0') {
    local_40 = 0x4a0f571a28d293b4;
    pcStack_38 = "anime_close";
    local_30 = 0xb;
    uStack_28 = 0;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_40);
    }
    *(undefined1 *)(param_1 + 0x5ab) = 0;
  }
  return;
}


