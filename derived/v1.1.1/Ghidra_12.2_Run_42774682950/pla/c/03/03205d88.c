/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03205d88; name: FUN_03205d88
 */


void FUN_03205d88(long *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined *puStack_48;
  undefined4 *local_40;
  undefined4 *puStack_38;
  
  *param_1 = (long)&PTR_LAB_042f1ca8;
  puVar4 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0x35) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1ac)) && (param_1[0x34] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[0x34],((ulong)*(uint *)((long)param_1 + 0x1ac) & 0x3fffffff) << 5);
  }
  param_1[0x34] = 0;
  *(undefined4 *)((long)param_1 + 0x1ac) = 0x80000000;
  *(undefined4 *)(param_1 + 0x33) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x19c)) && (param_1[0x32] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[0x32],((ulong)*(uint *)((long)param_1 + 0x19c) & 0x3fffffff) << 4);
  }
  param_1[0x32] = 0;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x31) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x18c)) && (param_1[0x30] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[0x30],((ulong)*(uint *)((long)param_1 + 0x18c) & 0x3fffffff) << 4);
  }
  param_1[0x30] = 0;
  *(undefined4 *)((long)param_1 + 0x18c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x17c)) && (param_1[0x2e] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[0x2e],((ulong)*(uint *)((long)param_1 + 0x17c) & 0x3fffffff) << 5);
  }
  param_1[0x2e] = 0;
  *(undefined4 *)((long)param_1 + 0x17c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x16c)) && (param_1[0x2c] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[0x2c],((ulong)*(uint *)((long)param_1 + 0x16c) & 0x3fffffff) << 5);
  }
  plVar5 = (long *)param_1[0x2b];
  param_1[0x2c] = 0;
  *(undefined4 *)((long)param_1 + 0x16c) = 0x80000000;
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar6 = plVar5 + 2;
    do {
      lVar12 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  lVar12 = param_1[0x26];
  if (param_1[0x2a] != 0) {
    lVar13 = lVar12 + param_1[0x2a] * 0x10;
    do {
      plVar5 = *(long **)(lVar12 + 8);
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar6 = plVar5 + 2;
        do {
          lVar9 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))();
        }
      }
      lVar12 = lVar12 + 0x10;
    } while (lVar12 != lVar13);
  }
  *(undefined4 *)(param_1 + 0x27) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x13c)) && (param_1[0x26] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[0x26],((ulong)*(uint *)((long)param_1 + 0x13c) & 0x3fffffff) << 4);
  }
  lVar12 = param_1[0x24];
  param_1[0x26] = 0;
  *(undefined4 *)((long)param_1 + 0x13c) = 0x80000000;
  if ((lVar12 == 0) || (*(int *)(lVar12 + 4) == -2)) {
    iVar11 = (int)param_1[0x23];
  }
  else {
    uVar1 = (long)(int)param_1[0x25] + 1;
    lVar13 = tpidr_el0;
    lVar9 = *(long *)(lVar13 + 0x38d490);
    if (lVar9 == 0) {
      lVar9 = FUN_0333d16c(0,1);
      *(long *)(lVar13 + 0x38d490) = lVar9;
    }
    plVar5 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
    local_58 = (undefined4)uVar1;
    uStack_54 = 8;
    if ((uVar1 & 0x1ffffffff0000000) != 0) {
      local_50 = 2;
      puStack_48 = &DAT_0411b3a0;
      local_40 = &uStack_54;
      puStack_38 = &local_58;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_50);
    }
    (**(code **)(*plVar5 + 0x18))
              (plVar5,lVar12,-(uVar1 >> 0x1c & 1) & 0xffffffff00000000 | (uVar1 & 0x1fffffff) << 3);
    param_1[0x24] = (long)&DAT_03aad864;
    *(undefined4 *)(param_1 + 0x25) = 0;
    iVar11 = (int)param_1[0x23];
  }
  if (iVar11 != 0) {
    lVar13 = param_1[0x22];
    lVar12 = lVar13 + (long)iVar11 * 0x10;
    do {
      plVar5 = *(long **)(lVar12 + -8);
      lVar12 = lVar12 + -0x10;
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar6 = plVar5 + 2;
        do {
          lVar9 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))();
        }
      }
    } while (lVar12 != lVar13);
  }
  *(undefined4 *)(param_1 + 0x23) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x11c)) && (param_1[0x22] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[0x22],((ulong)*(uint *)((long)param_1 + 0x11c) & 0x3fffffff) << 4);
  }
  param_1[0x22] = 0;
  lVar12 = param_1[0x1d];
  *(undefined4 *)((long)param_1 + 0x11c) = 0x80000000;
  if (param_1[0x21] != 0) {
    lVar13 = lVar12 + param_1[0x21] * 0x10;
    do {
      plVar5 = *(long **)(lVar12 + 8);
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar6 = plVar5 + 2;
        do {
          lVar9 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))();
        }
      }
      lVar12 = lVar12 + 0x10;
    } while (lVar12 != lVar13);
  }
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xf4)) && (param_1[0x1d] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[0x1d],((ulong)*(uint *)((long)param_1 + 0xf4) & 0x3fffffff) << 4);
  }
  lVar12 = param_1[0x1b];
  param_1[0x1d] = 0;
  *(undefined4 *)((long)param_1 + 0xf4) = 0x80000000;
  if ((lVar12 == 0) || (*(int *)(lVar12 + 4) == -2)) {
    iVar11 = (int)param_1[0x1a];
  }
  else {
    uVar1 = (long)(int)param_1[0x1c] + 1;
    lVar13 = tpidr_el0;
    lVar9 = *(long *)(lVar13 + 0x38d490);
    if (lVar9 == 0) {
      lVar9 = FUN_0333d16c(0,1);
      *(long *)(lVar13 + 0x38d490) = lVar9;
    }
    plVar5 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
    local_58 = (undefined4)uVar1;
    uStack_54 = 8;
    if ((uVar1 & 0x1ffffffff0000000) != 0) {
      local_50 = 2;
      puStack_48 = &DAT_0411b3a0;
      local_40 = &uStack_54;
      puStack_38 = &local_58;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_50);
    }
    (**(code **)(*plVar5 + 0x18))
              (plVar5,lVar12,-(uVar1 >> 0x1c & 1) & 0xffffffff00000000 | (uVar1 & 0x1fffffff) << 3);
    param_1[0x1b] = (long)&DAT_03aad864;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    iVar11 = (int)param_1[0x1a];
  }
  if (iVar11 != 0) {
    lVar13 = param_1[0x19];
    lVar12 = lVar13 + (long)iVar11 * 0x10;
    do {
      while( true ) {
        plVar5 = *(long **)(lVar12 + -8);
        lVar12 = lVar12 + -0x10;
        if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) break;
LAB_03205ed8:
        if (lVar12 == lVar13) goto LAB_032060d4;
      }
      plVar6 = plVar5 + 2;
      do {
        lVar9 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 != 0) goto LAB_03205ed8;
      (**(code **)(*plVar5 + 0x18))();
    } while (lVar12 != lVar13);
  }
