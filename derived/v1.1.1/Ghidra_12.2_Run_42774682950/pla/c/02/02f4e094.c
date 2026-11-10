/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4e094; name: FUN_02f4e094
 */


void FUN_02f4e094(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  long lVar10;
  int *piVar11;
  undefined8 *puVar12;
  long lVar13;
  long local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined2 local_66;
  int *local_60;
  ulong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  *param_1 = 0;
  param_1[1] = 0xffffffff00000000;
  uVar7 = *(uint *)(param_2 + 9);
  if (uVar7 != 0) {
    puVar12 = (undefined8 *)param_2[8];
    piVar9 = (int *)*puVar12;
    *param_1 = piVar9;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar12 + 1);
    *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)puVar12 + 0xc);
    if (piVar9 != (int *)0x0) {
      *piVar9 = *piVar9 + 1;
      puVar12 = (undefined8 *)param_2[8];
      uVar7 = *(uint *)(param_2 + 9);
    }
    lVar13 = (ulong)uVar7 - 1;
    puVar2 = puVar12 + lVar13 * 2;
    if (0 < lVar13) {
      piVar9 = (int *)*puVar12;
      if ((piVar9 != (int *)0x0) && (iVar3 = *piVar9, *piVar9 = iVar3 + -1, iVar3 + -1 == 0)) {
        (*DAT_0442d150)(*(undefined4 *)((long)puVar12 + 0xc),*puVar12);
      }
      piVar9 = (int *)puVar12[2];
      *puVar12 = piVar9;
      *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar12 + 3);
      *(undefined4 *)((long)puVar12 + 0xc) = *(undefined4 *)((long)puVar12 + 0x1c);
      if (piVar9 != (int *)0x0) {
        *piVar9 = *piVar9 + 1;
      }
      if (1 < lVar13) {
        piVar9 = (int *)puVar12[2];
        if ((piVar9 != (int *)0x0) && (iVar3 = *piVar9, *piVar9 = iVar3 + -1, iVar3 + -1 == 0)) {
          (*DAT_0442d150)(*(undefined4 *)((long)puVar12 + 0x1c),puVar12[2]);
        }
        piVar9 = (int *)puVar12[4];
        puVar12[2] = piVar9;
        *(undefined4 *)(puVar12 + 3) = *(undefined4 *)(puVar12 + 5);
        *(undefined4 *)((long)puVar12 + 0x1c) = *(undefined4 *)((long)puVar12 + 0x2c);
        if (piVar9 != (int *)0x0) {
          *piVar9 = *piVar9 + 1;
        }
        if (2 < lVar13) {
          puVar12 = puVar12 + 4;
          do {
            piVar9 = (int *)*puVar12;
            if ((piVar9 != (int *)0x0) && (iVar3 = *piVar9, *piVar9 = iVar3 + -1, iVar3 + -1 == 0))
            {
              (*DAT_0442d150)(*(undefined4 *)((long)puVar12 + 0xc),*puVar12);
            }
            piVar9 = (int *)puVar12[2];
            *puVar12 = piVar9;
            *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar12 + 3);
            *(undefined4 *)((long)puVar12 + 0xc) = *(undefined4 *)((long)puVar12 + 0x1c);
            if (piVar9 != (int *)0x0) {
              *piVar9 = *piVar9 + 1;
            }
            puVar12 = puVar12 + 2;
          } while (puVar12 < puVar2);
        }
      }
    }
    piVar9 = (int *)*puVar2;
    if ((piVar9 != (int *)0x0) && (iVar3 = *piVar9, *piVar9 = iVar3 + -1, iVar3 + -1 == 0)) {
      (*DAT_0442d150)(*(undefined4 *)((long)puVar2 + 0xc),*puVar2);
    }
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 0;
    *(int *)(param_2 + 9) = (int)param_2[9] + -1;
    local_88 = 0;
    local_66 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = (int *)0x0;
    local_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_90 = *param_2;
    FUN_02f4c320(&local_90,param_1);
    if ((int)local_58 != 0) {
      piVar9 = local_60;
      do {
        lVar13 = local_90;
        iVar3 = *piVar9;
        plVar4 = (long *)(**(code **)(**(long **)(piVar9 + 2) + 0x20))
                                   (*(long **)(piVar9 + 2),(short)piVar9[4]);
        if (plVar4 == (long *)0x0) break;
        piVar8 = *(int **)(lVar13 + 0x150);
        uVar7 = *(uint *)(lVar13 + 0x158);
        if ((uVar7 == 0) || (*piVar8 == iVar3)) {
          piVar6 = piVar8;
        }
        else {
          lVar10 = (ulong)uVar7 * 0x10;
          piVar11 = piVar8;
          do {
            lVar10 = lVar10 + -0x10;
            if (lVar10 == 0) goto LAB_02f4e370;
            piVar6 = piVar11 + 4;
            piVar1 = piVar11 + 4;
            piVar11 = piVar6;
          } while (*piVar1 != iVar3);
        }
        if (piVar6 == piVar8 + (ulong)uVar7 * 4) {
LAB_02f4e370:
          piVar6 = (int *)FUN_02f39fb8(lVar13 + 0x150);
          if (piVar6 == (int *)0x0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
            break;
          }
          *piVar6 = iVar3;
          plVar5 = *(long **)(piVar6 + 2);
        }
        else {
          plVar5 = *(long **)(piVar6 + 2);
        }
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x10))();
        }
        *(long **)(piVar6 + 2) = plVar4;
        piVar9 = piVar9 + 6;
      } while (piVar9 != local_60 + (local_58 & 0xffffffff) * 6);
    }
    FUN_02f4c804(&local_90);
  }
  return;
}


