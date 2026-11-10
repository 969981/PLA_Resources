/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00334da8; name: FUN_00334da8
 */


void FUN_00334da8(long param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  ushort uVar5;
  int *piVar6;
  bool bVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  long *plVar19;
  
  if (*(ushort *)(param_1 + 8) < 0x101) {
    piVar8 = *(int **)(param_1 + 0x10);
    uVar5 = *(ushort *)(param_1 + 10);
    piVar2 = piVar8 + (ulong)uVar5 * 8;
    if (*(ushort *)(param_2 + 8) < 0x101) {
      piVar11 = *(int **)(param_2 + 0x10);
      lVar12 = 0;
      piVar3 = piVar11 + (ulong)*(ushort *)(param_2 + 10) * 8;
      if ((uVar5 != 0) && (*(ushort *)(param_2 + 10) != 0)) {
        lVar12 = 0;
        do {
          iVar4 = *piVar8;
          piVar1 = piVar8 + 8;
          if (iVar4 == *piVar11) {
            piVar8 = piVar1;
          }
          piVar6 = piVar11 + 8;
          if (iVar4 < *piVar11) {
            piVar8 = piVar1;
            piVar6 = piVar11;
          }
          piVar11 = piVar6;
          lVar12 = lVar12 + 1;
        } while ((piVar11 != piVar3) && (piVar8 != piVar2));
      }
      lVar10 = lVar12 + ((long)piVar3 - (long)piVar11 >> 5) + ((long)piVar2 - (long)piVar8 >> 5);
    }
    else {
      lVar12 = 0;
      plVar19 = *(long **)(param_2 + 0x10) + 1;
      plVar13 = (long *)**(long **)(param_2 + 0x10);
      if ((uVar5 != 0) && (plVar19 != plVar13)) {
        lVar12 = 0;
        plVar9 = plVar13;
LAB_00334ebc:
        lVar12 = lVar12 + 1;
        if (*piVar8 < (int)plVar9[4]) {
          piVar8 = piVar8 + 8;
          plVar13 = plVar9;
        }
        else {
          if (*piVar8 != (int)plVar9[4]) {
            plVar14 = (long *)plVar9[1];
            if ((long *)plVar9[1] != (long *)0x0) {
              do {
                plVar13 = plVar14;
                plVar14 = (long *)*plVar13;
              } while ((long *)*plVar13 != (long *)0x0);
              goto LAB_00334eb0;
            }
            plVar14 = plVar9 + 2;
            plVar13 = (long *)*plVar14;
            if ((long *)*plVar13 != plVar9) {
              do {
                lVar10 = *plVar14;
                plVar14 = (long *)(lVar10 + 0x10);
                plVar13 = (long *)*plVar14;
              } while (*plVar13 != lVar10);
              goto LAB_00334eb0;
            }
            plVar9 = plVar13;
            if (plVar19 == plVar13 || piVar8 == piVar2) goto LAB_00334f8c;
            goto LAB_00334ebc;
          }
          piVar8 = piVar8 + 8;
          plVar14 = (long *)plVar9[1];
          if ((long *)plVar9[1] == (long *)0x0) {
            plVar14 = plVar9 + 2;
            plVar13 = (long *)*plVar14;
            if ((long *)*plVar13 != plVar9) {
              do {
                lVar10 = *plVar14;
                plVar14 = (long *)(lVar10 + 0x10);
                plVar13 = (long *)*plVar14;
              } while (*plVar13 != lVar10);
              goto LAB_00334eb0;
            }
            plVar9 = plVar13;
            if (plVar19 == plVar13 || piVar8 == piVar2) goto LAB_00334f8c;
            goto LAB_00334ebc;
          }
          do {
            plVar13 = plVar14;
            plVar14 = (long *)*plVar13;
          } while ((long *)*plVar13 != (long *)0x0);
        }
LAB_00334eb0:
        plVar9 = plVar13;
        if (plVar19 == plVar13 || piVar8 == piVar2) goto LAB_00334f8c;
        goto LAB_00334ebc;
      }
LAB_00334f8c:
      if (plVar13 != plVar19) {
        lVar10 = 1;
        plVar9 = (long *)plVar13[1];
        if ((long *)plVar13[1] != (long *)0x0) goto LAB_00334fc8;
        do {
          plVar9 = plVar13 + 2;
          plVar14 = (long *)*plVar9;
          if ((long *)*plVar14 != plVar13) {
            do {
              lVar15 = *plVar9;
              plVar9 = (long *)(lVar15 + 0x10);
              plVar14 = (long *)*plVar9;
            } while (*plVar14 != lVar15);
          }
          while( true ) {
            if (plVar14 == plVar19) goto LAB_00335084;
            lVar10 = lVar10 + 1;
            plVar13 = plVar14;
            plVar9 = (long *)plVar14[1];
            if ((long *)plVar14[1] == (long *)0x0) break;
LAB_00334fc8:
            do {
              plVar14 = plVar9;
              plVar9 = (long *)*plVar14;
            } while ((long *)*plVar14 != (long *)0x0);
          }
        } while( true );
      }
      lVar10 = 0;
LAB_00335084:
      lVar10 = lVar12 + ((long)piVar2 - (long)piVar8 >> 5) + lVar10;
    }
    FUN_0033508c(param_1,lVar10);
  }
  if (*(ushort *)(param_2 + 8) < 0x101) {
    uVar5 = *(ushort *)(param_2 + 10);
    if ((ulong)uVar5 != 0) {
      puVar16 = *(undefined4 **)(param_2 + 0x10);
      puVar17 = puVar16;
      do {
        puVar18 = puVar17 + 8;
        FUN_00335198(param_1,*puVar17,puVar17 + 2);
        puVar17 = puVar18;
      } while (puVar18 != puVar16 + (ulong)uVar5 * 8);
    }
  }
  else {
    plVar19 = *(long **)(param_2 + 0x10);
    plVar13 = (long *)*plVar19;
    while (plVar13 != plVar19 + 1) {
      FUN_00335198(param_1,*(undefined4 *)(plVar13 + 4),plVar13 + 5);
      plVar9 = (long *)plVar13[1];
      if ((long *)plVar13[1] == (long *)0x0) {
        plVar9 = plVar13 + 2;
        bVar7 = (long *)*(long *)*plVar9 != plVar13;
        plVar13 = (long *)*plVar9;
        if (bVar7) {
          do {
            lVar12 = *plVar9;
            plVar9 = (long *)(lVar12 + 0x10);
            plVar13 = (long *)*plVar9;
          } while (*(long *)*plVar9 != lVar12);
        }
      }
      else {
        do {
          plVar13 = plVar9;
          plVar9 = (long *)*plVar13;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  return;
}


