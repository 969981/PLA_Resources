/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03266560; name: FUN_03266560
 */


void FUN_03266560(long param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  
  uVar3 = *(uint *)(param_1 + 0xc0);
  if (0 < (int)uVar3) {
    uVar5 = 0;
    do {
      piVar2 = (int *)(*(long *)(param_1 + 0x100) +
                      (ulong)*(ushort *)(*(long *)(param_1 + 0xb8) + uVar5 * 2) * 0x20);
      iVar4 = *piVar2;
      if ((iVar4 != param_2) &&
         (iVar1 = ((piVar2[1] - iVar4) * 2 & 0x10000U) + (piVar2[1] - iVar4),
         iVar4 = ((param_2 - iVar4) * 2 & 0x10000U) + (param_2 - iVar4),
         (iVar1 >> 0x10) * (int)(short)iVar4 != (int)(short)iVar1 * (iVar4 >> 0x10))) {
        *(short *)((long)piVar2 + 10) = *(short *)((long)piVar2 + 10) + 1;
      }
      uVar5 = uVar5 + 1;
      *piVar2 = param_2;
    } while (uVar3 != uVar5);
  }
  return;
}


