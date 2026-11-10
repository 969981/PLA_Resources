/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0303a508; name: FUN_0303a508
 */


void FUN_0303a508(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  uint *puVar17;
  long lVar18;
  uint uVar19;
  uint *puVar20;
  undefined8 uVar21;
  int iVar22;
  undefined8 *puVar23;
  long lVar24;
  
  lVar24 = tpidr_el0;
  if (*(long *)(lVar24 + 0x38d490) == 0) {
    lVar14 = FUN_0333d16c(0,1);
    *(long *)(lVar24 + 0x38d490) = lVar14;
    lVar24 = *(long *)(lVar14 + 0x10);
  }
  else {
    lVar24 = *(long *)(*(long *)(lVar24 + 0x38d490) + 0x10);
  }
  if (lVar24 != 0) {
    puVar16 = *(undefined8 **)(lVar24 + 8);
    uVar9 = (long)puVar16 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= *(ulong *)(lVar24 + 0x10)) &&
       (*(ulong *)(lVar24 + 8) = uVar9, puVar16 != (undefined8 *)0x0)) {
      *puVar16 = "TtPreSolve";
      uVar21 = nn::os::GetSystemTick();
      puVar16[1] = uVar21;
    }
  }
  *(undefined4 *)(param_1 + 0x808) = 0x10;
  uVar21 = *(undefined8 *)(*(long *)(param_1 + 0x4a8) + 0x10);
  if (3 < *(ulong *)(param_1 + 0x7d8)) {
    if (lVar24 != 0) {
      puVar16 = *(undefined8 **)(lVar24 + 8);
      uVar9 = (long)puVar16 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= *(ulong *)(lVar24 + 0x10)) &&
         (*(ulong *)(lVar24 + 8) = uVar9, puVar16 != (undefined8 *)0x0)) {
        *puVar16 = "TtPreSolveSignal";
        uVar7 = nn::os::GetSystemTick();
        puVar16[1] = uVar7;
      }
    }
    FUN_0302d690(param_1 + 0x7d8,param_1);
    if (lVar24 != 0) {
      puVar16 = *(undefined8 **)(lVar24 + 8);
      uVar9 = (long)puVar16 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= *(ulong *)(lVar24 + 0x10)) &&
         (*(ulong *)(lVar24 + 8) = uVar9, puVar16 != (undefined8 *)0x0)) {
        *puVar16 = &DAT_0390f40e;
        uVar7 = nn::os::GetSystemTick();
        puVar16[1] = uVar7;
      }
    }
  }
  plVar10 = *(long **)(param_1 + 0x908);
  if (0 < (int)plVar10[1]) {
    lVar14 = 0;
    do {
      lVar11 = *(long *)(*plVar10 + lVar14 * 8);
      iVar22 = *(int *)(lVar11 + 0x73c) + *(int *)(lVar11 + 0x528);
      if (iVar22 == 0) {
        *(undefined4 *)(lVar11 + 0x73c) = 0;
      }
      else {
        puVar17 = *(uint **)(lVar11 + 0x730);
        if ((puVar17 !=
             *(uint **)(*(long *)(lVar11 + 0x530) + (long)*(int *)(lVar11 + 0x538) * 8 + -8)) &&
           ((uint)*(ushort *)(lVar11 + 0x73a) == (*puVar17 & 0xffff))) {
          puVar17 = *(uint **)(puVar17 + 2);
          *(undefined4 *)(lVar11 + 0x738) = 0;
        }
        *(short *)(lVar11 + 0x73a) = (short)*puVar17 - *(short *)(lVar11 + 0x73a);
        *(uint **)(lVar11 + 0x730) = puVar17;
        lVar18 = *(long *)(lVar11 + 0x720);
        *(int *)(lVar11 + 0x73c) = iVar22;
        puVar16 = *(undefined8 **)(*(long *)(lVar18 + 0x10) + lVar14 * 8);
        if (*(int *)((long)puVar16 + 0xc) == 0) {
          puVar16[1] = *(undefined8 *)(lVar11 + 0x738);
          uVar7 = *(undefined8 *)(lVar11 + 0x730);
          puVar16[2] = *(undefined8 *)(lVar11 + 0x740);
          *puVar16 = uVar7;
        }
        else {
          puVar17 = *(uint **)(*(long *)(lVar11 + 0x530) + (long)*(int *)(lVar11 + 0x538) * 8 + -8);
          puVar23 = *(undefined8 **)(lVar11 + 0x4e0);
          uVar19 = *puVar17;
          if (0x3a < uVar19 >> 0x16) {
            puVar20 = puVar17;
            do {
              iVar22 = *(int *)(puVar23 + 0xb) + -1;
              if (*(int *)(puVar23 + 0xb) < 1) {
                lVar8 = puVar23[1];
                (**(code **)(*(long *)*puVar23 + 0x20))((long *)*puVar23,lVar8,6);
                puVar12 = (undefined8 *)(lVar8 + 0x28);
                *(undefined4 *)(puVar23 + 0xb) = 5;
              }
              else {
                *(int *)(puVar23 + 0xb) = iVar22;
                puVar12 = (undefined8 *)(puVar23[1] + (long)iVar22 * 8);
              }
              puVar17 = (uint *)*puVar12;
              puVar17[4] = 0;
              puVar17[5] = 0;
              puVar17[6] = 0;
              puVar17[7] = 0;
              puVar17[0] = 0;
              puVar17[1] = 0;
              puVar17[2] = 0;
              puVar17[3] = 0;
              puVar17[1] = *(uint *)(lVar11 + 0x538);
              uVar13 = *(uint *)(lVar11 + 0x53c);
              iVar22 = *(int *)(lVar11 + 0x538);
              uVar19 = iVar22 + 1;
              if (iVar22 < (int)(uVar13 & 0x3fffffff)) {
                lVar8 = *(long *)(lVar11 + 0x530);
              }
              else {
                uVar7 = *(undefined8 *)(lVar11 + 0x530);
                if (0x3ffffffe < iVar22) {
                  FUN_032bd0a8(uVar19);
                  uVar13 = *(uint *)(lVar11 + 0x53c);
                }
                uVar13 = (uVar13 & 0x3fffffff) << 1;
                if (0x3ffffffe < uVar13) {
                  uVar13 = 0x3fffffff;
                }
                uVar1 = uVar19;
                if ((int)uVar19 <= (int)uVar13) {
                  uVar1 = uVar13;
                }
                lVar8 = FUN_032bd1d4(PTR_PTR_0434a080,uVar1,8,uVar7,iVar22,(uint *)(lVar11 + 0x53c))
                ;
                iVar22 = *(int *)(lVar11 + 0x538);
                *(long *)(lVar11 + 0x530) = lVar8;
              }
              *(uint **)(lVar8 + (long)iVar22 * 8) = puVar17;
              *(uint *)(lVar11 + 0x538) = uVar19;
              *(uint **)(puVar20 + 2) = puVar17;
              uVar19 = *puVar17;
              puVar20 = puVar17;
            } while (0x3a < uVar19 >> 0x16);
          }
          uVar19 = uVar19 >> 0x10;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar17,0x10);
            if (bVar6) {
              *puVar17 = *puVar17 + 0x200001;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          *(int *)(lVar11 + 0x528) = *(int *)(lVar11 + 0x528) + 1;
          uVar7 = *(undefined8 *)(lVar11 + 0x738);
          uVar2 = *(undefined8 *)(lVar11 + 0x740);
          puVar23 = (undefined8 *)((long)puVar17 + (ulong)uVar19 + 0x20);
          *puVar23 = *(undefined8 *)(lVar11 + 0x730);
          *(undefined8 *)((long)puVar17 + (ulong)uVar19 + 0x28) = uVar7;
          *(undefined8 *)((long)puVar17 + (ulong)uVar19 + 0x30) = uVar2;
          if (*(int *)((long)puVar16 + 0xc) == 0) {
            puVar16[1] = *(undefined8 *)((long)puVar17 + (ulong)uVar19 + 0x28);
            uVar7 = *puVar23;
            puVar16[2] = *(undefined8 *)((long)puVar17 + (ulong)uVar19 + 0x30);
            *puVar16 = uVar7;
          }
          else {
            *(undefined8 *)((long)puVar17 + (ulong)uVar19 + 0x30) = puVar16[2];
            puVar16[2] = puVar23;
          }
          *(undefined8 **)(*(long *)(lVar18 + 0x10) + lVar14 * 8) = puVar23;
        }
      }
      lVar14 = lVar14 + 1;
      puVar15 = *(undefined4 **)
                 (*(long *)(lVar11 + 0x530) + (long)*(int *)(lVar11 + 0x538) * 8 + -8);
      uVar3 = *puVar15;
      uVar4 = *puVar15;
      *(undefined4 **)(lVar11 + 0x730) = puVar15;
      *(short *)(lVar11 + 0x738) = (short)((uint)uVar3 >> 0x10);
      *(short *)(lVar11 + 0x73a) = (short)uVar4;
      *(int *)(lVar11 + 0x73c) = -*(int *)(lVar11 + 0x528);
      *(undefined8 *)(lVar11 + 0x500) = *(undefined8 *)(*(long *)(lVar11 + 8) + 0x118);
      plVar10 = *(long **)(param_1 + 0x908);
    } while (lVar14 < (int)plVar10[1]);
  }
  if (lVar24 != 0) {
    puVar16 = *(undefined8 **)(lVar24 + 8);
    uVar9 = (long)puVar16 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= *(ulong *)(lVar24 + 0x10)) &&
       (*(ulong *)(lVar24 + 8) = uVar9, puVar16 != (undefined8 *)0x0)) {
      *puVar16 = "TtDispatchCommands";
      uVar7 = nn::os::GetSystemTick();
      puVar16[1] = uVar7;
    }
  }
  lVar14 = *(long *)(param_1 + 0x8f8);
  *(undefined8 *)(lVar14 + 0x20) = uVar21;
  *(undefined8 *)(lVar14 + 0x30) = param_2;
  FUN_0301d134(*(undefined8 *)(param_1 + 0x908),param_2,*(undefined8 *)(param_1 + 0x8f8));
  lVar14 = *(long *)(param_1 + 0x8f8);
  *(undefined8 *)(lVar14 + 0x20) = 0;
  *(undefined8 *)(lVar14 + 0x30) = 0;
  if (lVar24 != 0) {
    puVar16 = *(undefined8 **)(lVar24 + 8);
    uVar9 = (long)puVar16 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= *(ulong *)(lVar24 + 0x10)) &&
       (*(ulong *)(lVar24 + 8) = uVar9, puVar16 != (undefined8 *)0x0)) {
      *puVar16 = &DAT_0390f40e;
      uVar21 = nn::os::GetSystemTick();
      puVar16[1] = uVar21;
    }
  }
  if (lVar24 != 0) {
    puVar16 = *(undefined8 **)(lVar24 + 8);
    uVar9 = (long)puVar16 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= *(ulong *)(lVar24 + 0x10)) &&
       (*(ulong *)(lVar24 + 8) = uVar9, puVar16 != (undefined8 *)0x0)) {
      *puVar16 = "EtPreSolve";
      uVar21 = nn::os::GetSystemTick();
      puVar16[1] = uVar21;
    }
  }
  *(undefined4 *)(param_1 + 0x808) = 0x20;
  return;
}


