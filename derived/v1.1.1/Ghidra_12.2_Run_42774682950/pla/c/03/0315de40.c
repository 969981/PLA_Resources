/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315de40; name: FUN_0315de40
 */


void FUN_0315de40(long param_1,long *param_2,int *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  
  if (*(float *)(param_1 + 0x1c) + 0.001 < *(float *)(param_1 + 0x18)) {
    iVar3 = *(int *)(param_1 + 0x70);
    uVar1 = *(uint *)(param_2 + 1);
    if (0 < (int)uVar1) {
      uVar4 = 0;
      do {
        iVar2 = *(int *)(*param_2 + uVar4 * 4);
        if ((-1 < iVar2) && (iVar5 = (int)uVar4 + *param_3, iVar5 != iVar2)) {
          lVar6 = (long)iVar5 * 4;
          *(undefined4 *)(*(long *)(param_1 + 0x28) + (long)iVar2 * 4) =
               *(undefined4 *)(*(long *)(param_1 + 0x28) + lVar6);
          *(undefined4 *)(*(long *)(param_1 + 0x28) + lVar6) = 0xffffffff;
          if ((*(int *)(*(long *)(param_1 + 0x28) + (long)iVar2 * 4) == -1) && (iVar2 <= iVar3)) {
            iVar3 = iVar2;
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar1 != uVar4);
    }
    if (param_4 <= iVar3) {
      iVar3 = param_4;
    }
    *(int *)(param_1 + 0x70) = iVar3;
    if ((*(int *)(param_1 + 0x30) < param_4) || (param_4 < *(int *)(param_1 + 0x30))) {
      *(int *)(param_1 + 0x30) = param_4;
    }
  }
  return;
}