LAB_032060d4:
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xd4)) && (param_1[0x19] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[0x19],((ulong)*(uint *)((long)param_1 + 0xd4) & 0x3fffffff) << 4);
  }
  plVar5 = (long *)param_1[0x18];
  param_1[0x19] = 0;
  *(undefined4 *)((long)param_1 + 0xd4) = 0x80000000;
  if ((plVar5 == (long *)0x0) || (plVar5[1] == 0)) {
LAB_03206114:
    plVar5 = (long *)param_1[0x17];
    if (plVar5 == (long *)0x0) goto LAB_0320611c;
LAB_03206588:
    if (plVar5[1] == 0) goto LAB_0320611c;
    plVar6 = plVar5 + 2;
    do {
      lVar12 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 + -1 != 0) goto LAB_0320611c;
    (**(code **)(*plVar5 + 0x18))();
    plVar5 = (long *)param_1[0x16];
  }
  else {
    plVar6 = plVar5 + 2;
    do {
      lVar12 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 + -1 != 0) goto LAB_03206114;
    (**(code **)(*plVar5 + 0x18))();
    plVar5 = (long *)param_1[0x17];
    if (plVar5 != (long *)0x0) goto LAB_03206588;
LAB_0320611c:
    plVar5 = (long *)param_1[0x16];
  }
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar6 = plVar5 + 2;
    do {
      lVar12 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((-1 < *(int *)((long)param_1 + 0xa4)) && (param_1[0x13] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))(puVar4,param_1[0x13],*(int *)((long)param_1 + 0xa4) << 2);
  }
  plVar5 = (long *)param_1[0x12];
  param_1[0x13] = 0;
  *(undefined4 *)((long)param_1 + 0xa4) = 0x80000000;
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar6 = plVar5 + 2;
    do {
      lVar12 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  FUN_032069d4(param_1 + 0x10);
  plVar5 = (long *)param_1[0xf];
  if ((plVar5 == (long *)0x0) || (plVar5[1] == 0)) {
LAB_032061bc:
    iVar11 = (int)param_1[0xe];
  }
  else {
    plVar6 = plVar5 + 2;
    do {
      lVar12 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 + -1 != 0) goto LAB_032061bc;
    (**(code **)(*plVar5 + 0x18))();
    iVar11 = (int)param_1[0xe];
  }
  if (iVar11 != 0) {
    lVar13 = param_1[0xd];
    lVar12 = (long)iVar11 << 7;
    do {
      (**(code **)(*(long *)(lVar13 + -0x80 + lVar12) + 8))();
      lVar12 = lVar12 + -0x80;
    } while (lVar12 != 0);
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x74)) && (param_1[0xd] != 0)) {
    (**(code **)(DAT_04434e70 + 0x18))
              (&DAT_04434e70,param_1[0xd],((ulong)*(uint *)((long)param_1 + 0x74) & 0x3fffffff) << 7
              );
  }
  plVar5 = (long *)param_1[0xc];
  param_1[0xd] = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0x80000000;
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar6 = plVar5 + 2;
    do {
      lVar12 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
      plVar5 = (long *)param_1[0xb];
      goto joined_r0x03206250;
    }
  }
  plVar5 = (long *)param_1[0xb];
