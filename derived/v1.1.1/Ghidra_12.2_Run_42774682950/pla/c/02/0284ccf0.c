/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0284ccf0; name: FUN_0284ccf0
 */


void FUN_0284ccf0(long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0xb0) == 0) && (lVar1 = *(long *)(param_1 + 0x18), lVar1 != 0)) {
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(lVar1 + 0x250);
    *(int *)(param_1 + 0xb8) = (int)*(undefined8 *)(lVar1 + 0x240);
  }
  if ((*(long *)(param_1 + 0xa0) == 0) && (lVar1 = *(long *)(param_1 + 0x48), lVar1 != 0)) {
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(lVar1 + 0x250);
    *(int *)(param_1 + 0xa8) = (int)*(undefined8 *)(lVar1 + 0x240);
  }
  if ((*(long *)(param_1 + 0xc0) == 0) && (*(long *)(param_1 + 0x78) != 0)) {
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x250);
  }
  return;
}


