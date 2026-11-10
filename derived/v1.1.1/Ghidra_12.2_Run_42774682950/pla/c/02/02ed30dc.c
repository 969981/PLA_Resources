/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed30dc; name: FUN_02ed30dc
 */


void FUN_02ed30dc(long param_1,ulong param_2,ulong *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong *puVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  char cVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong *puVar19;
  undefined8 *puVar20;
  ulong *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  ulong *puVar25;
  
  puVar25 = *(ulong **)(param_1 + 8);
  if (puVar25 == (ulong *)0x0) {
    return;
  }
  uVar11 = *param_3 & *puVar25;
  if (uVar11 == 0) {
    uVar11 = FUN_02ee8670(puVar25 + 2);
    if ((uVar11 & 1) == 0) {
      return;
    }
    if ((int)puVar25[3] == 0) {
      puVar25[1] = 0xffffffffffffffff;
      return;
    }
    return;
  }
  uVar6 = (uint)puVar25[3];
  uVar17 = puVar25[2];
  if (uVar17 == 0) {
    puVar19 = (ulong *)0x0;
  }
  else {
    uVar13 = uVar6;
    if (0 < (int)uVar6) {
      if ((int)uVar6 < 0) {
        uVar13 = uVar6 + 1;
      }
      uVar13 = (int)uVar13 >> 1;
      uVar14 = (ulong)uVar13;
      lVar16 = *(long *)(uVar17 + (long)(int)uVar13 * 0x10 + 8);
      cVar9 = *(char *)(param_2 + 0x28);
      uVar18 = *(ulong *)(param_2 + 0x10);
      cVar10 = *(char *)(param_2 + 0x30);
      uVar12 = *(ulong *)(param_2 + 0x38);
      bVar2 = cVar10 + 1;
      uVar7 = *(uint *)(param_2 + 0x18);
      uVar8 = *(uint *)(param_2 + 0x20);
      bVar5 = cVar9 + 1U & 0x1f;
      if ((*(ulong *)(lVar16 + 0x10) < uVar18) ||
         ((*(ulong *)(lVar16 + 0x10) == uVar18 &&
          ((*(uint *)(lVar16 + 0x18) < uVar7 ||
           ((*(uint *)(lVar16 + 0x18) == uVar7 &&
            ((*(uint *)(lVar16 + 0x20) < uVar8 ||
             ((*(uint *)(lVar16 + 0x20) == uVar8 &&
              (((*(char *)(lVar16 + 0x28) + 1U & 0x1f) < bVar5 ||
               ((*(char *)(lVar16 + 0x28) == cVar9 &&
                (((byte)(*(char *)(lVar16 + 0x30) + 1U) < bVar2 ||
                 ((*(char *)(lVar16 + 0x30) == cVar10 && (*(ulong *)(lVar16 + 0x38) < uVar12))))))))
              )))))))))))) {
        iVar15 = uVar13 + 1;
        uVar14 = (ulong)uVar6;
        uVar13 = uVar6;
        if (iVar15 < (int)uVar6) goto LAB_02ed320c;
      }
      else {
        iVar15 = 0;
        if (0 < (int)uVar13) {
LAB_02ed320c:
          iVar3 = iVar15 + (int)uVar14;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          uVar13 = iVar3 >> 1;
          lVar16 = *(long *)(uVar17 + (long)(int)uVar13 * 0x10 + 8);
          if (*(ulong *)(lVar16 + 0x10) < uVar18) goto LAB_02ed32e0;
          if (*(ulong *)(lVar16 + 0x10) == uVar18) {
            if (*(uint *)(lVar16 + 0x18) < uVar7) goto LAB_02ed32e0;
            if (*(uint *)(lVar16 + 0x18) == uVar7) {
              if (*(uint *)(lVar16 + 0x20) < uVar8) goto LAB_02ed32e0;
              if (*(uint *)(lVar16 + 0x20) == uVar8) {
                if ((*(char *)(lVar16 + 0x28) + 1U & 0x1f) < bVar5) goto LAB_02ed32e0;
                if (*(char *)(lVar16 + 0x28) == cVar9) {
                  if ((byte)(*(char *)(lVar16 + 0x30) + 1U) < bVar2) goto LAB_02ed32e0;
                  if (*(char *)(lVar16 + 0x30) == cVar10) {
                    if (*(ulong *)(lVar16 + 0x38) < uVar12) goto LAB_02ed32e0;
                    uVar14 = (ulong)uVar13;
                  }
                  else {
                    uVar14 = (ulong)uVar13;
                  }
                }
                else {
                  uVar14 = (ulong)uVar13;
                }
              }
              else {
                uVar14 = (ulong)uVar13;
              }
            }
            else {
              uVar14 = (ulong)uVar13;
            }
          }
          else {
            uVar14 = (ulong)uVar13;
          }
          while (uVar13 = (uint)uVar14, iVar15 < (int)uVar13) {
            iVar3 = iVar15 + uVar13;
            if (iVar3 < 0) {
              iVar3 = iVar3 + 1;
            }
            uVar13 = iVar3 >> 1;
            lVar16 = *(long *)(uVar17 + (long)(int)uVar13 * 0x10 + 8);
            if ((*(ulong *)(lVar16 + 0x10) < uVar18) ||
               ((*(ulong *)(lVar16 + 0x10) == uVar18 &&
                ((*(uint *)(lVar16 + 0x18) < uVar7 ||
                 ((*(uint *)(lVar16 + 0x18) == uVar7 &&
                  ((*(uint *)(lVar16 + 0x20) < uVar8 ||
                   ((*(uint *)(lVar16 + 0x20) == uVar8 &&
                    (((*(char *)(lVar16 + 0x28) + 1U & 0x1f) < bVar5 ||
                     ((*(char *)(lVar16 + 0x28) == cVar9 &&
                      (((byte)(*(char *)(lVar16 + 0x30) + 1U) < bVar2 ||
                       ((*(char *)(lVar16 + 0x30) == cVar10 && (*(ulong *)(lVar16 + 0x38) < uVar12))
                       )))))))))))))))))) {
LAB_02ed32e0:
              iVar15 = uVar13 + 1;
            }
            else {
              uVar14 = (ulong)uVar13;
            }
          }
        }
      }
    }
    puVar19 = (ulong *)(uVar17 + (long)(int)uVar13 * 0x10);
  }
  puVar4 = (ulong *)(uVar17 + (ulong)uVar6 * 0x10);
  if (puVar4 != puVar19) {
    puVar21 = puVar19;
    do {
      uVar14 = puVar21[1];
      if ((((*(long *)(uVar14 + 0x10) != *(long *)(param_2 + 0x10)) ||
           (*(int *)(uVar14 + 0x18) != *(int *)(param_2 + 0x18))) ||
          (*(int *)(uVar14 + 0x20) != *(int *)(param_2 + 0x20))) ||
         (((*(char *)(uVar14 + 0x28) != *(char *)(param_2 + 0x28) ||
           (*(char *)(uVar14 + 0x30) != *(char *)(param_2 + 0x30))) ||
          (*(long *)(uVar14 + 0x38) != *(long *)(param_2 + 0x38))))) break;
      if (uVar14 == param_2) {
        *puVar21 = uVar11;
        return;
      }
      puVar21 = puVar21 + 2;
    } while (puVar4 != puVar21);
    if (puVar4 != puVar19) {
      uVar13 = *(uint *)((long)puVar25 + 0x1c);
      uVar14 = uVar17;
      if (uVar13 <= uVar6) {
        iVar15 = uVar13 + (uVar13 >> 1);
        if (uVar13 == 0) {
          iVar15 = 1;
        }
        uVar13 = iVar15 + uVar13;
        uVar14 = (*DAT_0442d148)(0,uVar17,(ulong)uVar13 << 4);
        if (uVar14 == 0) {
          return;
        }
        puVar25[2] = uVar14;
        *(uint *)((long)puVar25 + 0x1c) = uVar13;
      }
      if (uVar13 <= uVar6) {
        return;
      }
      uVar13 = (uint)puVar25[3];
      puVar22 = (undefined8 *)(uVar14 + (ulong)uVar13 * 0x10);
      *(uint *)(puVar25 + 3) = uVar13 + 1;
      uVar12 = uVar14;
      if (puVar22 != (undefined8 *)0x0) {
        *puVar22 = 0;
        puVar22[1] = 0;
        uVar12 = puVar25[2];
      }
      uVar18 = (long)puVar19 - uVar17 >> 4 & 0xffffffff;
      puVar20 = (undefined8 *)(uVar12 + ((long)puVar19 - uVar17 >> 4 & 0xffffffff) * 0x10);
      if (puVar20 < puVar22) {
        puVar24 = puVar22 + -2;
        *puVar22 = *puVar24;
        lVar16 = uVar14 + (ulong)uVar13 * 0x10;
        *(undefined8 *)(lVar16 + 8) = puVar22[-1];
        uVar12 = puVar25[2];
        puVar20 = (undefined8 *)(uVar12 + uVar18 * 0x10);
        if (puVar20 < puVar24) {
          puVar23 = puVar22 + -4;
          *puVar24 = *puVar23;
          puVar22[-1] = puVar22[-3];
          uVar12 = puVar25[2];
          puVar20 = (undefined8 *)(uVar12 + uVar18 * 0x10);
          if (puVar20 < puVar23) {
            puVar24 = puVar22 + -6;
            *puVar23 = *puVar24;
            puVar22[-3] = puVar22[-5];
            uVar12 = puVar25[2];
            puVar20 = (undefined8 *)(uVar12 + uVar18 * 0x10);
            if (puVar20 < puVar24) {
              *puVar24 = puVar22[-8];
              puVar22[-5] = puVar22[-7];
              uVar12 = puVar25[2];
              puVar20 = (undefined8 *)(uVar12 + uVar18 * 0x10);
              if (puVar20 < puVar22 + -8) {
                puVar22 = (undefined8 *)(lVar16 + -0x50);
                do {
                  puVar22[2] = *puVar22;
                  puVar22[3] = puVar22[1];
                  uVar12 = puVar25[2];
                  puVar20 = (undefined8 *)(uVar12 + uVar18 * 0x10);
                  bVar1 = puVar20 < puVar22;
                  puVar22 = puVar22 + -2;
                } while (bVar1);
              }
            }
          }
        }
      }
      if (puVar20 != (undefined8 *)0x0) {
        *puVar20 = 0;
        puVar20[1] = 0;
        uVar12 = puVar25[2];
      }
      puVar19 = (ulong *)(uVar12 + uVar18 * 0x10);
      if (puVar19 == (ulong *)0x0) {
        return;
      }
      lVar16 = uVar12 + uVar18 * 0x10;
      *puVar19 = uVar11;
      goto LAB_02ed34f8;
    }
  }
  uVar13 = *(uint *)((long)puVar25 + 0x1c);
  if (uVar13 <= uVar6) {
    iVar15 = uVar13 + (uVar13 >> 1);
    if (uVar13 == 0) {
      iVar15 = 1;
    }
    uVar13 = iVar15 + uVar13;
    uVar17 = (*DAT_0442d148)(0,uVar17,(ulong)uVar13 << 4);
    if (uVar17 == 0) {
      return;
    }
    puVar25[2] = uVar17;
    *(uint *)((long)puVar25 + 0x1c) = uVar13;
  }
  if (uVar13 <= uVar6) {
    return;
  }
  uVar13 = (uint)puVar25[3];
  *(uint *)(puVar25 + 3) = uVar13 + 1;
  puVar19 = (ulong *)(uVar17 + (ulong)uVar13 * 0x10);
  if (puVar19 == (ulong *)0x0) {
    return;
  }
  lVar16 = uVar17 + (ulong)uVar13 * 0x10;
  *puVar19 = uVar11;
LAB_02ed34f8:
  *(ulong *)(lVar16 + 8) = param_2;
  puVar25[1] = puVar25[1] & uVar11;
  if (uVar6 == 0) {
    FUN_02ee2a24(DAT_0440a160,param_1,**(undefined8 **)(param_1 + 8));
    return;
  }
  return;
}


