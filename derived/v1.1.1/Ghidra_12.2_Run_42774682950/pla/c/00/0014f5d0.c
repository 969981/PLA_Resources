/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0014f5d0; name: FUN_0014f5d0
 */


void FUN_0014f5d0(uint *param_1,ulong *param_2,ulong param_3)

{
  size_t __len;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong *puVar14;
  
  puVar11 = (ulong *)((long)param_2 + param_3);
  if ((param_2[1] & 1) != 0) goto LAB_0014f888;
  uVar12 = *param_2;
  if ((param_2[1] & 3) == 0) {
    __len = uVar12 + param_3 + 0x20;
    iVar3 = munmap((void *)((long)param_2 - uVar12),__len);
    if (iVar3 == 0) {
      *(size_t *)(param_1 + 0xd6) = *(long *)(param_1 + 0xd6) - __len;
      return;
    }
    return;
  }
  puVar10 = *(ulong **)(param_1 + 6);
  param_2 = (ulong *)((long)param_2 - uVar12);
  if (param_2 < puVar10) goto LAB_0014fd1c;
  param_3 = uVar12 + param_3;
  if (*(ulong **)(param_1 + 8) == param_2) {
    if ((~(uint)puVar11[1] & 3) == 0) {
      *(ulong *)(param_1 + 2) = param_3;
      puVar11[1] = puVar11[1] & 0xfffffffffffffffe;
      param_2[1] = param_3 | 1;
      *puVar11 = param_3;
      return;
    }
LAB_0014f888:
    puVar10 = *(ulong **)(param_1 + 6);
  }
  else {
    if (0xff < uVar12) {
      puVar6 = (ulong *)param_2[3];
      uVar12 = param_2[6];
      if (puVar6 == param_2) {
        puVar14 = (ulong *)param_2[5];
        puVar8 = param_2 + 5;
        if (puVar14 == (ulong *)0x0) {
          puVar14 = (ulong *)param_2[4];
          puVar8 = param_2 + 4;
          if (puVar14 == (ulong *)0x0) {
            puVar6 = (ulong *)0x0;
            goto joined_r0x0014f7c8;
          }
        }
        do {
          do {
            puVar6 = puVar14;
            puVar13 = puVar8;
            puVar14 = (ulong *)puVar6[5];
            puVar8 = puVar6 + 5;
          } while (puVar14 != (ulong *)0x0);
          puVar14 = (ulong *)puVar6[4];
          puVar8 = puVar6 + 4;
        } while (puVar14 != (ulong *)0x0);
        if (puVar13 < puVar10) goto LAB_0014fd1c;
        *puVar13 = 0;
      }
      else {
        puVar8 = (ulong *)param_2[2];
        if (((puVar8 < puVar10) || ((ulong *)puVar8[3] != param_2)) ||
           ((ulong *)puVar6[2] != param_2)) goto LAB_0014fd1c;
        puVar8[3] = (ulong)puVar6;
        puVar6[2] = (ulong)puVar8;
      }
joined_r0x0014f7c8:
      if (uVar12 != 0) {
        if (*(ulong **)(param_1 + (ulong)(uint)param_2[7] * 2 + 0x96) == param_2) {
          *(ulong **)(param_1 + (ulong)(uint)param_2[7] * 2 + 0x96) = puVar6;
          if (puVar6 == (ulong *)0x0) {
            param_1[1] = param_1[1] & (1 << (ulong)((uint)param_2[7] & 0x1f) ^ 0xffffffffU);
          }
          else {
LAB_0014f818:
            if (puVar6 < *(ulong **)(param_1 + 6)) goto LAB_0014fd1c;
            puVar6[6] = uVar12;
            uVar12 = param_2[4];
            if (uVar12 != 0) {
              if (uVar12 < *(ulong *)(param_1 + 6)) goto LAB_0014fd1c;
              puVar6[4] = uVar12;
              *(ulong **)(uVar12 + 0x30) = puVar6;
            }
            uVar12 = param_2[5];
            if (uVar12 != 0) {
              if (uVar12 < *(ulong *)(param_1 + 6)) goto LAB_0014fd1c;
              puVar6[5] = uVar12;
              *(ulong **)(uVar12 + 0x30) = puVar6;
              puVar10 = *(ulong **)(param_1 + 6);
              goto joined_r0x0014f890;
            }
          }
        }
        else {
          if (uVar12 < *(ulong *)(param_1 + 6)) goto LAB_0014fd1c;
          lVar5 = 0x20;
          if (*(ulong **)(uVar12 + 0x20) != param_2) {
            lVar5 = 0x28;
          }
          *(ulong **)(uVar12 + lVar5) = puVar6;
          if (puVar6 != (ulong *)0x0) goto LAB_0014f818;
        }
      }
      goto LAB_0014f888;
    }
    puVar6 = (ulong *)param_2[3];
    if (((puVar6 == param_2) || (puVar8 = (ulong *)param_2[2], puVar8 == param_2)) ||
       ((param_2[1] & 0xfffffffffffffff8) != (uVar12 & 0xfffffff8))) goto LAB_0014fd1c;
    if ((puVar8 != (ulong *)(param_1 + (uVar12 >> 3 & 0x7fffffff) * 4 + 0x12)) &&
       ((puVar8 < puVar10 || ((ulong *)puVar8[3] != param_2)))) goto LAB_0014fd1c;
    if (puVar6 == puVar8) {
      *param_1 = *param_1 & (1 << (ulong)((uint)(uVar12 >> 3) & 0x1f) ^ 0xffffffffU);
      puVar10 = *(ulong **)(param_1 + 6);
    }
    else {
      if ((puVar6 != (ulong *)(param_1 + (uVar12 >> 3 & 0x7fffffff) * 4 + 0x12)) &&
         ((puVar6 < puVar10 || ((ulong *)puVar6[2] != param_2)))) goto LAB_0014fd1c;
      puVar8[3] = (ulong)puVar6;
      puVar6[2] = (ulong)puVar8;
      puVar10 = *(ulong **)(param_1 + 6);
    }
  }
joined_r0x0014f890:
  if (puVar11 < puVar10) goto LAB_0014fd1c;
  uVar12 = puVar11[1];
  if (((uint)uVar12 >> 1 & 1) == 0) {
    if (*(ulong **)(param_1 + 10) == puVar11) {
      lVar5 = *(long *)(param_1 + 4);
      *(ulong *)(param_1 + 4) = lVar5 + param_3;
      *(ulong **)(param_1 + 10) = param_2;
      param_2[1] = lVar5 + param_3 | 1;
      if (param_2 == *(ulong **)(param_1 + 8)) {
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        return;
      }
      return;
    }
    if (*(ulong **)(param_1 + 8) == puVar11) {
      param_3 = *(long *)(param_1 + 2) + param_3;
      *(ulong *)(param_1 + 2) = param_3;
      *(ulong **)(param_1 + 8) = param_2;
      param_2[1] = param_3 | 1;
      *(ulong *)((long)param_2 + param_3) = param_3;
      return;
    }
    if (uVar12 < 0x100) {
      puVar6 = (ulong *)puVar11[3];
      if (((puVar6 == puVar11) || (puVar8 = (ulong *)puVar11[2], puVar8 == puVar11)) ||
         ((uVar12 & 0xfffffffffffffff8) != (uVar12 & 0xfffffff8))) goto LAB_0014fd1c;
      if ((puVar8 != (ulong *)(param_1 + (uVar12 >> 3 & 0x7fffffff) * 4 + 0x12)) &&
         ((puVar8 < puVar10 || ((ulong *)puVar8[3] != puVar11)))) goto LAB_0014fd1c;
      if (puVar6 == puVar8) {
        *param_1 = *param_1 & (1 << (ulong)((uint)(uVar12 >> 3) & 0x1f) ^ 0xffffffffU);
      }
      else {
        if ((puVar6 != (ulong *)(param_1 + (uVar12 >> 3 & 0x7fffffff) * 4 + 0x12)) &&
           ((puVar6 < puVar10 || ((ulong *)puVar6[2] != puVar11)))) goto LAB_0014fd1c;
        puVar8[3] = (ulong)puVar6;
        puVar6[2] = (ulong)puVar8;
      }
    }
    else {
      puVar6 = (ulong *)puVar11[3];
      uVar9 = puVar11[6];
      if (puVar6 == puVar11) {
        puVar14 = (ulong *)puVar11[5];
        puVar8 = puVar11 + 5;
        if (puVar14 == (ulong *)0x0) {
          puVar14 = (ulong *)puVar11[4];
          puVar8 = puVar11 + 4;
          if (puVar14 == (ulong *)0x0) {
            puVar6 = (ulong *)0x0;
            goto joined_r0x0014fc24;
          }
        }
        do {
          do {
            puVar6 = puVar14;
            puVar13 = puVar8;
            puVar14 = (ulong *)puVar6[5];
            puVar8 = puVar6 + 5;
          } while (puVar14 != (ulong *)0x0);
          puVar14 = (ulong *)puVar6[4];
          puVar8 = puVar6 + 4;
        } while (puVar14 != (ulong *)0x0);
        if (puVar13 < puVar10) goto LAB_0014fd1c;
        *puVar13 = 0;
      }
      else {
        puVar8 = (ulong *)puVar11[2];
        if (((puVar8 < puVar10) || ((ulong *)puVar8[3] != puVar11)) ||
           ((ulong *)puVar6[2] != puVar11)) goto LAB_0014fd1c;
        puVar8[3] = (ulong)puVar6;
        puVar6[2] = (ulong)puVar8;
      }
joined_r0x0014fc24:
      if (uVar9 != 0) {
        if (*(ulong **)(param_1 + (ulong)(uint)puVar11[7] * 2 + 0x96) == puVar11) {
          *(ulong **)(param_1 + (ulong)(uint)puVar11[7] * 2 + 0x96) = puVar6;
          if (puVar6 == (ulong *)0x0) {
            param_1[1] = param_1[1] & (1 << (ulong)((uint)puVar11[7] & 0x1f) ^ 0xffffffffU);
          }
          else {
LAB_0014fc74:
            if (puVar6 < *(ulong **)(param_1 + 6)) goto LAB_0014fd1c;
            puVar6[6] = uVar9;
            uVar9 = puVar11[4];
            if (uVar9 != 0) {
              if (uVar9 < *(ulong *)(param_1 + 6)) goto LAB_0014fd1c;
              puVar6[4] = uVar9;
              *(ulong **)(uVar9 + 0x30) = puVar6;
            }
            uVar9 = puVar11[5];
            if (uVar9 != 0) {
              if (uVar9 < *(ulong *)(param_1 + 6)) goto LAB_0014fd1c;
              puVar6[5] = uVar9;
              *(ulong **)(uVar9 + 0x30) = puVar6;
            }
          }
        }
        else {
          if (uVar9 < *(ulong *)(param_1 + 6)) goto LAB_0014fd1c;
          lVar5 = 0x20;
          if (*(ulong **)(uVar9 + 0x20) != puVar11) {
            lVar5 = 0x28;
          }
          *(ulong **)(uVar9 + lVar5) = puVar6;
          if (puVar6 != (ulong *)0x0) goto LAB_0014fc74;
        }
      }
    }
    param_3 = (uVar12 & 0xfffffffffffffff8) + param_3;
    param_2[1] = param_3 | 1;
    *(ulong *)((long)param_2 + param_3) = param_3;
    if (param_2 == *(ulong **)(param_1 + 8)) {
      *(ulong *)(param_1 + 2) = param_3;
      return;
    }
  }
  else {
    puVar11[1] = uVar12 & 0xfffffffffffffffe;
    param_2[1] = param_3 | 1;
    *(ulong *)((long)param_2 + param_3) = param_3;
  }
  if (param_3 < 0x100) {
    if (0x1f < param_3) {
      uVar9 = param_3 & 0x3fffffff8;
      uVar4 = 1 << (ulong)((uint)(param_3 >> 3) & 0x1f);
      uVar12 = (long)param_1 + uVar9 * 2 + 0x48;
      if ((*param_1 & uVar4) == 0) {
        *param_1 = *param_1 | uVar4;
        uVar7 = uVar12;
      }
      else {
        uVar7 = *(ulong *)((long)param_1 + uVar9 * 2 + 0x58);
        if (uVar7 < *(ulong *)(param_1 + 6)) goto LAB_0014fd1c;
      }
      *(ulong **)((long)param_1 + uVar9 * 2 + 0x58) = param_2;
      *(ulong **)(uVar7 + 0x18) = param_2;
      param_2[2] = uVar7;
      param_2[3] = uVar12;
      return;
    }
  }
  else {
    uVar4 = 0;
    if (param_3 >> 8 != 0) {
      if (param_3 >> 0x18 == 0) {
        iVar3 = (int)(param_3 >> 8);
        uVar4 = iVar3 + 0xfff00U >> 0x10 & 8;
        iVar3 = iVar3 << (ulong)uVar4;
        uVar2 = iVar3 + 0x7f000U >> 0x10 & 4;
        iVar3 = iVar3 << (ulong)uVar2;
        uVar1 = iVar3 + 0x3c000U >> 0x10 & 2;
        iVar3 = (0xe - (uVar2 | uVar4 | uVar1)) + ((uint)(iVar3 << (ulong)uVar1) >> 0xf);
        uVar4 = (uint)(param_3 >> ((ulong)(iVar3 + 7) & 0x3f)) & 1 | iVar3 * 2;
      }
      else {
        uVar4 = 0x1f;
      }
    }
    *(uint *)(param_2 + 7) = uVar4;
    param_2[4] = 0;
    param_2[5] = 0;
    uVar2 = 1 << (ulong)(uVar4 & 0x1f);
    puVar11 = (ulong *)(param_1 + (ulong)uVar4 * 2 + 0x96);
    if ((param_1[1] & uVar2) == 0) {
      param_1[1] = param_1[1] | uVar2;
      *puVar11 = (ulong)param_2;
      param_2[6] = (ulong)puVar11;
      param_2[2] = (ulong)param_2;
      param_2[3] = (ulong)param_2;
      return;
    }
    uVar12 = 0;
    if (uVar4 != 0x1f) {
      uVar12 = 0x3f - (ulong)((uVar4 >> 1) + 6);
    }
    uVar9 = param_3 << (uVar12 & 0x3f);
    uVar12 = *puVar11;
    do {
      uVar7 = uVar12;
      if ((*(ulong *)(uVar7 + 8) & 0xfffffffffffffff8) == param_3) {
        uVar12 = *(ulong *)(uVar7 + 0x10);
        if ((*(ulong *)(param_1 + 6) <= uVar12) && (*(ulong *)(param_1 + 6) <= uVar7)) {
          *(ulong **)(uVar12 + 0x18) = param_2;
          *(ulong **)(uVar7 + 0x10) = param_2;
          param_2[6] = 0;
          param_2[2] = uVar12;
          param_2[3] = uVar7;
          return;
        }
        goto LAB_0014fd1c;
      }
      uVar12 = uVar9 >> 0x3c;
      uVar9 = uVar9 << 1;
      puVar11 = (ulong *)(uVar7 + (uVar12 & 8) + 0x20);
      uVar12 = *puVar11;
    } while (*puVar11 != 0);
    if (*(ulong **)(param_1 + 6) <= puVar11) {
      *puVar11 = (ulong)param_2;
      param_2[6] = uVar7;
      param_2[2] = (ulong)param_2;
      param_2[3] = (ulong)param_2;
      return;
    }
  }
LAB_0014fd1c:
                    /* WARNING: Subroutine does not return */
  abort();
}


