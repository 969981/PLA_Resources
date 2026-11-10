/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5aa28; name: FUN_00d5aa28
 */


undefined8
FUN_00d5aa28(undefined1 param_1 [16],float param_2,long param_3,float *param_4,int param_5)

{
  long *plVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  uint uVar20;
  long *plVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_80 [24];
  long *local_68;
  
  iVar10 = 0;
  if (*(int *)(param_3 + 0x6e8) != 2) {
    iVar10 = *(int *)(param_3 + 0x6e8);
  }
  lVar16 = param_3 + 0x180;
  lVar13 = FUN_00d2ee28(lVar16,&DAT_043ab7d8 + (long)iVar10 * 0x28);
  iVar4 = *(int *)(param_3 + 0x6e8);
  iVar5 = *(int *)(*(long *)(lVar13 + 0x8b0) + 0x10);
  lVar13 = param_3 + (long)iVar4 * 0x60;
  iVar10 = 0;
  if (iVar4 != 2) {
    iVar10 = iVar4;
  }
  iVar6 = *(int *)(lVar13 + 0x640);
  lVar14 = FUN_00d2ee28(lVar16,&DAT_043ab7d8 + (long)iVar10 * 0x28);
  lVar19 = **(long **)(lVar14 + 0x838);
  lVar14 = (*(long **)(lVar14 + 0x838))[1];
  if ((lVar19 != lVar14) &&
     (iVar6 = iVar6 * iVar5, *(char *)(lVar19 + 0x20) != '\0' || *(int *)(lVar19 + 0x24) != iVar6))
  {
    lVar12 = lVar19 + 0x30;
    do {
      lVar19 = lVar12;
      if (lVar14 == lVar19) {
        lVar19 = lVar14;
        if (lVar14 == 0) {
          return 0;
        }
        goto LAB_00d5ab04;
      }
      lVar12 = lVar19 + 0x30;
    } while ((*(char *)(lVar19 + 0x20) != '\0') || (*(int *)(lVar19 + 0x24) != iVar6));
  }
  if (lVar19 == 0) {
    return 0;
  }
LAB_00d5ab04:
  if (lVar14 == lVar19) {
    return 0;
  }
  if (*(int *)(lVar19 + 0x28) == -1) {
LAB_00d5ac98:
    uVar15 = 0;
  }
  else {
    plVar21 = *(long **)(param_3 + 0x2c8);
    if (plVar21 != (long *)0x0) {
      plVar1 = plVar21 + 10;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    FUN_00d533f0(auStack_80,0,*(undefined4 *)(param_3 + 0x6e8));
    fVar22 = (float)FUN_0283ad10(plVar21,auStack_80);
    *param_4 = fVar22;
    param_4[1] = param_2;
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    if (plVar21 != (long *)0x0) {
      plVar1 = plVar21 + 10;
      do {
        iVar10 = (int)*plVar1 + -1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *(int *)plVar1 = iVar10;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
    iVar10 = 0;
    if (*(int *)(param_3 + 0x6e8) != 2) {
      iVar10 = *(int *)(param_3 + 0x6e8);
    }
    puVar2 = (uint *)(lVar13 + 0x640);
    lVar13 = FUN_00d2ee28(lVar16,&DAT_043ab7d8 + (long)iVar10 * 0x28);
    if (param_5 == 0) {
      uVar18 = *puVar2;
      iVar10 = 0;
      if (uVar18 != 0) {
        iVar10 = (int)(uint)*(ushort *)(param_3 + 0x6ec) / (int)uVar18;
      }
      *param_4 = *param_4 +
                 *(float *)(lVar13 + 0x768) *
                 (float)(int)((uint)*(ushort *)(param_3 + 0x6ec) - iVar10 * uVar18);
      uVar18 = *puVar2;
      uVar7 = *(ushort *)(param_3 + 0x6ec);
      uVar17 = (uint)uVar7;
      uVar20 = uVar18 * iVar5;
      if (uVar7 < uVar20) {
        fVar22 = *(float *)(lVar13 + 0x76c) + param_4[1];
      }
      else {
        iVar10 = *(int *)(param_3 + (long)iVar4 * 0x60 + 0x644);
        if ((uint)uVar7 < (iVar10 + iVar5) * uVar18) {
          iVar10 = *(int *)(param_3 + 0x6e8);
          if (iVar10 == *(int *)(param_3 + 0x6d8)) {
            iVar4 = 0;
            if (iVar10 != 2) {
              iVar4 = iVar10;
            }
            lVar16 = FUN_00d2ee28(lVar16,&DAT_043ab7d8 + (long)iVar4 * 0x28);
            lVar16 = *(long *)(lVar16 + 0x8b0);
            piVar3 = (int *)(lVar16 + 0x20);
            if (*(int *)(lVar16 + 0x28) != 0) {
              piVar3 = (int *)(lVar16 + 0x24);
            }
            uVar17 = (uint)*(ushort *)(param_3 + 0x6ec);
            if (*(int *)(lVar16 + 0x14) + *piVar3 * *(int *)(lVar16 + 0x10) == uVar17)
            goto LAB_00d5ac98;
            uVar18 = *puVar2;
            uVar20 = uVar18 * iVar5;
          }
          uVar11 = 0;
          if (uVar18 != 0) {
            uVar11 = (uVar17 - uVar20) / uVar18;
          }
          fVar22 = (float)uVar11;
        }
        else {
          fVar22 = (float)iVar10;
        }
        fVar22 = param_4[1] - *(float *)(lVar13 + 0x76c) * fVar22;
      }
    }
    else {
      if (param_5 == 1) {
        fVar22 = param_4[1];
        fVar23 = *param_4 - *(float *)(lVar13 + 0x768);
      }
      else {
        fVar22 = param_4[1];
        fVar23 = *param_4 + *(float *)(lVar13 + 0x768) * (float)(int)*puVar2;
      }
      *param_4 = fVar23;
      fVar22 = *(float *)(lVar13 + 0x76c) + fVar22;
    }
    uVar15 = 1;
    param_4[1] = fVar22;
  }
  return uVar15;
}


