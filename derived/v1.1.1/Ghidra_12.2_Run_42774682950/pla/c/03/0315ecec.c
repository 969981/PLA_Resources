/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315ecec; name: FUN_0315ecec
 */


void FUN_0315ecec(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(uint *)(param_2 + 1);
  if ((((0 < (int)uVar2) &&
       (*(char *)(*(long *)(param_1 + 0x60) + (long)*(int *)*param_2) =
             (char)(int)(((float)((int *)*param_2)[1] - *(float *)(param_1 + 0x1c)) *
                        *(float *)(param_1 + 0x24)), uVar2 != 1)) &&
      (*(char *)(*(long *)(param_1 + 0x60) + (long)*(int *)(*param_2 + 8)) =
            (char)(int)((*(float *)(*param_2 + 0xc) - *(float *)(param_1 + 0x1c)) *
                       *(float *)(param_1 + 0x24)), uVar2 != 2)) &&
     ((*(char *)(*(long *)(param_1 + 0x60) + (long)*(int *)(*param_2 + 0x10)) =
            (char)(int)((*(float *)(*param_2 + 0x14) - *(float *)(param_1 + 0x1c)) *
                       *(float *)(param_1 + 0x24)), uVar2 != 3 &&
      (*(char *)(*(long *)(param_1 + 0x60) + (long)*(int *)(*param_2 + 0x18)) =
            (char)(int)((*(float *)(*param_2 + 0x1c) - *(float *)(param_1 + 0x1c)) *
                       *(float *)(param_1 + 0x24)), uVar2 != 4)))) {
    lVar4 = 0;
    lVar3 = (ulong)uVar2 - 4;
    do {
      lVar1 = *param_2 + lVar4;
      lVar3 = lVar3 + -1;
      lVar4 = lVar4 + 8;
      *(char *)(*(long *)(param_1 + 0x60) + (long)*(int *)(lVar1 + 0x20)) =
           (char)(int)((*(float *)(lVar1 + 0x24) - *(float *)(param_1 + 0x1c)) *
                      *(float *)(param_1 + 0x24));
    } while (lVar3 != 0);
  }
  return;
}


