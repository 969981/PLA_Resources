/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4a9ec; name: FUN_02f4a9ec
 */


void FUN_02f4a9ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint param_5
                 )

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0xd0) != 0) {
    lVar3 = *(long *)(param_1 + 200);
    if ((param_5 & 1) == 0) {
      do {
        lVar2 = *(long *)(lVar3 + 8);
        if (((*(ushort *)(lVar2 + 0xc) & 0x7c) == 4) &&
           (plVar1 = (long *)FUN_02ef5ba4(param_3), plVar1 != (long *)0x0)) {
          *plVar1 = lVar2;
        }
        lVar3 = lVar3 + 0x10;
      } while (lVar3 != *(long *)(param_1 + 200) + (ulong)*(uint *)(param_1 + 0xd0) * 0x10);
    }
    else {
      do {
        lVar2 = *(long *)(lVar3 + 8);
        if (((*(ushort *)(lVar2 + 0xc) & 0x7c) == 4) &&
           (plVar1 = (long *)FUN_02ef5ba4(param_2), plVar1 != (long *)0x0)) {
          *plVar1 = lVar2;
        }
        lVar3 = lVar3 + 0x10;
      } while (lVar3 != *(long *)(param_1 + 200) + (ulong)*(uint *)(param_1 + 0xd0) * 0x10);
    }
  }
  return;
}


