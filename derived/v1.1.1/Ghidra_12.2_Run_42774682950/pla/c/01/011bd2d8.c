/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011bd2d8; name: FUN_011bd2d8
 */


void FUN_011bd2d8(long param_1,void *param_2)

{
  if (*(char *)(param_1 + 0xbe0) != '\0') {
    memcpy((void *)(param_1 + 0x690),param_2,0x531);
    if (*(long *)(param_1 + 0x688) != 0) {
      FUN_011c5408(*(long *)(param_1 + 0x688),param_2);
      FUN_011c5d8c(*(undefined8 *)(param_1 + 0x688));
      return;
    }
  }
  return;
}


