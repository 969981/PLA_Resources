/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315bab4; name: FUN_0315bab4
 */


void FUN_0315bab4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x68);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar1 + 0x28);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar1 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar1 + 0x38);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(lVar1 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar1 + 0x18);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar1 + 0x48);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(lVar1 + 0x68);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(lVar1 + 0x58);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(lVar1 + 0x6c);
  }
  return;
}


