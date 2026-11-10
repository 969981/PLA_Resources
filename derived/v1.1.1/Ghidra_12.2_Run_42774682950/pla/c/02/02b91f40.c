/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b91f40; name: FUN_02b91f40
 */


void FUN_02b91f40(long param_1,long *param_2)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  long local_78;
  undefined8 uStack_70;
  long *local_68;
  long local_58;
  
  lVar5 = nn::os::GetCurrentThread();
  plVar12 = (long *)(param_1 + 0x10);
  do {
    if (*plVar12 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 4));
        while (*plVar12 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_02b91fb0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar4) {
      *plVar12 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02b91fb0:
  local_78 = param_2[6];
  local_58 = param_2[7];
  plVar12 = (long *)(param_1 + 0xb0);
  if (((long *)*plVar12 == (long *)0x0) || ((long *)*plVar12 == plVar12)) {
    FUN_02b92d44(param_1 + 0x18,&local_78,&local_58);
    uVar7 = (*(long *)(param_1 + 0x60) + *(long *)(param_1 + 0x58)) - 1;
    puVar14 = (undefined8 *)
              (*(long *)(*(long *)(param_1 + 0x20) + (uVar7 / 0x38) * 8) + (uVar7 % 0x38) * 0x48);
  }
  else {
    puVar14 = *(undefined8 **)(param_1 + 0xb8);
    puVar14[6] = local_78;
    puVar14[7] = local_58;
    plVar6 = *(long **)(param_1 + 0xb8);
    lVar5 = *plVar6;
    plVar13 = (long *)plVar6[1];
    *plVar13 = lVar5;
    *(long **)(lVar5 + 8) = plVar13;
    *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + -1;
    *plVar6 = 0;
    plVar6[1] = 0;
  }
  if ((param_2 != *(long **)(param_1 + 0x98)) && (plVar13 = (long *)param_2[1], plVar13[2] != 0)) {
    plVar6 = plVar13 + 2;
    puVar14[7] = puVar14[7] + plVar13[7];
    puVar14[6] = plVar13[6];
    lVar5 = plVar13[4];
    if (lVar5 == 0) {
      plVar11 = plVar6;
      do {
        bVar4 = plVar11 == (long *)((long *)*plVar11)[2];
        plVar11 = (long *)*plVar11;
      } while (bVar4);
    }
    else {
      do {
        lVar5 = *(long *)(lVar5 + 8);
      } while (lVar5 != 0);
    }
    FUN_02b93c98(param_1 + 200,plVar6,&local_78);
    if (local_68 == plVar6) {
      iVar2 = (int)plVar13[5];
    }
    else {
      iVar2 = (int)local_68[3];
      *(int *)(local_68 + 3) = (int)plVar13[5];
    }
    if (iVar2 != 0) {
      FUN_02b93df4(param_1 + 200,local_78,uStack_70);
    }
    *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + -1;
    plVar13[3] = 0;
    plVar13[4] = 0;
    *plVar6 = 0;
    lVar5 = *plVar13;
    plVar6 = (long *)plVar13[1];
    *plVar6 = lVar5;
    *(long **)(lVar5 + 8) = plVar6;
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + -1;
    *plVar13 = 0;
    plVar13[1] = 0;
    if (DAT_043f1790 == (undefined **)0x0) {
      DAT_043f1790 = &PTR_PTR_042868c8;
    }
    (**(code **)(*DAT_043f1790 + 8))(DAT_043f1790,(int)plVar13[8]);
    *(undefined4 *)(plVar13 + 8) = 0xffffffff;
    puVar8 = *(undefined8 **)(param_1 + 0xb8);
    *plVar13 = (long)plVar12;
    plVar13[1] = (long)puVar8;
    *(long **)(param_1 + 0xb8) = plVar13;
    *puVar8 = plVar13;
    *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + 1;
  }
  plVar6 = (long *)*param_2;
  plVar13 = (long *)(param_1 + 0x98);
  if ((plVar13 != plVar6) && (plVar6[2] != 0)) {
    plVar11 = plVar6 + 2;
    puVar14[7] = puVar14[7] + plVar6[7];
    lVar5 = plVar6[4];
    if (lVar5 == 0) {
      plVar9 = plVar11;
      do {
        bVar4 = plVar9 == (long *)((long *)*plVar9)[2];
        plVar9 = (long *)*plVar9;
      } while (bVar4);
    }
    else {
      do {
        lVar5 = *(long *)(lVar5 + 8);
      } while (lVar5 != 0);
    }
    FUN_02b93c98(param_1 + 200,plVar11,&local_78);
    if (local_68 == plVar11) {
      iVar2 = (int)plVar6[5];
    }
    else {
      iVar2 = (int)local_68[3];
      *(int *)(local_68 + 3) = (int)plVar6[5];
    }
    if (iVar2 != 0) {
      FUN_02b93df4(param_1 + 200,local_78,uStack_70);
    }
    *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + -1;
    plVar6[3] = 0;
    plVar6[4] = 0;
    *plVar11 = 0;
    lVar5 = *plVar6;
    plVar11 = (long *)plVar6[1];
    *plVar11 = lVar5;
    *(long **)(lVar5 + 8) = plVar11;
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + -1;
    *plVar6 = 0;
    plVar6[1] = 0;
    if (DAT_043f1790 == (undefined **)0x0) {
      DAT_043f1790 = &PTR_PTR_042868c8;
    }
    (**(code **)(*DAT_043f1790 + 8))(DAT_043f1790,(int)plVar6[8]);
    *(undefined4 *)(plVar6 + 8) = 0xffffffff;
    puVar8 = *(undefined8 **)(param_1 + 0xb8);
    *plVar6 = (long)plVar12;
    plVar6[1] = (long)puVar8;
    *(long **)(param_1 + 0xb8) = plVar6;
    *puVar8 = plVar6;
    *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + 1;
  }
  puVar8 = (undefined8 *)param_2[1];
  *puVar14 = param_2;
  puVar14[1] = puVar8;
  param_2[1] = (long)puVar14;
  *puVar8 = puVar14;
  plVar6 = (long *)(param_1 + 200);
  puVar8 = puVar14 + 2;
  *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + 1;
  if ((long *)*plVar6 != (long *)0x0) {
    plVar11 = (long *)*plVar6;
    do {
      plVar9 = plVar11;
      lVar5 = 8;
      if ((ulong)plVar9[5] <= (ulong)puVar14[7]) {
        lVar5 = 0x10;
      }
      plVar11 = *(long **)((long)plVar9 + lVar5);
    } while (*(long **)((long)plVar9 + lVar5) != (long *)0x0);
    if (plVar9 != plVar6) {
      if ((ulong)puVar14[7] < (ulong)plVar9[5]) {
        plVar9[1] = (long)puVar8;
        if (plVar9 == *(long **)(param_1 + 0xd0)) {
          *(undefined8 **)(param_1 + 0xd0) = puVar8;
        }
      }
      else {
        plVar9[2] = (long)puVar8;
        if (plVar9 == *(long **)(param_1 + 0xd8)) {
          *(undefined8 **)(param_1 + 0xd8) = puVar8;
        }
      }
      goto LAB_02b922fc;
    }
  }
  *(undefined8 **)(param_1 + 0xd0) = puVar8;
  *(undefined8 **)(param_1 + 0xd8) = puVar8;
  *(undefined8 **)(param_1 + 200) = puVar8;
  plVar9 = plVar6;
LAB_02b922fc:
  puVar14[2] = plVar9;
  puVar14[3] = 0;
  puVar14[4] = 0;
  FUN_02b92bec(plVar6);
  *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 1;
  lVar5 = *param_2;
  plVar11 = (long *)param_2[1];
  *plVar11 = lVar5;
  *(long **)(lVar5 + 8) = plVar11;
  *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + -1;
  *param_2 = 0;
  param_2[1] = 0;
  if (DAT_043f1790 == (undefined **)0x0) {
    DAT_043f1790 = &PTR_PTR_042868c8;
  }
  (**(code **)(*DAT_043f1790 + 8))(DAT_043f1790,(int)param_2[8]);
  *(undefined4 *)(param_2 + 8) = 0xffffffff;
  puVar14 = *(undefined8 **)(param_1 + 0xb8);
  *param_2 = (long)plVar12;
  param_2[1] = (long)puVar14;
  *(long **)(param_1 + 0xb8) = param_2;
  *puVar14 = param_2;
  *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + 1;
  if (*(char *)(param_1 + 0xe8) != '\0') {
    plVar12 = *(long **)(param_1 + 0x98);
    if (plVar13 == plVar12) {
      lVar5 = 0;
    }
    else {
      lVar5 = 0;
      plVar11 = plVar12;
      do {
        if (plVar11[6] != lVar5) goto LAB_02b92434;
        lVar5 = plVar11[7] + lVar5;
        plVar11 = (long *)*plVar11;
      } while (plVar13 != plVar11);
    }
    if (lVar5 == *(long *)(param_1 + 0xf0)) {
      plVar11 = *(long **)(param_1 + 0xd0);
      if (plVar11 != plVar6) {
        uVar7 = 0;
        do {
          puVar1 = (ulong *)(plVar11 + 5);
          if (*puVar1 < uVar7) goto LAB_02b92434;
          plVar9 = (long *)plVar11[2];
          if ((long *)plVar11[2] == (long *)0x0) {
            do {
              plVar9 = plVar11;
              plVar10 = (long *)*plVar9;
              plVar11 = plVar10;
            } while (plVar9 == (long *)plVar10[2]);
            plVar11 = plVar9;
            if ((long *)plVar9[2] != plVar10) {
              plVar11 = plVar10;
            }
          }
          else {
            do {
              plVar11 = plVar9;
              plVar9 = (long *)plVar11[1];
            } while ((long *)plVar11[1] != (long *)0x0);
          }
          uVar7 = *puVar1;
        } while (plVar11 != plVar6);
      }
    }
    else {
LAB_02b92434:
      if (plVar13 != plVar12) {
        iVar2 = (int)plVar12[8];
        while( true ) {
          if (-1 < iVar2) {
            if (DAT_043f1790 == (undefined **)0x0) {
              DAT_043f1790 = &PTR_PTR_042868c8;
            }
            (**(code **)(*DAT_043f1790 + 0x10))();
          }
          plVar12 = (long *)*plVar12;
          if (plVar13 == plVar12) break;
          iVar2 = (int)plVar12[8];
        }
      }
      plVar12 = *(long **)(param_1 + 0xd0);
      while (plVar12 != plVar6) {
        while( true ) {
          plVar13 = (long *)plVar12[2];
          if ((long *)plVar12[2] != (long *)0x0) break;
          do {
            plVar13 = plVar12;
            plVar11 = (long *)*plVar13;
            plVar12 = plVar11;
          } while (plVar13 == (long *)plVar11[2]);
          plVar12 = plVar13;
          if ((long *)plVar13[2] != plVar11) {
            plVar12 = plVar11;
          }
          if (plVar12 == plVar6) goto LAB_02b924d0;
        }
        do {
          plVar12 = plVar13;
          plVar13 = (long *)plVar12[1];
        } while ((long *)plVar12[1] != (long *)0x0);
      }
    }
  }
LAB_02b924d0:
  *(undefined8 *)(param_1 + 0x10) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 4));
  return;
}


