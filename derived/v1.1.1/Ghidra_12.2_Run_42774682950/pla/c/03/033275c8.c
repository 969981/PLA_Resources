/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033275c8; name: FUN_033275c8
 */


void FUN_033275c8(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if (0 < (int)*(uint *)(param_1 + 0x40)) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      if (*(long **)(*(long *)(param_1 + 0x38) + uVar5 * 8) == param_2) {
        if ((int)uVar5 < 0) {
          return;
        }
        lVar3 = *param_2;
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          do {
            FUN_03325f84(lVar3);
            *(undefined1 *)(lVar3 + 0x50) = 0;
            lVar3 = *(long *)(lVar3 + 0x60);
          } while (lVar3 != 0);
          lVar3 = *param_2;
        }
        FUN_03327ef0(param_1 + 0x50,lVar3);
        iVar1 = *(int *)(param_1 + 0x40);
        iVar2 = iVar1 + -1;
        *(int *)(param_1 + 0x40) = iVar2;
        if ((int)uVar5 - iVar1 == -1) {
          return;
        }
        *(undefined8 *)(*(long *)(param_1 + 0x38) + (lVar4 >> 0x1d)) =
             *(undefined8 *)(*(long *)(param_1 + 0x38) + (long)iVar2 * 8);
        return;
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x100000000;
    } while (*(uint *)(param_1 + 0x40) != uVar5);
  }
  return;
}


