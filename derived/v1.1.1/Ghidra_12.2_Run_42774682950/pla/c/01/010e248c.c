/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010e248c; name: FUN_010e248c
 */


void FUN_010e248c(long param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar3 = FUN_02c6849c(*(undefined8 *)(*param_2 + 0x98));
  if (uVar3 != 0) {
    lVar5 = *param_2;
    uVar4 = FUN_02c6cf3c(*(undefined8 *)(lVar5 + 0x98));
    if (((uVar4 & 1) == 0) &&
       ((*(ushort *)(*(long *)(*(long *)(lVar5 + 0x98) + 0x10) + 4) >> 2 & 1) == 0)) {
      psVar1 = (short *)(param_1 + (ulong)uVar3 * 2 + 0x54760);
      sVar2 = *psVar1;
      if (sVar2 != 0) {
        *psVar1 = sVar2 + -1;
      }
    }
  }
  return;
}


