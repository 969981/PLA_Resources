/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03030748; name: FUN_03030748
 */


bool FUN_03030748(long param_1,ulong param_2,int param_3)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  bool bVar9;
  long *plVar10;
  int *piVar11;
  uint uVar12;
  long lVar13;
  char *pcVar14;
  ulong uVar15;
  undefined8 uVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  MutexType *pMVar21;
  int *piVar22;
  ulong uVar23;
  uint *puVar24;
  byte *pbVar25;
  ulong uVar26;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined8 local_a0;
  undefined1 local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined1 auStack_80 [32];
  
  lVar20 = *(long *)(param_1 + 0x38);
  local_90 = auStack_80;
  lVar6 = (long)&local_88 + 4;
  local_88 = 0x8000000800000000;
  lVar13 = *(long *)(param_1 + 0x698);
  uVar19 = param_2 & 0xffffffff;
  uVar23 = param_2 & 0xffffff;
  uVar17 = (uint)param_2;
  if (lVar13 == 0) {
    if ((*(byte *)(lVar20 + uVar23 * 0xc0 + 0x88) & 1) != 0) {
LAB_03030c44:
      FUN_03001a84(param_1 + 0x28,uVar19,*(undefined8 *)(param_1 + 0x4b0));
      uVar19 = local_88;
      puVar8 = local_90;
      puVar7 = PTR_PTR_0434a090;
      lVar13 = *(long *)(param_1 + 0x38);
      param_2 = param_2 & 0xffffff;
      if ((*(byte *)(lVar13 + param_2 * 0xc0 + 0x88) >> 2 & 1) != 0) {
        uVar5 = (int)local_88 + 1;
        if ((int)(local_88._4_4_ & 0x3fffffff) <= (int)local_88) {
          if (0x3ffffffe < (int)local_88) {
            FUN_032bd0a8(uVar5);
          }
          uVar12 = (local_88._4_4_ & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar12) {
            uVar12 = 0x3fffffff;
          }
          uVar3 = uVar5;
          if ((int)uVar5 <= (int)uVar12) {
            uVar3 = uVar12;
          }
          local_90 = (undefined1 *)FUN_032bd1d4(puVar7,uVar3,4,puVar8,uVar19 & 0xffffffff,lVar6);
        }
        *(undefined4 *)(local_90 + (long)(int)local_88 * 4) =
             *(undefined4 *)(lVar13 + param_2 * 0xc0 + 0x50);
        local_88 = CONCAT44(local_88._4_4_,uVar5);
        lVar13 = *(long *)(param_1 + 0x38);
      }
      while( true ) {
        uVar19 = local_88;
        puVar8 = local_90;
        uVar5 = *(uint *)(lVar13 + param_2 * 0xc0 + 0x84);
        if (uVar5 == uVar17) break;
        param_2 = (ulong)(uVar5 & 0xffffff);
        if ((*(byte *)(lVar13 + param_2 * 0xc0 + 0x88) >> 2 & 1) != 0) {
          uVar5 = (int)local_88 + 1;
          if ((int)(local_88._4_4_ & 0x3fffffff) <= (int)local_88) {
            if (0x3ffffffe < (int)local_88) {
              FUN_032bd0a8(uVar5);
            }
            uVar12 = (local_88._4_4_ & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar12) {
              uVar12 = 0x3fffffff;
            }
            uVar3 = uVar5;
            if ((int)uVar5 <= (int)uVar12) {
              uVar3 = uVar12;
            }
            local_90 = (undefined1 *)FUN_032bd1d4(puVar7,uVar3,4,puVar8,uVar19 & 0xffffffff,lVar6);
          }
          *(undefined4 *)(local_90 + (long)(int)local_88 * 4) =
               *(undefined4 *)(lVar13 + param_2 * 0xc0 + 0x50);
          local_88 = CONCAT44(local_88._4_4_,uVar5);
          lVar13 = *(long *)(param_1 + 0x38);
        }
      }
      if ((*(int *)(param_1 + 0x808) == 8) &&
         (*(int *)(*(long *)(param_1 + 0x150) +
                   (ulong)*(uint *)(lVar20 + uVar23 * 0xc0 + 0x80) * 0x80 + 0x4c) == 1)) {
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x4a8) + 0x10) + 0x118) = 1;
        iVar18 = 0;
      }
      else {
LAB_03030d10:
        iVar18 = 0;
      }
      goto joined_r0x03030ef0;
    }
  }
  else {
    if ((*(int *)(param_1 + 0x808) == 1) || (*(int *)(param_1 + 0x808) == 0x40)) {
      local_a0 = *(undefined8 *)(lVar20 + uVar23 * 0xc0 + 0xb0);
      local_a8 = 0x2000020;
      local_a4 = 0x1e;
      plVar10 = *(long **)(param_1 + 0x7f0);
      local_98 = (char)param_3;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))(plVar10,&local_a8);
        lVar13 = *(long *)(param_1 + 0x698);
      }
    }
    uVar5 = *(uint *)(lVar20 + uVar23 * 0xc0 + 0x80);
    lVar13 = *(long *)(lVar13 + 0x388) + (long)(int)uVar5 * 0x20;
    cVar4 = *(char *)(lVar13 + 0xe);
    if (param_3 != 0) {
      if (cVar4 != '\x01') {
        lVar13 = *(long *)(param_1 + 0x150) + (ulong)uVar5 * 0x80;
        puVar24 = (uint *)(lVar13 + 0x4c);
        if (*puVar24 != 0 && *puVar24 != 0x7fffffff) {
          pbVar25 = (byte *)(lVar13 + 0x5e);
          uVar23 = (ulong)*pbVar25;
          pMVar21 = *(MutexType **)(param_1 + 0x480);
          nn::os::LockMutex(pMVar21);
          uVar5 = *puVar24;
          piVar11 = (int *)(param_1 + uVar23 * 0x18 + 0x188);
          if (uVar5 < (uint)((long)*piVar11 + -1)) {
            lVar13 = param_1 + uVar23 * 0x18;
            iVar18 = *(int *)(*(long *)(lVar13 + 0x180) + ((long)*piVar11 + -1) * 4);
            *(uint *)(*(long *)(param_1 + 0x150) + (long)iVar18 * 0x80 + 0x4c) = uVar5;
            *(int *)(*(long *)(lVar13 + 0x180) + (long)(int)uVar5 * 4) = iVar18;
          }
          *pbVar25 = 0xff;
          *puVar24 = 0x7fffffff;
          *piVar11 = *piVar11 + -1;
          nn::os::UnlockMutex(pMVar21);
        }
        lVar13 = *(long *)(param_1 + 0x38);
        uVar23 = param_2 & 0xffffffff;
        do {
          uVar23 = (ulong)((uint)uVar23 & 0xffffff);
          if ((*(byte *)(lVar13 + uVar23 * 0xc0 + 0x54) >> 3 & 1) != 0) {
            puVar24 = (uint *)(lVar13 + uVar23 * 0xc0 + 0x50);
            pMVar21 = *(MutexType **)(param_1 + 0x128);
            uVar26 = (ulong)*puVar24 & 0xffffff;
            nn::os::LockMutex(pMVar21);
            uVar15 = (long)*(int *)(param_1 + 0xf0) - 1;
            iVar18 = *(int *)(*(long *)(param_1 + 0x108) + uVar26 * 4);
            if (iVar18 < (int)uVar15) {
              puVar2 = (undefined8 *)(*(long *)(param_1 + 0xe8) + uVar15 * 0x10);
              uVar16 = *puVar2;
              uVar5 = *(uint *)(puVar2 + 1);
              *(int *)(*(long *)(param_1 + 0x108) + ((ulong)uVar5 & 0xffffff) * 4) = iVar18;
              puVar2 = (undefined8 *)(*(long *)(param_1 + 0xe8) + (long)iVar18 * 0x10);
              *puVar2 = uVar16;
              *(uint *)(puVar2 + 1) = uVar5;
              uVar15 = (ulong)(*(int *)(param_1 + 0xf0) - 1);
            }
            *(int *)(param_1 + 0xf0) = (int)uVar15;
            nn::os::UnlockMutex(pMVar21);
            uVar15 = local_88;
            puVar8 = local_90;
            *(undefined1 *)(*(long *)(param_1 + 0xf8) + uVar26) = 0xff;
            lVar20 = lVar13 + uVar26 * 0xc0;
            *(uint *)(lVar20 + 0x54) = *(uint *)(lVar20 + 0x54) & 0xfffffff7;
            *(ushort *)(lVar20 + 0x58) = *(ushort *)(lVar20 + 0x58) | 0x228;
            *(undefined4 *)(*(long *)(param_1 + 0x108) + uVar26 * 4) = 0xffffffff;
            if ((*(byte *)(lVar13 + uVar23 * 0xc0 + 0x88) >> 2 & 1) != 0) {
              uVar5 = (int)local_88 + 1;
              if ((int)(local_88._4_4_ & 0x3fffffff) <= (int)local_88) {
                if (0x3ffffffe < (int)local_88) {
                  FUN_032bd0a8(uVar5);
                }
                uVar12 = (local_88._4_4_ & 0x3fffffff) << 1;
                if (0x3ffffffe < uVar12) {
                  uVar12 = 0x3fffffff;
                }
                uVar3 = uVar5;
                if ((int)uVar5 <= (int)uVar12) {
                  uVar3 = uVar12;
                }
                local_90 = (undefined1 *)
                           FUN_032bd1d4(PTR_PTR_0434a090,uVar3,4,puVar8,uVar15 & 0xffffffff,lVar6);
              }
              *(uint *)(local_90 + (long)(int)local_88 * 4) = *puVar24;
              local_88 = CONCAT44(local_88._4_4_,uVar5);
            }
          }
          lVar13 = *(long *)(param_1 + 0x38);
          uVar5 = *(uint *)(lVar13 + uVar23 * 0xc0 + 0x84);
          uVar23 = (ulong)uVar5;
        } while (uVar5 != uVar17);
        lVar6 = tpidr_el0;
        param_2 = param_2 & 0xffffffff;
        do {
          puVar2 = (undefined8 *)(*(long *)(param_1 + 0x698) + 0x318);
          piVar22 = *(int **)(*(long *)(param_1 + 0x698) + 0x318);
          piVar11 = piVar22 + 1;
          do {
            iVar18 = *piVar11;
            cVar4 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar9) {
              *piVar11 = iVar18 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          while (0xff < iVar18) {
            lVar20 = *(long *)(lVar6 + 0x38d490);
            if (lVar20 == 0) {
              lVar20 = FUN_0333d16c(0,1);
              *(long *)(lVar6 + 0x38d490) = lVar20;
            }
            plVar10 = *(long **)(*(long *)(lVar20 + 8) + 0x58);
            piVar11 = (int *)(**(code **)(*plVar10 + 0x10))(plVar10,0x410,0);
            lVar20 = 0;
            do {
              lVar1 = lVar20 + 0x20;
              *(undefined8 *)((long)piVar11 + lVar20 + 0x10) = 0xffffff00ffffff;
              *(undefined8 *)((long)piVar11 + lVar20 + 0x18) = 0xffffff00ffffff;
              *(undefined8 *)((long)piVar11 + lVar20 + 0x20) = 0xffffff00ffffff;
              *(undefined8 *)((long)piVar11 + lVar20 + 0x28) = 0xffffff00ffffff;
              lVar20 = lVar1;
            } while (lVar1 != 0x400);
            if (piVar22 == (int *)0x0) {
              iVar18 = 0;
            }
            else {
              iVar18 = *piVar22 + 1;
            }
            *piVar11 = iVar18;
            piVar11[1] = 0;
            piVar11[2] = 0;
            piVar11[3] = 0;
            do {
              if ((int *)*puVar2 != piVar22) {
                ClearExclusiveLocal();
                lVar20 = *(long *)(lVar6 + 0x38d490);
                if (lVar20 == 0) {
                  lVar20 = FUN_0333d16c(0,1);
                  *(long *)(lVar6 + 0x38d490) = lVar20;
                }
                plVar10 = *(long **)(*(long *)(lVar20 + 8) + 0x58);
                (**(code **)(*plVar10 + 0x18))(plVar10,piVar11,0x410);
                goto LAB_03030bc8;
              }
              cVar4 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar9) {
                *puVar2 = piVar11;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (piVar22 != (int *)0x0) {
              *(int **)(piVar22 + 2) = piVar11;
            }
LAB_03030bc8:
            piVar22 = (int *)*puVar2;
            piVar11 = piVar22 + 1;
            do {
              iVar18 = *piVar11;
              cVar4 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar11,0x10);
              if (bVar9) {
                *piVar11 = iVar18 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          piVar22[(long)iVar18 + 4] = (uint)param_2;
          uVar5 = *(uint *)(lVar13 + (ulong)((uint)param_2 & 0xffffff) * 0xc0 + 0x84);
          param_2 = (ulong)uVar5;
          if (uVar5 == uVar17) goto code_r0x030309d8;
          lVar13 = *(long *)(param_1 + 0x38);
        } while( true );
      }
      bVar9 = false;
      goto LAB_03030810;
    }
    uVar5 = *(uint *)(lVar20 + uVar23 * 0xc0 + 0x54);
    if (((uVar5 & 1) == 0) &&
       (cVar4 != '\x02' && (*(byte *)(lVar20 + uVar23 * 0xc0 + 0x88) & 1) != 0)) {
      pcVar14 = (char *)(lVar13 + 0xb);
      if (*pcVar14 != -1) {
        *pcVar14 = '\0';
      }
      if ((uVar5 >> 3 & 1) == 0) {
        FUN_030514b0(*(undefined8 *)(param_1 + 0x698),uVar19,0);
        goto LAB_03030c44;
      }
      goto LAB_03030d10;
    }
  }
  bVar9 = false;
  goto LAB_03030810;
code_r0x030309d8:
  FUN_030514b0(*(undefined8 *)(param_1 + 0x698),uVar19,1);
  iVar18 = param_3;
joined_r0x03030ef0:
  if ((int)local_88 != 0) {
    (**(code **)(**(long **)(param_1 + 0x4c0) + 0x40))
              (*(long **)(param_1 + 0x4c0),local_90,local_88 & 0xffffffff,4);
  }
  bVar9 = iVar18 == param_3;
LAB_03030810:
  uVar19 = local_88;
  uVar17 = local_88._4_4_;
  local_88 = (ulong)local_88._4_4_ << 0x20;
  if ((-1 < (long)uVar19) && (local_90 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_0434a090 + 0x18))(PTR_PTR_0434a090,local_90,uVar17 << 2);
  }
  return bVar9;
}