joined_r0x03206250:
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar6 = plVar5 + 2;
    do {
      lVar12 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x4c)) && (param_1[8] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))(puVar4,param_1[8],*(int *)((long)param_1 + 0x4c) << 2);
  }
  plVar5 = (long *)param_1[6];
  param_1[8] = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0x80000000;
  if (plVar5 != (long *)0x0) {
    if (*plVar5 != 0) {
      uVar7 = *(uint *)(plVar5 + 3);
      if (*(char *)((long)plVar5 + 0xc) != '\0') {
        plVar6 = (long *)plVar5[2];
        if ((int)uVar7 < 1) {
          plVar10 = plVar6;
        }
        else {
          plVar10 = plVar6;
          if (uVar7 != 1) {
            iVar11 = (uVar7 & 1) - uVar7;
            do {
              if (*plVar10 == 0) {
                lVar12 = plVar10[1];
                plVar8 = plVar6;
              }
              else {
                *plVar6 = *plVar10;
                lVar12 = plVar10[1];
                plVar8 = plVar6 + 1;
              }
              plVar6 = plVar8;
              if (lVar12 != 0) {
                plVar6 = plVar8 + 1;
                *plVar8 = lVar12;
              }
              plVar10 = plVar10 + 2;
              iVar11 = iVar11 + 2;
            } while (iVar11 != 0);
          }
          plVar8 = plVar6;
          if (((uVar7 & 1) != 0) && (*plVar10 != 0)) {
            plVar8 = plVar6 + 1;
            *plVar6 = *plVar10;
          }
          plVar6 = plVar8;
          plVar10 = (long *)plVar5[2];
        }
        *(undefined1 *)((long)plVar5 + 0xc) = 0;
        uVar7 = (uint)((ulong)((long)plVar6 - (long)plVar10) >> 3);
      }
      if (uVar7 != 0) {
        (**(code **)(*(long *)*plVar5 + 0x28))((long *)*plVar5,plVar5[2]);
      }
      *(undefined4 *)(plVar5 + 3) = 0;
      *(undefined4 *)(plVar5 + 1) = 0;
    }
    *(undefined4 *)(plVar5 + 3) = 0;
    if ((-1 < (int)*(uint *)((long)plVar5 + 0x1c)) && (plVar5[2] != 0)) {
      (**(code **)(*(long *)puVar4 + 0x18))
                (puVar4,plVar5[2],((ulong)*(uint *)((long)plVar5 + 0x1c) & 0x3fffffff) << 3);
    }
    plVar5[2] = 0;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0x80000000;
    lVar12 = tpidr_el0;
    lVar13 = *(long *)(lVar12 + 0x38d490);
    if (lVar13 == 0) {
      lVar13 = FUN_0333d16c(0,1);
      *(long *)(lVar12 + 0x38d490) = lVar13;
    }
    plVar6 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
    (**(code **)(*plVar6 + 0x18))(plVar6,plVar5,0x100);
  }
  plVar5 = (long *)param_1[5];
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar6 = plVar5 + 2;
    do {
      lVar12 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


