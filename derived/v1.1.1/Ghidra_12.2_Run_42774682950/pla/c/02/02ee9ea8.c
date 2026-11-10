/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee9ea8; name: FUN_02ee9ea8
 */


void FUN_02ee9ea8(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,ulong *param_5,
                 undefined8 *param_6)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *puVar18;
  
  lVar13 = *(long *)(param_3 + 8);
  uVar17 = 1L << (param_4 & 0x3f);
  lVar4 = *(long *)(lVar13 + 0x10);
  uVar5 = *(uint *)(lVar13 + 0x18);
  if ((*(ulong *)(lVar13 + 8) & uVar17) == 0) {
    if (lVar4 == 0) {
      puVar18 = (ulong *)0x0;
      goto LAB_02eea45c;
    }
    uVar14 = uVar5;
    if (0 < (int)uVar5) {
      if ((int)uVar5 < 0) {
        uVar14 = uVar5 + 1;
      }
      uVar14 = (int)uVar14 >> 1;
      lVar13 = *(long *)(lVar4 + (long)(int)uVar14 * 0x10 + 8);
      cVar8 = (char)param_5[3];
      uVar15 = *param_5;
      cVar9 = (char)param_5[4];
      uVar16 = param_5[5];
      bVar1 = cVar9 + 1;
      uVar6 = (uint)param_5[1];
      uVar7 = (uint)param_5[2];
      bVar3 = cVar8 + 1U & 0x1f;
      if ((*(ulong *)(lVar13 + 0x10) < uVar15) ||
         ((*(ulong *)(lVar13 + 0x10) == uVar15 &&
          ((*(uint *)(lVar13 + 0x18) < uVar6 ||
           ((*(uint *)(lVar13 + 0x18) == uVar6 &&
            ((*(uint *)(lVar13 + 0x20) < uVar7 ||
             ((*(uint *)(lVar13 + 0x20) == uVar7 &&
              (((*(char *)(lVar13 + 0x28) + 1U & 0x1f) < bVar3 ||
               ((*(char *)(lVar13 + 0x28) == cVar8 &&
                (((byte)(*(char *)(lVar13 + 0x30) + 1U) < bVar1 ||
                 ((*(char *)(lVar13 + 0x30) == cVar9 && (*(ulong *)(lVar13 + 0x38) < uVar16)))))))))
              ))))))))))) {
        iVar10 = uVar14 + 1;
        uVar14 = uVar5;
        if (iVar10 < (int)uVar5) goto LAB_02eea110;
      }
      else {
        iVar10 = 0;
        if (0 < (int)uVar14) {
LAB_02eea110:
          iVar2 = iVar10 + uVar14;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          uVar11 = iVar2 >> 1;
          lVar13 = *(long *)(lVar4 + (long)(int)uVar11 * 0x10 + 8);
          if (*(ulong *)(lVar13 + 0x10) < uVar15) goto LAB_02eea3b8;
          if (*(ulong *)(lVar13 + 0x10) == uVar15) {
            if (*(uint *)(lVar13 + 0x18) < uVar6) goto LAB_02eea3b8;
            if (*(uint *)(lVar13 + 0x18) == uVar6) {
              if (*(uint *)(lVar13 + 0x20) < uVar7) goto LAB_02eea3b8;
              if (*(uint *)(lVar13 + 0x20) == uVar7) {
                if ((*(char *)(lVar13 + 0x28) + 1U & 0x1f) < bVar3) goto LAB_02eea3b8;
                if (*(char *)(lVar13 + 0x28) == cVar8) {
                  if ((byte)(*(char *)(lVar13 + 0x30) + 1U) < bVar1) goto LAB_02eea3b8;
                  if (*(char *)(lVar13 + 0x30) == cVar9) {
                    if (*(ulong *)(lVar13 + 0x38) < uVar16) goto LAB_02eea3b8;
                    uVar14 = uVar11;
                  }
                  else {
                    uVar14 = uVar11;
                  }
                }
                else {
                  uVar14 = uVar11;
                }
              }
              else {
                uVar14 = uVar11;
              }
            }
            else {
              uVar14 = uVar11;
            }
          }
          else {
            uVar14 = uVar11;
          }
          while (iVar10 < (int)uVar14) {
            iVar2 = iVar10 + uVar14;
            if (iVar2 < 0) {
              iVar2 = iVar2 + 1;
            }
            uVar11 = iVar2 >> 1;
            lVar13 = *(long *)(lVar4 + (long)(int)uVar11 * 0x10 + 8);
            if ((*(ulong *)(lVar13 + 0x10) < uVar15) ||
               ((*(ulong *)(lVar13 + 0x10) == uVar15 &&
                ((*(uint *)(lVar13 + 0x18) < uVar6 ||
                 ((*(uint *)(lVar13 + 0x18) == uVar6 &&
                  ((*(uint *)(lVar13 + 0x20) < uVar7 ||
                   ((*(uint *)(lVar13 + 0x20) == uVar7 &&
                    (((*(char *)(lVar13 + 0x28) + 1U & 0x1f) < bVar3 ||
                     ((*(char *)(lVar13 + 0x28) == cVar8 &&
                      (((byte)(*(char *)(lVar13 + 0x30) + 1U) < bVar1 ||
                       ((*(char *)(lVar13 + 0x30) == cVar9 && (*(ulong *)(lVar13 + 0x38) < uVar16)))
                       ))))))))))))))))) {
LAB_02eea3b8:
              iVar10 = uVar11 + 1;
            }
            else {
              uVar14 = uVar11;
            }
          }
        }
      }
    }
    puVar18 = (ulong *)(lVar4 + (long)(int)uVar14 * 0x10);
LAB_02eea45c:
    while( true ) {
      if (puVar18 == (ulong *)(lVar4 + (ulong)uVar5 * 0x10)) {
        return;
      }
      uVar15 = puVar18[1];
      if ((*param_5 != 0) && (*(ulong *)(uVar15 + 0x10) != *param_5)) {
        return;
      }
      if (((int)param_5[1] != 0) && (*(int *)(uVar15 + 0x18) != (int)param_5[1])) {
        return;
      }
      if (((int)param_5[2] != 0) && (*(int *)(uVar15 + 0x20) != (int)param_5[2])) break;
      if (((char)param_5[3] != -1) && (*(char *)(uVar15 + 0x28) != (char)param_5[3])) {
        return;
      }
      if (((char)param_5[4] != -1) && (*(char *)(uVar15 + 0x30) != (char)param_5[4])) {
        return;
      }
      if ((param_5[5] != 0) && (*(ulong *)(uVar15 + 0x38) != param_5[5])) {
        return;
      }
      if (((*puVar18 & uVar17) != 0) && (uVar15 = (**(code **)*param_6)(param_6), (uVar15 & 1) == 0)
         ) {
        (**(code **)(*(long *)puVar18[1] + 0x10))
                  (param_1,param_2,(long *)puVar18[1],param_4 & 0xffffffff);
      }
      puVar18 = puVar18 + 2;
    }
    return;
  }
  if (lVar4 == 0) {
    lVar13 = 0;
    goto LAB_02eea2d0;
  }
  uVar14 = uVar5;
  if (0 < (int)uVar5) {
    if ((int)uVar5 < 0) {
      uVar14 = uVar5 + 1;
    }
    uVar14 = (int)uVar14 >> 1;
    lVar13 = *(long *)(lVar4 + (long)(int)uVar14 * 0x10 + 8);
    cVar8 = (char)param_5[3];
    uVar17 = *param_5;
    cVar9 = (char)param_5[4];
    uVar15 = param_5[5];
    bVar1 = cVar9 + 1;
    uVar6 = (uint)param_5[1];
    uVar7 = (uint)param_5[2];
    bVar3 = cVar8 + 1U & 0x1f;
    if ((*(ulong *)(lVar13 + 0x10) < uVar17) ||
       ((*(ulong *)(lVar13 + 0x10) == uVar17 &&
        ((*(uint *)(lVar13 + 0x18) < uVar6 ||
         ((*(uint *)(lVar13 + 0x18) == uVar6 &&
          ((*(uint *)(lVar13 + 0x20) < uVar7 ||
           ((*(uint *)(lVar13 + 0x20) == uVar7 &&
            (((*(char *)(lVar13 + 0x28) + 1U & 0x1f) < bVar3 ||
             ((*(char *)(lVar13 + 0x28) == cVar8 &&
              (((byte)(*(char *)(lVar13 + 0x30) + 1U) < bVar1 ||
               ((*(char *)(lVar13 + 0x30) == cVar9 && (*(ulong *)(lVar13 + 0x38) < uVar15)))))))))))
           ))))))))) {
      iVar10 = uVar14 + 1;
      uVar14 = uVar5;
      if (iVar10 < (int)uVar5) goto LAB_02ee9fb8;
    }
    else {
      iVar10 = 0;
      if (0 < (int)uVar14) {
LAB_02ee9fb8:
        iVar2 = iVar10 + uVar14;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        uVar11 = iVar2 >> 1;
        lVar13 = *(long *)(lVar4 + (long)(int)uVar11 * 0x10 + 8);
        if (*(ulong *)(lVar13 + 0x10) < uVar17) goto LAB_02eea22c;
        if (*(ulong *)(lVar13 + 0x10) == uVar17) {
          if (*(uint *)(lVar13 + 0x18) < uVar6) goto LAB_02eea22c;
          if (*(uint *)(lVar13 + 0x18) == uVar6) {
            if (*(uint *)(lVar13 + 0x20) < uVar7) goto LAB_02eea22c;
            if (*(uint *)(lVar13 + 0x20) == uVar7) {
              if ((*(char *)(lVar13 + 0x28) + 1U & 0x1f) < bVar3) goto LAB_02eea22c;
              if (*(char *)(lVar13 + 0x28) == cVar8) {
                if ((byte)(*(char *)(lVar13 + 0x30) + 1U) < bVar1) goto LAB_02eea22c;
                if (*(char *)(lVar13 + 0x30) == cVar9) {
                  if (*(ulong *)(lVar13 + 0x38) < uVar15) goto LAB_02eea22c;
                  uVar14 = uVar11;
                }
                else {
                  uVar14 = uVar11;
                }
              }
              else {
                uVar14 = uVar11;
              }
            }
            else {
              uVar14 = uVar11;
            }
          }
          else {
            uVar14 = uVar11;
          }
        }
        else {
          uVar14 = uVar11;
        }
        while (iVar10 < (int)uVar14) {
          iVar2 = iVar10 + uVar14;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          uVar11 = iVar2 >> 1;
          lVar13 = *(long *)(lVar4 + (long)(int)uVar11 * 0x10 + 8);
          if ((*(ulong *)(lVar13 + 0x10) < uVar17) ||
             ((*(ulong *)(lVar13 + 0x10) == uVar17 &&
              ((*(uint *)(lVar13 + 0x18) < uVar6 ||
               ((*(uint *)(lVar13 + 0x18) == uVar6 &&
                ((*(uint *)(lVar13 + 0x20) < uVar7 ||
                 ((*(uint *)(lVar13 + 0x20) == uVar7 &&
                  (((*(char *)(lVar13 + 0x28) + 1U & 0x1f) < bVar3 ||
                   ((*(char *)(lVar13 + 0x28) == cVar8 &&
                    (((byte)(*(char *)(lVar13 + 0x30) + 1U) < bVar1 ||
                     ((*(char *)(lVar13 + 0x30) == cVar9 && (*(ulong *)(lVar13 + 0x38) < uVar15)))))
                    ))))))))))))))) {
LAB_02eea22c:
            iVar10 = uVar11 + 1;
          }
          else {
            uVar14 = uVar11;
          }
        }
      }
    }
  }
  lVar13 = lVar4 + (long)(int)uVar14 * 0x10;
