/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed4e5c; name: FUN_02ed4e5c
 */


void FUN_02ed4e5c(long param_1,undefined4 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x78);
  while( true ) {
    if (lVar1 != 0) {
      *(short *)(lVar1 + 0x96) = *(short *)(lVar1 + 0x96) + (short)param_2;
      lVar1 = *(long *)(param_1 + 0x78);
      if (lVar1 != 0) {
        *(short *)(lVar1 + 0x92) = *(short *)(lVar1 + 0x92) + (short)((uint)param_2 >> 0x10);
      }
    }
    if (*(long *)(param_1 + 0x88) != 0) break;
    param_1 = *(long *)(param_1 + 0x80);
    if (param_1 == 0) {
      return;
    }
    lVar1 = *(long *)(param_1 + 0x78);
  }
  FUN_02ed4d40(*(long *)(param_1 + 0x88),param_2);
  return;
}


