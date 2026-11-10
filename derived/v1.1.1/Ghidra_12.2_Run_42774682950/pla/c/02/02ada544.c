/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ada544; name: FUN_02ada544
 */


void FUN_02ada544(long *param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined1 *puVar13;
  long *plVar14;
  undefined1 *puVar15;
  long local_78;
  char *pcStack_70;
  undefined8 local_68;
  long *local_60;
  long *local_58;
  char *local_50;
  undefined8 local_48;
  long *local_40;
  undefined1 auStack_38 [8];
  long local_28;
  
  puVar6 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar6 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar8 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    if (*(long *)(lVar8 + 0x80) != 0) {
      lVar10 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_LAB_04282ec8;
  param_1[1] = lVar10;
  param_1[0xb] = (long)&PTR_LAB_04282f80;
  param_1[0xc] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = lVar10;
  param_1[9] = (long)&PTR_LAB_04282f50;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = lVar10;
  param_1[0x17] = 0;
  *(undefined2 *)(param_1 + 0x18) = 1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0x38e38e38e38e38e;
  param_1[0x14] = 0;
  local_48 = (ulong)local_48._4_4_ << 0x20;
  local_78 = DAT_043ef568;
  local_58 = (long *)0x20;
  local_50 = (char *)0x4;
  lVar8 = FUN_01b34908(&local_28,*(undefined8 *)(DAT_043ef568 + 8),&local_78);
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_02bbfe84(lVar8,&local_58,2,0,0);
  plVar9 = (long *)param_1[0xe];
  param_1[0xe] = 0;
  if (plVar9 != (long *)0x0) {
    plVar14 = plVar9 + 10;
    do {
      iVar7 = (int)*plVar14 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  param_1[0xe] = lVar8;
  local_58 = (long *)&DAT_2f37145f69622d7e;
  local_50 = "Skinning";
  local_48 = 0x1f;
  local_40 = (long *)0x0;
  local_78 = 0x1db521607460bdd8;
  pcStack_70 = "[Skinning]";
  local_68 = 10;
  local_60 = (long *)0x0;
  local_28 = DAT_043ef598;
  lVar8 = FUN_02b5a848(auStack_38,*(undefined8 *)(DAT_043ef598 + 8),&local_28,&local_78);
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (*local_50 != '\0') {
    FUN_02bba5e0(&local_28,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x58) + 0x58) + 0x78),
                 &local_58);
    plVar9 = *(long **)(lVar8 + 0x68);
    *(undefined8 *)(lVar8 + 0x68) = 0;
    if (plVar9 != (long *)0x0) {
      plVar14 = plVar9 + 10;
      do {
        iVar7 = (int)*plVar14 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *(int *)plVar14 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    *(long *)(lVar8 + 0x68) = local_28;
  }
  plVar9 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar9 != (long *)0x0) {
    plVar14 = plVar9 + 10;
    do {
      iVar7 = (int)*plVar14 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  param_1[0xd] = lVar8;
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  *(undefined4 *)(param_1[0xd] + 0xc0) = 1;
  FUN_02ba6340(*(undefined8 *)(param_1[0xd] + 0x60),0);
  plVar9 = *(long **)(DAT_043ef5a0 + 0x60);
  if (plVar9 != (long *)0x0) {
    plVar14 = plVar9 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar11 = *(undefined1 **)(plVar9[0xd] + 0xd0);
  if (puVar11 != (undefined1 *)0x0) {
    uVar12 = (long)puVar11 - ((ulong)puVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      puVar13 = (undefined1 *)((ulong)(puVar11 + -1) & 0x2f37145f69622d7e);
    }
    else {
      puVar13 = &DAT_2f37145f69622d7e;
      if (puVar11 < (undefined1 *)0x2f37145f69622d7f) {
        uVar5 = 0;
        if (puVar11 != (undefined1 *)0x0) {
          uVar5 = 0x2f37145f69622d7e / (ulong)puVar11;
        }
        puVar13 = &DAT_2f37145f69622d7e + -(uVar5 * (long)puVar11);
      }
    }
    plVar14 = *(long **)(*(long *)(plVar9[0xd] + 200) + (long)puVar13 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if ((undefined1 *)plVar14[1] == &DAT_2f37145f69622d7e) {
            if ((undefined1 *)plVar14[2] == &DAT_2f37145f69622d7e) goto LAB_02ada980;
          }
          else if ((undefined1 *)((ulong)plVar14[1] & (ulong)(puVar11 + -1)) != puVar13) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          puVar15 = (undefined1 *)plVar14[1];
          if (puVar15 == &DAT_2f37145f69622d7e) {
            if ((undefined1 *)plVar14[2] == &DAT_2f37145f69622d7e) goto LAB_02ada980;
          }
          else {
            if (puVar11 <= puVar15) {
              uVar12 = 0;
              if (puVar11 != (undefined1 *)0x0) {
                uVar12 = (ulong)puVar15 / (ulong)puVar11;
              }
              puVar15 = puVar15 + -(uVar12 * (long)puVar11);
            }
            if (puVar15 != puVar13) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
  local_58 = (long *)0x0;
LAB_02ada8c4:
  lVar8 = FUN_02ab8084(&local_78,param_1[1],&local_58);
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar14 = (long *)param_1[0x17];
  param_1[0x17] = 0;
  if (plVar14 != (long *)0x0) {
    plVar2 = plVar14 + 10;
    do {
      iVar7 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar14 + 0x10))();
    }
  }
  param_1[0x17] = lVar8;
  if (local_58 != (long *)0x0) {
    plVar14 = local_58 + 10;
    do {
      iVar7 = (int)*plVar14 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  if (plVar9 != (long *)0x0) {
    plVar14 = plVar9 + 10;
    do {
      iVar7 = (int)*plVar14 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  return;
LAB_02ada980:
  local_58 = (long *)plVar14[6];
  if (local_58 != (long *)0x0) {
    plVar14 = local_58 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  goto LAB_02ada8c4;
}


