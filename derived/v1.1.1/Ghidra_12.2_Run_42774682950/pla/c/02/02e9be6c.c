/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9be6c; name: FUN_02e9be6c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02e9be6c(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  short sVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  undefined8 local_28;
  
  lVar13 = param_1[0x2e];
  if (lVar13 != 0) {
    if (*(long *)(lVar13 + 8) != 0) {
      lVar8 = *(long *)(*(long *)(lVar13 + 8) + 0x10);
      if (*(uint *)(lVar8 + 0x40) < 6) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x28);
      }
      FUN_02ef6db4(uVar7,lVar13);
      *(undefined8 *)(lVar13 + 8) = 0;
    }
    (*DAT_0442d150)(0,lVar13);
    param_1[0x2e] = 0;
  }
  lVar13 = param_1[0x1e];
  if (lVar13 != 0) {
    if ((*(byte *)(lVar13 + 0x28) >> 1 & 1) != 0) {
      lVar13 = param_1[0x2d];
      do {
        lVar8 = *(long *)(lVar13 + 0x70);
        if (lVar8 != 0) {
          puVar15 = (undefined4 *)(lVar8 + 0x38);
          lVar13 = *(long *)(lVar8 + 0x40);
          goto joined_r0x02e9bfa0;
        }
        lVar13 = *(long *)(lVar13 + 0x80);
      } while (lVar13 != 0);
      puVar15 = (undefined4 *)0x0;
      lVar13 = _DAT_00000008;
joined_r0x02e9bfa0:
      if (lVar13 != 0) {
        FUN_02e9ecd8();
      }
      *(undefined8 *)(puVar15 + 2) = 0;
      *puVar15 = 0;
      lVar13 = param_1[0x1e];
    }
    plVar9 = (long *)*DAT_0440a158;
    uVar6 = *(uint *)(DAT_0440a158 + 1);
    plVar3 = plVar9 + uVar6;
    if ((uVar6 != 0) && (*plVar9 != lVar13)) {
      lVar8 = (ulong)uVar6 * 8;
      plVar10 = plVar9;
      do {
        lVar8 = lVar8 + -8;
        plVar9 = plVar3;
        if (lVar8 == 0) break;
        plVar9 = plVar10 + 1;
        plVar2 = plVar10 + 1;
        plVar10 = plVar9;
      } while (*plVar2 != lVar13);
    }
    if ((plVar9 != (long *)0x0) && (plVar3 != plVar9)) {
      puVar11 = *(undefined8 **)(lVar13 + 0x30);
      uVar6 = *(uint *)(lVar13 + 0x38);
      puVar14 = puVar11 + uVar6;
      if ((uVar6 != 0) && ((long *)*puVar11 != param_1)) {
        lVar8 = (ulong)uVar6 * 8;
        puVar12 = puVar11;
        do {
          lVar8 = lVar8 + -8;
          if (lVar8 == 0) goto LAB_02e9c030;
          puVar11 = puVar12 + 1;
          puVar1 = puVar12 + 1;
          puVar12 = puVar11;
        } while ((long *)*puVar1 != param_1);
      }
      if (puVar14 != puVar11) {
        if (1 < uVar6) {
          *puVar11 = puVar14[-1];
          uVar6 = *(uint *)(lVar13 + 0x38);
        }
        *(uint *)(lVar13 + 0x38) = uVar6 - 1;
        sVar5 = *(short *)(lVar13 + 0x42) + -1;
        *(short *)(lVar13 + 0x42) = sVar5;
        if (*(short *)(lVar13 + 0x40) == 0 && sVar5 == 0) {
          FUN_02edc4dc();
        }
      }
    }
LAB_02e9c030:
    param_1[0x1e] = 0;
    *(undefined4 *)(param_1 + 0x1f) = 0;
  }
  local_28 = (**(code **)(*param_1 + 0x28))(param_1);
  uVar6 = (**(code **)(*param_1 + 0x30))(param_1);
  FUN_02ee8f80(param_1,&local_28,uVar6 & 1);
  puVar14 = (undefined8 *)param_1[2];
  iVar4 = *(int *)(puVar14 + 10);
  *(int *)(puVar14 + 10) = iVar4 + -1;
  if (iVar4 + -1 == 0) {
    (**(code **)*puVar14)(puVar14);
    (*DAT_0442d150)(4,puVar14);
  }
  FUN_02e9c0e4(param_1);
  (**(code **)(*(long *)param_1[0x2d] + 0x18))();
  return;
}


