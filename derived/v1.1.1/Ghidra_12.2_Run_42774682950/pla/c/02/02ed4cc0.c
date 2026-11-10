/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed4cc0; name: FUN_02ed4cc0
 */


void FUN_02ed4cc0(long param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x88);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x80);
    while( true ) {
      lVar2 = lVar1;
      if (lVar2 == 0) {
        return;
      }
      lVar1 = *(long *)(lVar2 + 0x78);
      if (lVar1 != 0) {
        *(short *)(lVar1 + 0x96) = *(short *)(lVar1 + 0x96) - (short)param_2;
        lVar2 = *(long *)(param_1 + 0x80);
        lVar1 = *(long *)(lVar2 + 0x78);
        if (lVar1 != 0) {
          *(short *)(lVar1 + 0x92) = *(short *)(lVar1 + 0x92) - (short)((uint)param_2 >> 0x10);
          lVar2 = *(long *)(param_1 + 0x80);
        }
      }
      lVar1 = *(long *)(lVar2 + 0x88);
      if (lVar1 != 0) break;
      lVar1 = *(long *)(lVar2 + 0x80);
      param_1 = lVar2;
    }
  }
  FUN_02ed4eb4(lVar1,param_2);
  return;
}


