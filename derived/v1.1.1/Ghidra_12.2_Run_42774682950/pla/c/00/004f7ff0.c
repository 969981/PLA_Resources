/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f7ff0; name: FUN_004f7ff0
 */


void FUN_004f7ff0(long param_1,long param_2)

{
  long lVar1;
  
  *(long *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    return;
  }
  lVar1 = *(long *)(param_2 + 0x140);
  *(long *)(param_1 + 0x28) = param_2 + 0x128;
  *(long *)(param_1 + 0x88) = param_2 + 0x130;
  *(long *)(param_1 + 0x90) = param_2 + 0x134;
  *(long *)(param_1 + 0x78) = lVar1 + 0x1c;
  *(long *)(param_1 + 0x80) = param_2 + 0x160;
  return;
}


