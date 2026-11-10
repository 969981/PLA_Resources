/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030a8ee0; name: FUN_030a8ee0
 */


void FUN_030a8ee0(long param_1,long param_2)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  uint *puVar20;
  uint *puVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined8 uVar24;
  uint *puVar25;
  long lVar26;
  long *plVar27;
  long lVar28;
  undefined8 *puVar29;
  
  lVar28 = *(long *)(param_2 + 8);
  if (lVar28 == 0) {
    lVar28 = tpidr_el0;
    lVar11 = *(long *)(lVar28 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar28 + 0x38d490) = lVar11;
    }
    lVar28 = *(long *)(lVar11 + 0x10);
  }
  plVar27 = *(long **)(param_1 + 0x28);
  puVar1 = (uint *)(plVar27 + 0x22);
  uVar10 = *(uint *)(plVar27 + 0x22);
  uVar12 = (ulong)uVar10 & 0x1ff;
  DataMemoryBarrier(2,3);
  uVar16 = *puVar1;
  if (uVar16 == uVar10) {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = uVar10 + 0x200 & 0xfffffe00 | puVar1[uVar12 + 1];
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') {
      puVar21 = puVar1 + uVar12 + 1;
      goto LAB_030a8fd8;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    uVar12 = (ulong)(uVar16 & 0x1ff);
    DataMemoryBarrier(2,3);
    uVar10 = *puVar1;
    if (uVar10 == uVar16) {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar8) {
        *puVar1 = uVar16 + 0x200 & 0xfffffe00 | *(uint *)((long)plVar27 + uVar12 * 4 + 0x114);
        cVar7 = ExclusiveMonitorsStatus();
      }
      if (cVar7 == '\0') break;
    }
    else {
      ClearExclusiveLocal();
    }
    uVar16 = uVar10;
  } while( true );
  puVar21 = (uint *)((long)plVar27 + uVar12 * 4 + 0x114);
