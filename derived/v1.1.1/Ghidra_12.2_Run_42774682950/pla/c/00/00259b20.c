/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00259b20; name: FUN_00259b20
 */


/* WARNING: Removing unreachable block (ram,0x00259cb8) */
/* WARNING: Removing unreachable block (ram,0x00259cc4) */

void FUN_00259b20(long param_1,long param_2,long param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  byte bVar10;
  long lVar11;
  ulong uVar12;
  float fVar13;
  
  cVar5 = *(char *)(param_2 + 0x1d);
  if (cVar5 == '\x04') {
    plVar6 = *(long **)(*(long *)(param_1 + 0x10) + 0x18);
    uVar7 = (**(code **)(*plVar6 + 0x78))(plVar6,*(undefined8 *)(param_2 + 0x10),1);
    lVar11 = FUN_002424d0(uVar7,0x13);
    if ((lVar11 == 0) || (*(long *)(lVar11 + 8) == 0)) {
      lVar11 = FUN_002424d0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18),0x13);
    }
    else {
      lVar11 = FUN_002424d0(uVar7,0x13);
    }
    if ((((lVar11 != 0) && (*(long *)(lVar11 + 8) != 0)) &&
        (**(int **)(param_2 + 0x28) == 0x4d535046)) && (0 < (*(int **)(param_2 + 0x28))[1])) {
                    /* WARNING: Could not recover jumptable at 0x00259ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_00259cec + (ulong)DAT_039cff10 * 4))();
      return;
    }
  }
  else if (cVar5 == '\x01') {
    plVar6 = *(long **)(*(long *)(param_1 + 0x10) + 0x18);
    lVar11 = (**(code **)(*plVar6 + 0x88))(plVar6,*(undefined8 *)(param_2 + 0x10),1);
    piVar9 = *(int **)(param_2 + 0x28);
    if (*piVar9 == 0x53544c46) {
      uVar3 = piVar9[1];
      if (((0 < (int)uVar3) && (*(byte *)(param_2 + 0x1c) < (*(byte *)(lVar11 + 0x14) & 3))) &&
         (*(undefined4 *)
           (*(long *)(lVar11 + 0x18) + ((ulong)(uint)(*(int *)(lVar11 + 0x10) << 4) & 0x30) +
            (ulong)*(byte *)(param_2 + 0x1c) * 0x14 + (ulong)**(byte **)(piVar9 + 2) * 4) =
               **(undefined4 **)(*(long *)(param_3 + 0x18) + 8), uVar3 != 1)) {
        uVar12 = 1;
        do {
          pbVar1 = (byte *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + uVar12);
          lVar8 = uVar12 * 4;
          uVar12 = uVar12 + 1;
          *(undefined4 *)
           (*(long *)(lVar11 + 0x18) + ((ulong)(uint)(*(int *)(lVar11 + 0x10) << 4) & 0x30) +
            (ulong)*(byte *)(param_2 + 0x1c) * 0x14 + (ulong)*pbVar1 * 4) =
               *(undefined4 *)(*(long *)(*(long *)(param_3 + 0x18) + 8) + lVar8);
        } while (uVar3 != uVar12);
      }
    }
    else if (*piVar9 == 0x434d4c46) {
      FUN_002599c8(lVar11,lVar11,param_2,param_3,0);
      return;
    }
  }
  else if (cVar5 == '\0') {
    plVar6 = *(long **)(*(long *)(param_1 + 0x10) + 0x18);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x78))(plVar6,*(undefined8 *)(param_2 + 0x10),1);
    piVar9 = *(int **)(param_2 + 0x28);
    iVar2 = *piVar9;
    if (iVar2 < 0x49564c46) {
      if (iVar2 == 0x41504c46) {
        uVar3 = piVar9[1];
        if (0 < (int)uVar3) {
          *(undefined4 *)((long)plVar6 + (ulong)**(byte **)(piVar9 + 2) * 4 + 0x30) =
               **(undefined4 **)(*(long *)(param_3 + 0x18) + 8);
          *(byte *)(plVar6 + 0xb) = *(byte *)(plVar6 + 0xb) | 0x10;
          if (uVar3 != 1) {
            uVar12 = 1;
            do {
              pbVar1 = (byte *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + uVar12);
              lVar11 = uVar12 * 4;
              uVar12 = uVar12 + 1;
              *(undefined4 *)((long)plVar6 + (ulong)*pbVar1 * 4 + 0x30) =
                   *(undefined4 *)(*(long *)(*(long *)(param_3 + 0x18) + 8) + lVar11);
              *(byte *)(plVar6 + 0xb) = *(byte *)(plVar6 + 0xb) | 0x10;
            } while (uVar3 != uVar12);
          }
        }
      }
      else if (iVar2 == 0x43434c46) {
        uVar3 = piVar9[1];
        if ((0 < (int)uVar3) &&
           (FUN_0024f234(**(undefined4 **)(*(long *)(param_3 + 0x18) + 8),plVar6,
                         **(undefined1 **)(piVar9 + 2)), uVar3 != 1)) {
          uVar12 = 1;
          do {
            FUN_0024f234(*(undefined4 *)(*(long *)(*(long *)(param_3 + 0x18) + 8) + uVar12 * 4),
                         plVar6,*(undefined1 *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + uVar12));
            uVar12 = uVar12 + 1;
          } while (uVar3 != uVar12);
        }
      }
      else if ((iVar2 == 0x43564c46) && (uVar3 = piVar9[1], 0 < (int)uVar3)) {
        lVar11 = 0;
        while( true ) {
          fVar13 = *(float *)(*(long *)(*(long *)(param_3 + 0x18) + 8) + lVar11 * 4) + 0.5;
          if (fVar13 <= 0.0) {
            fVar13 = 0.0;
          }
          if (255.0 < fVar13) {
            fVar13 = 255.0;
          }
          (**(code **)(*plVar6 + 0x38))
                    (plVar6,*(undefined1 *)(*(long *)(piVar9 + 2) + lVar11),(int)fVar13);
          if ((ulong)uVar3 - 1 == lVar11) break;
          piVar9 = *(int **)(param_2 + 0x28);
          lVar11 = lVar11 + 1;
        }
      }
    }
    else if (iVar2 == 0x49564c46) {
      uVar3 = piVar9[1];
      if (0 < (int)uVar3) {
        bVar10 = *(byte *)(plVar6 + 0xb);
        uVar12 = 0;
        do {
          lVar11 = uVar12 * 4;
          uVar12 = uVar12 + 1;
          bVar10 = bVar10 & 0xfe |
                   *(float *)(*(long *)(*(long *)(param_3 + 0x18) + 8) + lVar11) != 0.0;
          *(byte *)(plVar6 + 0xb) = bVar10;
        } while (uVar3 != uVar12);
      }
    }
    else if (iVar2 == 0x53504c46) {
      uVar3 = piVar9[1];
      if (0 < (int)uVar3) {
        lVar11 = 0;
        while( true ) {
          bVar10 = *(byte *)(*(long *)(piVar9 + 2) + lVar11);
          uVar4 = *(undefined4 *)(*(long *)(*(long *)(param_3 + 0x18) + 8) + lVar11 * 4);
          lVar8 = FUN_00242728(plVar6,6);
          if (lVar8 != 0) {
            *(undefined4 *)(lVar8 + (ulong)bVar10 * 4 + 0x1c) = uVar4;
          }
          if ((ulong)uVar3 - 1 == lVar11) break;
          piVar9 = *(int **)(param_2 + 0x28);
          lVar11 = lVar11 + 1;
        }
      }
    }
    else if ((iVar2 == 0x544d4c46) && (uVar3 = piVar9[1], 0 < (int)uVar3)) {
      lVar11 = 0;
      while( true ) {
        bVar10 = *(byte *)(*(long *)(piVar9 + 2) + lVar11);
        uVar4 = *(undefined4 *)(*(long *)(*(long *)(param_3 + 0x18) + 8) + lVar11 * 4);
        lVar8 = FUN_00242728(plVar6,3);
        if (lVar8 != 0) {
          *(undefined4 *)(lVar8 + (ulong)bVar10 * 4 + 0x18) = uVar4;
        }
        if ((ulong)uVar3 - 1 == lVar11) break;
        piVar9 = *(int **)(param_2 + 0x28);
        lVar11 = lVar11 + 1;
      }
    }
  }
  return;
}


