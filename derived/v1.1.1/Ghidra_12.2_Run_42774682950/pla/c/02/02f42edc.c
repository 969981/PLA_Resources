/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f42edc; name: FUN_02f42edc
 */


void FUN_02f42edc(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x148) == 0) {
    lVar1 = *(long *)(param_1 + 0x150);
  }
  else {
    (*DAT_0442d150)(2);
    *(undefined8 *)(param_1 + 0x148) = 0;
    lVar1 = *(long *)(param_1 + 0x150);
  }
  if (lVar1 != 0) {
    (*DAT_0442d150)(2);
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  return;
}


