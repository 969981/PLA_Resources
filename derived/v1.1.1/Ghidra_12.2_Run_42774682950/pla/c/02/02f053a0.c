/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f053a0; name: FUN_02f053a0
 */


void FUN_02f053a0(long *param_1)

{
  long *plVar1;
  long lVar2;
  ushort *puVar3;
  long lVar4;
  
  plVar1 = (long *)(**(code **)(*param_1 + 0x80))();
  if (plVar1 != (long *)0x0) {
    for (lVar2 = *plVar1; lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x10)) {
      puVar3 = *(ushort **)(lVar2 + 0x20);
      if ((puVar3 != (ushort *)0x0) && ((ulong)*puVar3 != 0)) {
        lVar4 = (ulong)*puVar3 << 1;
        plVar1 = (long *)((long)puVar3 + ((ulong)((int)lVar4 + 5) & 0x3fffc) + 8);
        do {
          if (*plVar1 != 0) {
            FUN_02f0efb8(DAT_0440a150,*plVar1,lVar2);
            *plVar1 = 0;
            (**(code **)(**(long **)(lVar2 + 0x18) + 0x18))();
          }
          plVar1 = plVar1 + 2;
          lVar4 = lVar4 + -2;
        } while (lVar4 != 0);
      }
    }
  }
  return;
}


