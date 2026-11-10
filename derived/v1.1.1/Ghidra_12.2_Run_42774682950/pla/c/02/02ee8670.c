/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee8670; name: FUN_02ee8670
 */


undefined8 FUN_02ee8670(long *param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  uint uVar18;
  
  lVar11 = *param_1;
  uVar13 = *(uint *)(param_1 + 1);
  if (lVar11 == 0) {
    puVar15 = (undefined8 *)0x0;
    goto LAB_02ee88bc;
  }
  uVar18 = uVar13;
  if (0 < (int)uVar13) {
    if ((int)uVar13 < 0) {
      uVar18 = uVar13 + 1;
    }
    uVar18 = (int)uVar18 >> 1;
    lVar9 = *(long *)(lVar11 + (long)(int)uVar18 * 0x10 + 8);
    cVar6 = *(char *)(param_2 + 0x28);
    uVar14 = *(ulong *)(param_2 + 0x10);
    cVar7 = *(char *)(param_2 + 0x30);
    uVar17 = *(ulong *)(param_2 + 0x38);
    bVar1 = cVar7 + 1;
    uVar4 = *(uint *)(param_2 + 0x18);
    uVar5 = *(uint *)(param_2 + 0x20);
    bVar3 = cVar6 + 1U & 0x1f;
    if ((*(ulong *)(lVar9 + 0x10) < uVar14) ||
       ((*(ulong *)(lVar9 + 0x10) == uVar14 &&
        ((*(uint *)(lVar9 + 0x18) < uVar4 ||
         ((*(uint *)(lVar9 + 0x18) == uVar4 &&
          ((*(uint *)(lVar9 + 0x20) < uVar5 ||
           ((*(uint *)(lVar9 + 0x20) == uVar5 &&
            (((*(char *)(lVar9 + 0x28) + 1U & 0x1f) < bVar3 ||
             ((*(char *)(lVar9 + 0x28) == cVar6 &&
              (((byte)(*(char *)(lVar9 + 0x30) + 1U) < bVar1 ||
               ((*(char *)(lVar9 + 0x30) == cVar7 && (*(ulong *)(lVar9 + 0x38) < uVar17)))))))))))))
          ))))))) {
      iVar8 = uVar18 + 1;
      uVar18 = uVar13;
      if (iVar8 < (int)uVar13) goto LAB_02ee8744;
    }
    else {
      iVar8 = 0;
      if (0 < (int)uVar18) {
LAB_02ee8744:
        iVar2 = iVar8 + uVar18;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        uVar10 = iVar2 >> 1;
        lVar9 = *(long *)(lVar11 + (long)(int)uVar10 * 0x10 + 8);
        if (*(ulong *)(lVar9 + 0x10) < uVar14) goto LAB_02ee8818;
        if (*(ulong *)(lVar9 + 0x10) == uVar14) {
          if (*(uint *)(lVar9 + 0x18) < uVar4) goto LAB_02ee8818;
          if (*(uint *)(lVar9 + 0x18) == uVar4) {
            if (*(uint *)(lVar9 + 0x20) < uVar5) goto LAB_02ee8818;
            if (*(uint *)(lVar9 + 0x20) == uVar5) {
              if ((*(char *)(lVar9 + 0x28) + 1U & 0x1f) < bVar3) goto LAB_02ee8818;
              if (*(char *)(lVar9 + 0x28) == cVar6) {
                if ((byte)(*(char *)(lVar9 + 0x30) + 1U) < bVar1) goto LAB_02ee8818;
                if (*(char *)(lVar9 + 0x30) == cVar7) {
                  if (*(ulong *)(lVar9 + 0x38) < uVar17) goto LAB_02ee8818;
                  uVar18 = uVar10;
                }
                else {
                  uVar18 = uVar10;
                }
              }
              else {
                uVar18 = uVar10;
              }
            }
            else {
              uVar18 = uVar10;
            }
          }
          else {
            uVar18 = uVar10;
          }
        }
        else {
          uVar18 = uVar10;
        }
        while (iVar8 < (int)uVar18) {
          iVar2 = iVar8 + uVar18;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          uVar10 = iVar2 >> 1;
          lVar9 = *(long *)(lVar11 + (long)(int)uVar10 * 0x10 + 8);
          if ((*(ulong *)(lVar9 + 0x10) < uVar14) ||
             ((*(ulong *)(lVar9 + 0x10) == uVar14 &&
              ((*(uint *)(lVar9 + 0x18) < uVar4 ||
               ((*(uint *)(lVar9 + 0x18) == uVar4 &&
                ((*(uint *)(lVar9 + 0x20) < uVar5 ||
                 ((*(uint *)(lVar9 + 0x20) == uVar5 &&
                  (((*(char *)(lVar9 + 0x28) + 1U & 0x1f) < bVar3 ||
                   ((*(char *)(lVar9 + 0x28) == cVar6 &&
                    (((byte)(*(char *)(lVar9 + 0x30) + 1U) < bVar1 ||
                     ((*(char *)(lVar9 + 0x30) == cVar7 && (*(ulong *)(lVar9 + 0x38) < uVar17)))))))
                   ))))))))))))) {
LAB_02ee8818:
            iVar8 = uVar10 + 1;
          }
          else {
            uVar18 = uVar10;
          }
        }
      }
    }
  }
  puVar15 = (undefined8 *)(lVar11 + (long)(int)uVar18 * 0x10);
LAB_02ee88bc:
  puVar12 = (undefined8 *)(lVar11 + (ulong)uVar13 * 0x10);
  if (puVar15 != puVar12) {
    while ((((lVar11 = puVar15[1], *(long *)(lVar11 + 0x10) == *(long *)(param_2 + 0x10) &&
             (*(int *)(lVar11 + 0x18) == *(int *)(param_2 + 0x18))) &&
            (*(int *)(lVar11 + 0x20) == *(int *)(param_2 + 0x20))) &&
           (((*(char *)(lVar11 + 0x28) == *(char *)(param_2 + 0x28) &&
             (*(char *)(lVar11 + 0x30) == *(char *)(param_2 + 0x30))) &&
            (*(long *)(lVar11 + 0x38) == *(long *)(param_2 + 0x38)))))) {
      if (lVar11 == param_2) {
        puVar12 = puVar12 + -2;
        if (puVar15 < puVar12) {
          *puVar15 = puVar15[2];
          puVar15[1] = puVar15[3];
          if (puVar15 + 2 < puVar12) {
            puVar15[2] = puVar15[4];
            puVar15[3] = puVar15[5];
            if (puVar15 + 4 < puVar12) {
              puVar16 = puVar15 + 6;
              puVar15[4] = *puVar16;
              puVar15[5] = puVar15[7];
              if (puVar16 < puVar12) {
                do {
                  puVar15 = puVar16 + 2;
                  *puVar16 = *puVar15;
                  puVar16[1] = puVar16[3];
                  puVar16 = puVar15;
                } while (puVar15 < puVar12);
              }
            }
          }
          uVar13 = *(uint *)(param_1 + 1);
        }
        *(uint *)(param_1 + 1) = uVar13 - 1;
        return 1;
      }
      puVar15 = puVar15 + 2;
      if (puVar12 == puVar15) {
        return 0;
      }
    }
  }
  return 0;
}


