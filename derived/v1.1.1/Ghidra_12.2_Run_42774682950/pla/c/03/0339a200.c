/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339a200; name: FUN_0339a200
 */


void FUN_0339a200(long param_1)

{
  long lVar1;
  byte *pbVar2;
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
  
  pbVar2 = *(byte **)(param_1 + 0x38);
  lVar1 = *(long *)(param_1 + 0x40);
  if ((byte *)(lVar1 + *(int *)(param_1 + 0x34)) < pbVar2) {
    pbVar2 = pbVar2 + -1;
    *(byte **)(param_1 + 0x38) = pbVar2;
  }
  uVar3 = (ulong)*(uint *)(param_1 + 0x48);
  do {
    do {
      pbVar4 = pbVar2;
      if ((byte *)(lVar1 + (int)uVar3) <= pbVar2) {
        FUN_0339a7b4(param_1 + 0x18,0x100);
        pbVar4 = *(byte **)(param_1 + 0x38);
        lVar1 = *(long *)(param_1 + 0x40);
        uVar3 = (ulong)*(int *)(param_1 + 0x48);
        if ((byte *)(lVar1 + uVar3) <= pbVar4) {
          return;
        }
      }
      pbVar2 = pbVar4 + 1;
      *(byte **)(param_1 + 0x38) = pbVar2;
      uVar5 = (ulong)*pbVar4;
    } while (0x3c < *pbVar4);
    if ((1L << (uVar5 & 0x3f) & 0x100002600U) != 0) break;
    if (uVar5 == 0) {
      return;
    }
  } while (uVar5 != 0x3c);
  if ((byte *)(lVar1 + *(int *)(param_1 + 0x34)) < pbVar2) {
    *(byte **)(param_1 + 0x38) = pbVar4;
  }
  return;
}


