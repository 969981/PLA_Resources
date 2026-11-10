/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315df04; name: FUN_0315df04
 */


void FUN_0315df04(long param_1,long *param_2,int *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  
  if (*(float *)(param_1 + 0x1c) + 0.001 < *(float *)(param_1 + 0x18)) {
    FUN_033299e0(0xb856f64d);
    uVar1 = *(uint *)(param_2 + 1);
    if (0 < (int)uVar1) {
      uVar4 = 0x7357e;
      uVar3 = 0;
      do {
        iVar2 = *(int *)(*param_2 + uVar3 * 4);
        if (-1 < iVar2) {
          *(undefined2 *)(*(long *)(param_1 + 0x50) + (long)iVar2 * 2) =
               *(undefined2 *)(*(long *)(param_1 + 0x50) + (long)((int)uVar3 + *param_3) * 2);
        }
        if (uVar4 < 0x7357e) {
          FUN_033299e0(0x74b79905);
        }
        uVar3 = uVar3 + 1;
        uVar4 = uVar4 + 0x7357e;
      } while (uVar1 != uVar3);
    }
    if ((*(int *)(param_1 + 0x58) < param_4) || (param_4 < *(int *)(param_1 + 0x58))) {
      *(int *)(param_1 + 0x58) = param_4;
    }
  }
  return;
}


