/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030cf620; name: FUN_030cf620
 */


void FUN_030cf620(long param_1,undefined8 param_2,long *param_3,uint param_4,long *param_5,
                 long *param_6,undefined8 param_7,int param_8,int *param_9)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  uint *puVar13;
  long lVar14;
  uint *puVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined2 uVar19;
  uint uVar20;
  undefined2 local_54;
  undefined1 local_52;
  
  do {
    iVar7 = *param_9;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(param_9,0x10);
    if (bVar6) {
      *param_9 = iVar7 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar7 < param_8) {
    do {
      lVar14 = (long)iVar7;
      puVar9 = *(undefined4 **)
                (*(long *)(param_1 + 0x530) + (long)*(int *)(param_1 + 0x538) * 8 + -8);
      lVar17 = *param_3;
      uVar3 = *puVar9;
      uVar4 = *puVar9;
      *(undefined4 **)(param_1 + 0x730) = puVar9;
      lVar17 = lVar17 + lVar14 * 0x20;
      *(short *)(param_1 + 0x738) = (short)((uint)uVar3 >> 0x10);
      *(short *)(param_1 + 0x73a) = (short)uVar4;
      *(int *)(param_1 + 0x73c) = -*(int *)(param_1 + 0x528);
      if (*(int *)(lVar17 + 0xc) == 0) {
LAB_030cf6c0:
        *(undefined4 *)(param_1 + 0x73c) = 0;
      }
      else {
        lVar12 = *(long *)(*(long *)(param_1 + 8) + 0x500);
        puVar15 = (uint *)param_6[2];
        uVar19 = (undefined2)param_6[3];
        uVar8 = *(uint *)((long)param_6 + 0x1c);
        iVar7 = *(int *)(*param_6 + 8);
        *(undefined4 *)(param_6 + 5) = 0;
        FUN_0306bfb8(param_1,param_2,param_4 & 1,lVar12 + 0x9a0,lVar17,param_7);
        uVar20 = *(uint *)((long)param_6 + 0x1c);
        iVar7 = (*(int *)(*param_6 + 8) - (iVar7 + uVar8)) + uVar20;
        if (iVar7 != 0) {
          puVar13 = (uint *)param_6[2];
          if (puVar15 != puVar13) {
            if ((uVar8 & 0xffff) == (*puVar15 & 0xffff)) {
              puVar15 = *(uint **)(puVar15 + 2);
              uVar19 = 0;
              uVar8 = 0;
            }
            if (puVar15 == puVar13) {
              puVar15 = puVar13;
            }
            else {
              uVar20 = *puVar15;
            }
          }
          lVar17 = param_6[5];
          if ((int)param_6[3] < 0xec1) {
            puVar16 = (undefined8 *)((long)puVar13 + (long)(int)param_6[3] + 0x20);
          }
          else {
            puVar16 = (undefined8 *)FUN_032bf82c(param_6);
          }
          *puVar16 = puVar15;
          *(undefined2 *)(puVar16 + 1) = uVar19;
          *(short *)((long)puVar16 + 10) = (short)uVar20 - (short)uVar8;
          *(int *)((long)puVar16 + 0xc) = iVar7;
          *(undefined1 *)(puVar16 + 3) = 0;
          *(undefined2 *)((long)puVar16 + 0x19) = local_54;
          *(undefined1 *)((long)puVar16 + 0x1b) = local_52;
          *(int *)((long)puVar16 + 0x1c) = (int)lVar17;
          puVar16[2] = 0;
          *(int *)(param_6 + 3) = (int)param_6[3] + 0x20;
          *(int *)((long)param_6 + 0x1c) = *(int *)((long)param_6 + 0x1c) + 1;
          puVar18 = (undefined8 *)(*param_5 + lVar14 * 0x20);
          if (*(int *)((long)puVar18 + 0xc) == 0) {
            uVar10 = puVar16[3];
            puVar18[1] = puVar16[1];
            puVar18[3] = uVar10;
            uVar10 = *puVar16;
            puVar18[2] = puVar16[2];
            *puVar18 = uVar10;
          }
          else {
            lVar17 = lVar14 * 8;
            *(int *)((long)puVar16 + 0x1c) =
                 *(int *)((long)puVar16 + 0x1c) + *(int *)(*(long *)(param_5[2] + lVar17) + 0x1c);
            *(undefined8 **)(*(long *)(param_5[2] + lVar17) + 0x10) = puVar16;
            *(undefined8 **)(param_5[2] + lVar17) = puVar16;
          }
        }
        iVar7 = *(int *)(param_1 + 0x73c) + *(int *)(param_1 + 0x528);
        if (iVar7 == 0) goto LAB_030cf6c0;
        puVar15 = *(uint **)(param_1 + 0x730);
        if ((puVar15 !=
             *(uint **)(*(long *)(param_1 + 0x530) + (long)*(int *)(param_1 + 0x538) * 8 + -8)) &&
           ((uint)*(ushort *)(param_1 + 0x73a) == (*puVar15 & 0xffff))) {
          puVar15 = *(uint **)(puVar15 + 2);
          *(undefined4 *)(param_1 + 0x738) = 0;
        }
        uVar8 = *puVar15;
        *(uint **)(param_1 + 0x730) = puVar15;
        *(int *)(param_1 + 0x73c) = iVar7;
        *(short *)(param_1 + 0x73a) = (short)uVar8 - *(short *)(param_1 + 0x73a);
        lVar17 = *(long *)(param_1 + 0x720);
        puVar16 = *(undefined8 **)(*(long *)(lVar17 + 0x10) + lVar14 * 8);
        if (*(int *)((long)puVar16 + 0xc) == 0) {
          puVar16[1] = *(undefined8 *)(param_1 + 0x738);
          uVar10 = *(undefined8 *)(param_1 + 0x730);
          puVar16[2] = *(undefined8 *)(param_1 + 0x740);
          *puVar16 = uVar10;
        }
        else {
          puVar15 = *(uint **)(*(long *)(param_1 + 0x530) + (long)*(int *)(param_1 + 0x538) * 8 + -8
                              );
          puVar18 = *(undefined8 **)(param_1 + 0x4e0);
          uVar8 = *puVar15;
          if (0x3a < uVar8 >> 0x16) {
            puVar13 = puVar15;
            do {
              iVar7 = *(int *)(puVar18 + 0xb) + -1;
              if (*(int *)(puVar18 + 0xb) < 1) {
                lVar12 = puVar18[1];
                (**(code **)(*(long *)*puVar18 + 0x20))((long *)*puVar18,lVar12,6);
                puVar11 = (undefined8 *)(lVar12 + 0x28);
                *(undefined4 *)(puVar18 + 0xb) = 5;
              }
              else {
                *(int *)(puVar18 + 0xb) = iVar7;
                puVar11 = (undefined8 *)(puVar18[1] + (long)iVar7 * 8);
              }
              puVar15 = (uint *)*puVar11;
              puVar15[4] = 0;
              puVar15[5] = 0;
              puVar15[6] = 0;
              puVar15[7] = 0;
              puVar15[0] = 0;
              puVar15[1] = 0;
              puVar15[2] = 0;
              puVar15[3] = 0;
              puVar15[1] = *(uint *)(param_1 + 0x538);
              uVar20 = *(uint *)(param_1 + 0x53c);
              iVar7 = *(int *)(param_1 + 0x538);
              uVar8 = iVar7 + 1;
              if (iVar7 < (int)(uVar20 & 0x3fffffff)) {
                lVar12 = *(long *)(param_1 + 0x530);
              }
              else {
                uVar10 = *(undefined8 *)(param_1 + 0x530);
                if (0x3ffffffe < iVar7) {
                  FUN_032bd0a8(iVar7,uVar8);
                  uVar20 = *(uint *)(param_1 + 0x53c);
                }
                uVar20 = (uVar20 & 0x3fffffff) << 1;
                if (0x3ffffffe < uVar20) {
                  uVar20 = 0x3fffffff;
                }
                uVar1 = uVar8;
                if ((int)uVar8 <= (int)uVar20) {
                  uVar1 = uVar20;
                }
                lVar12 = FUN_032bd1d4(PTR_PTR_0434a080,uVar1,8,uVar10,iVar7,
                                      (uint *)(param_1 + 0x53c));
                *(long *)(param_1 + 0x530) = lVar12;
                iVar7 = *(int *)(param_1 + 0x538);
              }
              *(uint **)(lVar12 + (long)iVar7 * 8) = puVar15;
              *(uint *)(param_1 + 0x538) = uVar8;
              *(uint **)(puVar13 + 2) = puVar15;
              uVar8 = *puVar15;
              puVar13 = puVar15;
            } while (0x3a < uVar8 >> 0x16);
          }
          uVar8 = uVar8 >> 0x10;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar15,0x10);
            if (bVar6) {
              *puVar15 = *puVar15 + 0x200001;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          *(int *)(param_1 + 0x528) = *(int *)(param_1 + 0x528) + 1;
          uVar10 = *(undefined8 *)(param_1 + 0x738);
          uVar2 = *(undefined8 *)(param_1 + 0x740);
          puVar18 = (undefined8 *)((long)puVar15 + (ulong)uVar8 + 0x20);
          *puVar18 = *(undefined8 *)(param_1 + 0x730);
          *(undefined8 *)((long)puVar15 + (ulong)uVar8 + 0x28) = uVar10;
          *(undefined8 *)((long)puVar15 + (ulong)uVar8 + 0x30) = uVar2;
          if (*(int *)((long)puVar16 + 0xc) == 0) {
            puVar16[1] = *(undefined8 *)((long)puVar15 + (ulong)uVar8 + 0x28);
            uVar10 = *puVar18;
            puVar16[2] = *(undefined8 *)((long)puVar15 + (ulong)uVar8 + 0x30);
            *puVar16 = uVar10;
          }
          else {
            *(undefined8 *)((long)puVar15 + (ulong)uVar8 + 0x30) = puVar16[2];
            puVar16[2] = puVar18;
          }
          *(undefined8 **)(*(long *)(lVar17 + 0x10) + lVar14 * 8) = puVar18;
        }
      }
      puVar9 = *(undefined4 **)
                (*(long *)(param_1 + 0x530) + (long)*(int *)(param_1 + 0x538) * 8 + -8);
      uVar3 = *puVar9;
      uVar4 = *puVar9;
      *(undefined4 **)(param_1 + 0x730) = puVar9;
      *(short *)(param_1 + 0x738) = (short)((uint)uVar3 >> 0x10);
      *(short *)(param_1 + 0x73a) = (short)uVar4;
      *(int *)(param_1 + 0x73c) = -*(int *)(param_1 + 0x528);
      do {
        iVar7 = *param_9;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_9,0x10);
        if (bVar6) {
          *param_9 = iVar7 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    } while (iVar7 < param_8);
  }
  return;
}


