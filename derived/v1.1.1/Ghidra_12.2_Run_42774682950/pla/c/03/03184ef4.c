/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03184ef4; name: FUN_03184ef4
 */


void FUN_03184ef4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    lVar4 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar4 = FUN_02898d80();
  }
  FUN_0315c704(lVar4);
  if (0 < *(int *)(lVar4 + 0x88)) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      *(undefined4 *)(*(long *)(lVar4 + 0x80) + lVar2) = 0xffffffff;
      lVar1 = *(long *)(lVar4 + 0x80) + lVar2;
      lVar2 = lVar2 + 8;
      *(undefined4 *)(lVar1 + 4) = 0;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(lVar4 + 0x88));
  }
  return;
}


