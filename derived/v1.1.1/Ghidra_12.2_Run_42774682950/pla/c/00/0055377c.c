/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0055377c; name: FUN_0055377c
 */


int FUN_0055377c(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  int *__src;
  size_t __n;
  int *piVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  __src = *(int **)(param_1 + 0x428);
  piVar3 = *(int **)(param_1 + 0x430);
  piVar4 = __src;
  if (__src == piVar3) {
LAB_005537cc:
    if (piVar4 != piVar3) {
      return piVar4[1];
    }
  }
  else {
    do {
      if (*piVar4 == param_2 || piVar4[1] == param_2) goto LAB_005537cc;
      piVar4 = piVar4 + 2;
    } while (piVar4 != piVar3);
  }
  iVar1 = *(int *)(param_1 + 0x420);
  *(int *)(param_1 + 0x420) = iVar1 + 1;
  if (piVar3 < *(int **)(param_1 + 0x438)) {
    *piVar3 = param_2;
    piVar3[1] = iVar1;
    *(int **)(param_1 + 0x430) = piVar3 + 2;
    return iVar1;
  }
  __n = (long)piVar3 - (long)__src;
  lVar7 = (long)__n >> 3;
  uVar8 = lVar7 + 1;
  if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = (long)*(int **)(param_1 + 0x438) - (long)__src;
  if ((ulong)(lVar5 >> 3) < 0xfffffffffffffff) {
    uVar6 = lVar5 >> 2;
    if (uVar8 <= uVar6) {
      uVar8 = uVar6;
    }
    if (uVar8 == 0) {
      lVar2 = 0;
      lVar5 = lVar7;
      goto LAB_00553868;
    }
  }
  else {
    uVar8 = 0x1fffffffffffffff;
  }
  lVar2 = FUN_002e2e80(PTR_FUN_04373078,uVar8 << 3);
  __src = *(int **)(param_1 + 0x428);
  __n = *(long *)(param_1 + 0x430) - (long)__src;
  lVar5 = (long)__n >> 3;
LAB_00553868:
  piVar4 = (int *)(lVar2 + lVar7 * 8);
  *piVar4 = param_2;
  piVar4[1] = iVar1;
  if (0 < (long)__n) {
    memcpy(piVar4 + lVar5 * -2,__src,__n);
    __src = *(int **)(param_1 + 0x428);
  }
  *(int **)(param_1 + 0x428) = piVar4 + lVar5 * -2;
  *(int **)(param_1 + 0x430) = piVar4 + 2;
  *(ulong *)(param_1 + 0x438) = lVar2 + uVar8 * 8;
  if (__src != (int *)0x0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  return iVar1;
}


