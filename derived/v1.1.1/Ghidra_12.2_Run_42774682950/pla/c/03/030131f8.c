/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030131f8; name: FUN_030131f8
 */


ulong FUN_030131f8(long param_1,ulong *param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  char cVar10;
  undefined *puVar11;
  bool bVar12;
  short sVar13;
  int iVar14;
  ulong uVar15;
  char *pcVar16;
  size_t sVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 *puVar20;
  uint uVar21;
  long lVar22;
  uint uVar23;
  ulong *puVar24;
  MutexType *pMVar25;
  ulong *puVar26;
  long *plVar27;
  long lVar28;
  ulong uVar29;
  ulong *puVar30;
  ulong local_b0;
  ulong local_a8;
  undefined8 local_a0;
  float local_88;
  char local_80;
  ushort uStack_7c;
  
  nn::os::LockMutex(*(MutexType **)(param_1 + 0x40));
  puVar11 = PTR_PTR_0434a080;
  local_b0 = 0;
  local_a8 = 0;
  pcVar16 = (char *)(*param_2 & 0xfffffffffffffffe);
  if (pcVar16 == (char *)0x0) {
    uVar15 = param_2[1];
  }
  else {
    sVar17 = strlen(pcVar16);
    uVar21 = (int)sVar17 + 1;
    puVar20 = (undefined8 *)
              (**(code **)(*(long *)puVar11 + 0x10))
                        (puVar11,(long)((sVar17 << 0x20) + 0x1100000000) >> 0x20,0);
    *puVar20 = puVar11;
    *(uint *)(puVar20 + 1) = uVar21;
    memcpy(puVar20 + 2,pcVar16,(ulong)uVar21);
    local_b0 = (ulong)(puVar20 + 2) | 1;
    uVar15 = param_2[1];
  }
  if (uVar15 != 0) {
    FUN_032d645c();
    local_a8 = param_2[1];
  }
  uVar15 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[3];
  local_88 = (float)uVar6;
  uVar4 = param_2[6];
  uVar8 = param_2[7];
  uVar5 = param_2[8];
  uVar9 = param_2[9];
  bVar12 = (uVar7 >> 0x30 & 0x7fff) != 0;
  uVar21 = (uint)bVar12 << 0x10;
  if ((uVar7 & 0xff) != 0) {
    uVar21 = (uint)bVar12 << 0x10 | 0x20000;
  }
  if (local_88 < 3.40282e+38) {
    uVar21 = uVar21 | 0x40000;
  }
  local_80 = (char)uVar4;
  local_a0._4_4_ = (uint)(param_2[2] >> 0x20);
  if ((local_80 == '\x02') || ((local_a0._4_4_ >> 0x13 & 1) != 0)) {
    uVar21 = uVar21 | 0x80000;
  }
  uStack_7c = (ushort)(uVar4 >> 0x20);
  if ((float)((uint)uStack_7c << 0x10) != 0.0) {
    uVar21 = uVar21 | 0x100000;
  }
  if (local_a8 != 0) {
    uVar21 = uVar21 | 0x200000;
  }
  local_a0._0_4_ = (int)param_2[2];
  local_a0 = CONCAT44(local_a0._4_4_ & 0xffc00000 | local_a0._4_4_ & 0xffff | uVar21,(int)local_a0);
  if (((int)local_a0 == 0) && (uVar21 = *(uint *)(param_1 + 0x50), 0 < (int)uVar21)) {
    lVar28 = 0;
    plVar19 = (long *)(*(long *)(param_1 + 0x48) + 0x10);
    do {
      pcVar16 = (char *)(plVar19[-2] & 0xfffffffffffffffe);
      if (((char *)(local_b0 & 0xfffffffffffffffe) == (char *)0x0) || (pcVar16 == (char *)0x0)) {
        iVar14 = -(uint)((local_b0 & 0xfffffffffffffffe) != 0);
        if (pcVar16 == (char *)0x0) goto LAB_03013340;
      }
      else {
        iVar14 = strcmp(pcVar16,(char *)(local_b0 & 0xfffffffffffffffe));
LAB_03013340:
        if (((iVar14 == 0) && (plVar19[-1] == local_a8)) &&
           (((*plVar19 == local_a0 && plVar19[1] == uVar7) &&
            (plVar19[2] == uVar15 && plVar19[3] == uVar6)) &&
            ((plVar19[4] == uVar4 && plVar19[5] == uVar8) &&
            (plVar19[6] == uVar5 && plVar19[7] == uVar9)))) {
          if ((int)lVar28 != 1) {
            uVar29 = -lVar28;
            nn::os::UnlockMutex(*(MutexType **)(param_1 + 0x40));
            goto joined_r0x030133c4;
          }
          break;
        }
      }
      lVar28 = lVar28 + -1;
      plVar19 = plVar19 + 10;
    } while (-lVar28 != (ulong)uVar21);
  }
  nn::os::UnlockMutex(*(MutexType **)(param_1 + 0x40));
  pcVar16 = (char *)(*param_2 & 0xfffffffffffffffe);
  if (((pcVar16 == (char *)0x0) || (sVar17 = strlen(pcVar16), (int)sVar17 < 1)) ||
     (sVar13 = FUN_03014118(param_1,pcVar16), sVar13 == -1)) {
    pMVar25 = *(MutexType **)(param_1 + 0x40);
    nn::os::LockMutex(pMVar25);
    puVar1 = (uint *)(param_1 + 100);
    if ((~*(uint *)(param_1 + 100) & 0xffffff) == 0) {
      puVar26 = (ulong *)(param_1 + 0x38);
      plVar19 = (long *)(*puVar26 & 0xfffffffffffffffc);
      *puVar26 = (ulong)plVar19 | 1;
      if (plVar19 == (long *)0x0) {
        uVar29 = 0;
      }
      else {
        puVar24 = puVar26;
        do {
          while( true ) {
            puVar30 = (ulong *)(plVar19 + 1);
            uVar29 = *puVar30;
            plVar27 = (long *)(uVar29 & 0xfffffffffffffffc);
            if ((uVar29 & 3) == 0) break;
            (**(code **)(*plVar19 + 8))();
            *puVar24 = *puVar24 & 3 | (ulong)plVar27;
            plVar19 = plVar27;
            if (plVar27 == (long *)0x0) goto LAB_030137b4;
          }
          (**(code **)(*plVar19 + 0x20))(plVar19,param_1);
          plVar19 = plVar27;
          puVar24 = puVar30;
        } while (plVar27 != (long *)0x0);
LAB_030137b4:
        uVar29 = *puVar26 & 0xfffffffffffffffc;
      }
      *puVar26 = uVar29;
    }
    uVar21 = *puVar1 & 0xffffff;
    if (uVar21 == 0xffffff) {
      uVar29 = 0xffff;
    }
    else {
      uVar29 = 0xffff;
      uVar23 = *puVar1;
      do {
        uVar3 = *puVar1;
        if (uVar3 == uVar23) {
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar12) {
            *puVar1 = uVar23 + 0x1000000 & 0xff000000 |
                      *(uint *)(*(long *)(param_1 + 0x48) + (ulong)uVar21 * 0x50 + 0x10) & 0xffffff;
            cVar10 = ExclusiveMonitorsStatus();
          }
          if (cVar10 != '\0') goto LAB_030134f0;
          uVar29 = (ulong)uVar21;
          piVar2 = (int *)(param_1 + 0x68);
          do {
            cVar10 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar12) {
              *piVar2 = *piVar2 + 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          iVar14 = *(int *)(param_1 + 0x6c);
          uVar23 = iVar14 + 1;
          if (uVar23 <= uVar21) {
            uVar3 = uVar21 + 1;
            if (uVar23 <= uVar3) {
              uVar23 = uVar3;
            }
            piVar2 = (int *)(param_1 + 0x6c);
            do {
              if (*piVar2 != iVar14) {
                do {
                  ClearExclusiveLocal();
                  iVar14 = *piVar2;
                  uVar23 = uVar3;
                  if (uVar3 < iVar14 + 1U) {
                    uVar23 = iVar14 + 1;
                  }
                  while (*piVar2 == iVar14) {
                    cVar10 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar12) {
                      *piVar2 = uVar23 - 1;
                      cVar10 = ExclusiveMonitorsStatus();
                    }
                    if (cVar10 == '\0') goto LAB_030135ac;
                  }
                } while( true );
              }
              cVar10 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar12) {
                *piVar2 = uVar23 - 1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
          }
LAB_030135ac:
          puVar20 = (undefined8 *)(*(long *)(param_1 + 0x48) + uVar29 * 0x50);
          puVar20[2] = 0;
          puVar20[3] = 0x3f003f000000;
          puVar20[6] = 0;
          puVar20[7] = 0x40a00000;
          puVar20[4] = 0;
          puVar20[5] = 0x3f8000007f7fffee;
          *(undefined2 *)(puVar20 + 4) = 0x201;
          *(undefined4 *)((long)puVar20 + 0x24) = 0x3d4ccccd;
          puVar20[8] = 0;
          puVar20[9] = 0;
          uVar18 = 0;
          *(undefined1 *)(puVar20 + 6) = 0;
          *(undefined2 *)((long)puVar20 + 0x32) = 0x3f80;
          *puVar20 = 0;
          puVar20[1] = 0;
          lVar28 = *(long *)(param_1 + 0x48);
          puVar26 = (ulong *)(lVar28 + uVar29 * 0x50);
          *puVar26 = 0;
          puVar24 = puVar26 + 1;
          *puVar24 = 0;
          puVar11 = PTR_PTR_0434a080;
          pcVar16 = (char *)(local_b0 & 0xfffffffffffffffe);
          if (pcVar16 != (char *)0x0) {
            sVar17 = strlen(pcVar16);
            uVar23 = (int)sVar17 + 1;
            puVar20 = (undefined8 *)
                      (**(code **)(*(long *)puVar11 + 0x10))
                                (puVar11,(long)((sVar17 << 0x20) + 0x1100000000) >> 0x20,0);
            *puVar20 = puVar11;
            *(uint *)(puVar20 + 1) = uVar23;
            memcpy(puVar20 + 2,pcVar16,(ulong)uVar23);
            *puVar26 = (ulong)(puVar20 + 2) | 1;
            uVar18 = *puVar24;
          }
          if (uVar18 != local_a8) {
            if (local_a8 != 0) {
              FUN_032d645c(local_a8);
              uVar18 = *puVar24;
            }
            *puVar24 = local_a8;
            if (uVar18 != 0) {
              FUN_032d647c();
            }
          }
          lVar28 = lVar28 + uVar29 * 0x50;
          *(ulong *)(lVar28 + 0x20) = uVar15;
          *(ulong *)(lVar28 + 0x28) = uVar6;
          *(long *)(lVar28 + 0x10) = local_a0;
          *(ulong *)(lVar28 + 0x18) = uVar7;
          *(ulong *)(lVar28 + 0x40) = uVar5;
          *(ulong *)(lVar28 + 0x48) = uVar9;
          *(ulong *)(lVar28 + 0x30) = uVar4;
          *(ulong *)(lVar28 + 0x38) = uVar8;
          FUN_0301428c(param_1 + 0x20,param_1,uVar21 & 0xffff);
          break;
        }
        ClearExclusiveLocal();
LAB_030134f0:
        uVar21 = uVar3 & 0xffffff;
        uVar23 = uVar3;
      } while (uVar21 != 0xffffff);
    }
    nn::os::UnlockMutex(pMVar25);
  }
  else {
    uVar29 = 0xffff;
  }
joined_r0x030133c4:
  if (local_a8 != 0) {
    FUN_032d647c(local_a8);
  }
  if ((local_b0 & 1) != 0) {
    lVar28 = tpidr_el0;
    lVar22 = *(long *)(lVar28 + 0x38d490);
    if (lVar22 == 0) {
      lVar22 = FUN_0333d16c(0,1);
      *(long *)(lVar28 + 0x38d490) = lVar22;
    }
    plVar19 = *(long **)(*(long *)(lVar22 + 8) + 0x58);
    *(undefined8 *)(local_b0 - 0x11) = 0;
    (**(code **)(*plVar19 + 0x18))
              (plVar19,(undefined8 *)(local_b0 - 0x11),(long)*(int *)(local_b0 - 9) + 0x10);
  }
  return uVar29 & 0xffff;
}