LAB_030a8fd8:
  *puVar21 = 0x1ff;
  DataMemoryBarrier(2,3);
  puVar21 = *(uint **)(*plVar27 + uVar12 * 8);
  lVar26 = *(long *)(puVar21 + 2);
  lVar23 = *(long *)(lVar26 + 0x500);
  lVar11 = *(long *)(param_1 + 0x30);
  if (lVar28 != 0) {
    puVar29 = *(undefined8 **)(lVar28 + 8);
    uVar12 = *(ulong *)(lVar28 + 0x10);
    uVar18 = (ulong)((long)puVar29 + 0x17) & 0xfffffffffffffff8;
    if (uVar18 <= uVar12) {
      *(ulong *)(lVar28 + 8) = uVar18;
      if (puVar29 == (undefined8 *)0x0) {
        puVar29 = (undefined8 *)&DAT_00000010;
      }
      else {
        *puVar29 = "TtNarrowPhase";
        uVar24 = nn::os::GetSystemTick();
        puVar29[1] = uVar24;
        puVar29 = *(undefined8 **)(lVar28 + 8);
        uVar12 = *(ulong *)(lVar28 + 0x10);
      }
    }
    uVar18 = (ulong)((long)puVar29 + 0x17) & 0xfffffffffffffff8;
    if (uVar18 <= uVar12) {
      *(ulong *)(lVar28 + 8) = uVar18;
      if (puVar29 == (undefined8 *)0x0) {
        puVar29 = (undefined8 *)&DAT_00000010;
      }
      else {
        *puVar29 = "TtGridTask";
        uVar24 = nn::os::GetSystemTick();
        puVar29[1] = uVar24;
        puVar29 = *(undefined8 **)(lVar28 + 8);
        uVar12 = *(ulong *)(lVar28 + 0x10);
      }
    }
    uVar18 = (ulong)((long)puVar29 + 0x1f) & 0xfffffffffffffff8;
    if ((uVar18 <= uVar12) && (*(ulong *)(lVar28 + 8) = uVar18, puVar29 != (undefined8 *)0x0)) {
      *puVar29 = "LtPrepare";
      puVar29[2] = "StAllocateSolverData";
      uVar24 = nn::os::GetSystemTick();
      puVar29[1] = uVar24;
    }
  }
  if (*(long *)(lVar11 + 0x10) == 0) {
    uVar5 = *(undefined4 *)(*(long *)(lVar26 + 0x4b0) + 0x1c);
    uVar6 = *(undefined4 *)(*(long *)(lVar26 + 0x4b0) + 0x20);
    lVar13 = FUN_032cf5b0(0x120);
    FUN_030a98b8(lVar13,puVar21,*(undefined8 *)(puVar21 + 0x138),
                 *(undefined4 *)(*(long *)(param_1 + 0x28) + 8),uVar5,uVar6);
    *(long *)(lVar11 + 0x10) = lVar13;
    *(undefined8 *)(lVar13 + 0x110) = *(undefined8 *)(param_1 + 0x28);
  }
  else {
    FUN_030ab1b8(*(long *)(lVar11 + 0x10),*(undefined8 *)(puVar21 + 0x138),
                 *(undefined4 *)(*(long *)(param_1 + 0x28) + 8));
  }
  uVar24 = *(undefined8 *)(puVar21 + 0x138);
  FUN_032bec88(lVar23 + 0x20,uVar24,lVar23 + 0x540);
  FUN_032bec88(lVar23 + 0x120,uVar24,lVar23 + 0x640);
  uVar24 = *(undefined8 *)(puVar21 + 0x138);
  FUN_032be7c0(lVar23 + 0x540,uVar24);
  FUN_032be7c0(lVar23 + 0x640,uVar24);
  FUN_032be7c0(lVar23 + 0x9a0,*(undefined8 *)(puVar21 + 0x138));
  if (0 < *(int *)(lVar23 + 0x988)) {
    lVar13 = 0;
    lVar19 = 0;
    do {
      puVar29 = (undefined8 *)(*(long *)(lVar23 + 0x980) + lVar13);
      *puVar29 = 0;
      *(undefined4 *)((long)puVar29 + 0xc) = 0;
      puVar29[2] = 0;
      lVar2 = *(long *)(lVar23 + 0x980) + lVar13;
      lVar13 = lVar13 + 0x20;
      *(long *)(*(long *)(lVar23 + 0x990) + lVar19 * 8) = lVar2;
      lVar19 = lVar19 + 1;
    } while (lVar19 < *(int *)(lVar23 + 0x988));
  }
  if (0 < *(int *)(lVar23 + 0x968)) {
    lVar13 = 0;
    lVar19 = 0;
    do {
      puVar29 = (undefined8 *)(*(long *)(lVar23 + 0x960) + lVar13);
      *puVar29 = 0;
      *(undefined4 *)((long)puVar29 + 0xc) = 0;
      puVar29[2] = 0;
      lVar2 = *(long *)(lVar23 + 0x960) + lVar13;
      lVar13 = lVar13 + 0x20;
      *(long *)(*(long *)(lVar23 + 0x970) + lVar19 * 8) = lVar2;
      lVar19 = lVar19 + 1;
    } while (lVar19 < *(int *)(lVar23 + 0x968));
  }
  if (lVar28 != 0) {
    puVar29 = *(undefined8 **)(lVar28 + 8);
    uVar12 = (long)puVar29 + 0x17U & 0xfffffffffffffff8;
    if ((uVar12 <= *(ulong *)(lVar28 + 0x10)) &&
       (*(ulong *)(lVar28 + 8) = uVar12, puVar29 != (undefined8 *)0x0)) {
      *puVar29 = "StInitNarrowPhaseTasks";
      uVar24 = nn::os::GetSystemTick();
      puVar29[1] = uVar24;
    }
  }
  FUN_030bccbc(*(undefined8 *)(lVar11 + 0x668),*(undefined8 *)(param_1 + 0x28),puVar21,
               *(undefined8 *)(lVar11 + 0x10),lVar23);
  FUN_0305e8ec(*(undefined8 *)(lVar11 + 0x678),*(undefined8 *)(param_1 + 0x28),puVar21,
               *(undefined8 *)(lVar11 + 0x10),lVar23);
  if (*(int *)(*(long *)(lVar26 + 0x488) + 0x58) == 0) {
    lVar11 = *(long *)(lVar26 + 0x698);
  }
  else {
    FUN_03004010(*(undefined8 *)(lVar26 + 0x488));
    lVar11 = *(long *)(lVar26 + 0x698);
  }
  if (lVar11 != 0) {
    puVar14 = *(undefined4 **)(*(long *)(puVar21 + 0x14c) + (long)(int)puVar21[0x14e] * 8 + -8);
    uVar5 = *puVar14;
    uVar6 = *puVar14;
    *(undefined4 **)(puVar21 + 0x1cc) = puVar14;
    *(short *)(puVar21 + 0x1ce) = (short)((uint)uVar5 >> 0x10);
    *(short *)((long)puVar21 + 0x73a) = (short)uVar6;
    puVar21[0x1cf] = -puVar21[0x14a];
    FUN_0304c750(*(undefined8 *)(lVar26 + 0x698),puVar21);
    if (puVar21[0x1cf] + puVar21[0x14a] == 0) {
      puVar21[0x1cf] = 0;
    }
    else {
      puVar20 = *(uint **)(puVar21 + 0x1cc);
      if ((puVar20 != *(uint **)(*(long *)(puVar21 + 0x14c) + (long)(int)puVar21[0x14e] * 8 + -8))
         && ((uint)*(ushort *)((long)puVar21 + 0x73a) == (*puVar20 & 0xffff))) {
        puVar20 = *(uint **)(puVar20 + 2);
        puVar21[0x1ce] = 0;
      }
      uVar10 = *puVar20;
      *(uint **)(puVar21 + 0x1cc) = puVar20;
      puVar21[0x1cf] = puVar21[0x1cf] + puVar21[0x14a];
      lVar11 = *(long *)(puVar21 + 0x1c8);
      *(short *)((long)puVar21 + 0x73a) = (short)uVar10 - *(short *)((long)puVar21 + 0x73a);
      puVar29 = (undefined8 *)**(undefined8 **)(lVar11 + 0x10);
      if (*(int *)((long)puVar29 + 0xc) == 0) {
        puVar29[1] = *(undefined8 *)(puVar21 + 0x1ce);
        uVar24 = *(undefined8 *)(puVar21 + 0x1cc);
        puVar29[2] = *(undefined8 *)(puVar21 + 0x1d0);
        *puVar29 = uVar24;
      }
      else {
        puVar20 = *(uint **)(*(long *)(puVar21 + 0x14c) + (long)(int)puVar21[0x14e] * 8 + -8);
        puVar22 = *(undefined8 **)(puVar21 + 0x138);
        uVar10 = *puVar20;
        if (0x3a < uVar10 >> 0x16) {
          puVar25 = puVar20;
          do {
            iVar9 = *(int *)(puVar22 + 0xb) + -1;
            if (*(int *)(puVar22 + 0xb) < 1) {
              lVar23 = puVar22[1];
              (**(code **)(*(long *)*puVar22 + 0x20))((long *)*puVar22,lVar23,6);
              *(undefined4 *)(puVar22 + 0xb) = 5;
              puVar15 = (undefined8 *)(lVar23 + 0x28);
            }
            else {
              *(int *)(puVar22 + 0xb) = iVar9;
              puVar15 = (undefined8 *)(puVar22[1] + (long)iVar9 * 8);
            }
            puVar20 = (uint *)*puVar15;
            puVar20[4] = 0;
            puVar20[5] = 0;
            puVar20[6] = 0;
            puVar20[7] = 0;
            puVar20[0] = 0;
            puVar20[1] = 0;
            puVar20[2] = 0;
            puVar20[3] = 0;
            puVar20[1] = puVar21[0x14e];
            uVar16 = puVar21[0x14e];
            uVar10 = uVar16 + 1;
            uVar17 = puVar21[0x14f];
            if ((int)uVar16 < (int)(uVar17 & 0x3fffffff)) {
              lVar23 = *(long *)(puVar21 + 0x14c);
            }
            else {
              uVar24 = *(undefined8 *)(puVar21 + 0x14c);
              if (0x3ffffffe < (int)uVar16) {
                FUN_032bd0a8(uVar10);
                uVar17 = puVar21[0x14f];
              }
              uVar17 = (uVar17 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar17) {
                uVar17 = 0x3fffffff;
              }
              uVar3 = uVar10;
              if ((int)uVar10 <= (int)uVar17) {
                uVar3 = uVar17;
              }
              lVar23 = FUN_032bd1d4(PTR_PTR_0434a080,uVar3,8,uVar24,uVar16,puVar21 + 0x14f);
              uVar16 = puVar21[0x14e];
              *(long *)(puVar21 + 0x14c) = lVar23;
            }
            *(uint **)(lVar23 + (long)(int)uVar16 * 8) = puVar20;
            puVar21[0x14e] = uVar10;
            *(uint **)(puVar25 + 2) = puVar20;
            uVar10 = *puVar20;
            puVar25 = puVar20;
          } while (0x3a < uVar10 >> 0x16);
        }
        uVar10 = uVar10 >> 0x10;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar20,0x10);
          if (bVar8) {
            *puVar20 = *puVar20 + 0x200001;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        puVar21[0x14a] = puVar21[0x14a] + 1;
        uVar24 = *(undefined8 *)(puVar21 + 0x1ce);
        uVar4 = *(undefined8 *)(puVar21 + 0x1d0);
        puVar22 = (undefined8 *)((long)puVar20 + (ulong)uVar10 + 0x20);
        *puVar22 = *(undefined8 *)(puVar21 + 0x1cc);
        *(undefined8 *)((long)puVar20 + (ulong)uVar10 + 0x28) = uVar24;
        *(undefined8 *)((long)puVar20 + (ulong)uVar10 + 0x30) = uVar4;
        if (*(int *)((long)puVar29 + 0xc) == 0) {
          puVar29[1] = *(undefined8 *)((long)puVar20 + (ulong)uVar10 + 0x28);
          uVar24 = *puVar22;
          puVar29[2] = *(undefined8 *)((long)puVar20 + (ulong)uVar10 + 0x30);
          *puVar29 = uVar24;
        }
        else {
          *(undefined8 *)((long)puVar20 + (ulong)uVar10 + 0x30) = puVar29[2];
          puVar29[2] = puVar22;
        }
        **(long **)(lVar11 + 0x10) = (long)puVar22;
      }
    }
    puVar14 = *(undefined4 **)(*(long *)(puVar21 + 0x14c) + (long)(int)puVar21[0x14e] * 8 + -8);
    uVar5 = *puVar14;
    uVar6 = *puVar14;
    *(undefined4 **)(puVar21 + 0x1cc) = puVar14;
    *(short *)(puVar21 + 0x1ce) = (short)((uint)uVar5 >> 0x10);
    *(short *)((long)puVar21 + 0x73a) = (short)uVar6;
    puVar21[0x1cf] = -puVar21[0x14a];
  }
  if (lVar28 != 0) {
    puVar29 = *(undefined8 **)(lVar28 + 8);
    uVar12 = *(ulong *)(lVar28 + 0x10);
    uVar18 = (ulong)((long)puVar29 + 0x17) & 0xfffffffffffffff8;
    if (uVar18 <= uVar12) {
      *(ulong *)(lVar28 + 8) = uVar18;
      if (puVar29 == (undefined8 *)0x0) {
        puVar29 = (undefined8 *)&DAT_00000010;
      }
      else {
        *puVar29 = &DAT_03922da5;
        uVar24 = nn::os::GetSystemTick();
        puVar29[1] = uVar24;
        puVar29 = *(undefined8 **)(lVar28 + 8);
        uVar12 = *(ulong *)(lVar28 + 0x10);
      }
    }
    uVar18 = (ulong)((long)puVar29 + 0x17) & 0xfffffffffffffff8;
    if (uVar18 <= uVar12) {
      *(ulong *)(lVar28 + 8) = uVar18;
      if (puVar29 == (undefined8 *)0x0) {
        puVar29 = (undefined8 *)&DAT_00000010;
      }
      else {
        *puVar29 = &DAT_0390f40e;
        uVar24 = nn::os::GetSystemTick();
        puVar29[1] = uVar24;
        puVar29 = *(undefined8 **)(lVar28 + 8);
        uVar12 = *(ulong *)(lVar28 + 0x10);
      }
    }
    uVar18 = (ulong)((long)puVar29 + 0x17) & 0xfffffffffffffff8;
    if ((uVar18 <= uVar12) && (*(ulong *)(lVar28 + 8) = uVar18, puVar29 != (undefined8 *)0x0)) {
      *puVar29 = &DAT_0390f40e;
      uVar24 = nn::os::GetSystemTick();
      puVar29[1] = uVar24;
    }
  }
  uVar16 = *puVar21;
  uVar10 = *(uint *)(plVar27 + 0x22);
  DataMemoryBarrier(2,3);
  *(uint *)((long)plVar27 + (long)(int)uVar16 * 4 + 0x114) = uVar10 & 0x1ff;
  uVar17 = *puVar1;
  if (uVar17 == uVar10) {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = uVar10 & 0xfffffe00 | uVar16;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') {
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    DataMemoryBarrier(2,3);
    *(uint *)((long)plVar27 + (long)(int)uVar16 * 4 + 0x114) = uVar17 & 0x1ff;
    uVar10 = *puVar1;
    if (uVar10 == uVar17) {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar8) {
        *puVar1 = uVar17 & 0xfffffe00 | uVar16;
        cVar7 = ExclusiveMonitorsStatus();
      }
      if (cVar7 == '\0') {
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    uVar17 = uVar10;
  } while( true );
}


