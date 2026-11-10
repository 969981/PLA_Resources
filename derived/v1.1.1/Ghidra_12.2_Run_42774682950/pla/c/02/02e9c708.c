/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9c708; name: FUN_02e9c708
 */


int FUN_02e9c708(long param_1,long *param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  int iVar6;
  
  if ((1 < (ushort)((*(ushort *)(param_1 + 0x134) & 7) - 1)) ||
     (piVar4 = *(int **)(param_1 + 0x160), piVar4 == (int *)0x0)) {
    return 1;
  }
  iVar6 = *piVar4;
  if (((param_2 != (long *)0x0) && (*param_2 != 0)) && ((int)param_2[1] == iVar6)) {
    *(long *)(param_1 + 0xf0) = *param_2;
    *(int *)(param_1 + 0xf8) = (int)param_2[1];
  }
  if (((*(long *)(piVar4 + 10) != 0) && ((piVar4[0xc] & 0x7fffffffU) != 0)) &&
     ((*(long *)(param_1 + 0xf0) == 0 || ((*(byte *)(piVar4 + 4) >> 2 & 1) != 0)))) {
    lVar3 = FUN_02edc450(DAT_0440a158);
    *(long *)(param_1 + 0xf0) = lVar3;
    if (lVar3 != 0) {
      lVar5 = *(long *)(param_1 + 0x168);
      do {
        if (*(long *)(lVar5 + 0x70) != 0) {
          lVar5 = *(long *)(lVar5 + 0x70) + 0x38;
          goto LAB_02e9c818;
        }
        lVar5 = *(long *)(lVar5 + 0x80);
      } while (lVar5 != 0);
      lVar5 = 0;
LAB_02e9c818:
      iVar2 = FUN_02eb241c(*(undefined8 *)(param_1 + 0x160),lVar3,lVar5);
      if (iVar2 != 1) {
        FUN_02edc4dc(DAT_0440a158,*(undefined8 *)(param_1 + 0xf0));
        iVar6 = 0;
        *(undefined8 *)(param_1 + 0xf0) = 0;
      }
      *(int *)(param_1 + 0xf8) = iVar6;
      bVar1 = *(byte *)(param_1 + 0x135);
      goto joined_r0x02e9c790;
    }
  }
  iVar2 = 1;
  bVar1 = *(byte *)(param_1 + 0x135);
joined_r0x02e9c790:
  if (((bVar1 & 1) != 0) && (lVar3 = *(long *)(param_1 + 0xf0), lVar3 != 0)) {
    if (((*(uint *)(*(long *)(param_1 + 0x10) + 0x40) < 2) ||
        (lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) + 8), lVar5 == 0)) &&
       (lVar5 = DAT_0440a410, DAT_0440a410 == 0)) {
      FUN_02e43d1c();
      lVar5 = DAT_0440a410;
    }
    FUN_02edbee8(lVar3,lVar5 + 0xa0);
  }
  return iVar2;
}


