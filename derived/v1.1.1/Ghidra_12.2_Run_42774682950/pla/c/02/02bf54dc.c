/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bf54dc; name: FUN_02bf54dc
 */


uint FUN_02bf54dc(long param_1,long param_2,long param_3,uint param_4,int param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  size_t sVar8;
  undefined8 *puVar9;
  long *plVar10;
  uint uVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  char *pcVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int iVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined **local_5b0;
  byte local_5a8;
  uint local_5a4;
  undefined8 local_5a0;
  undefined1 local_598;
  undefined1 *local_590;
  undefined8 local_588;
  undefined1 local_570 [1296];
  
  puVar6 = PTR_FUN_042afee8;
  local_590 = local_570;
  local_5a8 = 0;
  local_588 = -0x7ffffff600000000;
  local_5a4 = 0;
  local_598 = 0;
  local_5b0 = &PTR_LAB_042afed0;
  local_5a0 = 0x5f7ffff05f7ffff0;
  (*(code *)PTR_FUN_042afee8)(&local_5b0);
  local_5a8 = local_5a8 | 0x40;
  (**(code **)(**(long **)(param_1 + 8) + 0x3d0))
            (*(long **)(param_1 + 8),param_2,&DAT_03aae430,&local_5b0,0);
  plVar5 = (long *)PTR_PTR_0434a080;
  uVar11 = local_5a4;
  if (1 < (int)local_588) {
    FUN_02f6c0d0(local_590,0,(int)local_588 + -1);
    plVar5 = (long *)PTR_PTR_0434a080;
    uVar11 = local_5a4;
  }
  PTR_PTR_0434a080 = (undefined *)plVar5;
  local_5a4 = uVar11;
  if (param_5 == 0) {
    if (uVar11 == 0) {
      uVar1 = 0;
    }
    else {
      uVar17 = 0;
      uVar1 = 0;
      do {
        puVar2 = (undefined8 *)(local_590 + uVar17 * 0x80);
        uVar16 = (ulong)*(ushort *)(puVar2 + 0xd);
        if (uVar16 != 0xffff) {
          lVar7 = (**(code **)(**(long **)(param_1 + 8) + 0xa0))();
          lVar7 = *(long *)(lVar7 + 0x48);
          pcVar19 = (char *)(*(ulong *)(lVar7 + uVar16 * 0x50) & 0xfffffffffffffffe);
          if (pcVar19 == (char *)0x0) {
            uVar15 = 0;
          }
          else {
            sVar8 = strlen(pcVar19);
            uVar11 = (int)sVar8 + 1;
            puVar12 = (undefined8 *)
                      (**(code **)(*plVar5 + 0x10))
                                (plVar5,(long)((sVar8 << 0x20) + 0x1100000000) >> 0x20,0);
            *puVar12 = plVar5;
            *(uint *)(puVar12 + 1) = uVar11;
            memcpy(puVar12 + 2,pcVar19,(ulong)uVar11);
            uVar15 = (ulong)(puVar12 + 2) | 1;
          }
          puVar12 = (undefined8 *)(lVar7 + uVar16 * 0x50 + 8);
          plVar18 = (long *)*puVar12;
          if ((plVar18 != (long *)0x0) && (plVar18[1] != 0)) {
            plVar18 = plVar18 + 2;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar4) {
                *plVar18 = *plVar18 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            plVar18 = (long *)*puVar12;
          }
          if (*(char *)(lVar7 + uVar16 * 0x50 + 0x18) == '\0') {
            if (uVar1 < param_4) {
              uVar26 = *puVar2;
              puVar12 = (undefined8 *)(param_3 + (ulong)uVar1 * 0xc0);
              pcVar19 = (char *)(uVar15 & 0xfffffffffffffffe);
              puVar12[1] = puVar2[1] & 0xffffffff;
              *puVar12 = uVar26;
              uVar26 = puVar2[2];
              puVar12[3] = puVar2[3] & 0xffffffff;
              puVar12[2] = uVar26;
              *(undefined4 *)((long)puVar12 + 0x24) = *(undefined4 *)(puVar2 + 0xb);
              fVar20 = (float)*(undefined8 *)(param_2 + 0x40);
              fVar22 = (float)((ulong)*(undefined8 *)(param_2 + 0x40) >> 0x20);
              fVar20 = fVar20 * fVar20;
              fVar22 = fVar22 * fVar22;
              fVar23 = (float)*(undefined8 *)(param_2 + 0x48);
              fVar23 = fVar23 * fVar23;
              fVar21 = fVar20 + fVar22 + fVar23;
              uVar26 = CONCAT44(fVar20 + fVar22 + fVar23,fVar21);
              uVar25 = NEON_frsqrte(uVar26,4);
              fVar20 = (float)uVar25;
              fVar22 = (float)((ulong)uVar25 >> 0x20);
              uVar25 = NEON_frsqrts(uVar26,CONCAT44(fVar22 * fVar22,fVar20 * fVar20),4);
              fVar20 = fVar20 * (float)uVar25;
              fVar22 = fVar22 * (float)((ulong)uVar25 >> 0x20);
              uVar26 = NEON_frsqrts(uVar26,CONCAT44(fVar22 * fVar22,fVar20 * fVar20),4);
              iVar24 = -(uint)(fVar21 <= 0.0);
              fVar21 = fVar21 * (float)uVar26 * fVar20;
              *(float *)(puVar12 + 4) =
                   *(float *)(puVar2 + 4) *
                   (float)CONCAT13((byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                                   CONCAT12((byte)((uint)fVar21 >> 0x10) &
                                            ~(byte)((uint)iVar24 >> 0x10),
                                            CONCAT11((byte)((uint)fVar21 >> 8) &
                                                     ~(byte)((uint)iVar24 >> 8),
                                                     SUB41(fVar21,0) & ~(byte)iVar24)));
              puVar12[5] = *(undefined8 *)
                            (*(long *)(*(long *)(param_1 + 8) + 0x38) +
                             (puVar2[0xb] & 0xffffff) * 0xc0 + 0x98);
              uVar16 = puVar12[6];
              if ((char *)(uVar16 & 0xfffffffffffffffe) != pcVar19) {
                if (pcVar19 == (char *)0x0) {
                  uVar14 = 0;
                }
                else {
                  sVar8 = strlen(pcVar19);
                  uVar11 = (int)sVar8 + 1;
                  puVar9 = (undefined8 *)
                           (**(code **)(*plVar5 + 0x10))
                                     (plVar5,(long)((sVar8 << 0x20) + 0x1100000000) >> 0x20,0);
                  *puVar9 = plVar5;
                  *(uint *)(puVar9 + 1) = uVar11;
                  memcpy(puVar9 + 2,pcVar19,(ulong)uVar11);
                  uVar14 = (ulong)(puVar9 + 2) | 1;
                }
                puVar12[6] = uVar14;
                if ((uVar16 & 1) != 0) {
                  lVar7 = tpidr_el0;
                  lVar13 = *(long *)(lVar7 + 0x38d490);
                  if (lVar13 == 0) {
                    lVar13 = FUN_0333d16c(0,1);
                    *(long *)(lVar7 + 0x38d490) = lVar13;
                  }
                  plVar10 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
                  *(undefined8 *)(uVar16 - 0x11) = 0;
                  (**(code **)(*plVar10 + 0x18))
                            (plVar10,(undefined8 *)(uVar16 - 0x11),(long)*(int *)(uVar16 - 9) + 0x10
                            );
                }
              }
              uVar26 = *puVar2;
              lVar7 = param_3 + (ulong)uVar1 * 0xc0;
              *(undefined8 *)(lVar7 + 0x48) = puVar2[1];
              *(undefined8 *)(lVar7 + 0x40) = uVar26;
              uVar26 = puVar2[2];
              *(undefined8 *)(lVar7 + 0x58) = puVar2[3];
              *(undefined8 *)(lVar7 + 0x50) = uVar26;
              *(float *)(lVar7 + 0x60) = *(float *)(puVar2 + 4);
              uVar26 = puVar2[5];
              *(undefined4 *)(lVar7 + 0x70) = *(undefined4 *)(puVar2 + 6);
              *(undefined8 *)(lVar7 + 0x68) = uVar26;
              *(undefined4 *)(lVar7 + 0x78) = *(undefined4 *)(puVar2 + 7);
              *(undefined1 *)(lVar7 + 0x7c) = *(undefined1 *)((long)puVar2 + 0x3c);
              *(undefined2 *)(lVar7 + 0x80) = *(undefined2 *)(puVar2 + 8);
              uVar26 = *(undefined8 *)((long)puVar2 + 0x44);
              *(undefined4 *)(lVar7 + 0x8c) = *(undefined4 *)((long)puVar2 + 0x4c);
              *(undefined8 *)(lVar7 + 0x84) = uVar26;
              uVar26 = puVar2[10];
              *(undefined4 *)(lVar7 + 0x98) = *(undefined4 *)(puVar2 + 0xb);
              *(undefined8 *)(lVar7 + 0x90) = uVar26;
              *(undefined4 *)(lVar7 + 0xa0) = *(undefined4 *)(puVar2 + 0xc);
              *(undefined1 *)(lVar7 + 0xa4) = *(undefined1 *)((long)puVar2 + 100);
              *(ushort *)(lVar7 + 0xa8) = *(ushort *)(puVar2 + 0xd);
              uVar26 = *(undefined8 *)((long)puVar2 + 0x6c);
              *(undefined4 *)(lVar7 + 0xb4) = *(undefined4 *)((long)puVar2 + 0x74);
              *(undefined8 *)(lVar7 + 0xac) = uVar26;
              *(undefined8 *)(lVar7 + 0xb8) = puVar2[0xf];
            }
            uVar1 = uVar1 + 1;
          }
          if ((plVar18 != (long *)0x0) && (plVar18[1] != 0)) {
            plVar10 = plVar18 + 2;
            do {
              lVar7 = *plVar10;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar4) {
                *plVar10 = lVar7 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar7 + -1 == 0) {
              (**(code **)(*plVar18 + 0x18))(plVar18);
            }
          }
          if ((uVar15 & 1) != 0) {
            lVar7 = tpidr_el0;
            lVar13 = *(long *)(lVar7 + 0x38d490);
            if (lVar13 == 0) {
              lVar13 = FUN_0333d16c(0,1);
              *(long *)(lVar7 + 0x38d490) = lVar13;
            }
            plVar18 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
            *(undefined8 *)(uVar15 - 0x11) = 0;
            (**(code **)(*plVar18 + 0x18))
                      (plVar18,(undefined8 *)(uVar15 - 0x11),(long)*(int *)(uVar15 - 9) + 0x10);
          }
          uVar11 = local_5a4;
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar11);
    }
  }
  else {
    if (uVar11 <= param_4) {
      param_4 = uVar11;
    }
    uVar1 = uVar11;
    if (param_4 != 0) {
      uVar17 = 0;
      do {
        puVar2 = (undefined8 *)(local_590 + uVar17 * 0x80);
        uVar16 = (ulong)*(ushort *)(puVar2 + 0xd);
        if (uVar16 != 0xffff) {
          lVar7 = (**(code **)(**(long **)(param_1 + 8) + 0xa0))();
          lVar7 = *(long *)(lVar7 + 0x48);
          pcVar19 = (char *)(*(ulong *)(lVar7 + uVar16 * 0x50) & 0xfffffffffffffffe);
          if (pcVar19 == (char *)0x0) {
            uVar15 = 0;
          }
          else {
            sVar8 = strlen(pcVar19);
            uVar11 = (int)sVar8 + 1;
            puVar12 = (undefined8 *)
                      (**(code **)(*plVar5 + 0x10))
                                (plVar5,(long)((sVar8 << 0x20) + 0x1100000000) >> 0x20,0);
            *puVar12 = plVar5;
            *(uint *)(puVar12 + 1) = uVar11;
            memcpy(puVar12 + 2,pcVar19,(ulong)uVar11);
            uVar15 = (ulong)(puVar12 + 2) | 1;
          }
          puVar12 = (undefined8 *)(lVar7 + uVar16 * 0x50 + 8);
          plVar18 = (long *)*puVar12;
          if ((plVar18 != (long *)0x0) && (plVar18[1] != 0)) {
            plVar18 = plVar18 + 2;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar4) {
                *plVar18 = *plVar18 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            plVar18 = (long *)*puVar12;
          }
          uVar26 = *puVar2;
          puVar12 = (undefined8 *)(param_3 + uVar17 * 0xc0);
          pcVar19 = (char *)(uVar15 & 0xfffffffffffffffe);
          puVar12[1] = puVar2[1] & 0xffffffff;
          *puVar12 = uVar26;
          uVar26 = puVar2[2];
          puVar12[3] = puVar2[3] & 0xffffffff;
          puVar12[2] = uVar26;
          *(undefined4 *)((long)puVar12 + 0x24) = *(undefined4 *)(puVar2 + 0xb);
          fVar20 = (float)*(undefined8 *)(param_2 + 0x40);
          fVar22 = (float)((ulong)*(undefined8 *)(param_2 + 0x40) >> 0x20);
          fVar20 = fVar20 * fVar20;
          fVar22 = fVar22 * fVar22;
          fVar23 = (float)*(undefined8 *)(param_2 + 0x48);
          fVar23 = fVar23 * fVar23;
          fVar21 = fVar20 + fVar22 + fVar23;
          uVar26 = CONCAT44(fVar20 + fVar22 + fVar23,fVar21);
          uVar25 = NEON_frsqrte(uVar26,4);
          fVar20 = (float)uVar25;
          fVar22 = (float)((ulong)uVar25 >> 0x20);
          uVar25 = NEON_frsqrts(uVar26,CONCAT44(fVar22 * fVar22,fVar20 * fVar20),4);
          fVar20 = fVar20 * (float)uVar25;
          fVar22 = fVar22 * (float)((ulong)uVar25 >> 0x20);
          uVar26 = NEON_frsqrts(uVar26,CONCAT44(fVar22 * fVar22,fVar20 * fVar20),4);
          iVar24 = -(uint)(fVar21 <= 0.0);
          fVar21 = fVar21 * (float)uVar26 * fVar20;
          *(float *)(puVar12 + 4) =
               *(float *)(puVar2 + 4) *
               (float)CONCAT13((byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                               CONCAT12((byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar21 >> 8) &
                                                  ~(byte)((uint)iVar24 >> 8),
                                                  SUB41(fVar21,0) & ~(byte)iVar24)));
          puVar12[5] = *(undefined8 *)
                        (*(long *)(*(long *)(param_1 + 8) + 0x38) + (puVar2[0xb] & 0xffffff) * 0xc0
                        + 0x98);
          uVar16 = puVar12[6];
          if ((char *)(uVar16 & 0xfffffffffffffffe) != pcVar19) {
            if (pcVar19 == (char *)0x0) {
              uVar14 = 0;
            }
            else {
              sVar8 = strlen(pcVar19);
              uVar11 = (int)sVar8 + 1;
              puVar9 = (undefined8 *)
                       (**(code **)(*plVar5 + 0x10))
                                 (plVar5,(long)((sVar8 << 0x20) + 0x1100000000) >> 0x20,0);
              *puVar9 = plVar5;
              *(uint *)(puVar9 + 1) = uVar11;
              memcpy(puVar9 + 2,pcVar19,(ulong)uVar11);
              uVar14 = (ulong)(puVar9 + 2) | 1;
            }
            puVar12[6] = uVar14;
            if ((uVar16 & 1) != 0) {
              lVar7 = tpidr_el0;
              lVar13 = *(long *)(lVar7 + 0x38d490);
              if (lVar13 == 0) {
                lVar13 = FUN_0333d16c(0,1);
                *(long *)(lVar7 + 0x38d490) = lVar13;
              }
              plVar10 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
              *(undefined8 *)(uVar16 - 0x11) = 0;
              (**(code **)(*plVar10 + 0x18))
                        (plVar10,(undefined8 *)(uVar16 - 0x11),(long)*(int *)(uVar16 - 9) + 0x10);
            }
          }
          uVar26 = *puVar2;
          lVar7 = param_3 + uVar17 * 0xc0;
          *(undefined8 *)(lVar7 + 0x48) = puVar2[1];
          *(undefined8 *)(lVar7 + 0x40) = uVar26;
          uVar26 = puVar2[2];
          *(undefined8 *)(lVar7 + 0x58) = puVar2[3];
          *(undefined8 *)(lVar7 + 0x50) = uVar26;
          *(float *)(lVar7 + 0x60) = *(float *)(puVar2 + 4);
          uVar26 = puVar2[5];
          *(undefined4 *)(lVar7 + 0x70) = *(undefined4 *)(puVar2 + 6);
          *(undefined8 *)(lVar7 + 0x68) = uVar26;
          *(undefined4 *)(lVar7 + 0x78) = *(undefined4 *)(puVar2 + 7);
          *(undefined1 *)(lVar7 + 0x7c) = *(undefined1 *)((long)puVar2 + 0x3c);
          *(undefined2 *)(lVar7 + 0x80) = *(undefined2 *)(puVar2 + 8);
          uVar26 = *(undefined8 *)((long)puVar2 + 0x44);
          *(undefined4 *)(lVar7 + 0x8c) = *(undefined4 *)((long)puVar2 + 0x4c);
          *(undefined8 *)(lVar7 + 0x84) = uVar26;
          uVar26 = puVar2[10];
          *(undefined4 *)(lVar7 + 0x98) = *(undefined4 *)(puVar2 + 0xb);
          *(undefined8 *)(lVar7 + 0x90) = uVar26;
          *(undefined4 *)(lVar7 + 0xa0) = *(undefined4 *)(puVar2 + 0xc);
          *(undefined1 *)(lVar7 + 0xa4) = *(undefined1 *)((long)puVar2 + 100);
          *(ushort *)(lVar7 + 0xa8) = *(ushort *)(puVar2 + 0xd);
          uVar26 = *(undefined8 *)((long)puVar2 + 0x6c);
          *(undefined4 *)(lVar7 + 0xb4) = *(undefined4 *)((long)puVar2 + 0x74);
          *(undefined8 *)(lVar7 + 0xac) = uVar26;
          *(undefined8 *)(lVar7 + 0xb8) = puVar2[0xf];
          if ((plVar18 != (long *)0x0) && (plVar18[1] != 0)) {
            plVar10 = plVar18 + 2;
            do {
              lVar7 = *plVar10;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar4) {
                *plVar10 = lVar7 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar7 + -1 == 0) {
              (**(code **)(*plVar18 + 0x18))(plVar18);
            }
          }
          if ((uVar15 & 1) != 0) {
            lVar7 = tpidr_el0;
            lVar13 = *(long *)(lVar7 + 0x38d490);
            if (lVar13 == 0) {
              lVar13 = FUN_0333d16c(0,1);
              *(long *)(lVar7 + 0x38d490) = lVar13;
            }
            plVar18 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
            *(undefined8 *)(uVar15 - 0x11) = 0;
            (**(code **)(*plVar18 + 0x18))
                      (plVar18,(undefined8 *)(uVar15 - 0x11),(long)*(int *)(uVar15 - 9) + 0x10);
          }
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < param_4);
      uVar1 = local_5a4;
    }
  }
  local_5b0 = &PTR_LAB_042afed0;
  (*(code *)puVar6)(&local_5b0);
  lVar7 = local_588;
  uVar17 = (ulong)local_588._4_4_;
  local_588 = (ulong)local_588._4_4_ << 0x20;
  if ((-1 < lVar7) && (local_590 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,local_590,(uVar17 & 0x3fffffff) << 7);
  }
  return uVar1;
}


