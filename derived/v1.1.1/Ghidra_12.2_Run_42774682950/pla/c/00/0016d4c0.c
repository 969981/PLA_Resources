/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0016d4c0; name: FUN_0016d4c0
 */


void FUN_0016d4c0(long param_1)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  
  lVar3 = 0;
  plVar1 = (long *)(param_1 + 0x1e8);
  bVar2 = *(byte *)(*plVar1 + 9);
  while( true ) {
    if ((bVar2 & 3) != 0) {
      *(undefined8 *)((long)plVar1 + lVar3) = *(undefined8 *)(param_1 + 0xd8);
    }
    if ((*(byte *)(*(long *)((long)plVar1 + lVar3 + 8) + 9) & 3) != 0) {
      *(undefined8 *)((long)plVar1 + lVar3 + 8) = *(undefined8 *)(param_1 + 0xd8);
    }
    lVar3 = lVar3 + 0x10;
    if (lVar3 == 0x350) break;
    bVar2 = *(byte *)(*(long *)((long)plVar1 + lVar3) + 9);
  }
  return;
}


