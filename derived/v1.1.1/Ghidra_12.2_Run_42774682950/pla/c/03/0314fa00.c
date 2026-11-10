/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0314fa00; name: FUN_0314fa00
 */


void FUN_0314fa00(long param_1,long param_2)

{
  *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x30);
  *(undefined1 *)(param_2 + 0x11) = *(undefined1 *)(param_1 + 0x128);
  *(undefined1 *)(param_2 + 0x12) = *(undefined1 *)(param_1 + 0x129);
  *(undefined1 *)(param_2 + 0x13) = *(undefined1 *)(param_1 + 0x12a);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 300);
  (**(code **)(**(long **)(param_1 + 0x58) + 0x20))(*(long **)(param_1 + 0x58),param_1,param_2);
  *(undefined1 *)(param_1 + 0x128) = *(undefined1 *)(param_2 + 0x11);
  *(undefined1 *)(param_1 + 0x129) = *(undefined1 *)(param_2 + 0x12);
  *(undefined1 *)(param_1 + 0x12a) = *(undefined1 *)(param_2 + 0x13);
  *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_2 + 0x14);
  return;
}


