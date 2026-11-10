/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bf3448; name: FUN_02bf3448
 */


undefined8 FUN_02bf3448(long param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  size_t sVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  char *pcVar18;
  ulong uVar19;
  undefined **local_5b0;
  byte local_5a8;
  uint local_5a4;
  undefined8 local_5a0;
  undefined1 local_598;
  undefined4 *local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  ulong uStack_578;
  undefined4 local_570 [2];
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
  
  puVar5 = PTR_FUN_042afee8;
  if (param_4 == 1) {
    local_5a8 = 0;
    uStack_568 = 0xffffffffffffffff;
    uStack_548 = 0;
    uStack_544 = 0;
    local_540 = 0xffffffffffffffff;
    local_570[0] = 0x7f7fffee;
    local_5a4 = 0;
    local_598 = 0;
    local_5b0 = &PTR_LAB_042aff48;
    local_590 = (undefined4 *)0x0;
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
    (**(code **)(**(long **)(param_1 + 8) + 0x3c8))(*(long **)(param_1 + 8),param_2,&local_5b0);
    if ((local_5a4 == 0) || (uVar19 = (ulong)uStack_528, uVar19 == 0xffff)) {
      uVar14 = 0;
    }
    else {
      lVar7 = (**(code **)(**(long **)(param_1 + 8) + 0xa0))();
      puVar5 = PTR_PTR_0434a080;
      lVar7 = *(long *)(lVar7 + 0x48);
      pcVar18 = (char *)(*(ulong *)(lVar7 + uVar19 * 0x50) & 0xfffffffffffffffe);
      uVar15 = 0;
      if (pcVar18 != (char *)0x0) {
        sVar8 = strlen(pcVar18);
        uVar1 = (int)sVar8 + 1;
        puVar10 = (undefined8 *)
                  (**(code **)(*(long *)puVar5 + 0x10))
                            (puVar5,(long)((sVar8 << 0x20) + 0x1100000000) >> 0x20,0);
        *puVar10 = puVar5;
        *(uint *)(puVar10 + 1) = uVar1;
        memcpy(puVar10 + 2,pcVar18,(ulong)uVar1);
        uVar15 = (ulong)(puVar10 + 2) | 1;
      }
      puVar10 = (undefined8 *)(lVar7 + uVar19 * 0x50 + 8);
      plVar16 = (long *)*puVar10;
      if ((plVar16 != (long *)0x0) && (plVar16[1] != 0)) {
        plVar16 = plVar16 + 2;
        do {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = *plVar16 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar16 = (long *)*puVar10;
      }
      pcVar18 = (char *)(uVar15 & 0xfffffffffffffffe);
      param_3[1] = uStack_588 & 0xffffffff;
      *param_3 = local_590;
      param_3[3] = uStack_578 & 0xffffffff;
      param_3[2] = local_580;
      *(uint *)(param_3 + 4) = local_538;
      uVar19 = param_3[6];
      param_3[5] = *(undefined8 *)
                    (*(long *)(*(long *)(param_1 + 8) + 0x38) + ((ulong)local_538 & 0xffffff) * 0xc0
                    + 0x98);
      puVar5 = PTR_PTR_0434a080;
      if ((char *)(uVar19 & 0xfffffffffffffffe) != pcVar18) {
        if (pcVar18 == (char *)0x0) {
          param_3[6] = 0;
        }
        else {
          sVar8 = strlen(pcVar18);
          uVar1 = (int)sVar8 + 1;
          puVar10 = (undefined8 *)
                    (**(code **)(*(long *)puVar5 + 0x10))
                              (puVar5,(long)((sVar8 << 0x20) + 0x1100000000) >> 0x20,0);
          *puVar10 = puVar5;
          *(uint *)(puVar10 + 1) = uVar1;
          memcpy(puVar10 + 2,pcVar18,(ulong)uVar1);
          param_3[6] = (ulong)(puVar10 + 2) | 1;
        }
        if ((uVar19 & 1) != 0) {
          lVar7 = tpidr_el0;
          lVar13 = *(long *)(lVar7 + 0x38d490);
          if (lVar13 == 0) {
            lVar13 = FUN_0333d16c(0,1);
            *(long *)(lVar7 + 0x38d490) = lVar13;
          }
          plVar9 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
          *(undefined8 *)(uVar19 - 0x11) = 0;
          (**(code **)(*plVar9 + 0x18))
                    (plVar9,(undefined8 *)(uVar19 - 0x11),(long)*(int *)(uVar19 - 9) + 0x10);
        }
      }
      param_3[9] = uStack_588;
      param_3[8] = local_590;
      param_3[0xb] = uStack_578;
      param_3[10] = local_580;
      *(undefined4 *)(param_3 + 0xc) = local_570[0];
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
      if ((plVar16 != (long *)0x0) && (plVar16[1] != 0)) {
        plVar9 = plVar16 + 2;
        do {
          lVar7 = *plVar9;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar16 + 0x18))(plVar16);
        }
      }
      if ((uVar15 & 1) != 0) {
        lVar7 = tpidr_el0;
        lVar13 = *(long *)(lVar7 + 0x38d490);
        if (lVar13 == 0) {
          lVar13 = FUN_0333d16c(0,1);
          *(long *)(lVar7 + 0x38d490) = lVar13;
        }
        plVar16 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
        *(undefined8 *)(uVar15 - 0x11) = 0;
        (**(code **)(*plVar16 + 0x18))
                  (plVar16,(undefined8 *)(uVar15 - 0x11),(long)*(int *)(uVar15 - 9) + 0x10);
      }
      uVar14 = 1;
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
    (**(code **)(**(long **)(param_1 + 8) + 0x3c8))(*(long **)(param_1 + 8),param_2,&local_5b0);
    if (1 < (int)uStack_588) {
      FUN_02f6c0d0(local_590,0,(int)uStack_588 + -1);
    }
    puVar6 = PTR_PTR_0434a080;
    if (local_5a4 == 0) {
      uVar14 = 0;
    }
    else {
      uVar19 = 0;
      do {
        puVar10 = (undefined8 *)(local_590 + uVar19 * 0x20);
        uVar15 = (ulong)*(ushort *)(puVar10 + 0xd);
        if (uVar15 == 0xffff) break;
        lVar7 = (**(code **)(**(long **)(param_1 + 8) + 0xa0))();
        lVar7 = *(long *)(lVar7 + 0x48);
        pcVar18 = (char *)(*(ulong *)(lVar7 + uVar15 * 0x50) & 0xfffffffffffffffe);
        uVar17 = 0;
        if (pcVar18 != (char *)0x0) {
          sVar8 = strlen(pcVar18);
          uVar1 = (int)sVar8 + 1;
          puVar11 = (undefined8 *)
                    (**(code **)(*(long *)puVar6 + 0x10))
                              (puVar6,(long)((sVar8 << 0x20) + 0x1100000000) >> 0x20,0);
          *puVar11 = puVar6;
          *(uint *)(puVar11 + 1) = uVar1;
          memcpy(puVar11 + 2,pcVar18,(ulong)uVar1);
          uVar17 = (ulong)(puVar11 + 2) | 1;
        }
        puVar11 = (undefined8 *)(lVar7 + uVar15 * 0x50 + 8);
        plVar16 = (long *)*puVar11;
        if ((plVar16 != (long *)0x0) && (plVar16[1] != 0)) {
          plVar16 = plVar16 + 2;
          do {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar4) {
              *plVar16 = *plVar16 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          plVar16 = (long *)*puVar11;
        }
        if (*(char *)(lVar7 + uVar15 * 0x50 + 0x18) == '\0') {
          uVar14 = *puVar10;
          pcVar18 = (char *)(uVar17 & 0xfffffffffffffffe);
          param_3[1] = puVar10[1] & 0xffffffff;
          *param_3 = uVar14;
          uVar14 = puVar10[2];
          uVar15 = param_3[6];
          param_3[3] = puVar10[3] & 0xffffffff;
          param_3[2] = uVar14;
          *(undefined4 *)(param_3 + 4) = *(undefined4 *)(puVar10 + 0xb);
          param_3[5] = *(undefined8 *)
                        (*(long *)(*(long *)(param_1 + 8) + 0x38) + (puVar10[0xb] & 0xffffff) * 0xc0
                        + 0x98);
          if ((char *)(uVar15 & 0xfffffffffffffffe) != pcVar18) {
            if (pcVar18 == (char *)0x0) {
              uVar12 = 0;
            }
            else {
              sVar8 = strlen(pcVar18);
              uVar1 = (int)sVar8 + 1;
              puVar11 = (undefined8 *)
                        (**(code **)(*(long *)puVar6 + 0x10))
                                  (puVar6,(long)((sVar8 << 0x20) + 0x1100000000) >> 0x20,0);
              *puVar11 = puVar6;
              *(uint *)(puVar11 + 1) = uVar1;
              memcpy(puVar11 + 2,pcVar18,(ulong)uVar1);
              uVar12 = (ulong)(puVar11 + 2) | 1;
            }
            param_3[6] = uVar12;
            if ((uVar15 & 1) != 0) {
              lVar7 = tpidr_el0;
              lVar13 = *(long *)(lVar7 + 0x38d490);
              if (lVar13 == 0) {
                lVar13 = FUN_0333d16c(0,1);
                *(long *)(lVar7 + 0x38d490) = lVar13;
              }
              plVar9 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
              *(undefined8 *)(uVar15 - 0x11) = 0;
              (**(code **)(*plVar9 + 0x18))
                        (plVar9,(undefined8 *)(uVar15 - 0x11),(long)*(int *)(uVar15 - 9) + 0x10);
            }
          }
          uVar14 = *puVar10;
          param_3[9] = puVar10[1];
          param_3[8] = uVar14;
          uVar14 = puVar10[2];
          param_3[0xb] = puVar10[3];
          param_3[10] = uVar14;
          *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(puVar10 + 4);
          uVar14 = puVar10[5];
          *(undefined4 *)(param_3 + 0xe) = *(undefined4 *)(puVar10 + 6);
          param_3[0xd] = uVar14;
          *(undefined4 *)(param_3 + 0xf) = *(undefined4 *)(puVar10 + 7);
          *(undefined1 *)((long)param_3 + 0x7c) = *(undefined1 *)((long)puVar10 + 0x3c);
          *(undefined2 *)(param_3 + 0x10) = *(undefined2 *)(puVar10 + 8);
          uVar14 = *(undefined8 *)((long)puVar10 + 0x44);
          *(undefined4 *)((long)param_3 + 0x8c) = *(undefined4 *)((long)puVar10 + 0x4c);
          *(undefined8 *)((long)param_3 + 0x84) = uVar14;
          uVar14 = puVar10[10];
          *(undefined4 *)(param_3 + 0x13) = *(undefined4 *)(puVar10 + 0xb);
          param_3[0x12] = uVar14;
          *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(puVar10 + 0xc);
          *(undefined1 *)((long)param_3 + 0xa4) = *(undefined1 *)((long)puVar10 + 100);
          *(ushort *)(param_3 + 0x15) = *(ushort *)(puVar10 + 0xd);
          uVar14 = *(undefined8 *)((long)puVar10 + 0x6c);
          *(undefined4 *)((long)param_3 + 0xb4) = *(undefined4 *)((long)puVar10 + 0x74);
          *(undefined8 *)((long)param_3 + 0xac) = uVar14;
          bVar4 = true;
          param_3[0x17] = puVar10[0xf];
          if (plVar16 != (long *)0x0) goto LAB_02bf39d8;
LAB_02bf38b8:
          if ((uVar17 & 1) != 0) goto LAB_02bf3a10;
LAB_02bf38bc:
          if (bVar4) goto LAB_02bf3af0;
        }
        else {
          bVar4 = false;
          if (plVar16 == (long *)0x0) goto LAB_02bf38b8;
LAB_02bf39d8:
          if (plVar16[1] == 0) goto LAB_02bf38b8;
          plVar9 = plVar16 + 2;
          do {
            lVar7 = *plVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 + -1 != 0) goto LAB_02bf38b8;
          (**(code **)(*plVar16 + 0x18))(plVar16);
          if ((uVar17 & 1) == 0) goto LAB_02bf38bc;
LAB_02bf3a10:
          lVar7 = tpidr_el0;
          lVar13 = *(long *)(lVar7 + 0x38d490);
          if (lVar13 == 0) {
            lVar13 = FUN_0333d16c(0,1);
            *(long *)(lVar7 + 0x38d490) = lVar13;
          }
          plVar16 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
          *(undefined8 *)(uVar17 - 0x11) = 0;
          (**(code **)(*plVar16 + 0x18))
                    (plVar16,(undefined8 *)(uVar17 - 0x11),(long)*(int *)(uVar17 - 9) + 0x10);
          if (bVar4) {
LAB_02bf3af0:
            uVar14 = 1;
            goto LAB_02bf3b04;
          }
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < local_5a4);
      uVar14 = 0;
    }
LAB_02bf3b04:
    local_5b0 = &PTR_LAB_042afed0;
    (*(code *)puVar5)(&local_5b0);
    lVar7 = uStack_588;
    uVar19 = (ulong)uStack_588._4_4_;
    uStack_588 = (ulong)uStack_588._4_4_ << 0x20;
    if ((-1 < lVar7) && (local_590 != (undefined4 *)0x0)) {
      (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                (PTR_PTR_0434a080,local_590,(uVar19 & 0x3fffffff) << 7);
    }
  }
  return uVar14;
}


