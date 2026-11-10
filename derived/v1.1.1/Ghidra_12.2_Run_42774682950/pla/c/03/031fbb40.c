/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031fbb40; name: FUN_031fbb40
 */


void FUN_031fbb40(undefined8 *param_1,long param_2,long param_3,long param_4,uint param_5,
                 undefined4 param_6,long *param_7)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  void *__dest;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 *puVar17;
  uint *puVar18;
  void *__src;
  long *local_78;
  long local_70;
  long local_68;
  
  lVar8 = tpidr_el0;
  lVar10 = *(long *)(lVar8 + 0x38d490);
  if (lVar10 == 0) {
    lVar10 = FUN_0333d16c(0,1);
    *(long *)(lVar8 + 0x38d490) = lVar10;
    local_68 = *(long *)(lVar10 + 0x10);
  }
  else {
    local_68 = *(long *)(lVar10 + 0x10);
  }
  if (local_68 != 0) {
    puVar4 = *(undefined8 **)(local_68 + 8);
    uVar15 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
    if ((uVar15 <= *(ulong *)(local_68 + 0x10)) &&
       (*(ulong *)(local_68 + 8) = uVar15, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = "TthkaiUpdateNavDataTasks::MakeContext";
      uVar6 = nn::os::GetSystemTick();
      puVar4[1] = uVar6;
      lVar10 = *(long *)(lVar8 + 0x38d490);
    }
  }
  if (lVar10 == 0) {
    lVar10 = FUN_0333d16c(0,1);
    *(long *)(lVar8 + 0x38d490) = lVar10;
  }
  plVar3 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
  puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,0x1b0,0);
  memset(puVar4 + 3,0,0x198);
  puVar4[2] = 1;
  *puVar4 = &PTR_LAB_042f1ca8;
  puVar4[1] = 0xffffffff;
  puVar17 = puVar4 + 8;
  *puVar17 = 0;
  puVar18 = (uint *)((long)puVar4 + 0x4c);
  puVar18[0] = 0x80000000;
  puVar18[1] = 0;
  *(undefined4 *)(puVar4 + 9) = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[0xe] = 0x8000000000000000;
  plVar11 = puVar4 + 0xb;
  *plVar11 = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  plVar3 = puVar4 + 0xf;
  *plVar3 = 0;
  *(undefined4 *)(puVar4 + 0x14) = 0;
  puVar4[0x13] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0x8000000000000000;
  plVar16 = puVar4 + 0x12;
  *plVar16 = 0;
  *(undefined8 *)((long)puVar4 + 0xa4) = 0x80000000;
  *(undefined4 *)((long)puVar4 + 0xd4) = 0x80000000;
  *(undefined4 *)(puVar4 + 0x1a) = 0;
  puVar4[0x18] = 0;
  puVar4[0x19] = 0;
  puVar4[0x16] = 0;
  puVar4[0x17] = 0;
  puVar4[0x1b] = &DAT_03aad864;
  *(undefined4 *)(puVar4 + 0x1c) = 0;
  *(undefined4 *)(puVar4 + 0x25) = 0;
  *(undefined4 *)(puVar4 + 0x2d) = 0;
  puVar4[0x2a] = 0;
  *(undefined4 *)((long)puVar4 + 0x16c) = 0x80000000;
  puVar4[0x23] = 0x8000000000000000;
  puVar4[0x24] = &DAT_03aad864;
  puVar4[0x1d] = puVar4 + 0x1f;
  puVar4[0x1e] = 0x8000000100000000;
  puVar4[0x21] = 0;
  puVar4[0x22] = 0;
  puVar4[0x26] = puVar4 + 0x28;
  puVar4[0x27] = 0x8000000100000000;
  puVar4[0x2b] = 0;
  puVar4[0x2c] = 0;
  puVar4[0x2e] = 0;
  puVar4[0x2f] = 0x8000000000000000;
  puVar4[0x30] = 0;
  puVar4[0x31] = 0x8000000000000000;
  puVar4[0x32] = 0;
  puVar4[0x33] = 0x8000000000000000;
  puVar4[0x34] = 0;
  puVar4[0x35] = 0x8000000000000000;
  *param_1 = puVar4;
  *(undefined4 *)(puVar4 + 3) = param_6;
  puVar4[4] = param_2;
  lVar10 = *(long *)(param_2 + 0x4c8);
  if ((lVar10 != 0) && (*(long *)(lVar10 + 8) != 0)) {
    plVar5 = (long *)(lVar10 + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar5 = (long *)puVar4[5];
  puVar4[5] = lVar10;
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar7 = plVar5 + 2;
    do {
      lVar10 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  uVar6 = FUN_031c8f9c(param_2);
  plVar5 = (long *)puVar4[6];
  puVar4[6] = uVar6;
  if (plVar5 != (long *)0x0) {
    if (*plVar5 != 0) {
      iVar9 = (int)plVar5[3];
      if (*(char *)((long)plVar5 + 0xc) != '\0') {
        plVar7 = (long *)plVar5[2];
        if (iVar9 < 1) {
          plVar14 = plVar7;
        }
        else {
          plVar14 = plVar7;
          if (*plVar7 != 0) {
            *plVar7 = *plVar7;
            plVar14 = plVar7 + 1;
          }
          if (iVar9 != 1) {
            if (plVar7[1] != 0) {
              *plVar14 = plVar7[1];
              plVar14 = plVar14 + 1;
            }
            if (iVar9 != 2) {
              iVar9 = iVar9 + -2;
              plVar7 = plVar7 + 2;
              plVar13 = plVar14;
              do {
                plVar14 = plVar13;
                if (*plVar7 != 0) {
                  plVar14 = plVar13 + 1;
                  *plVar13 = *plVar7;
                }
                plVar7 = plVar7 + 1;
                iVar9 = iVar9 + -1;
                plVar13 = plVar14;
              } while (iVar9 != 0);
            }
          }
          plVar7 = plVar14;
          plVar14 = (long *)plVar5[2];
        }
        *(undefined1 *)((long)plVar5 + 0xc) = 0;
        iVar9 = (int)((ulong)((long)plVar7 - (long)plVar14) >> 3);
      }
      if (iVar9 != 0) {
        (**(code **)(*(long *)*plVar5 + 0x28))((long *)*plVar5,plVar5[2]);
      }
      *(undefined4 *)(plVar5 + 3) = 0;
      *(undefined4 *)(plVar5 + 1) = 0;
    }
    *(undefined4 *)(plVar5 + 3) = 0;
    if ((-1 < (int)*(uint *)((long)plVar5 + 0x1c)) && (plVar5[2] != 0)) {
      (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                (PTR_PTR_0434a080,plVar5[2],
                 ((ulong)*(uint *)((long)plVar5 + 0x1c) & 0x3fffffff) << 3);
    }
    plVar5[2] = 0;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0x80000000;
    lVar10 = *(long *)(lVar8 + 0x38d490);
    if (lVar10 == 0) {
      lVar10 = FUN_0333d16c(0,1);
      *(long *)(lVar8 + 0x38d490) = lVar10;
    }
    plVar7 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
    (**(code **)(*plVar7 + 0x18))(plVar7,plVar5,0x100);
  }
  *(bool *)(puVar4 + 7) = *(char *)(param_2 + 0x230) != '\0';
  if ((undefined8 *)(param_3 + 8) != puVar17) {
    iVar9 = *(int *)(param_3 + 0x10);
    __src = *(void **)(param_3 + 8);
    __dest = (void *)*puVar17;
    if ((int)(*puVar18 & 0x3fffffff) < iVar9) {
      __dest = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar9,4,__dest,*(undefined4 *)(puVar4 + 9),
                                    puVar18);
      puVar4[8] = __dest;
    }
    memcpy(__dest,__src,(long)iVar9 << 2);
    *(int *)(puVar4 + 9) = iVar9;
  }
  *(undefined4 *)(puVar4 + 10) = *(undefined4 *)(param_3 + 0x18);
  lVar10 = *(long *)(param_2 + 0x248);
  if ((lVar10 != 0) && (*(long *)(lVar10 + 8) != 0)) {
    plVar5 = (long *)(lVar10 + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar5 = (long *)*plVar11;
  *plVar11 = lVar10;
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar11 = plVar5 + 2;
    do {
      lVar10 = *plVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  plVar5 = (long *)puVar4[0xc];
  plVar11 = *(long **)(param_2 + 0x170);
  if (plVar5 != plVar11) {
    if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
      plVar11 = plVar11 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar2) {
          *plVar11 = *plVar11 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar5 = (long *)puVar4[0xc];
      plVar11 = *(long **)(param_2 + 0x170);
    }
    puVar4[0xc] = plVar11;
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar11 = plVar5 + 2;
      do {
        lVar10 = *plVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar2) {
          *plVar11 = lVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))();
      }
    }
    plVar5 = *(long **)(param_2 + 0x170);
  }
  *(undefined8 *)(param_2 + 0x170) = 0;
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar11 = plVar5 + 2;
    do {
      lVar10 = *plVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  lVar10 = *(long *)(param_2 + 0x130);
  if ((param_5 & 1) == 0) {
    if ((lVar10 != 0) && (*(long *)(lVar10 + 8) != 0)) {
      plVar11 = (long *)(lVar10 + 0x10);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar2) {
          *plVar11 = *plVar11 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar11 = (long *)*plVar3;
    *plVar3 = lVar10;
    if ((plVar11 == (long *)0x0) || (plVar11[1] == 0)) goto LAB_031fbf78;
    plVar5 = plVar11 + 2;
    do {
      lVar8 = *plVar5 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar8;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    lVar12 = *(long *)(lVar8 + 0x38d490);
    if (lVar12 == 0) {
      lVar12 = FUN_0333d16c(0,1);
      *(long *)(lVar8 + 0x38d490) = lVar12;
    }
    plVar11 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
    lVar8 = (**(code **)(*plVar11 + 0x10))(plVar11,0xf0,0);
    FUN_0317573c(lVar8,lVar10);
    plVar11 = (long *)*plVar3;
    *plVar3 = lVar8;
    if ((plVar11 == (long *)0x0) || (plVar11[1] == 0)) goto LAB_031fbf78;
    plVar5 = plVar11 + 2;
    do {
      lVar8 = *plVar5 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar8;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (lVar8 == 0) {
    (**(code **)(*plVar11 + 0x18))();
  }
LAB_031fbf78:
  plVar5 = (long *)*plVar16;
  plVar11 = *(long **)(param_2 + 0x138);
  if (plVar5 != plVar11) {
    if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
      plVar11 = plVar11 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar2) {
          *plVar11 = *plVar11 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar5 = (long *)*plVar16;
      plVar11 = *(long **)(param_2 + 0x138);
    }
    *plVar16 = (long)plVar11;
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar11 = plVar5 + 2;
      do {
        lVar8 = *plVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar2) {
          *plVar11 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))();
      }
    }
    plVar5 = *(long **)(param_2 + 0x138);
  }
  *(undefined8 *)(param_2 + 0x138) = 0;
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar11 = plVar5 + 2;
    do {
      lVar8 = *plVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  lVar8 = *plVar16;
  lVar10 = *plVar3;
  iVar9 = *(int *)(lVar8 + 0x28);
  if (iVar9 != 0) {
    plVar11 = *(long **)(lVar8 + 0x20);
    if (*plVar11 != 0) {
      *(long *)(*plVar11 + 0x18) = lVar10;
    }
    if (iVar9 != 1) {
      if (plVar11[1] != 0) {
        *(long *)(plVar11[1] + 0x18) = lVar10;
      }
      if (iVar9 != 2) {
        plVar11 = plVar11 + 2;
        lVar12 = (long)iVar9 * 8 + -0x10;
        do {
          if (*plVar11 != 0) {
            *(long *)(*plVar11 + 0x18) = lVar10;
          }
          plVar11 = plVar11 + 1;
          lVar12 = lVar12 + -8;
        } while (lVar12 != 0);
      }
    }
  }
  if ((lVar10 != 0) && (*(long *)(lVar10 + 8) != 0)) {
    plVar11 = (long *)(lVar10 + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar11 = *(long **)(lVar8 + 0x18);
  *(long *)(lVar8 + 0x18) = lVar10;
  if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
    plVar16 = plVar11 + 2;
    do {
      lVar8 = *plVar16;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar2) {
        *plVar16 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))();
    }
  }
  plVar11 = *(long **)(*(long *)(param_2 + 0x438) + 0x20);
  iVar9 = *(int *)(*(long *)(param_2 + 0x438) + 0x28);
  if ((int)(*(uint *)((long)puVar4 + 0xd4) & 0x3fffffff) < iVar9) {
    uVar6 = FUN_03206e00(PTR_PTR_0434a080,iVar9,puVar4[0x19],*(undefined4 *)(puVar4 + 0x1a),
                         (undefined4 *)((long)puVar4 + 0xd4));
    puVar4[0x19] = uVar6;
  }
  if (*(int *)(puVar4 + 0x1c) * 2 < (iVar9 + 1) * 3) {
    FUN_032c2334(puVar4 + 0x1b);
  }
  if ((int)(*(uint *)((long)puVar4 + 0xf4) & 0x3fffffff) < iVar9) {
    uVar6 = FUN_03206844(PTR_PTR_0434a080,iVar9,puVar4[0x1d],*(undefined4 *)(puVar4 + 0x1e),
                         (uint *)((long)puVar4 + 0xf4));
    puVar4[0x1d] = uVar6;
  }
  if (*(int *)(puVar4 + 0x1e) != iVar9) {
    *(int *)(puVar4 + 0x1e) = iVar9;
  }
  if (iVar9 != 0) {
    plVar16 = plVar11 + iVar9;
    do {
      local_70 = *plVar11;
      plVar5 = *(long **)(local_70 + 0x228);
      if (plVar5 != (long *)0x0) {
        if (*(int *)(local_70 + 0x40) == 1) {
          *(undefined1 *)(plVar5 + 6) = 1;
          lVar8 = *(long *)(local_70 + 0x30);
          plVar5[5] = *(long *)(local_70 + 0x38);
          plVar5[4] = lVar8;
          *(undefined4 *)(*(long *)(local_70 + 0x228) + 0x60) = *(undefined4 *)(local_70 + 0x234);
          plVar5 = *(long **)(local_70 + 0x228);
          if (plVar5 == (long *)0x0) goto LAB_031fc408;
        }
        if (plVar5[1] != 0) {
          plVar7 = plVar5 + 2;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar2) {
              *plVar7 = *plVar7 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        local_78 = plVar5;
        FUN_031fc6c4(puVar4 + 0x19,&local_70,&local_78);
        if ((local_78 != (long *)0x0) && (local_78[1] != 0)) {
          plVar5 = local_78 + 2;
          do {
            lVar8 = *plVar5;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar2) {
              *plVar5 = lVar8 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar8 + -1 == 0) {
            (**(code **)(*local_78 + 0x18))();
          }
        }
      }
LAB_031fc408:
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar16);
  }
  plVar11 = *(long **)(*(long *)(param_2 + 0x478) + 0x20);
  iVar9 = *(int *)(*(long *)(param_2 + 0x478) + 0x28);
  if ((int)(*(uint *)((long)puVar4 + 0x11c) & 0x3fffffff) < iVar9) {
    uVar6 = FUN_032070f8(PTR_PTR_0434a080,iVar9,puVar4[0x22],*(undefined4 *)(puVar4 + 0x23),
                         (long)puVar4 + 0x11c);
    puVar4[0x22] = uVar6;
  }
  if (*(int *)(puVar4 + 0x25) * 2 < (iVar9 + 1) * 3) {
    FUN_032c2334(puVar4 + 0x24);
  }
  if ((int)(*(uint *)((long)puVar4 + 0x13c) & 0x3fffffff) < iVar9) {
    uVar6 = FUN_031f40b0(PTR_PTR_0434a080,iVar9,puVar4[0x26],*(undefined4 *)(puVar4 + 0x27),
                         (uint *)((long)puVar4 + 0x13c));
    puVar4[0x26] = uVar6;
  }
  if (*(int *)(puVar4 + 0x27) != iVar9) {
    *(int *)(puVar4 + 0x27) = iVar9;
  }
  if (iVar9 != 0) {
    plVar16 = plVar11 + iVar9;
    do {
      local_70 = *plVar11;
      plVar5 = (long *)FUN_031f3008();
      if (plVar5 != (long *)0x0) {
        if (plVar5[1] != 0) {
          plVar7 = plVar5 + 2;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar2) {
              *plVar7 = *plVar7 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        local_78 = plVar5;
        FUN_031fc7b4(puVar4 + 0x22,&local_70,&local_78);
        if ((local_78 != (long *)0x0) && (local_78[1] != 0)) {
          plVar5 = local_78 + 2;
          do {
            lVar8 = *plVar5;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar2) {
              *plVar5 = lVar8 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar8 + -1 == 0) {
            (**(code **)(*local_78 + 0x18))();
          }
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar16);
  }
  if ((param_4 != 0) && (*(long *)(param_4 + 8) != 0)) {
    plVar11 = (long *)(param_4 + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar11 = (long *)puVar4[0x2b];
  puVar4[0x2b] = param_4;
  if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
    plVar16 = plVar11 + 2;
    do {
      lVar8 = *plVar16;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar2) {
        *plVar16 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))();
    }
  }
  *param_7 = *plVar3;
  if (local_68 != 0) {
    puVar4 = *(undefined8 **)(local_68 + 8);
    uVar15 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
    if ((uVar15 <= *(ulong *)(local_68 + 0x10)) &&
       (*(ulong *)(local_68 + 8) = uVar15, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = &DAT_0390f40e;
      uVar6 = nn::os::GetSystemTick();
      puVar4[1] = uVar6;
    }
  }
  return;
}


