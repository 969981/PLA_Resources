/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e0000; name: FUN_003e0000
 */


long FUN_003e0000(long param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  
  puVar2 = *(ulong **)(param_1 + 0x10);
  if (puVar2 == (ulong *)0x0) {
    return 0;
  }
  lVar1 = 0;
  plVar4 = (long *)(*puVar2 & 0xfffffffffffffffc);
  if (*plVar4 != 0) goto LAB_003e0048;
LAB_003e0058:
  uVar3 = (ulong)*(byte *)(plVar4 + 1);
  if (plVar4[4] == 0) goto LAB_003e0020;
  do {
    uVar5 = plVar4[5];
    while( true ) {
      puVar2 = (ulong *)puVar2[1];
      lVar1 = lVar1 + uVar3 + uVar5 + 0x20;
      if (puVar2 == (ulong *)0x0) {
        return lVar1;
      }
      plVar4 = (long *)(*puVar2 & 0xfffffffffffffffc);
      if (*plVar4 == 0) goto LAB_003e0058;
LAB_003e0048:
      uVar3 = plVar4[1];
      if (plVar4[4] != 0) break;
LAB_003e0020:
      uVar5 = (ulong)*(byte *)(plVar4 + 5);
    }
  } while( true );
}


