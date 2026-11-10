/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f7f90; name: FUN_004f7f90
 */


void FUN_004f7f90(long param_1,long param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(long *)(param_1 + 0x20) = param_2;
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    return;
  }
  lVar1 = *(long *)(param_2 + 0x488);
  *(long *)(param_1 + 0x28) = param_2 + 0x5cc;
  *(long *)(param_1 + 0x88) = param_2 + 0x5d4;
  *(long *)(param_1 + 0x90) = param_2 + 0x5d8;
  *(long *)(param_1 + 0x78) = lVar1 + 0x1c;
  *(long *)(param_1 + 0x80) = param_2 + 0x558;
  return;
}


