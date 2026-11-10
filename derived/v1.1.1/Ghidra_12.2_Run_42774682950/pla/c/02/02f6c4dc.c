/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f6c4dc; name: FUN_02f6c4dc
 */


void FUN_02f6c4dc(undefined8 *param_1,long param_2,int param_3,long *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  uint uVar8;
  long *plVar9;
  void *pvVar10;
  long *plVar11;
  long *plVar12;
  void *pvVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  long *local_90;
  long *local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  
  FUN_02fd6728();
  *param_1 = &PTR_LAB_042b76a0;
  param_1[10] = 0;
  plVar12 = param_1 + 9;
  *plVar12 = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  lVar20 = *(long *)(param_2 + 0x60);
  iVar4 = *(int *)(param_2 + 0x68);
  pvVar3 = (void *)0x0;
  if (lVar20 != 0) {
    pvVar3 = (void *)(lVar20 + param_2 + 0x60);
  }
  if (0 < iVar4 && pvVar3 != (void *)0x0) {
    uVar8 = iVar4 - 1U | (int)(iVar4 - 1U) >> 0x10;
    *(undefined4 *)((long)param_1 + 0x6c) = 0;
    uVar8 = uVar8 | (int)uVar8 >> 8;
    uVar8 = uVar8 | (int)uVar8 >> 4;
    uVar8 = uVar8 | (int)uVar8 >> 2;
    uVar8 = (uVar8 | (int)uVar8 >> 1) + 1;
    if ((int)uVar8 < iVar4) {
      local_70[0] = 0;
      local_80 = 0;
      local_78 = PTR_DAT_04372528;
      FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                   "Capacity reservation overflow",&local_80);
    }
    lVar20 = tpidr_el0;
    lVar14 = *(long *)(lVar20 + 0x38d490);
    if (lVar14 == 0) {
      lVar14 = FUN_0333d16c(0,1);
      *(long *)(lVar20 + 0x38d490) = lVar14;
    }
    plVar9 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
    puVar1 = param_1 + 0xc;
    pvVar10 = (void *)(**(code **)(*plVar9 + 0x10))
                                (plVar9,-(ulong)(uVar8 >> 0x1f) & 0xffffffe000000000 |
                                        (ulong)uVar8 << 5,0);
    pvVar13 = (void *)0x0;
    if (param_1[0xc] != 0) {
      pvVar13 = (void *)(param_1[0xc] + (long)puVar1);
    }
    memcpy(pvVar10,pvVar13,(long)*(int *)(param_1 + 0xd) << 5);
    if ((int)*(uint *)((long)param_1 + 0x6c) < 0) {
      uVar22 = *(uint *)((long)param_1 + 0x6c) & 0x7fffffff;
      if ((int)uVar22 <= (int)*(uint *)(param_1 + 0xd)) {
        uVar22 = *(uint *)(param_1 + 0xd);
      }
      if (param_1[0xc] == 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = param_1[0xc] + (long)puVar1;
      }
      lVar21 = *(long *)(lVar20 + 0x38d490);
      if (lVar21 == 0) {
        lVar21 = FUN_0333d16c(0,1);
        *(long *)(lVar20 + 0x38d490) = lVar21;
      }
      plVar9 = *(long **)(*(long *)(lVar21 + 8) + 0x58);
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar14,(ulong)uVar22 << 5);
    }
    lVar20 = 0;
    if (pvVar10 != (void *)0x0) {
      lVar20 = (long)pvVar10 - (long)puVar1;
    }
    *(int *)(param_1 + 0xd) = iVar4;
    *(uint *)((long)param_1 + 0x6c) = uVar8 | 0x80000000;
    param_1[0xc] = lVar20;
    memcpy((void *)(lVar20 + (long)puVar1),pvVar3,(long)iVar4 << 5);
  }
  uVar15 = *(undefined8 *)(param_2 + 0x88);
  param_1[0xf] = *(undefined8 *)(param_2 + 0x78);
  param_1[0x11] = uVar15;
  uVar15 = *(undefined8 *)(param_2 + 0x70);
  param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
  param_1[0xe] = uVar15;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x90);
  *(undefined1 *)((long)param_1 + 0x94) = *(undefined1 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x98);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_02f6cdb0(param_1 + 0x16,param_2 + 0xb0);
  plVar9 = (long *)(param_2 + 0x48);
  if (plVar9 != plVar12) {
    pvVar3 = (void *)0x0;
    if (*(long *)(param_2 + 0x48) != 0) {
      pvVar3 = (void *)(*(long *)(param_2 + 0x48) + (long)plVar9);
    }
    uVar22 = *(uint *)(param_2 + 0x50);
    uVar8 = *(uint *)(param_2 + 0x54) & 0x7fffffff;
    if ((int)uVar8 <= (int)uVar22) {
      uVar8 = uVar22;
    }
    lVar20 = *plVar12;
    if ((pvVar3 == (void *)0x0) || (uVar8 == 0)) {
      if ((int)*(uint *)((long)param_1 + 0x54) < 0) {
        uVar8 = *(uint *)((long)param_1 + 0x54) & 0x7fffffff;
        if ((int)uVar8 <= (int)*(uint *)(param_1 + 10)) {
          uVar8 = *(uint *)(param_1 + 10);
        }
        if (lVar20 == 0) {
          lVar20 = 0;
        }
        else {
          lVar20 = lVar20 + (long)plVar12;
        }
        lVar14 = tpidr_el0;
        lVar21 = *(long *)(lVar14 + 0x38d490);
        if (lVar21 == 0) {
          lVar21 = FUN_0333d16c(0,1);
          *(long *)(lVar14 + 0x38d490) = lVar21;
        }
        plVar11 = *(long **)(*(long *)(lVar21 + 8) + 0x58);
        (**(code **)(*plVar11 + 0x18))(plVar11,lVar20,(ulong)uVar8 << 6);
      }
      *plVar12 = 0;
      param_1[10] = 0;
    }
    else {
      pvVar13 = (void *)(lVar20 + (long)plVar12);
      if (lVar20 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        pvVar10 = pvVar13;
      }
      uVar2 = *(uint *)((long)param_1 + 0x54) & 0x7fffffff;
      if ((int)uVar2 <= (int)*(uint *)(param_1 + 10)) {
        uVar2 = *(uint *)(param_1 + 10);
      }
      if (uVar8 != uVar2) {
        if ((int)*(uint *)((long)param_1 + 0x54) < 0) {
          if (lVar20 == 0) {
            pvVar13 = (void *)0x0;
          }
          lVar20 = tpidr_el0;
          lVar14 = *(long *)(lVar20 + 0x38d490);
          if (lVar14 == 0) {
            lVar14 = FUN_0333d16c(0,1);
            *(long *)(lVar20 + 0x38d490) = lVar14;
          }
          plVar11 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
          (**(code **)(*plVar11 + 0x18))(plVar11,pvVar13,(ulong)uVar2 << 6);
        }
        lVar20 = tpidr_el0;
        lVar14 = *(long *)(lVar20 + 0x38d490);
        if (lVar14 == 0) {
          lVar14 = FUN_0333d16c(0,1);
          *(long *)(lVar20 + 0x38d490) = lVar14;
        }
        plVar11 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
        pvVar10 = (void *)(**(code **)(*plVar11 + 0x10))(plVar11,(ulong)uVar8 << 6,0);
        uVar22 = *(uint *)(param_2 + 0x50);
      }
      memcpy(pvVar10,pvVar3,-(ulong)(uVar22 >> 0x1f) & 0xffffffc000000000 | (ulong)uVar22 << 6);
      if (pvVar10 == (void *)0x0) {
        lVar20 = 0;
      }
      else {
        lVar20 = (long)pvVar10 - (long)plVar12;
      }
      param_1[9] = lVar20;
      *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
      uVar8 = *(uint *)(param_2 + 0x54) & 0x7fffffff;
      if ((int)uVar8 <= (int)*(uint *)(param_2 + 0x50)) {
        uVar8 = *(uint *)(param_2 + 0x50);
      }
      *(uint *)((long)param_1 + 0x54) = uVar8 | 0x80000000;
    }
  }
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)((long)param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  local_80 = 0;
  local_78 = (undefined *)0x8000000000000000;
  FUN_032c2320(local_70);
  puVar7 = PTR_PTR_0434a080;
  uVar8 = 0;
  plVar11 = &local_80;
  if (param_4 != (long *)0x0) {
    plVar11 = param_4;
  }
  do {
    uVar22 = uVar8;
    if (*(int *)(param_2 + 0x50) <= (int)uVar22) goto LAB_02f6c9b4;
    lVar20 = *plVar9;
    uVar8 = uVar22 + 1;
  } while ((*(byte *)((long)plVar9 + (ulong)(uVar22 & 0xffff) * 0x40 + lVar20 + 0x1e) & 1) != 0);
  if (uVar22 + 1 != 0) {
    do {
      plVar16 = (long *)((long)plVar9 + (ulong)(uVar22 & 0xffff) * 0x40 + lVar20 + 0x30);
      lVar20 = *plVar16;
      if (lVar20 == 0) {
        plVar16 = (long *)0x0;
      }
      else {
        plVar16 = (long *)(lVar20 + (long)plVar16);
      }
      local_88 = plVar16;
      if (param_3 == 0) {
        lVar20 = FUN_02f79850(plVar11,&local_88);
        if ((lVar20 == 0) ||
           ((int)(*(uint *)(lVar20 + 4) | ((int)lVar20 - (int)plVar11[2]) * 0x20000000) < 0)) {
          (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(local_88 + 3) * 0x200 + 0x50))
                    (&local_90,local_88,0,plVar11);
          plVar16 = local_90;
          uVar8 = FUN_02f798f0(plVar11,&local_88);
          if (*(uint *)(plVar11 + 1) == uVar8) {
            lVar20 = *plVar11;
            iVar4 = uVar8 + 1;
            if ((int)(*(uint *)((long)plVar11 + 0xc) & 0x3fffffff) <= (int)uVar8) {
              lVar20 = FUN_02f799f8(puVar7);
              uVar8 = *(uint *)(plVar11 + 1);
              *plVar11 = lVar20;
            }
            puVar1 = (undefined8 *)(lVar20 + (long)(int)uVar8 * 0x10);
            *puVar1 = local_88;
            puVar1[1] = plVar16;
            if ((plVar16 != (long *)0x0) && (plVar16[1] != 0)) {
              plVar17 = plVar16 + 2;
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar6) {
                  *plVar17 = *plVar17 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            *(int *)(plVar11 + 1) = iVar4;
          }
          else {
            plVar19 = (long *)(*plVar11 + ((long)((ulong)uVar8 << 0x20) >> 0x1c) + 8);
            plVar17 = (long *)*plVar19;
            if (plVar17 != plVar16) {
              if ((plVar16 == (long *)0x0) || (plVar16[1] == 0)) {
                *plVar19 = (long)plVar16;
              }
              else {
                plVar17 = plVar16 + 2;
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                  if (bVar6) {
                    *plVar17 = *plVar17 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                plVar17 = (long *)*plVar19;
                *plVar19 = (long)plVar16;
              }
              if ((plVar17 != (long *)0x0) && (plVar17[1] != 0)) {
                plVar19 = plVar17 + 2;
                do {
                  lVar20 = *plVar19;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                  if (bVar6) {
                    *plVar19 = lVar20 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar20 + -1 == 0) {
                  (**(code **)(*plVar17 + 0x18))();
                }
              }
            }
          }
joined_r0x02f6cb00:
          if ((plVar16 != (long *)0x0) && (plVar16[1] != 0)) {
            plVar17 = plVar16 + 2;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar6) {
                *plVar17 = *plVar17 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            do {
              lVar20 = *plVar17;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar6) {
                *plVar17 = lVar20 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar20 + -1 == 0) {
              (**(code **)(*plVar16 + 0x18))(plVar16);
            }
          }
        }
        else {
          lVar20 = FUN_02f79850(plVar11,&local_88);
          if (lVar20 == 0) {
            plVar16 = (long *)0x0;
          }
          else {
            plVar17 = (long *)(*plVar11 + (long)*(int *)(lVar20 + 4) * 0x10 + 8);
            plVar16 = (long *)*plVar17;
            if (plVar16 != (long *)0x0) {
              if (plVar16[1] != 0) {
                plVar16 = plVar16 + 2;
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                  if (bVar6) {
                    *plVar16 = *plVar16 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                plVar16 = (long *)*plVar17;
              }
              goto joined_r0x02f6cb00;
            }
          }
        }
      }
      else if ((plVar16 != (long *)0x0) && (plVar16[1] != 0)) {
        plVar17 = plVar16 + 2;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *plVar17 = *plVar17 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      FUN_02fa2974((long)plVar12 + (ulong)(uVar22 & 0xffff) * 0x40 + *plVar12,plVar16);
      if ((plVar16 != (long *)0x0) && (plVar16[1] != 0)) {
        plVar17 = plVar16 + 2;
        do {
          lVar20 = *plVar17;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *plVar17 = lVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar20 + -1 == 0) {
          (**(code **)(*plVar16 + 0x18))(plVar16);
        }
      }
      uVar8 = uVar22 + 1;
      do {
        uVar22 = uVar8;
        if (*(int *)(param_2 + 0x50) <= (int)uVar22) goto LAB_02f6c9b4;
        lVar20 = *plVar9;
        uVar8 = uVar22 + 1;
      } while ((*(byte *)((long)plVar9 + (ulong)(uVar22 & 0xffff) * 0x40 + lVar20 + 0x1e) & 1) != 0)
      ;
    } while (uVar22 + 1 != 0);
  }
LAB_02f6c9b4:
  FUN_032c20d0(local_70);
  lVar20 = local_80;
  if ((int)local_78 != 0) {
    lVar14 = local_80 + (long)(int)local_78 * 0x10;
    do {
      plVar12 = *(long **)(lVar14 + -8);
      lVar14 = lVar14 + -0x10;
      if ((plVar12 != (long *)0x0) && (plVar12[1] != 0)) {
        plVar9 = plVar12 + 2;
        do {
          lVar21 = *plVar9;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *plVar9 = lVar21 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar21 + -1 == 0) {
          (**(code **)(*plVar12 + 0x18))();
        }
      }
    } while (lVar14 != lVar20);
  }
  lVar20 = (long)local_78;
  uVar18 = (ulong)local_78._4_4_;
  local_78 = (undefined *)((ulong)local_78._4_4_ << 0x20);
  if ((-1 < lVar20) && (local_80 != 0)) {
    (**(code **)(*(long *)puVar7 + 0x18))(puVar7,local_80,(uVar18 & 0x3fffffff) << 4);
  }
  return;
}


