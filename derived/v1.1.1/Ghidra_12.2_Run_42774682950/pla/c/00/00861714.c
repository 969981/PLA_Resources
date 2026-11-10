/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00861714; name: FUN_00861714
 */


void FUN_00861714(long param_1)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 0xc0);
  if (uVar1 != 0) {
    lVar3 = 0;
    lVar4 = *(long *)(*(long *)(param_1 + 0xb8) + 0x10);
    piVar2 = (int *)(*(long *)(param_1 + 0xb8) + 0x20);
    while( true ) {
      if ((lVar4 != -1) && (1 < *piVar2 - 0xdU)) {
        *piVar2 = 0xe;
      }
      if ((ulong)uVar1 <= lVar3 + 1U) break;
      lVar3 = lVar3 + 1;
      lVar4 = *(long *)(piVar2 + 0x1a);
      piVar2 = piVar2 + 0x1e;
    }
  }
  *(undefined1 *)(param_1 + 0x5a) = 0;
  return;
}


