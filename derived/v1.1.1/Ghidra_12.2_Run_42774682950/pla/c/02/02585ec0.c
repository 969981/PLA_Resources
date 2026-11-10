/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02585ec0; name: FUN_02585ec0
 */


void FUN_02585ec0(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x58);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x70) != 0)) {
    *(undefined8 *)(lVar1 + 0x78) = *param_2;
    *(undefined1 *)(lVar1 + 0x88) = 1;
  }
  return;
}


