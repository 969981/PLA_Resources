/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bf4ac4; name: FUN_02bf4ac4
 */


undefined8 FUN_02bf4ac4(long param_1,long param_2,undefined8 *param_3,int param_4)

{
  uint uVar1;
  float *pfVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  size_t sVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  char *pcVar16;
  ulong uVar17;
  long *plVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int iVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined **local_5b0;
  byte local_5a8;
  uint local_5a4;
  undefined8 local_5a0;
  undefined1 local_598;
  float *local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  ulong uStack_578;
  float local_570 [2];
  undefined8 uStack_568;
  undefined4 local_560;
  undefined4 uStack_558;
  undefined1 uStack_554;
  undefined2 local_550;
  undefined4 local_54c;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined8 local_540;
  uint local_538;
  undefined4 local_530;
  undefined1 local_52c;
  ushort uStack_528;
  undefined4 local_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined8 local_518;
  
  puVar6 = PTR_FUN_042afee8;
  if (param_4 == 1) {
    local_5a8 = 0;
    uStack_568 = 0xffffffffffffffff;
    uStack_548 = 0;
    uStack_544 = 0;
    local_540 = 0xffffffffffffffff;
    local_570[0] = 3.40282e+38;
    local_5a4 = 0;
    local_598 = 0;
    local_5b0 = &PTR_LAB_042aff48;
    local_590 = (float *)0x0;
    uStack_588 = 0;
    uStack_558 = 0xffffffff;
    local_5a0 = 0x5f7ffff05f7ffff0;
    local_560 = 0xffffff;
    uStack_554 = 0xf;
    local_550 = 0xffff;
    local_54c = 0;
    local_530 = 0xffffffff;
    local_538 = 0xffffff;
    local_52c = 0xf;
    uStack_528 = 0xffff;
    local_524 = 0;
    local_580 = 0;
    uStack_578 = 0;
    uStack_520 = 0;
    uStack_51c = 0;
    local_518 = 0;
    (*(code *)PTR_FUN_042aff60)(&local_5b0);
    (**(code **)(**(long **)(param_1 + 8) + 0x3d0))
              (*(long **)(param_1 + 8),param_2,&DAT_03aae430,&local_5b0,0);
    if ((local_5a4 == 0) || (uVar15 = (ulong)uStack_528, uVar15 == 0xffff)) {
      uVar25 = 0;
    }
    else {
      lVar8 = (**(code **)(**(long **)(param_1 + 8) + 0xa0))();
      puVar6 = PTR_PTR_0434a080;
      lVar8 = *(long *)(lVar8 + 0x48);
      pcVar16 = (char *)(*(ulong *)(lVar8 + uVar15 * 0x50) & 0xfffffffffffffffe);
      uVar17 = 0;
      if (pcVar16 != (char *)0x0) {
        sVar9 = strlen(pcVar16);
        uVar1 = (int)sVar9 + 1;
        puVar11 = (undefined8 *)
                  (**(code **)(*(long *)puVar6 + 0x10))
                            (puVar6,(long)((sVar9 << 0x20) + 0x1100000000) >> 0x20,0);
        *puVar11 = puVar6;
        *(uint *)(puVar11 + 1) = uVar1;
        memcpy(puVar11 + 2,pcVar16,(ulong)uVar1);
        uVar17 = (ulong)(puVar11 + 2) | 1;
      }
      puVar11 = (undefined8 *)(lVar8 + uVar15 * 0x50 + 8);
      plVar18 = (long *)*puVar11;
      if ((plVar18 != (long *)0x0) && (plVar18[1] != 0)) {
        plVar18 = plVar18 + 2;
        do {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *plVar18 = *plVar18 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        plVar18 = (long *)*puVar11;
      }
      uVar15 = param_3[6];
      pcVar16 = (char *)(uVar17 & 0xfffffffffffffffe);
      param_3[1] = uStack_588 & 0xffffffff;
      *param_3 = local_590;
      param_3[3] = uStack_578 & 0xffffffff;
      param_3[2] = local_580;
      *(uint *)((long)param_3 + 0x24) = local_538;
      fVar19 = (float)*(undefined8 *)(param_2 + 0x40);
      fVar21 = (float)((ulong)*(undefined8 *)(param_2 + 0x40) >> 0x20);
      fVar19 = fVar19 * fVar19;
      fVar21 = fVar21 * fVar21;
      fVar22 = (float)*(undefined8 *)(param_2 + 0x48);
      fVar22 = fVar22 * fVar22;
      fVar20 = fVar19 + fVar21 + fVar22;
      uVar25 = CONCAT44(fVar19 + fVar21 + fVar22,fVar20);
      uVar24 = NEON_frsqrte(uVar25,4);
      fVar19 = (float)uVar24;
      fVar21 = (float)((ulong)uVar24 >> 0x20);
      uVar24 = NEON_frsqrts(uVar25,CONCAT44(fVar21 * fVar21,fVar19 * fVar19),4);
      fVar19 = fVar19 * (float)uVar24;
      fVar21 = fVar21 * (float)((ulong)uVar24 >> 0x20);
      uVar25 = NEON_frsqrts(uVar25,CONCAT44(fVar21 * fVar21,fVar19 * fVar19),4);
      iVar23 = -(uint)(fVar20 <= 0.0);
      fVar20 = fVar20 * (float)uVar25 * fVar19;
      *(float *)(param_3 + 4) =
           local_570[0] *
           (float)CONCAT13((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                           CONCAT12((byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10),
                                    CONCAT11((byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar23 >> 8),
                                             SUB41(fVar20,0) & ~(byte)iVar23)));
      param_3[5] = *(undefined8 *)
                    (*(long *)(*(long *)(param_1 + 8) + 0x38) + ((ulong)local_538 & 0xffffff) * 0xc0
                    + 0x98);
      puVar6 = PTR_PTR_0434a080;
      if ((char *)(uVar15 & 0xfffffffffffffffe) != pcVar16) {
        if (pcVar16 == (char *)0x0) {
          param_3[6] = 0;
        }
        else {
          sVar9 = strlen(pcVar16);
          uVar1 = (int)sVar9 + 1;
          puVar11 = (undefined8 *)
                    (**(code **)(*(long *)puVar6 + 0x10))
                              (puVar6,(long)((sVar9 << 0x20) + 0x1100000000) >> 0x20,0);
          *puVar11 = puVar6;
          *(uint *)(puVar11 + 1) = uVar1;
          memcpy(puVar11 + 2,pcVar16,(ulong)uVar1);
          param_3[6] = (ulong)(puVar11 + 2) | 1;
        }
        if ((uVar15 & 1) != 0) {
          lVar8 = tpidr_el0;
          lVar13 = *(long *)(lVar8 + 0x38d490);
          if (lVar13 == 0) {
            lVar13 = FUN_0333d16c(0,1);
            *(long *)(lVar8 + 0x38d490) = lVar13;
          }
          plVar10 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
          *(undefined8 *)(uVar15 - 0x11) = 0;
          (**(code **)(*plVar10 + 0x18))
                    (plVar10,(undefined8 *)(uVar15 - 0x11),(long)*(int *)(uVar15 - 9) + 0x10);
        }
      }
      param_3[9] = uStack_588;
      param_3[8] = local_590;
      param_3[0xb] = uStack_578;
      param_3[10] = local_580;
      *(float *)(param_3 + 0xc) = local_570[0];
      *(undefined4 *)(param_3 + 0xe) = local_560;
      param_3[0xd] = uStack_568;
      *(undefined4 *)(param_3 + 0xf) = uStack_558;
      *(undefined1 *)((long)param_3 + 0x7c) = uStack_554;
      *(undefined2 *)(param_3 + 0x10) = local_550;
      *(undefined4 *)((long)param_3 + 0x8c) = uStack_544;
      *(ulong *)((long)param_3 + 0x84) = CONCAT44(uStack_548,local_54c);
      *(uint *)(param_3 + 0x13) = local_538;
      param_3[0x12] = local_540;
      *(undefined4 *)(param_3 + 0x14) = local_530;
      *(undefined1 *)((long)param_3 + 0xa4) = local_52c;
      *(ushort *)(param_3 + 0x15) = uStack_528;
      *(undefined4 *)((long)param_3 + 0xb4) = uStack_51c;
      *(ulong *)((long)param_3 + 0xac) = CONCAT44(uStack_520,local_524);
      param_3[0x17] = local_518;
      if ((plVar18 != (long *)0x0) && (plVar18[1] != 0)) {
        plVar10 = plVar18 + 2;
        do {
          lVar8 = *plVar10;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar18 + 0x18))(plVar18);
        }
      }
      if ((uVar17 & 1) != 0) {
        lVar8 = tpidr_el0;
        lVar13 = *(long *)(lVar8 + 0x38d490);
        if (lVar13 == 0) {
          lVar13 = FUN_0333d16c(0,1);
          *(long *)(lVar8 + 0x38d490) = lVar13;
        }
        plVar18 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
        *(undefined8 *)(uVar17 - 0x11) = 0;
        (**(code **)(*plVar18 + 0x18))
                  (plVar18,(undefined8 *)(uVar17 - 0x11),(long)*(int *)(uVar17 - 9) + 0x10);
      }
      uVar25 = 1;
    }
  }
  else {
    local_5a8 = 0;
    local_590 = local_570;
    local_5a4 = 0;
    local_598 = 0;
    local_5b0 = &PTR_LAB_042afed0;
    uStack_588 = -0x7ffffff600000000;
    local_5a0 = 0x5f7ffff05f7ffff0;
    (*(code *)PTR_FUN_042afee8)(&local_5b0);
    local_5a8 = local_5a8 | 0x40;
    (**(code **)(**(long **)(param_1 + 8) + 0x3d0))
              (*(long **)(param_1 + 8),param_2,&DAT_03aae430,&local_5b0,0);
    if (1 < (int)uStack_588) {
      FUN_02f6c0d0(local_590,0,(int)uStack_588 + -1);
    }
    puVar7 = PTR_PTR_0434a080;
    if (local_5a4 == 0) {
      uVar25 = 0;
    }
    else {
      uVar15 = 0;
      do {
        pfVar2 = local_590 + uVar15 * 0x20;
        uVar17 = (ulong)*(ushort *)(pfVar2 + 0x1a);
        if (uVar17 == 0xffff) break;
        lVar8 = (**(code **)(**(long **)(param_1 + 8) + 0xa0))();
        lVar8 = *(long *)(lVar8 + 0x48);
        pcVar16 = (char *)(*(ulong *)(lVar8 + uVar17 * 0x50) & 0xfffffffffffffffe);
        if (pcVar16 == (char *)0x0) {
          uVar14 = 0;
        }
        else {
          sVar9 = strlen(pcVar16);
          uVar1 = (int)sVar9 + 1;
          puVar11 = (undefined8 *)
                    (**(code **)(*(long *)puVar7 + 0x10))
                              (puVar7,(long)((sVar9 << 0x20) + 0x1100000000) >> 0x20,0);
          *puVar11 = puVar7;
          *(uint *)(puVar11 + 1) = uVar1;
          memcpy(puVar11 + 2,pcVar16,(ulong)uVar1);
          uVar14 = (ulong)(puVar11 + 2) | 1;
        }
        puVar11 = (undefined8 *)(lVar8 + uVar17 * 0x50 + 8);
        plVar18 = (long *)*puVar11;
        if ((plVar18 != (long *)0x0) && (plVar18[1] != 0)) {
          plVar18 = plVar18 + 2;
          do {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar5) {
              *plVar18 = *plVar18 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          plVar18 = (long *)*puVar11;
        }
        if (*(char *)(lVar8 + uVar17 * 0x50 + 0x18) == '\0') {
          uVar25 = *(undefined8 *)pfVar2;
          pcVar16 = (char *)(uVar14 & 0xfffffffffffffffe);
          param_3[1] = *(ulong *)(pfVar2 + 2) & 0xffffffff;
          *param_3 = uVar25;
          uVar25 = *(undefined8 *)(pfVar2 + 4);
          param_3[3] = *(ulong *)(pfVar2 + 6) & 0xffffffff;
          param_3[2] = uVar25;
          *(float *)((long)param_3 + 0x24) = pfVar2[0x16];
          fVar19 = (float)*(undefined8 *)(param_2 + 0x40);
          fVar21 = (float)((ulong)*(undefined8 *)(param_2 + 0x40) >> 0x20);
          fVar19 = fVar19 * fVar19;
          fVar21 = fVar21 * fVar21;
          fVar22 = (float)*(undefined8 *)(param_2 + 0x48);
          fVar22 = fVar22 * fVar22;
          fVar20 = fVar19 + fVar21 + fVar22;
          uVar25 = CONCAT44(fVar19 + fVar21 + fVar22,fVar20);
          uVar24 = NEON_frsqrte(uVar25,4);
          fVar19 = (float)uVar24;
          fVar21 = (float)((ulong)uVar24 >> 0x20);
          uVar24 = NEON_frsqrts(uVar25,CONCAT44(fVar21 * fVar21,fVar19 * fVar19),4);
          fVar19 = fVar19 * (float)uVar24;
          fVar21 = fVar21 * (float)((ulong)uVar24 >> 0x20);
          uVar25 = NEON_frsqrts(uVar25,CONCAT44(fVar21 * fVar21,fVar19 * fVar19),4);
          iVar23 = -(uint)(fVar20 <= 0.0);
          fVar20 = fVar20 * (float)uVar25 * fVar19;
          *(float *)(param_3 + 4) =
               pfVar2[8] *
               (float)CONCAT13((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                               CONCAT12((byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar20 >> 8) &
                                                  ~(byte)((uint)iVar23 >> 8),
                                                  SUB41(fVar20,0) & ~(byte)iVar23)));
          uVar17 = param_3[6];
          param_3[5] = *(undefined8 *)
                        (*(long *)(*(long *)(param_1 + 8) + 0x38) +
                         (*(ulong *)(pfVar2 + 0x16) & 0xffffff) * 0xc0 + 0x98);
          if ((char *)(uVar17 & 0xfffffffffffffffe) != pcVar16) {
            if (pcVar16 == (char *)0x0) {
              uVar12 = 0;
            }
            else {
              sVar9 = strlen(pcVar16);
              uVar1 = (int)sVar9 + 1;
              puVar11 = (undefined8 *)
                        (**(code **)(*(long *)puVar7 + 0x10))
                                  (puVar7,(long)((sVar9 << 0x20) + 0x1100000000) >> 0x20,0);
              *puVar11 = puVar7;
              *(uint *)(puVar11 + 1) = uVar1;
              memcpy(puVar11 + 2,pcVar16,(ulong)uVar1);
              uVar12 = (ulong)(puVar11 + 2) | 1;
            }
            param_3[6] = uVar12;
            if ((uVar17 & 1) != 0) {
              lVar8 = tpidr_el0;
              lVar13 = *(long *)(lVar8 + 0x38d490);
              if (lVar13 == 0) {
                lVar13 = FUN_0333d16c(0,1);
                *(long *)(lVar8 + 0x38d490) = lVar13;
              }
              plVar10 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
              *(undefined8 *)(uVar17 - 0x11) = 0;
              (**(code **)(*plVar10 + 0x18))
                        (plVar10,(undefined8 *)(uVar17 - 0x11),(long)*(int *)(uVar17 - 9) + 0x10);
            }
          }
          uVar25 = *(undefined8 *)pfVar2;
          param_3[9] = *(undefined8 *)(pfVar2 + 2);
          param_3[8] = uVar25;
          uVar25 = *(undefined8 *)(pfVar2 + 4);
          param_3[0xb] = *(undefined8 *)(pfVar2 + 6);
          param_3[10] = uVar25;
          *(float *)(param_3 + 0xc) = pfVar2[8];
          uVar25 = *(undefined8 *)(pfVar2 + 10);
          *(float *)(param_3 + 0xe) = pfVar2[0xc];
          param_3[0xd] = uVar25;
          *(float *)(param_3 + 0xf) = pfVar2[0xe];
          *(undefined1 *)((long)param_3 + 0x7c) = *(undefined1 *)(pfVar2 + 0xf);
          *(undefined2 *)(param_3 + 0x10) = *(undefined2 *)(pfVar2 + 0x10);
          uVar25 = *(undefined8 *)(pfVar2 + 0x11);
          *(float *)((long)param_3 + 0x8c) = pfVar2[0x13];
          *(undefined8 *)((long)param_3 + 0x84) = uVar25;
          uVar25 = *(undefined8 *)(pfVar2 + 0x14);
          *(float *)(param_3 + 0x13) = pfVar2[0x16];
          param_3[0x12] = uVar25;
          *(float *)(param_3 + 0x14) = pfVar2[0x18];
          *(undefined1 *)((long)param_3 + 0xa4) = *(undefined1 *)(pfVar2 + 0x19);
          *(ushort *)(param_3 + 0x15) = *(ushort *)(pfVar2 + 0x1a);
          uVar25 = *(undefined8 *)(pfVar2 + 0x1b);
          *(float *)((long)param_3 + 0xb4) = pfVar2[0x1d];
          *(undefined8 *)((long)param_3 + 0xac) = uVar25;
          param_3[0x17] = *(undefined8 *)(pfVar2 + 0x1e);
          bVar5 = true;
          if (plVar18 != (long *)0x0) goto LAB_02bf5120;
LAB_02bf4ff4:
          if ((uVar14 & 1) != 0) goto LAB_02bf516c;
LAB_02bf4ffc:
          if (bVar5) goto LAB_02bf5260;
        }
        else {
          bVar5 = false;
          if (plVar18 == (long *)0x0) goto LAB_02bf4ff4;
LAB_02bf5120:
          if (plVar18[1] == 0) goto LAB_02bf4ff4;
          plVar10 = plVar18 + 2;
          do {
            lVar8 = *plVar10;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar4) {
              *plVar10 = lVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar8 + -1 != 0) goto LAB_02bf4ff4;
          (**(code **)(*plVar18 + 0x18))(plVar18);
          if ((uVar14 & 1) == 0) goto LAB_02bf4ffc;
LAB_02bf516c:
          lVar8 = tpidr_el0;
          lVar13 = *(long *)(lVar8 + 0x38d490);
          if (lVar13 == 0) {
            lVar13 = FUN_0333d16c(0,1);
            *(long *)(lVar8 + 0x38d490) = lVar13;
          }
          plVar18 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
          *(undefined8 *)(uVar14 - 0x11) = 0;
          (**(code **)(*plVar18 + 0x18))
                    (plVar18,(undefined8 *)(uVar14 - 0x11),(long)*(int *)(uVar14 - 9) + 0x10);
          if (bVar5) {
LAB_02bf5260:
            uVar25 = 1;
            goto LAB_02bf5270;
          }
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < local_5a4);
      uVar25 = 0;
    }
LAB_02bf5270:
    local_5b0 = &PTR_LAB_042afed0;
    (*(code *)puVar6)(&local_5b0);
    lVar8 = uStack_588;
    uVar15 = (ulong)uStack_588._4_4_;
    uStack_588 = (ulong)uStack_588._4_4_ << 0x20;
    if ((-1 < lVar8) && (local_590 != (float *)0x0)) {
      (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                (PTR_PTR_0434a080,local_590,(uVar15 & 0x3fffffff) << 7);
    }
  }
  return uVar25;
}


