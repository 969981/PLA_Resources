/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c94e0; name: FUN_004c94e0
 */


void FUN_004c94e0(long param_1,uint param_2)

{
  short *psVar1;
  long lVar2;
  
  if ((param_2 & 1) == 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x17a8) + 0x58) = *(undefined8 *)(param_1 + 0x1798);
    *(short *)(*(long *)(param_1 + 0x17a8) + 2) = *(short *)(*(long *)(param_1 + 0x17a8) + 2) + 1;
    *(undefined8 *)(param_1 + 0x1798) = 0;
    return;
  }
  psVar1 = *(short **)(param_1 + 0x17a8);
  *psVar1 = *psVar1 + 1;
  *(undefined8 *)(psVar1 + 8) = *(undefined8 *)(psVar1 + 0x10);
  *(undefined8 *)(psVar1 + 4) = *(undefined8 *)(psVar1 + 0xc);
  lVar2 = *(long *)(param_1 + 0x17a8);
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  FUN_004cd8b0();
  *(undefined8 *)(param_1 + 0x1790) = 0;
  return;
}


