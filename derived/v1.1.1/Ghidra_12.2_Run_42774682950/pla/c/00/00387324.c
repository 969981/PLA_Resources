/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00387324; name: FUN_00387324
 */


void FUN_00387324(long *param_1,long param_2,long *param_3)

{
  bool bVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  size_t sVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  void *__dest;
  long lVar14;
  ulong uVar15;
  
  lVar9 = *param_3;
  param_3[1] = lVar9;
  if (param_1[1] != param_2) {
    if ((int)param_1[4] == -1) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_003875f4(param_1,param_2);
      lVar9 = *param_3;
    }
    lVar14 = param_1[3];
    if ((ulong)(param_3[2] - lVar9 >> 3) < (ulong)(long)*(int *)(*param_1 + 0x68)) {
      lVar12 = param_3[1];
      lVar13 = (long)*(int *)(*param_1 + 0x68) * 8;
      lVar6 = FUN_002e2e80(PTR_FUN_04373078,lVar13);
      pvVar7 = (void *)*param_3;
      lVar9 = lVar6 + (lVar12 - lVar9);
      sVar8 = param_3[1] - (long)pvVar7;
      __dest = (void *)(lVar9 - sVar8);
      if (0 < (long)sVar8) {
        memcpy(__dest,pvVar7,sVar8);
        pvVar7 = (void *)*param_3;
      }
      *param_3 = (long)__dest;
      param_3[1] = lVar9;
      param_3[2] = lVar6 + lVar13;
      if (pvVar7 != (void *)0x0) {
        FUN_002e2ea0(PTR_LAB_04373088);
      }
    }
    if (-1 < (int)param_1[9]) {
      lVar9 = 0;
      lVar6 = 0;
      do {
        lVar12 = *(long *)(*param_1 + 0x28) + lVar9;
        if (*(int *)(lVar12 + 0x3c) == 3) {
          iVar4 = FUN_00386cec(param_1,param_2,lVar12);
          if (0 < iVar4) goto LAB_0038746c;
        }
        else {
          lVar13 = *(long *)(lVar12 + 0x58);
          if ((lVar13 == 0) ||
             ((*(int *)(lVar13 + 0x18) == 1 &&
              (*(char *)(**(long **)(lVar13 + 0x20) + 0x41) != '\0')))) {
            if ((lVar5 == 0) || (*(int *)(lVar14 + lVar6 * 4) == -1)) {
              uVar15 = FUN_0038691c(param_1,param_2,lVar12);
            }
            else {
              uVar15 = FUN_003876d0(lVar5);
            }
            if ((uVar15 & 1) != 0) goto LAB_0038746c;
          }
          else {
            uVar3 = (int)((ulong)(lVar13 - *(long *)(*(long *)(lVar13 + 0x10) + 0x30)) >> 4) *
                    -0x55555555;
            if (*(int *)(param_2 + (ulong)*(uint *)((long)param_1 + 0x2c) +
                        (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2)) ==
                *(int *)(lVar12 + 0x44)) {
LAB_0038746c:
              plVar2 = (long *)param_3[1];
              if (plVar2 == (long *)param_3[2]) {
                lVar13 = (long)plVar2 - *param_3 >> 3;
                uVar15 = lVar13 + 1;
                if (uVar15 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_length_error();
                }
                lVar10 = param_3[2] - *param_3;
                if ((ulong)(lVar10 >> 3) < 0xfffffffffffffff) {
                  uVar11 = lVar10 >> 2;
                  if (uVar15 <= uVar11) {
                    uVar15 = uVar11;
                  }
                  if (uVar15 != 0) goto LAB_0038754c;
                  lVar10 = 0;
                }
                else {
                  uVar15 = 0x1fffffffffffffff;
LAB_0038754c:
                  lVar10 = FUN_002e2e80(PTR_FUN_04373078,uVar15 << 3);
                }
                plVar2 = (long *)(lVar10 + lVar13 * 8);
                *plVar2 = lVar12;
                pvVar7 = (void *)*param_3;
                sVar8 = param_3[1] - (long)pvVar7;
                if (0 < (long)sVar8) {
                  memcpy((void *)((long)plVar2 - sVar8),pvVar7,sVar8);
                  pvVar7 = (void *)*param_3;
                }
                *param_3 = (long)((long)plVar2 - sVar8);
                param_3[1] = (long)(plVar2 + 1);
                param_3[2] = lVar10 + uVar15 * 8;
                if (pvVar7 != (void *)0x0) {
                  FUN_002e2ea0(PTR_LAB_04373088);
                }
              }
              else {
                *plVar2 = lVar12;
                param_3[1] = param_3[1] + 8;
              }
            }
          }
        }
        lVar9 = lVar9 + 0x98;
        bVar1 = lVar6 < (int)param_1[9];
        lVar6 = lVar6 + 1;
      } while (bVar1);
    }
    if (*(uint *)(param_1 + 5) != 0xffffffff) {
      FUN_0039d138(param_2 + (ulong)*(uint *)(param_1 + 5),*param_1,param_1[7],param_3);
    }
    FUN_00390b00(*param_3,param_3[1]);
  }
  return;
}


