/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0014e3b0; name: FUN_0014e3b0
 */


void FUN_0014e3b0(uint *param_1,long param_2)

{
  uint *puVar1;
  size_t __len;
  ulong *puVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong *puVar19;
  uint uVar20;
  
  if (param_2 == 0) {
    return;
  }
  puVar19 = (ulong *)(param_2 + -0x10);
  if (((byte)param_1[0xdc] >> 1 & 1) != 0) {
    puVar1 = param_1 + 0xdd;
    do {
      uVar20 = *puVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (uVar20 != 0) {
      uVar20 = 0;
LAB_0014e404:
      if (*puVar1 == 0) {
        do {
          uVar10 = *puVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (uVar10 == 0) goto LAB_0014e42c;
      }
      uVar20 = uVar20 + 1;
      if ((uVar20 & 0x3f) == 0) {
        sched_yield();
      }
      goto LAB_0014e404;
    }
  }
LAB_0014e42c:
  FUN_0014d190(param_1,puVar19);
  puVar11 = *(ulong **)(param_1 + 6);
  if (puVar19 < puVar11) goto LAB_0014ebcc;
  uVar13 = *(ulong *)(param_2 + -8);
  if ((uVar13 & 3) == 1) goto LAB_0014ebcc;
  uVar8 = uVar13 & 0xfffffffffffffff8;
  puVar2 = (ulong *)((long)puVar19 + uVar8);
  if ((uVar13 & 1) != 0) goto joined_r0x0014e6e8;
  uVar15 = *puVar19;
  if ((uVar13 & 3) == 0) {
    __len = uVar15 + uVar8 + 0x20;
    iVar7 = munmap((void *)((long)puVar19 - uVar15),__len);
    if (iVar7 == 0) {
      *(size_t *)(param_1 + 0xd6) = *(long *)(param_1 + 0xd6) - __len;
      bVar4 = (byte)param_1[0xdc];
      goto joined_r0x0014e88c;
    }
  }
  else {
    puVar19 = (ulong *)((long)puVar19 - uVar15);
    if (puVar19 < puVar11) goto LAB_0014ebcc;
    uVar8 = uVar15 + uVar8;
    if (*(ulong **)(param_1 + 8) == puVar19) {
      if ((~(uint)puVar2[1] & 3) == 0) {
        *(ulong *)(param_1 + 2) = uVar8;
        puVar2[1] = puVar2[1] & 0xfffffffffffffffe;
        puVar19[1] = uVar8 | 1;
        *(ulong *)((long)puVar19 + uVar8) = uVar8;
        bVar4 = (byte)param_1[0xdc];
        goto joined_r0x0014e88c;
      }
    }
    else if (uVar15 < 0x100) {
      puVar12 = (ulong *)puVar19[3];
      if (((puVar12 == puVar19) || (puVar14 = (ulong *)puVar19[2], puVar14 == puVar19)) ||
         ((puVar19[1] & 0xfffffffffffffff8) != (uVar15 & 0xfffffff8))) goto LAB_0014ebcc;
      if ((puVar14 != (ulong *)(param_1 + (uVar15 >> 3 & 0x7fffffff) * 4 + 0x12)) &&
         ((puVar14 < puVar11 || ((ulong *)puVar14[3] != puVar19)))) goto LAB_0014ebcc;
      if (puVar12 == puVar14) {
        *param_1 = *param_1 & (1 << (ulong)((uint)(uVar15 >> 3) & 0x1f) ^ 0xffffffffU);
      }
      else {
        if ((puVar12 != (ulong *)(param_1 + (uVar15 >> 3 & 0x7fffffff) * 4 + 0x12)) &&
           ((puVar12 < puVar11 || ((ulong *)puVar12[2] != puVar19)))) goto LAB_0014ebcc;
        puVar14[3] = (ulong)puVar12;
        puVar12[2] = (ulong)puVar14;
      }
    }
    else {
      puVar12 = (ulong *)puVar19[3];
      uVar13 = puVar19[6];
      if (puVar12 == puVar19) {
        puVar18 = (ulong *)puVar19[5];
        puVar14 = puVar19 + 5;
        if (puVar18 == (ulong *)0x0) {
          puVar18 = (ulong *)puVar19[4];
          puVar14 = puVar19 + 4;
          if (puVar18 == (ulong *)0x0) {
            puVar12 = (ulong *)0x0;
            goto joined_r0x0014e62c;
          }
        }
        do {
          do {
            puVar12 = puVar18;
            puVar16 = puVar14;
            puVar18 = (ulong *)puVar12[5];
            puVar14 = puVar12 + 5;
          } while (puVar18 != (ulong *)0x0);
          puVar18 = (ulong *)puVar12[4];
          puVar14 = puVar12 + 4;
        } while (puVar18 != (ulong *)0x0);
        if (puVar16 < puVar11) goto LAB_0014ebcc;
        *puVar16 = 0;
      }
      else {
        puVar14 = (ulong *)puVar19[2];
        if (((puVar14 < puVar11) || ((ulong *)puVar14[3] != puVar19)) ||
           ((ulong *)puVar12[2] != puVar19)) goto LAB_0014ebcc;
        puVar14[3] = (ulong)puVar12;
        puVar12[2] = (ulong)puVar14;
      }
joined_r0x0014e62c:
      if (uVar13 != 0) {
        if (*(ulong **)(param_1 + (ulong)(uint)puVar19[7] * 2 + 0x96) == puVar19) {
          *(ulong **)(param_1 + (ulong)(uint)puVar19[7] * 2 + 0x96) = puVar12;
          if (puVar12 == (ulong *)0x0) {
            param_1[1] = param_1[1] & (1 << (ulong)((uint)puVar19[7] & 0x1f) ^ 0xffffffffU);
          }
          else {
LAB_0014e678:
            if (puVar12 < *(ulong **)(param_1 + 6)) goto LAB_0014ebcc;
            puVar12[6] = uVar13;
            uVar13 = puVar19[4];
            if (uVar13 != 0) {
              if (uVar13 < *(ulong *)(param_1 + 6)) goto LAB_0014ebcc;
              puVar12[4] = uVar13;
              *(ulong **)(uVar13 + 0x30) = puVar12;
            }
            uVar13 = puVar19[5];
            if (uVar13 != 0) {
              if (uVar13 < *(ulong *)(param_1 + 6)) goto LAB_0014ebcc;
              puVar12[5] = uVar13;
              *(ulong **)(uVar13 + 0x30) = puVar12;
            }
          }
        }
        else {
          if (uVar13 < *(ulong *)(param_1 + 6)) goto LAB_0014ebcc;
          lVar9 = 0x20;
          if (*(ulong **)(uVar13 + 0x20) != puVar19) {
            lVar9 = 0x28;
          }
          *(ulong **)(uVar13 + lVar9) = puVar12;
          if (puVar12 != (ulong *)0x0) goto LAB_0014e678;
        }
      }
    }
joined_r0x0014e6e8:
    if (puVar2 <= puVar19) goto LAB_0014ebcc;
    uVar13 = puVar2[1];
    if ((uVar13 & 1) == 0) goto LAB_0014ebcc;
    if (((uint)uVar13 >> 1 & 1) == 0) {
      if (*(ulong **)(param_1 + 10) == puVar2) {
        uVar8 = *(long *)(param_1 + 4) + uVar8;
        *(ulong *)(param_1 + 4) = uVar8;
        *(ulong **)(param_1 + 10) = puVar19;
        puVar19[1] = uVar8 | 1;
        if (puVar19 == *(ulong **)(param_1 + 8)) {
          param_1[8] = 0;
          param_1[9] = 0;
          param_1[2] = 0;
          param_1[3] = 0;
        }
        if (*(ulong *)(param_1 + 0xc) < uVar8) {
          FUN_0014d220(param_1,0);
          bVar4 = (byte)param_1[0xdc];
          goto joined_r0x0014e88c;
        }
        goto LAB_0014ea54;
      }
      if (*(ulong **)(param_1 + 8) == puVar2) {
        uVar8 = *(long *)(param_1 + 2) + uVar8;
        *(ulong *)(param_1 + 2) = uVar8;
        *(ulong **)(param_1 + 8) = puVar19;
        puVar19[1] = uVar8 | 1;
        *(ulong *)((long)puVar19 + uVar8) = uVar8;
        bVar4 = (byte)param_1[0xdc];
        goto joined_r0x0014e88c;
      }
      if (uVar13 < 0x100) {
        puVar11 = (ulong *)puVar2[3];
        if (((puVar11 == puVar2) || (puVar12 = (ulong *)puVar2[2], puVar12 == puVar2)) ||
           ((uVar13 & 0xfffffffffffffff8) != (uVar13 & 0xfffffff8))) goto LAB_0014ebcc;
        if ((puVar12 != (ulong *)(param_1 + (uVar13 >> 3 & 0x7fffffff) * 4 + 0x12)) &&
           ((puVar12 < *(ulong **)(param_1 + 6) || ((ulong *)puVar12[3] != puVar2))))
        goto LAB_0014ebcc;
        if (puVar11 == puVar12) {
          *param_1 = *param_1 & (1 << (ulong)((uint)(uVar13 >> 3) & 0x1f) ^ 0xffffffffU);
        }
        else {
          if ((puVar11 != (ulong *)(param_1 + (uVar13 >> 3 & 0x7fffffff) * 4 + 0x12)) &&
             ((puVar11 < *(ulong **)(param_1 + 6) || ((ulong *)puVar11[2] != puVar2))))
          goto LAB_0014ebcc;
          puVar12[3] = (ulong)puVar11;
          puVar11[2] = (ulong)puVar12;
        }
      }
      else {
        puVar11 = (ulong *)puVar2[3];
        uVar15 = puVar2[6];
        if (puVar11 == puVar2) {
          puVar14 = (ulong *)puVar2[5];
          puVar12 = puVar2 + 5;
          if (puVar14 == (ulong *)0x0) {
            puVar14 = (ulong *)puVar2[4];
            puVar12 = puVar2 + 4;
            if (puVar14 == (ulong *)0x0) {
              puVar11 = (ulong *)0x0;
              goto joined_r0x0014ead8;
            }
          }
          do {
            do {
              puVar11 = puVar14;
              puVar18 = puVar12;
              puVar14 = (ulong *)puVar11[5];
              puVar12 = puVar11 + 5;
            } while (puVar14 != (ulong *)0x0);
            puVar14 = (ulong *)puVar11[4];
            puVar12 = puVar11 + 4;
          } while (puVar14 != (ulong *)0x0);
          if (puVar18 < *(ulong **)(param_1 + 6)) goto LAB_0014ebcc;
          *puVar18 = 0;
        }
        else {
          uVar17 = puVar2[2];
          if (((uVar17 < *(ulong *)(param_1 + 6)) || (*(ulong **)(uVar17 + 0x18) != puVar2)) ||
             ((ulong *)puVar11[2] != puVar2)) goto LAB_0014ebcc;
          *(ulong **)(uVar17 + 0x18) = puVar11;
          puVar11[2] = uVar17;
        }
joined_r0x0014ead8:
        if (uVar15 != 0) {
          if (*(ulong **)(param_1 + (ulong)(uint)puVar2[7] * 2 + 0x96) == puVar2) {
            *(ulong **)(param_1 + (ulong)(uint)puVar2[7] * 2 + 0x96) = puVar11;
            if (puVar11 == (ulong *)0x0) {
              param_1[1] = param_1[1] & (1 << (ulong)((uint)puVar2[7] & 0x1f) ^ 0xffffffffU);
            }
            else {
LAB_0014eb24:
              if (puVar11 < *(ulong **)(param_1 + 6)) goto LAB_0014ebcc;
              puVar11[6] = uVar15;
              uVar15 = puVar2[4];
              if (uVar15 != 0) {
                if (uVar15 < *(ulong *)(param_1 + 6)) goto LAB_0014ebcc;
                puVar11[4] = uVar15;
                *(ulong **)(uVar15 + 0x30) = puVar11;
              }
              uVar15 = puVar2[5];
              if (uVar15 != 0) {
                if (uVar15 < *(ulong *)(param_1 + 6)) goto LAB_0014ebcc;
                puVar11[5] = uVar15;
                *(ulong **)(uVar15 + 0x30) = puVar11;
              }
            }
          }
          else {
            if (uVar15 < *(ulong *)(param_1 + 6)) goto LAB_0014ebcc;
            lVar9 = 0x20;
            if (*(ulong **)(uVar15 + 0x20) != puVar2) {
              lVar9 = 0x28;
            }
            *(ulong **)(uVar15 + lVar9) = puVar11;
            if (puVar11 != (ulong *)0x0) goto LAB_0014eb24;
          }
        }
      }
      uVar8 = (uVar13 & 0xfffffffffffffff8) + uVar8;
      puVar19[1] = uVar8 | 1;
      *(ulong *)((long)puVar19 + uVar8) = uVar8;
      if (puVar19 == *(ulong **)(param_1 + 8)) {
        *(ulong *)(param_1 + 2) = uVar8;
        bVar4 = (byte)param_1[0xdc];
        goto joined_r0x0014e88c;
      }
    }
    else {
      puVar2[1] = uVar13 & 0xfffffffffffffffe;
      puVar19[1] = uVar8 | 1;
      *(ulong *)((long)puVar19 + uVar8) = uVar8;
    }
    if (uVar8 < 0x100) {
      if (uVar8 < 0x20) {
LAB_0014ebcc:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar15 = uVar8 & 0x3fffffff8;
      uVar20 = 1 << (ulong)((uint)(uVar8 >> 3) & 0x1f);
      uVar13 = (long)param_1 + uVar15 * 2 + 0x48;
      if ((*param_1 & uVar20) == 0) {
        *param_1 = *param_1 | uVar20;
        uVar8 = uVar13;
      }
      else {
        uVar8 = *(ulong *)((long)param_1 + uVar15 * 2 + 0x58);
        if (uVar8 < *(ulong *)(param_1 + 6)) goto LAB_0014ebcc;
      }
      *(ulong **)((long)param_1 + uVar15 * 2 + 0x58) = puVar19;
      *(ulong **)(uVar8 + 0x18) = puVar19;
      puVar19[2] = uVar8;
      puVar19[3] = uVar13;
      FUN_0014d4e0(param_1,puVar19);
      bVar4 = (byte)param_1[0xdc];
      goto joined_r0x0014e88c;
    }
    uVar13 = 0;
    if (uVar8 >> 8 != 0) {
      if (uVar8 >> 0x18 == 0) {
        iVar7 = (int)(uVar8 >> 8);
        uVar20 = iVar7 + 0xfff00U >> 0x10 & 8;
        iVar7 = iVar7 << (ulong)uVar20;
        uVar10 = iVar7 + 0x7f000U >> 0x10 & 4;
        iVar7 = iVar7 << (ulong)uVar10;
        uVar3 = iVar7 + 0x3c000U >> 0x10 & 2;
        iVar7 = (0xe - (uVar10 | uVar20 | uVar3)) + ((uint)(iVar7 << (ulong)uVar3) >> 0xf);
        uVar13 = (ulong)((uint)(uVar8 >> ((ulong)(iVar7 + 7) & 0x3f)) & 1 | iVar7 * 2);
      }
      else {
        uVar13 = 0x1f;
      }
    }
    uVar10 = (uint)uVar13;
    *(uint *)(puVar19 + 7) = uVar10;
    puVar19[4] = 0;
    puVar19[5] = 0;
    uVar20 = 1 << (ulong)(uVar10 & 0x1f);
    puVar11 = (ulong *)(param_1 + uVar13 * 2 + 0x96);
    if ((param_1[1] & uVar20) == 0) {
      param_1[1] = param_1[1] | uVar20;
      *puVar11 = (ulong)puVar19;
      puVar19[6] = (ulong)puVar11;
    }
    else {
      if (uVar10 == 0x1f) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0x3f - (ulong)((int)(uVar13 >> 1) + 6);
      }
      uVar15 = uVar8 << (uVar13 & 0x3f);
      uVar13 = *puVar11;
      do {
        uVar17 = uVar13;
        if ((*(ulong *)(uVar17 + 8) & 0xfffffffffffffff8) == uVar8) {
          uVar13 = *(ulong *)(uVar17 + 0x10);
          if ((uVar13 < *(ulong *)(param_1 + 6)) || (uVar17 < *(ulong *)(param_1 + 6)))
          goto LAB_0014ebcc;
          *(ulong **)(uVar13 + 0x18) = puVar19;
          *(ulong **)(uVar17 + 0x10) = puVar19;
          puVar19[6] = 0;
          puVar19[2] = uVar13;
          puVar19[3] = uVar17;
          goto LAB_0014ea30;
        }
        uVar13 = uVar15 >> 0x3c;
        uVar15 = uVar15 << 1;
        puVar11 = (ulong *)(uVar17 + (uVar13 & 8) + 0x20);
        uVar13 = *puVar11;
      } while (*puVar11 != 0);
      if (puVar11 < *(ulong **)(param_1 + 6)) goto LAB_0014ebcc;
      *puVar11 = (ulong)puVar19;
      puVar19[6] = uVar17;
    }
    puVar19[2] = (ulong)puVar19;
    puVar19[3] = (ulong)puVar19;
LAB_0014ea30:
    FUN_0014d4e0(param_1,puVar19);
    lVar9 = *(long *)(param_1 + 0xe);
    *(long *)(param_1 + 0xe) = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      FUN_0014d5b0(param_1);
    }
  }
LAB_0014ea54:
  bVar4 = (byte)param_1[0xdc];
joined_r0x0014e88c:
  if ((bVar4 >> 1 & 1) != 0) {
    param_1[0xdd] = 0;
  }
  return;
}


