/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03330818; name: FUN_03330818
 */


void FUN_03330818(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = 0;
  param_1[1] = -0x8000000000000000;
  param_1[2] = -1;
  param_1[3] = 0;
  param_1[4] = -0x8000000000000000;
  param_1[5] = -1;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    iVar3 = 0;
    do {
      lVar5 = (long)iVar3;
      iVar1 = -1;
      if (*(short *)(lVar2 + (long)iVar3 * 0x60 + 4) != -2) {
        iVar1 = FUN_033396bc(param_1);
        *(long *)(*param_1 + (long)iVar1 * 0x18) = lVar2 + lVar5 * 0x60;
      }
      iVar3 = iVar3 + 1;
      *(int *)(lVar2 + lVar5 * 0x60 + 0x14) = iVar1;
      if (iVar3 == 0x2a) {
        lVar2 = *(long *)(lVar2 + 0xfc0);
        iVar3 = 0;
      }
    } while ((lVar2 != 0) && (iVar3 < 0x2a));
    iVar3 = *(int *)((long)param_1 + 0x14);
    if (iVar3 != -1) {
      lVar2 = *param_1;
      do {
        lVar5 = *(long *)(lVar2 + (long)iVar3 * 0x18);
        lVar2 = (long)*(int *)(lVar5 + 0x28);
        if (0 < *(int *)(lVar5 + 0x28)) {
          do {
            lVar4 = lVar2 + -1;
            FUN_03339724(param_1,iVar3,
                         *(undefined4 *)(*(long *)(*(long *)(lVar5 + 0x20) + lVar2 * 8 + -8) + 0x14)
                        );
            lVar2 = lVar4;
          } while (0 < lVar4);
        }
        lVar2 = (long)*(int *)(lVar5 + 0x48);
        if (0 < *(int *)(lVar5 + 0x48)) {
          do {
            lVar4 = lVar2 + -1;
            lVar2 = *(long *)(*(long *)(lVar5 + 0x40) + lVar2 * 8 + -8);
            if (lVar2 != 0) {
              FUN_03339724(param_1,iVar3,*(undefined4 *)(lVar2 + 0x14));
            }
            lVar2 = lVar4;
          } while (0 < lVar4);
        }
        lVar2 = *param_1;
        iVar3 = *(int *)(lVar2 + (long)iVar3 * 0x18 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return;
}


