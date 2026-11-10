/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0021f850; name: FUN_0021f850
 */


void FUN_0021f850(long param_1)

{
  long lVar1;
  
  FUN_00221ad8(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x34),
               *(undefined4 *)(param_1 + 0x18),*(undefined2 *)(param_1 + 0x32),0xffffffff,
               *(undefined1 *)(param_1 + 0x30));
  lVar1 = FUN_00223270(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x34),
                       *(undefined4 *)(param_1 + 0x18),*(undefined2 *)(param_1 + 0x32));
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) | 0x20;
  if (*(char *)(param_1 + 0x2f) == '\x01') {
    FUN_00221ad8(*(undefined8 *)(param_1 + 0x10),0x20,*(undefined4 *)(param_1 + 0x18),
                 *(undefined2 *)(param_1 + 0x32),0xffffffff,*(undefined1 *)(param_1 + 0x30));
    lVar1 = FUN_00223270(*(undefined8 *)(param_1 + 0x10),0x20,*(undefined4 *)(param_1 + 0x18),
                         *(undefined2 *)(param_1 + 0x32));
    if (lVar1 != 0) {
      lVar1 = FUN_00223270(*(undefined8 *)(param_1 + 0x10),0x20,*(undefined4 *)(param_1 + 0x18),
                           *(undefined2 *)(param_1 + 0x32));
      *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) | 0x20;
    }
  }
  return;
}


