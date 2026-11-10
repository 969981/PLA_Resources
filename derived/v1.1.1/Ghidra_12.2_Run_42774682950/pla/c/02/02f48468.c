/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f48468; name: FUN_02f48468
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f48468(long *param_1,int param_2,undefined8 *param_3,int *param_4,int *param_5,
                 long *param_6,int param_7,long param_8,byte param_9,long *param_10)

{
  bool bVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  byte bVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  double dVar19;
  double dVar20;
  int local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  
  if (*(long *)(param_6[0x21] + 0x18) == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = *(long *)(*(long *)(param_6[0x21] + 0x18) + 0x78);
  }
  lVar17 = param_1[0x12];
  if ((*(byte *)(lVar17 + 0x50) & 6) == 4) {
    uVar6 = (int)param_8 - param_2;
    uVar3 = param_2 - *(int *)(lVar17 + 0x38);
    if (uVar6 <= uVar3) {
      uVar3 = uVar6;
    }
    dVar20 = (double)NEON_ucvtf((ulong)DAT_042ab258);
    dVar20 = ((double)(int)uVar3 * 1000.0) / dVar20;
    dVar19 = 0.5;
    if (dVar20 <= 0.0) {
      dVar19 = -0.5;
    }
    local_70 = (int)(dVar19 + dVar20);
    local_6c = *(undefined4 *)(lVar17 + 0x44);
    uStack_68 = 0;
    FUN_02f3bf24(*(undefined8 *)(lVar17 + 8),&local_70);
    bVar7 = *(byte *)(lVar17 + 0x50);
  }
  else {
    bVar7 = *(byte *)(lVar17 + 0x50) & 0xfd;
    *(byte *)(lVar17 + 0x50) = bVar7;
  }
  *(byte *)(lVar17 + 0x50) = bVar7 & 0xfb;
  *(undefined1 *)(lVar17 + 0x18) = 0;
  iVar8 = *param_4;
  if ((lVar18 == 0) || (iVar8 < 1)) {
    if ((*(byte *)(param_4 + 4) >> 5 & 1) != 0) {
      lVar11 = *(long *)(param_6[0x21] + 0x18);
      if (lVar11 != 0) {
        uVar3 = *(uint *)(param_6 + 0x20);
        if (uVar3 == 0) {
          iVar14 = 0;
        }
        else {
          lVar15 = *(long *)(*(long *)(*param_6 + 8) + 0x68);
          iVar14 = (int)lVar15;
          if (uVar3 != 1) {
            lVar16 = (ulong)uVar3 - 1;
            plVar10 = param_6;
            do {
              plVar10 = plVar10 + 1;
              lVar16 = lVar16 + -1;
              lVar15 = *(long *)(*(long *)(*plVar10 + 8) + 0x68) + lVar15;
              iVar14 = (int)lVar15;
            } while (lVar16 != 0);
          }
        }
        lVar11 = *(long *)(lVar11 + 0x78);
        lVar15 = *(long *)(lVar11 + 0x100);
        if (*(int *)(lVar15 + (ulong)*(uint *)(lVar11 + 0x108) * 0x10 + -0xc) - *(int *)(lVar15 + 4)
            == *(int *)(param_6[0x22] + 0x88) +
               (((int)param_8 - iVar14) - *(int *)(param_6[0x21] + 8))) {
          lVar18 = (ulong)(uint)(*(int *)(lVar18 + 0x110) -
                                *(int *)(*(long *)(lVar18 + 0x100) +
                                         (ulong)*(uint *)(lVar18 + 0x108) * 0x10 + -0xc)) + param_8;
          bVar1 = true;
          goto LAB_02f48530;
        }
      }
    }
    bVar1 = true;
    lVar18 = param_8;
  }
  else {
    auVar5 = SEXT816((long)((ulong)DAT_042ab258 * (long)iVar8)) * SEXT816(0x20c49ba5e353f7cf);
    bVar1 = param_4[2] < 1;
    lVar18 = param_8 - (((int)(auVar5._8_8_ >> 7) - (auVar5._12_4_ >> 0x1f)) - param_4[2]);
  }
LAB_02f48530:
  iVar14 = param_4[1];
  *(long *)(lVar17 + 0x38) = lVar18;
  *(byte *)(lVar17 + 0x50) = bVar7 | 6;
  *(int *)(lVar17 + 0x40) = iVar8;
  *(int *)(lVar17 + 0x44) = iVar14;
  if ((bVar1) && ((param_9 & 1) == 0)) {
    *(long *)(lVar17 + 0x10) = param_8;
    *(undefined1 *)(lVar17 + 0x18) = 1;
  }
  lVar18 = param_6[0x21];
  if ((*(long *)(lVar18 + 0x18) != 0) && (*(int *)(lVar18 + 0x38) == 0)) {
    lVar17 = *(long *)(*(long *)(lVar18 + 0x18) + 0x78);
    if ((*(byte *)(param_4 + 4) >> 5 & 1) == 0) {
      iVar8 = *(int *)(*(long *)(lVar17 + 0x100) + (ulong)*(uint *)(lVar17 + 0x108) * 0x10 + -0xc);
    }
    else {
      iVar8 = *(int *)(lVar17 + 0x110);
    }
    *(int *)(lVar18 + 0x34) = iVar8 - *(int *)(*(long *)(lVar17 + 0x100) + 4);
  }
  *(long *)(param_3[1] + 0x68) = param_8;
  param_3[4] = param_8 - param_7;
  iVar8 = param_5[2];
  param_3[5] = *(undefined8 *)param_5;
  *(int *)(param_3 + 6) = iVar8;
  lVar18 = (**(code **)(*(long *)param_3[1] + 0xd0))();
  if (lVar18 == 0) {
    *(undefined4 *)(param_3 + 5) = 0;
  }
  if (0 < *param_5) {
    *(int *)(param_3 + 6) = *(int *)(param_3 + 6) + param_7;
  }
  *(byte *)(param_3 + 10) = *(byte *)(param_3 + 10) | 1;
  lVar18 = param_6[0x21];
  if (lVar18 == 0) {
    lVar17 = 0x7fffffffffffffff;
    plVar10 = _DAT_00000010;
  }
  else {
    uVar3 = *(uint *)(param_6 + 0x20);
    if (uVar3 == 0) {
      lVar17 = 0;
    }
    else {
      lVar17 = *(long *)(*(long *)(*param_6 + 8) + 0x68);
      if (uVar3 != 1) {
        lVar11 = (ulong)uVar3 - 1;
        plVar10 = param_6;
        do {
          plVar10 = plVar10 + 1;
          lVar11 = lVar11 + -1;
          lVar17 = *(long *)(*(long *)(*plVar10 + 8) + 0x68) + lVar17;
        } while (lVar11 != 0);
      }
    }
    uVar9 = *(long *)(lVar18 + 8) - (ulong)*(uint *)(param_6[0x22] + 0x88);
    lVar17 = (uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU)) + lVar17;
    plVar10 = *(long **)(lVar18 + 0x10);
  }
  if (plVar10 != (long *)0x0) {
    plVar13 = (long *)0x0;
    do {
      plVar12 = plVar10;
      if ((param_8 - lVar17 < *plVar12) ||
         ((*plVar12 == param_8 - lVar17 && ((int)plVar12[1] == 0)))) {
        plVar10 = (long *)plVar12[3];
        plVar2 = (long *)(lVar18 + 0x10);
        if (*(long **)(lVar18 + 0x10) != plVar12) {
          plVar2 = plVar13 + 3;
        }
        *plVar2 = (long)plVar10;
        if (*param_10 == 0) {
          *param_10 = (long)plVar12;
          plVar12[3] = 0;
        }
        else {
          plVar12[3] = *param_10;
          *param_10 = (long)plVar12;
        }
        plVar12 = plVar13;
      }
      else {
        plVar10 = (long *)plVar12[3];
      }
      plVar13 = plVar12;
    } while (plVar10 != (long *)0x0);
  }
  cVar4 = (char)param_6[0x25];
  while (cVar4 == '\0') {
    (**(code **)(*param_1 + 0xb8))(param_1,param_6,1);
    lVar18 = param_6[0x21];
    if (lVar18 == 0) {
      lVar17 = 0x7fffffffffffffff;
      plVar10 = _DAT_00000010;
    }
    else {
      uVar3 = *(uint *)(param_6 + 0x20);
      if (uVar3 == 0) {
        lVar17 = 0;
      }
      else {
        lVar17 = *(long *)(*(long *)(*param_6 + 8) + 0x68);
        if (uVar3 != 1) {
          lVar11 = (ulong)uVar3 - 1;
          plVar10 = param_6;
          do {
            plVar10 = plVar10 + 1;
            lVar11 = lVar11 + -1;
            lVar17 = *(long *)(*(long *)(*plVar10 + 8) + 0x68) + lVar17;
          } while (lVar11 != 0);
        }
      }
      uVar9 = *(long *)(lVar18 + 8) - (ulong)*(uint *)(param_6[0x22] + 0x88);
      lVar17 = (uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU)) + lVar17;
      plVar10 = *(long **)(lVar18 + 0x10);
    }
    if (plVar10 != (long *)0x0) {
      plVar13 = (long *)0x0;
      do {
        plVar12 = plVar10;
        if ((param_8 - lVar17 < *plVar12) ||
           ((*plVar12 == param_8 - lVar17 && ((int)plVar12[1] == 0)))) {
          plVar10 = (long *)plVar12[3];
          plVar2 = (long *)(lVar18 + 0x10);
          if (*(long **)(lVar18 + 0x10) != plVar12) {
            plVar2 = plVar13 + 3;
          }
          *plVar2 = (long)plVar10;
          if (*param_10 == 0) {
            *param_10 = (long)plVar12;
            plVar12[3] = 0;
          }
          else {
            plVar12[3] = *param_10;
            *param_10 = (long)plVar12;
          }
          plVar12 = plVar13;
        }
        else {
          plVar10 = (long *)plVar12[3];
        }
        plVar13 = plVar12;
      } while (plVar10 != (long *)0x0);
    }
    cVar4 = (char)param_6[0x25];
  }
  *param_3 = 0;
  plVar10 = param_1 + 0x13;
  if (*plVar10 != 0) {
    plVar10 = (long *)param_1[0x12];
  }
  *plVar10 = (long)param_3;
  param_1[0x12] = (long)param_3;
  return;
}


