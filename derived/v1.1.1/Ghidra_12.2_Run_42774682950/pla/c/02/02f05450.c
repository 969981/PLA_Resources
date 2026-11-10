/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f05450; name: FUN_02f05450
 */


void FUN_02f05450(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  ushort *puVar3;
  ushort *puVar4;
  long lVar5;
  long lVar6;
  
  plVar1 = (long *)(**(code **)(*param_1 + 0x80))();
  if ((plVar1 != (long *)0x0) && (lVar5 = *plVar1, lVar5 != 0)) {
    if ((param_2 & 1) == 0) {
      puVar4 = *(ushort **)(lVar5 + 0x20);
      while( true ) {
        if (puVar4 != (ushort *)0x0) {
          puVar3 = puVar4 + 1;
          if (puVar3 != puVar3 + *puVar4) {
            plVar1 = (long *)((long)puVar4 + ((ulong)((uint)*puVar4 * 2 + 5) & 0x3fffc) + 8);
            lVar6 = (long)(puVar3 + *puVar4) - (long)puVar3;
            lVar2 = *plVar1;
            while( true ) {
              if (lVar2 != 0) {
                FUN_02f0f080(DAT_0440a150);
              }
              plVar1 = plVar1 + 2;
              lVar6 = lVar6 + -2;
              if (lVar6 == 0) break;
              lVar2 = *plVar1;
            }
          }
        }
        lVar5 = *(long *)(lVar5 + 0x10);
        if (lVar5 == 0) break;
        puVar4 = *(ushort **)(lVar5 + 0x20);
      }
    }
    else {
      puVar4 = *(ushort **)(lVar5 + 0x20);
      while( true ) {
        if (puVar4 != (ushort *)0x0) {
          puVar3 = puVar4 + 1;
          if (puVar3 != puVar3 + *puVar4) {
            plVar1 = (long *)((long)puVar4 + ((ulong)((uint)*puVar4 * 2 + 5) & 0x3fffc) + 8);
            lVar6 = (long)(puVar3 + *puVar4) - (long)puVar3;
            lVar2 = *plVar1;
            while( true ) {
              if (lVar2 != 0) {
                FUN_02f0f058(DAT_0440a150);
              }
              plVar1 = plVar1 + 2;
              lVar6 = lVar6 + -2;
              if (lVar6 == 0) break;
              lVar2 = *plVar1;
            }
          }
        }
        lVar5 = *(long *)(lVar5 + 0x10);
        if (lVar5 == 0) break;
        puVar4 = *(ushort **)(lVar5 + 0x20);
      }
    }
  }
  return;
}


