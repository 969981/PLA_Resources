/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03030ef8; name: FUN_03030ef8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03030ef8(long param_1,ulong param_2,undefined1 param_3)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int *piVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  uint *puVar18;
  uint *puVar19;
  int *piVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined4 local_7c;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_68;
  undefined4 local_64;
  
  auVar22._8_8_ = _UNK_0388a1f8;
  auVar22._0_8_ = _DAT_0388a1f0;
  auVar23._8_4_ = (int)_UNK_0388a388;
  auVar23._0_8_ = _DAT_0388a380;
  auVar23._12_4_ = (int)((ulong)_UNK_0388a388 >> 0x20);
  auVar23 = a64_TBL(ZEXT816(0),auVar23,auVar22);
  uVar7 = (uint)param_2;
  param_2 = param_2 & 0xffffff;
  puVar13 = (undefined8 *)(*(long *)(param_1 + 0x80) + param_2 * 0x18);
  lVar8 = *(long *)(param_1 + 0x38);
  puVar13[2] = 0x7f7fffee7f7fffee;
  puVar13[1] = CONCAT44(auVar23._12_4_,0xff7fffee);
  *puVar13 = 0xff7fffeeff7fffee;
  lVar17 = lVar8 + param_2 * 0xc0;
  uVar15 = *(uint *)(lVar17 + 0x54);
  *(ushort *)(lVar17 + 0x58) = *(ushort *)(lVar17 + 0x58) | 1;
  if ((uVar15 & 9) == 0) {
    lVar10 = tpidr_el0;
    uVar15 = uVar7;
    local_68 = uVar7;
    do {
      puVar13 = (undefined8 *)(*(long *)(param_1 + 0x698) + 0x318);
      lVar16 = *(long *)(param_1 + 0x38);
      piVar20 = *(int **)(*(long *)(param_1 + 0x698) + 0x318);
      piVar6 = piVar20 + 1;
      do {
        iVar12 = *piVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar4) {
          *piVar6 = iVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      while (0xff < iVar12) {
        lVar11 = *(long *)(lVar10 + 0x38d490);
        if (lVar11 == 0) {
          lVar11 = FUN_0333d16c(0,1);
          *(long *)(lVar10 + 0x38d490) = lVar11;
        }
        plVar5 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
        piVar6 = (int *)(**(code **)(*plVar5 + 0x10))(plVar5,0x410,0);
        lVar11 = 0;
        do {
          lVar1 = lVar11 + 0x20;
          *(undefined8 *)((long)piVar6 + lVar11 + 0x10) = 0xffffff00ffffff;
          *(undefined8 *)((long)piVar6 + lVar11 + 0x18) = 0xffffff00ffffff;
          *(undefined8 *)((long)piVar6 + lVar11 + 0x20) = 0xffffff00ffffff;
          *(undefined8 *)((long)piVar6 + lVar11 + 0x28) = 0xffffff00ffffff;
          lVar11 = lVar1;
        } while (lVar1 != 0x400);
        if (piVar20 == (int *)0x0) {
          iVar12 = 0;
        }
        else {
          iVar12 = *piVar20 + 1;
        }
        *piVar6 = iVar12;
        piVar6[1] = 0;
        piVar6[2] = 0;
        piVar6[3] = 0;
        do {
          if ((int *)*puVar13 != piVar20) {
            ClearExclusiveLocal();
            lVar11 = *(long *)(lVar10 + 0x38d490);
            if (lVar11 == 0) {
              lVar11 = FUN_0333d16c(0,1);
              *(long *)(lVar10 + 0x38d490) = lVar11;
            }
            plVar5 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
            (**(code **)(*plVar5 + 0x18))(plVar5,piVar6,0x410);
            goto LAB_030313c0;
          }
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar13,0x10);
          if (bVar4) {
            *puVar13 = piVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (piVar20 != (int *)0x0) {
          *(int **)(piVar20 + 2) = piVar6;
        }
LAB_030313c0:
        piVar20 = (int *)*puVar13;
        piVar6 = piVar20 + 1;
        do {
          iVar12 = *piVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar4) {
            *piVar6 = iVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      piVar20[(long)iVar12 + 4] = uVar15;
      uVar15 = *(uint *)(lVar16 + (ulong)(uVar15 & 0xffffff) * 0xc0 + 0x84);
    } while (uVar15 != uVar7);
    uVar15 = *(uint *)(lVar17 + 0x54);
    uVar7 = local_68;
  }
  local_68 = uVar7;
  if ((uVar15 & 1) != 0) {
    puVar13 = (undefined8 *)(param_1 + 0x138);
    piVar20 = *(int **)(param_1 + 0x138);
    piVar6 = piVar20 + 1;
    do {
      iVar12 = *piVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar4) {
        *piVar6 = iVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (0xff < iVar12) {
      lVar17 = tpidr_el0;
      do {
        lVar10 = *(long *)(lVar17 + 0x38d490);
        if (lVar10 == 0) {
          lVar10 = FUN_0333d16c(0,1);
          *(long *)(lVar17 + 0x38d490) = lVar10;
        }
        plVar5 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
        piVar6 = (int *)(**(code **)(*plVar5 + 0x10))(plVar5,0x410,0);
        lVar10 = 0;
        do {
          lVar16 = lVar10 + 0x20;
          *(undefined8 *)((long)piVar6 + lVar10 + 0x10) = 0xffffff00ffffff;
          *(undefined8 *)((long)piVar6 + lVar10 + 0x18) = 0xffffff00ffffff;
          *(undefined8 *)((long)piVar6 + lVar10 + 0x20) = 0xffffff00ffffff;
          *(undefined8 *)((long)piVar6 + lVar10 + 0x28) = 0xffffff00ffffff;
          lVar10 = lVar16;
        } while (lVar16 != 0x400);
        if (piVar20 == (int *)0x0) {
          iVar12 = 0;
        }
        else {
          iVar12 = *piVar20 + 1;
        }
        *piVar6 = iVar12;
        piVar6[1] = 0;
        piVar6[2] = 0;
        piVar6[3] = 0;
        do {
          if ((int *)*puVar13 != piVar20) {
            ClearExclusiveLocal();
            lVar10 = *(long *)(lVar17 + 0x38d490);
            if (lVar10 == 0) {
              lVar10 = FUN_0333d16c(0,1);
              *(long *)(lVar17 + 0x38d490) = lVar10;
            }
            plVar5 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
            (**(code **)(*plVar5 + 0x18))(plVar5,piVar6,0x410);
            goto LAB_030312a0;
          }
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar13,0x10);
          if (bVar4) {
            *puVar13 = piVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (piVar20 != (int *)0x0) {
          *(int **)(piVar20 + 2) = piVar6;
        }
LAB_030312a0:
        piVar20 = (int *)*puVar13;
        piVar6 = piVar20 + 1;
        do {
          iVar12 = *piVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar4) {
            *piVar6 = iVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      } while (0xff < iVar12);
    }
    piVar20[(long)iVar12 + 4] = uVar7;
  }
  if ((*(byte *)(lVar8 + param_2 * 0xc0 + 0x88) >> 2 & 1) != 0) {
    (**(code **)(**(long **)(param_1 + 0x4c0) + 0x40))(*(long **)(param_1 + 0x4c0),&local_68,1,4);
  }
  if (*(int *)(param_1 + 0x808) == 8) {
    lVar8 = *(long *)**(undefined8 **)(param_1 + 0x908);
    if ((int)((ulong)local_68 & 0xffffff) == 0xffffff) {
      uVar21 = 0xffffffffffffffff;
    }
    else {
      uVar21 = *(undefined8 *)
                (*(long *)(param_1 + 0x38) + ((ulong)local_68 & 0xffffff) * 0xc0 + 0xb0);
    }
    local_7c = CONCAT22(local_7c._2_2_,0x1c);
    local_70 = CONCAT31(local_70._1_3_,param_3);
    puVar18 = *(uint **)(*(long *)(lVar8 + 0x530) + (long)*(int *)(lVar8 + 0x538) * 8 + -8);
    puVar13 = *(undefined8 **)(lVar8 + 0x4e0);
    uVar15 = *puVar18;
    if (0x3a < uVar15 >> 0x16) {
      puVar19 = puVar18;
      do {
        iVar12 = *(int *)(puVar13 + 0xb) + -1;
        if (*(int *)(puVar13 + 0xb) < 1) {
          lVar17 = puVar13[1];
          (**(code **)(*(long *)*puVar13 + 0x20))((long *)*puVar13,lVar17,6);
          puVar9 = (undefined8 *)(lVar17 + 0x28);
          *(undefined4 *)(puVar13 + 0xb) = 5;
        }
        else {
          *(int *)(puVar13 + 0xb) = iVar12;
          puVar9 = (undefined8 *)(puVar13[1] + (long)iVar12 * 8);
        }
        puVar18 = (uint *)*puVar9;
        puVar18[4] = 0;
        puVar18[5] = 0;
        puVar18[6] = 0;
        puVar18[7] = 0;
        puVar18[0] = 0;
        puVar18[1] = 0;
        puVar18[2] = 0;
        puVar18[3] = 0;
        puVar18[1] = *(uint *)(lVar8 + 0x538);
        uVar7 = *(uint *)(lVar8 + 0x53c);
        iVar12 = *(int *)(lVar8 + 0x538);
        uVar15 = iVar12 + 1;
        if (iVar12 < (int)(uVar7 & 0x3fffffff)) {
          lVar17 = *(long *)(lVar8 + 0x530);
        }
        else {
          uVar14 = *(undefined8 *)(lVar8 + 0x530);
          if (0x3ffffffe < iVar12) {
            FUN_032bd0a8(uVar15);
            uVar7 = *(uint *)(lVar8 + 0x53c);
          }
          uVar7 = (uVar7 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar7) {
            uVar7 = 0x3fffffff;
          }
          uVar2 = uVar15;
          if ((int)uVar15 <= (int)uVar7) {
            uVar2 = uVar7;
          }
          lVar17 = FUN_032bd1d4(PTR_PTR_0434a080,uVar2,8,uVar14,iVar12,(uint *)(lVar8 + 0x53c));
          iVar12 = *(int *)(lVar8 + 0x538);
          *(long *)(lVar8 + 0x530) = lVar17;
        }
        *(uint **)(lVar17 + (long)iVar12 * 8) = puVar18;
        *(uint *)(lVar8 + 0x538) = uVar15;
        *(uint **)(puVar19 + 2) = puVar18;
        uVar15 = *puVar18;
        puVar19 = puVar18;
      } while (0x3a < uVar15 >> 0x16);
    }
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar18,0x10);
      if (bVar4) {
        *puVar18 = *puVar18 + 0x200001;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(int *)(lVar8 + 0x528) = *(int *)(lVar8 + 0x528) + 1;
    uVar15 = uVar15 >> 0x10;
    *(undefined4 *)((long)puVar18 + (ulong)uVar15 + 0x20) = 0x2000020;
    *(undefined4 *)((long)puVar18 + (ulong)uVar15 + 0x24) = local_7c;
    *(int *)((long)puVar18 + (ulong)uVar15 + 0x28) = (int)uVar21;
    *(int *)((long)puVar18 + (ulong)uVar15 + 0x2c) = (int)((ulong)uVar21 >> 0x20);
    *(undefined4 *)((long)puVar18 + (ulong)uVar15 + 0x30) = local_70;
    *(undefined4 *)((long)puVar18 + (ulong)uVar15 + 0x34) = local_6c;
    *(uint *)((long)puVar18 + (ulong)uVar15 + 0x38) = local_68;
    *(undefined4 *)((long)puVar18 + (ulong)uVar15 + 0x3c) = local_64;
  }
  return;
}