LAB_02eea2d0:
  while( true ) {
    if (lVar13 == lVar4 + (ulong)uVar5 * 0x10) {
      return;
    }
    lVar12 = *(long *)(lVar13 + 8);
    if ((*param_5 != 0) && (*(ulong *)(lVar12 + 0x10) != *param_5)) {
      return;
    }
    if (((int)param_5[1] != 0) && (*(int *)(lVar12 + 0x18) != (int)param_5[1])) {
      return;
    }
    if (((int)param_5[2] != 0) && (*(int *)(lVar12 + 0x20) != (int)param_5[2])) break;
    if (((char)param_5[3] != -1) && (*(char *)(lVar12 + 0x28) != (char)param_5[3])) {
      return;
    }
    if (((char)param_5[4] != -1) && (*(char *)(lVar12 + 0x30) != (char)param_5[4])) {
      return;
    }
    if ((param_5[5] != 0) && (*(ulong *)(lVar12 + 0x38) != param_5[5])) {
      return;
    }
    uVar17 = (**(code **)*param_6)(param_6);
    if ((uVar17 & 1) == 0) {
      (**(code **)(**(long **)(lVar13 + 8) + 0x10))
                (param_1,param_2,*(long **)(lVar13 + 8),param_4 & 0xffffffff);
    }
    lVar13 = lVar13 + 0x10;
  }
  return;
}


