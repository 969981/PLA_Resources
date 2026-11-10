/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ea24d8; name: FUN_01ea24d8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ea24d8(long param_1)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  char *pcVar13;
  long lVar14;
  int *piVar15;
  int iVar16;
  long *plVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined1 in_q3 [16];
  long *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  float fStack_12c;
  undefined8 local_100 [2];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined2 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined2 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar14 = in_q3._8_8_;
  uVar22 = in_q3._0_8_;
  FUN_00956dac(&local_130,param_1 + 0x1a8);
  (**(code **)(*(long *)CONCAT44(fStack_12c,local_130) + 0x40))();
  plVar17 = (long *)CONCAT44(fStack_12c,local_130);
  if (plVar17 != (long *)0x0) {
    lVar12 = plVar17[0xb];
    piVar15 = (int *)(lVar12 + 0xc);
    do {
      iVar16 = *piVar15;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar3) {
        *piVar15 = iVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar16 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))();
    }
  }
  puVar7 = PTR_DAT_0437a668;
  puVar6 = PTR_DAT_0437a660;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  local_ac = 0;
  local_d0 = 0x7f7fffee;
  local_100[0] = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_c8 = 0xffffffffffffffff;
  local_b8 = 0xffffffff;
  local_c0 = 0xffffff;
  local_b4 = 0xf;
  local_b0 = 0xffff;
  local_90 = 0xffffffff;
  local_98 = 0xffffff;
  local_8c = 0xf;
  local_88 = 0xffff;
  local_84 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_a8 = 0;
  uStack_a0 = 0xffffffffffffffff;
  local_80 = 0;
  uStack_78 = 0;
  lVar12 = *(long *)(param_1 + 0x210);
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc) != 0)) {
    piVar15 = (int *)(lVar12 + 0xc);
    iVar16 = *(int *)(lVar12 + 0xc);
    do {
      plVar17 = *(long **)(lVar12 + 0x10);
      if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
        if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4), iVar9 != 0)) {
          uVar10 = FUN_0087f8f0();
          *(undefined8 *)puVar5 = uVar10;
          __cxa_guard_release(puVar4);
        }
        *(undefined **)puVar6 = puVar5;
        __cxa_guard_release(puVar7);
      }
      while( true ) {
        if (plVar17 == (long *)0x0) goto LAB_01ea25a8;
        if (plVar17 == (long *)puVar6) break;
        plVar17 = (long *)*plVar17;
      }
      iVar9 = *piVar15;
      if (iVar9 == iVar16) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar3) {
          *piVar15 = iVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar12 = *(long *)(lVar12 + 0x18);
          if (lVar12 != 0) {
            plVar17 = (long *)(lVar12 + -0x50);
            uVar10 = FUN_01e481b0(0xd,0xe);
            uVar8 = FUN_01e481d0(uVar10,0x11);
            pcVar13 = *(char **)(param_1 + 0x208);
            if (*pcVar13 == '\0') {
              piVar15 = *(int **)(pcVar13 + 0x10);
              if (piVar15 == (int *)0x0) {
                piVar15 = *(int **)(pcVar13 + 8);
              }
              fVar18 = 0.0;
              if (0x1e < *(ushort *)((long)piVar15 - (long)*piVar15)) {
                uVar1 = ((ushort *)((long)piVar15 - (long)*piVar15))[0xf];
                goto joined_r0x01ea2794;
              }
            }
            else {
              piVar15 = *(int **)(pcVar13 + 0x18);
              fVar18 = 0.0;
              if (0x1a < *(ushort *)((long)piVar15 - (long)*piVar15)) {
                uVar1 = ((ushort *)((long)piVar15 - (long)*piVar15))[0xd];
joined_r0x01ea2794:
                fVar18 = 0.0;
                if ((ulong)uVar1 != 0) {
                  fVar18 = *(float *)((long)piVar15 + (ulong)uVar1);
                }
              }
            }
            fVar19 = (float)uVar22;
            fVar20 = (float)((ulong)uVar22 >> 0x20);
            local_140 = CONCAT44(fVar20 + (float)((ulong)DAT_0388a140 >> 0x20) * fVar18,
                                 fVar19 + (float)DAT_0388a140 * fVar18);
            fVar21 = (float)((ulong)lVar14 >> 0x20);
            uStack_138 = CONCAT44(fVar21 + (float)((ulong)DAT_0388a148 >> 0x20) * fVar18,
                                  (float)lVar14 + (float)DAT_0388a148 * fVar18);
            if (*pcVar13 == '\0') {
              piVar15 = *(int **)(pcVar13 + 0x10);
              if (piVar15 == (int *)0x0) {
                piVar15 = *(int **)(pcVar13 + 8);
                fVar18 = 0.0;
                if (0x1e < *(ushort *)((long)piVar15 - (long)*piVar15)) {
                  uVar1 = ((ushort *)((long)piVar15 - (long)*piVar15))[0xf];
                  goto joined_r0x01ea27c4;
                }
              }
              else {
                fVar18 = 0.0;
                if ((0x1e < *(ushort *)((long)piVar15 - (long)*piVar15)) &&
                   (uVar11 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[0xf], uVar11 != 0))
                {
                  fVar18 = *(float *)((long)piVar15 + uVar11);
                }
              }
            }
            else {
              piVar15 = *(int **)(pcVar13 + 0x18);
              fVar18 = 0.0;
              if (0x1a < *(ushort *)((long)piVar15 - (long)*piVar15)) {
                uVar1 = ((ushort *)((long)piVar15 - (long)*piVar15))[0xd];
joined_r0x01ea27c4:
                fVar18 = 0.0;
                if ((ulong)uVar1 != 0) {
                  fVar18 = *(float *)((long)piVar15 + (ulong)uVar1);
                }
              }
            }
            local_150 = CONCAT44(fVar20 + (float)((ulong)_DAT_03889fd0 >> 0x20) * fVar18,
                                 fVar19 + (float)_DAT_03889fd0 * fVar18);
            uStack_148 = CONCAT44(fVar21 + (float)((ulong)_UNK_03889fd8 >> 0x20) * fVar18,
                                  (float)lVar14 + (float)_UNK_03889fd8 * fVar18);
            uVar11 = FUN_01e434f4(plVar17,&local_140,&local_150,uVar8,&local_130);
            if ((uVar11 & 1) != 0) {
              pcVar13 = *(char **)(param_1 + 0x208);
              if (*pcVar13 == '\0') {
                piVar15 = *(int **)(pcVar13 + 0x10);
                if (piVar15 == (int *)0x0) {
                  piVar15 = *(int **)(pcVar13 + 8);
                }
                fVar18 = 0.0;
                if (0x1e < *(ushort *)((long)piVar15 - (long)*piVar15)) {
                  uVar1 = ((ushort *)((long)piVar15 - (long)*piVar15))[0xf];
                  goto joined_r0x01ea28a0;
                }
              }
              else {
                piVar15 = *(int **)(pcVar13 + 0x18);
                fVar18 = 0.0;
                if (0x1a < *(ushort *)((long)piVar15 - (long)*piVar15)) {
                  uVar1 = ((ushort *)((long)piVar15 - (long)*piVar15))[0xd];
joined_r0x01ea28a0:
                  fVar18 = 0.0;
                  if ((ulong)uVar1 != 0) {
                    fVar18 = *(float *)((long)piVar15 + (ulong)uVar1);
                  }
                }
              }
              FUN_00956dac(&local_158,param_1 + 0x1a8);
              *(undefined1 *)(local_158 + 0x1c) = 1;
              local_158[0x1b] = lVar14;
              local_158[0x1a] = CONCAT44(fStack_12c + fVar18 + 0.05,fVar19);
              if (local_158 != (long *)0x0) {
                lVar14 = local_158[0xb];
                piVar15 = (int *)(lVar14 + 0xc);
                do {
                  iVar16 = *piVar15;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
                  if (bVar3) {
                    *piVar15 = iVar16 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar16 + -1 == 0) {
                  *(undefined8 *)(lVar14 + 0x18) = 0;
                  (**(code **)(*local_158 + 0x20))();
                }
              }
            }
            lVar14 = *(long *)(lVar12 + 8);
            piVar15 = (int *)(lVar14 + 0xc);
            do {
              iVar16 = *piVar15;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
              if (bVar3) {
                *piVar15 = iVar16 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar16 + -1 == 0) {
              *(undefined8 *)(lVar14 + 0x18) = 0;
              (**(code **)(*plVar17 + 0x20))(plVar17);
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar16 = iVar9;
    } while (iVar9 != 0);
  }
LAB_01ea25a8:
  FUN_032c7b9c(local_100);
  return;
}


