/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c4b80; name: FUN_004c4b80
 */


void FUN_004c4b80(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  time_t tVar4;
  long lVar5;
  
  if (*(long *)(*(long *)(param_1 + 0x508) + 0x150) == 0) {
    return;
  }
  if (((*(int *)(param_1 + 0x38) != 0) && (*(long *)(*(long *)(param_1 + 0x508) + 0x178) == 0)) &&
     ((*(byte *)(param_1 + 0x558) & 1) != 0)) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x728);
  uVar1 = *(uint *)(lVar3 + 0x48);
  if (((uVar1 & param_2) != 0) &&
     ((*(int *)(param_1 + 200) == 0 ||
      ((((*(byte *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60) >> 3 & 1) == 0 &&
        (iVar2 = **(int **)(param_1 + 8), 0x303 < iVar2)) && (iVar2 != 0x10000)))))) {
    if (((uVar1 >> 9 & 1) == 0) &&
       ((((*(byte *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60) >> 3 & 1) != 0 ||
         (*(int *)(param_1 + 0x38) == 0)) ||
        (((iVar2 = **(int **)(param_1 + 8), iVar2 < 0x304 || (iVar2 == 0x10000)) ||
         ((((*(int *)(param_1 + 0x17d8) != 0 && ((*(byte *)(param_1 + 0x5cf) & 1) == 0)) ||
           (*(long *)(lVar3 + 0x60) != 0)) || ((*(byte *)(param_1 + 0x5cd) >> 6 & 1) != 0)))))))) {
      FUN_003ff6f0();
      lVar3 = *(long *)(param_1 + 0x728);
    }
    if (*(long *)(lVar3 + 0x58) != 0) {
      FUN_003feb00(*(undefined8 *)(param_1 + 0x508));
      iVar2 = (**(code **)(*(long *)(param_1 + 0x728) + 0x58))
                        (param_1,*(undefined8 *)(param_1 + 0x508));
      if (iVar2 == 0) {
        FUN_003fef10(*(undefined8 *)(param_1 + 0x508));
      }
    }
  }
  if (((uVar1 >> 7 & 1) == 0) && ((uVar1 & param_2) == param_2)) {
    lVar5 = *(long *)(param_1 + 0x728);
    lVar3 = 0x84;
    if ((param_2 & 1) != 0) {
      lVar3 = 0x78;
    }
    if ((~*(uint *)(lVar5 + lVar3) & 0xff) == 0) {
      tVar4 = time((time_t *)0x0);
      FUN_003fff30(lVar5,tVar4);
      return;
    }
  }
  return;
}


