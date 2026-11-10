/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031834ac; name: FUN_031834ac
 */


void FUN_031834ac(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  void *pvVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  undefined8 uVar14;
  undefined4 *local_48;
  int local_38;
  int local_34;
  
  *param_1 = 0;
  lVar11 = param_2[1];
  param_1[1] = lVar11;
  if ((lVar11 != 0) && (*(long *)(lVar11 + 8) != 0)) {
    plVar5 = (long *)(lVar11 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar11 = param_2[2];
  param_1[2] = lVar11;
  if ((lVar11 != 0) && (*(long *)(lVar11 + 8) != 0)) {
    plVar5 = (long *)(lVar11 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(int *)(param_1 + 3) = (int)param_2[3];
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_2 + 0x1c);
  lVar11 = param_2[0xf];
  param_1[0xd] = param_2[0xd];
  param_1[0xf] = lVar11;
  lVar11 = param_2[0xb];
  param_1[9] = param_2[9];
  param_1[0xb] = lVar11;
  lVar11 = param_2[7];
  param_1[5] = param_2[5];
  param_1[7] = lVar11;
  lVar11 = param_2[4];
  param_1[6] = param_2[6];
  param_1[4] = lVar11;
  lVar11 = param_2[8];
  param_1[10] = param_2[10];
  param_1[8] = lVar11;
  lVar11 = param_2[0xc];
  param_1[0xe] = param_2[0xe];
  param_1[0xc] = lVar11;
  *(char *)(param_1 + 0x10) = (char)param_2[0x10];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x14] = 0;
  param_1[0x15] = -0x8000000000000000;
  puVar4 = PTR_PTR_0434a080;
  iVar13 = (int)param_2[0x15];
  local_48 = (undefined4 *)param_2[0x14];
  local_38 = iVar13;
  if (iVar13 < 1) {
    param_1[0x14] = 0;
    param_1[0x15] = -0x8000000000000000;
  }
  else {
    puVar8 = (undefined4 *)FUN_032cf190(PTR_PTR_0434a080,8,&local_38);
    param_1[0x14] = (long)puVar8;
    *(int *)(param_1 + 0x15) = iVar13;
    *(int *)((long)param_1 + 0xac) = local_38;
    do {
      iVar13 = iVar13 + -1;
      *puVar8 = *local_48;
      puVar8[1] = local_48[1];
      local_48 = local_48 + 2;
      puVar8 = puVar8 + 2;
    } while (iVar13 != 0);
  }
  if (*(int *)(param_2[0x16] + 4) == -2) {
    param_1[0x16] = (long)&DAT_03aad864;
    *(undefined4 *)(param_1 + 0x17) = 0;
  }
  else {
    *(int *)(param_1 + 0x17) = (int)param_2[0x17];
    lVar6 = param_2[0x17];
    lVar11 = tpidr_el0;
    lVar12 = *(long *)(lVar11 + 0x38d490);
    if (lVar12 == 0) {
      lVar12 = FUN_0333d16c(0,1);
      *(long *)(lVar11 + 0x38d490) = lVar12;
    }
    pvVar9 = (void *)FUN_032cf2d8(*(undefined8 *)(*(long *)(lVar12 + 8) + 0x58),8,(int)lVar6 + 1);
    param_1[0x16] = (long)pvVar9;
    memcpy(pvVar9,(void *)param_2[0x16],(long)(int)param_2[0x17] * 8 + 8);
  }
  param_1[0x18] = 0;
  param_1[0x19] = -0x8000000000000000;
  iVar13 = (int)param_2[0x19];
  local_48 = (undefined4 *)param_2[0x18];
  local_34 = iVar13;
  if (iVar13 < 1) {
    param_1[0x18] = 0;
    param_1[0x19] = -0x8000000000000000;
  }
  else {
    puVar8 = (undefined4 *)FUN_032cf190(puVar4,0x10,&local_34);
    iVar10 = 0;
    param_1[0x18] = (long)puVar8;
    *(int *)(param_1 + 0x19) = iVar13;
    *(int *)((long)param_1 + 0xcc) = local_34;
    do {
      *puVar8 = *local_48;
      lVar11 = *(long *)(local_48 + 2);
      *(long *)(puVar8 + 2) = lVar11;
      puVar8 = puVar8 + 4;
      local_48 = local_48 + 4;
      if ((lVar11 != 0) && (*(long *)(lVar11 + 8) != 0)) {
        plVar5 = (long *)(lVar11 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != iVar13);
  }
  if (*(int *)(param_2[0x1a] + 4) == -2) {
    param_1[0x1a] = (long)&DAT_03aad864;
    *(undefined4 *)(param_1 + 0x1b) = 0;
  }
  else {
    *(int *)(param_1 + 0x1b) = (int)param_2[0x1b];
    lVar6 = param_2[0x1b];
    lVar11 = tpidr_el0;
    lVar12 = *(long *)(lVar11 + 0x38d490);
    if (lVar12 == 0) {
      lVar12 = FUN_0333d16c(0,1);
      *(long *)(lVar11 + 0x38d490) = lVar12;
    }
    pvVar9 = (void *)FUN_032cf2d8(*(undefined8 *)(*(long *)(lVar12 + 8) + 0x58),8,(int)lVar6 + 1);
    param_1[0x1a] = (long)pvVar9;
    memcpy(pvVar9,(void *)param_2[0x1a],(long)(int)param_2[0x1b] * 8 + 8);
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  lVar11 = *param_2;
  if (lVar11 == 0) {
LAB_03183668:
    lVar11 = param_2[2];
  }
  else {
    lVar6 = tpidr_el0;
    lVar12 = *(long *)(lVar6 + 0x38d490);
    if (lVar12 == 0) {
      lVar12 = FUN_0333d16c(0,1);
      *(long *)(lVar6 + 0x38d490) = lVar12;
    }
    plVar5 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
    lVar6 = (**(code **)(*plVar5 + 0x10))(plVar5,0xd0,0);
    FUN_0318bfbc(lVar6,lVar11);
    plVar5 = (long *)*param_1;
    *param_1 = lVar6;
    if ((plVar5 == (long *)0x0) || (plVar5[1] == 0)) goto LAB_03183668;
    plVar1 = plVar5 + 2;
    do {
      lVar11 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 + -1 != 0) goto LAB_03183668;
    (**(code **)(*plVar5 + 0x18))();
    lVar11 = param_2[2];
  }
  if (lVar11 != 0) {
    lVar6 = tpidr_el0;
    lVar12 = *(long *)(lVar6 + 0x38d490);
    if (lVar12 == 0) {
      lVar12 = FUN_0333d16c(0,1);
      *(long *)(lVar6 + 0x38d490) = lVar12;
    }
    plVar5 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
    puVar7 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,0x90,0);
    *puVar7 = &PTR_LAB_0430b098;
    puVar7[1] = 0xffffffff;
    puVar7[2] = 1;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    *(undefined1 *)(puVar7 + 6) = 1;
    *(undefined1 *)(puVar7 + 0x10) = 0;
    *(undefined1 *)(puVar7 + 6) = 0;
    lVar6 = *(long *)(lVar11 + 0x20);
    if (lVar6 != 0) {
      if (*(long *)(lVar6 + 8) == 0) {
        puVar7[4] = lVar6;
      }
      else {
        plVar5 = (long *)(lVar6 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar5 = (long *)puVar7[4];
        puVar7[4] = *(undefined8 *)(lVar11 + 0x20);
        if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
          plVar1 = plVar5 + 2;
          do {
            lVar6 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar6 + -1 == 0) {
            (**(code **)(*plVar5 + 0x18))();
          }
        }
      }
    }
    *(undefined1 *)(lVar11 + 0x30) = 0;
    uVar14 = *(undefined8 *)(lVar11 + 0x40);
    puVar7[9] = *(undefined8 *)(lVar11 + 0x48);
    puVar7[8] = uVar14;
    uVar14 = *(undefined8 *)(lVar11 + 0x50);
    puVar7[0xb] = *(undefined8 *)(lVar11 + 0x58);
    puVar7[10] = uVar14;
    uVar14 = *(undefined8 *)(lVar11 + 0x60);
    puVar7[0xd] = *(undefined8 *)(lVar11 + 0x68);
    puVar7[0xc] = uVar14;
    uVar14 = *(undefined8 *)(lVar11 + 0x70);
    puVar7[0xf] = *(undefined8 *)(lVar11 + 0x78);
    puVar7[0xe] = uVar14;
    plVar5 = (long *)param_1[2];
    param_1[2] = (long)puVar7;
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar1 = plVar5 + 2;
      do {
        lVar11 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))();
        lVar11 = param_2[1];
        goto joined_r0x031837f0;
      }
    }
  }
  lVar11 = param_2[1];
joined_r0x031837f0:
  if (lVar11 != 0) {
    lVar6 = tpidr_el0;
    lVar12 = *(long *)(lVar6 + 0x38d490);
    if (lVar12 == 0) {
      lVar12 = FUN_0333d16c(0,1);
      *(long *)(lVar6 + 0x38d490) = lVar12;
    }
    plVar5 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
    lVar6 = (**(code **)(*plVar5 + 0x10))(plVar5,0x70,0);
    FUN_031a480c(lVar6,lVar11);
    plVar5 = (long *)param_1[1];
    param_1[1] = lVar6;
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar1 = plVar5 + 2;
      do {
        lVar11 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))();
      }
    }
  }
  return;
}


