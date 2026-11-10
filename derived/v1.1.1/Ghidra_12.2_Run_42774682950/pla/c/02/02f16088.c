/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f16088; name: FUN_02f16088
 */


void FUN_02f16088(void)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  int iVar4;
  byte bVar5;
  int *piVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  int *piVar16;
  int *piVar17;
  ulong uVar18;
  long alStack_460 [128];
  int aiStack_58 [2];
  
  uVar10 = DAT_0440ae08;
  plVar3 = DAT_0440ae00;
  if (DAT_0440ae44 != '\0') {
    uVar18 = (ulong)DAT_0440ae08;
    if (DAT_0440ae08 != 0) {
      uVar8 = uVar18 & 3;
      if (uVar18 - 1 < 3) {
        lVar12 = 0;
      }
      else {
        lVar12 = 0;
        plVar13 = DAT_0440ae00 + 2;
        do {
          *(undefined4 *)(plVar13[-2] + 0x348) = 0x7fffffff;
          *(undefined4 *)(plVar13[-1] + 0x348) = 0x7fffffff;
          *(undefined4 *)(*plVar13 + 0x348) = 0x7fffffff;
          plVar15 = plVar13 + 1;
          lVar12 = lVar12 + 4;
          plVar13 = plVar13 + 4;
          *(undefined4 *)(*plVar15 + 0x348) = 0x7fffffff;
        } while (uVar18 - uVar8 != lVar12);
      }
      if ((uVar10 & 3) != 0) {
        plVar13 = plVar3 + lVar12;
        do {
          uVar8 = uVar8 - 1;
          *(undefined4 *)(*plVar13 + 0x348) = 0x7fffffff;
          plVar13 = plVar13 + 1;
        } while (uVar8 != 0);
      }
      aiStack_58[1] = 0;
      DAT_0440ae40 = 0;
      plVar13 = plVar3;
      uVar8 = uVar18;
      do {
        lVar12 = *plVar13;
        if ((*(long *)(lVar12 + 0x28) == 0) &&
           ((*(long *)(lVar12 + 0x68) == 0 || (*(long *)(*(long *)(lVar12 + 0x68) + 0x88) == 0)))) {
          FUN_02f18094(lVar12,0,aiStack_58 + 1);
        }
        iVar4 = aiStack_58[1];
        uVar8 = uVar8 - 1;
        plVar13 = plVar13 + 1;
      } while (uVar8 != 0);
      plVar13 = (long *)((long)alStack_460 + (0x400 - (uVar18 * 8 + 0xf & 0xffffffff0)));
      uVar1 = aiStack_58[1] + 1;
      if (DAT_0440ae18 <= uVar1) {
        if (DAT_0440ae1c < uVar1) {
          uVar2 = DAT_0440ae1c + (uVar1 - DAT_0440ae18);
          piVar6 = (int *)(*DAT_0442d148)(5,DAT_0440ae10,(ulong)uVar2 << 2);
          if (piVar6 == (int *)0x0) {
            return;
          }
          DAT_0440ae10 = piVar6;
          DAT_0440ae1c = uVar2;
        }
      }
      DAT_0440ae18 = uVar1;
      if (DAT_0440ae28 <= uVar1) {
        if (DAT_0440ae2c < uVar1) {
          uVar2 = DAT_0440ae2c + (uVar1 - DAT_0440ae28);
          puVar7 = (undefined1 *)(*DAT_0442d148)(5,DAT_0440ae20,uVar2);
          if (puVar7 == (undefined1 *)0x0) {
            return;
          }
          DAT_0440ae20 = puVar7;
          DAT_0440ae2c = uVar2;
        }
      }
      piVar6 = DAT_0440ae10;
      DAT_0440ae28 = uVar1;
      memset(DAT_0440ae10,0,-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
      plVar14 = plVar3;
      plVar15 = plVar13;
      uVar8 = uVar18;
      do {
        lVar12 = *plVar14;
        *plVar15 = lVar12;
        iVar11 = *(int *)(lVar12 + 0x348);
        if (iVar11 != 0x7fffffff) {
          piVar6[iVar11] = piVar6[iVar11] + 1;
        }
        uVar8 = uVar8 - 1;
        plVar15 = plVar15 + 1;
        plVar14 = plVar14 + 1;
      } while (uVar8 != 0);
      puVar9 = (undefined4 *)((long)plVar13 - ((long)(int)uVar1 * 4 + 0xfU & 0xfffffffffffffff0));
      *puVar9 = 0;
      if (0 < iVar4) {
        iVar11 = *piVar6;
        puVar9[1] = iVar11;
        if (uVar1 != 2) {
          iVar11 = piVar6[1] + iVar11;
          puVar9[2] = iVar11;
          if (uVar1 != 3) {
            iVar11 = piVar6[2] + iVar11;
            puVar9[3] = iVar11;
            if (uVar1 != 4) {
              iVar11 = piVar6[3] + iVar11;
              puVar9[4] = iVar11;
              if (uVar1 != 5) {
                lVar12 = (ulong)uVar1 - 5;
                piVar16 = puVar9 + 5;
                piVar17 = piVar6 + 4;
                do {
                  iVar11 = *piVar17 + iVar11;
                  *piVar16 = iVar11;
                  lVar12 = lVar12 + -1;
                  piVar16 = piVar16 + 1;
                  piVar17 = piVar17 + 1;
                } while (lVar12 != 0);
              }
            }
          }
        }
      }
      do {
        lVar12 = *plVar13;
        iVar11 = *(int *)(lVar12 + 0x348);
        if (iVar11 == 0x7fffffff) {
          uVar10 = uVar10 - 1;
          uVar8 = (ulong)uVar10;
        }
        else {
          uVar8 = (ulong)(int)puVar9[iVar11];
          puVar9[iVar11] = puVar9[iVar11] + 1;
        }
        uVar18 = uVar18 - 1;
        plVar13 = plVar13 + 1;
        plVar3[uVar8] = lVar12;
      } while (uVar18 != 0);
      if (((DAT_0440ae40 & 1) != 0) && (*DAT_0440ae20 = 0, 0 < iVar4)) {
        lVar12 = 0;
        do {
          if (piVar6[lVar12 + 1] < 2) {
            DAT_0440ae20[lVar12 + 1] = 0;
          }
          else {
            bVar5 = FUN_02f155e4((int)lVar12 + 1,puVar9[lVar12]);
            DAT_0440ae20[lVar12 + 1] = bVar5 & 1;
          }
          lVar12 = lVar12 + 1;
        } while ((ulong)uVar1 - 1 != lVar12);
      }
    }
    DAT_0440ae44 = '\0';
  }
  return;
}


