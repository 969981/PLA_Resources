/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00413eb0; name: FUN_00413eb0
 */


ulong FUN_00413eb0(long *param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    bVar1 = *param_2 == '-';
    lVar8 = 0;
    if (bVar1) {
      param_2 = param_2 + 1;
    }
    uVar10 = 0x1f;
    do {
      iVar2 = FUN_00405430(param_2[lVar8],0x10);
      if (iVar2 == 0) {
        if ((uint)(lVar8 - 1U) < 0x1fffffff) {
          uVar5 = (ulong)bVar1 + lVar8;
          if (param_1 == (long *)0x0) goto LAB_00413f44;
          plVar6 = (long *)*param_1;
          if (plVar6 == (long *)0x0) {
            plVar6 = (long *)FUN_0040c260();
            if (plVar6 == (long *)0x0) goto LAB_00413f40;
          }
          else {
            FUN_0040c6b0(plVar6,0);
          }
          if (((uint)lVar8 < 0x1ffffff9) &&
             (((int)(uVar10 >> 5) <= *(int *)((long)plVar6 + 0xc) ||
              (lVar4 = FUN_0040c320(plVar6), lVar4 != 0)))) {
            uVar11 = 0;
            param_2 = param_2 + lVar8;
            uVar10 = ((uint)(lVar8 - 1U >> 3) & 0x1fffffff) + 1;
            do {
              lVar4 = lVar8 + -8;
              if (7 < lVar8) {
                lVar8 = 8;
              }
              uVar12 = 0;
              lVar9 = (long)(int)lVar8 + 1;
              pcVar7 = param_2 + -(long)(int)lVar8;
              do {
                uVar3 = FUN_004051d0(*pcVar7);
                lVar9 = lVar9 + -1;
                uVar12 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU) | uVar12 << 4;
                pcVar7 = pcVar7 + 1;
              } while (1 < lVar9);
              *(uint *)(*plVar6 + uVar11 * 4) = uVar12;
              uVar11 = uVar11 + 1;
              param_2 = param_2 + -8;
              lVar8 = lVar4;
            } while (uVar11 != uVar10);
            *(uint *)(plVar6 + 1) = uVar10;
            FUN_0040c8f0(plVar6);
            *param_1 = (long)plVar6;
            if ((int)plVar6[1] != 0) {
              *(uint *)(plVar6 + 2) = (uint)bVar1;
            }
            goto LAB_00413f44;
          }
          goto LAB_00413f30;
        }
        break;
      }
      lVar8 = lVar8 + 1;
      uVar10 = uVar10 + 4;
    } while (lVar8 != 0x20000000);
    plVar6 = (long *)0x0;
LAB_00413f30:
    if (*param_1 == 0) {
      FUN_0040c1e0(plVar6);
    }
  }
LAB_00413f40:
  uVar5 = 0;
LAB_00413f44:
  return uVar5 & 0xffffffff;
}


