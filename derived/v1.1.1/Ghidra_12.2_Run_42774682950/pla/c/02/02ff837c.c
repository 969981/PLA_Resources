/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ff837c; name: FUN_02ff837c
 */


void FUN_02ff837c(long param_1)

{
  long in_x4;
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + (ulong)*(byte *)(in_x4 + 0x10) * 8 + 0x48);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar2 + (long)plVar1;
  }
  (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar2 + 0x18) * 0x200 + 0xb0))();
  return;
}


