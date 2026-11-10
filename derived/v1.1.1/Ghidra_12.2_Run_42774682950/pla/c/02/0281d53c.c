/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0281d53c; name: FUN_0281d53c
 */


void FUN_0281d53c(long param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  long *local_c8;
  undefined4 local_bc;
  long *local_b8;
  long *local_b0;
  undefined4 local_a4;
  undefined1 local_a0 [16];
  long *local_88;
  long *local_80;
  long *local_78;
  undefined1 local_70 [16];
  long local_60;
  long *local_58;
  long *local_50;
  
  puVar10 = (undefined8 *)**(long **)(param_1 + 0x838);
  puVar4 = (undefined8 *)(*(long **)(param_1 + 0x838))[1];
  if ((puVar10 == puVar4) ||
     (*(char *)(puVar10 + 4) == '\0' && *(int *)((long)puVar10 + 0x24) == -1)) {
    puVar11 = puVar10;
  }
  else {
    puVar2 = puVar10 + 6;
    do {
      puVar11 = puVar2;
      if (puVar4 == puVar11) {
        puVar11 = puVar4;
        goto LAB_0281d5a8;
      }
      puVar2 = puVar11 + 6;
    } while ((*(char *)(puVar11 + 4) != '\0') || (*(int *)((long)puVar11 + 0x24) != -1));
  }
LAB_0281d5a8:
  lVar12 = *(long *)(param_1 + 0x8b0);
  puVar2 = (undefined8 *)0x0;
  if (puVar4 != puVar11) {
    puVar2 = puVar11;
  }
  piVar1 = (int *)(lVar12 + 0x20);
  if (*(int *)(lVar12 + 0x28) != 0) {
    piVar1 = (int *)(lVar12 + 0x24);
  }
  if ((puVar10 != puVar4) &&
     (iVar7 = *(int *)(lVar12 + 0x14) + *piVar1 * *(int *)(lVar12 + 0x10),
     *(char *)(puVar10 + 4) != '\0' || *(int *)((long)puVar10 + 0x24) != iVar7)) {
    puVar11 = puVar10 + 6;
    do {
      puVar10 = puVar11;
      if (puVar4 == puVar10) {
        puVar10 = puVar4;
        goto LAB_0281d61c;
      }
      puVar11 = puVar10 + 6;
    } while ((*(char *)(puVar10 + 4) != '\0') || (*(int *)((long)puVar10 + 0x24) != iVar7));
  }
LAB_0281d61c:
  puVar11 = (undefined8 *)0x0;
  if (puVar4 != puVar10) {
    puVar11 = puVar10;
  }
  if ((puVar2 != (undefined8 *)0x0) && (puVar11 != (undefined8 *)0x0)) {
    uVar13 = *puVar2;
    uVar15 = puVar2[1];
    uVar3 = puVar2[2];
    plVar14 = (long *)puVar2[3];
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
    local_70._0_8_ = local_a0;
    local_a0._0_8_ = (long *)0x0;
    local_70._8_8_ = uVar13;
    local_60 = uVar15;
    local_58 = (long *)uVar3;
    local_50 = plVar14;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
    FUN_02813244(param_1,local_70,0);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    uVar13 = local_a0._0_8_;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x20))(plVar14);
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
    local_78 = (long *)uVar13;
    uVar3 = *puVar11;
    uVar5 = puVar11[1];
    uVar15 = puVar11[2];
    plVar14 = (long *)puVar11[3];
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
    local_70._0_8_ = local_a0;
    local_a0._0_8_ = (long *)0x0;
    local_70._8_8_ = uVar3;
    local_60 = uVar5;
    local_58 = (long *)uVar15;
    local_50 = plVar14;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
    FUN_02813244(param_1,local_70,0);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    uVar3 = local_a0._0_8_;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x20))(plVar14);
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
    local_80 = (long *)uVar3;
    local_70._0_8_ = *(long *)(uVar3 + 0xa8);
    plVar14 = *(long **)(param_1 + 0xe8);
    local_70._8_8_ = *(long *)(uVar3 + 0xb0);
    local_60 = *(long *)(uVar3 + 0xb8);
    local_58 = *(long **)(uVar3 + 0xc0);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x18))();
    }
    (**(code **)(*plVar14 + 0x98))(plVar14,param_1 + 0x718,local_70);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    auVar16 = (**(code **)(*(long *)uVar3 + 0x48))(uVar3);
    *(undefined1 (*) [16])(param_1 + 0x950) = auVar16;
    uVar15 = *(undefined8 *)(param_1 + 8);
    local_70 = (**(code **)(*(long *)uVar13 + 0x48))(uVar13);
    local_a0 = (**(code **)(*(long *)uVar3 + 0x48))(uVar3);
    local_b8 = (long *)CONCAT44(local_b8._4_4_,5);
    local_a4 = 2;
    FUN_0281da20(&local_88,uVar15,&local_78,local_70,local_a0,&local_b8,&local_a4);
    local_b0 = local_88;
    local_88 = (long *)0x0;
    FUN_0115b43c(*(undefined8 *)(param_1 + 0x878),&local_b0,0x40);
    if (local_b0 != (long *)0x0) {
      lVar12 = local_b0[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = iVar7 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_b0 + 0x20))();
      }
    }
    plVar14 = local_80;
    uVar6 = *(undefined4 *)(param_1 + 0x940);
    auVar16 = (**(code **)(*local_80 + 0x48))(local_80);
    local_a0 = auVar16;
    FUN_0281da98(param_1,uVar6,local_a0,param_1 + 0x960,local_70);
    uVar13 = *(undefined8 *)(param_1 + 8);
    auVar16 = (**(code **)(*plVar14 + 0x48))(plVar14);
    local_a4 = 5;
    local_bc = 2;
    local_a0 = auVar16;
    FUN_0281dbd0(&local_b8,uVar13,&local_80,local_a0,local_70,&local_a4,&local_bc);
    local_c8 = local_b8;
    local_b8 = (long *)0x0;
    FUN_0115b43c(*(undefined8 *)(param_1 + 0x878),&local_c8,0x40);
    if (local_c8 != (long *)0x0) {
      lVar12 = local_c8[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = iVar7 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_c8 + 0x20))();
      }
    }
    if (local_b8 != (long *)0x0) {
      lVar12 = local_b8[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = iVar7 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_b8 + 0x20))();
      }
    }
    if (local_88 != (long *)0x0) {
      lVar12 = local_88[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = iVar7 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_88 + 0x20))();
      }
    }
  }
  return;
}


