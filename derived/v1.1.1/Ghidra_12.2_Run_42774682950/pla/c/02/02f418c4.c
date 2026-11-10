/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f418c4; name: FUN_02f418c4
 */


void FUN_02f418c4(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x100);
  if (lVar2 != 0) {
    if (*(uint *)(param_1 + 0x108) != 0) {
      lVar3 = (ulong)*(uint *)(param_1 + 0x108) << 4;
      plVar1 = (long *)(lVar2 + 8);
      lVar2 = *plVar1;
      while( true ) {
        if (lVar2 != 0) {
          (*DAT_0442d150)(2);
        }
        lVar3 = lVar3 + -0x10;
        plVar1 = plVar1 + 2;
        if (lVar3 == 0) break;
        lVar2 = *plVar1;
      }
      lVar2 = *(long *)(param_1 + 0x100);
    }
    *(undefined4 *)(param_1 + 0x108) = 0;
    (*DAT_0442d150)(0,lVar2);
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0;
  }
  return;
}


