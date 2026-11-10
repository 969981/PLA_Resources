/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0281de38; name: FUN_0281de38
 */


void FUN_0281de38(long param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 uVar7;
  char cVar8;
  bool bVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  long *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  long *local_88;
  undefined1 local_80 [16];
  long **local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_50;
  long *local_38;
  
  puVar12 = (undefined8 *)**(long **)(param_1 + 0x838);
  puVar4 = (undefined8 *)(*(long **)(param_1 + 0x838))[1];
  if ((puVar12 != puVar4) &&
     (*(char *)(puVar12 + 4) != '\0' || *(int *)((long)puVar12 + 0x24) != -1)) {
    puVar10 = puVar12 + 6;
    do {
      puVar12 = puVar10;
      if (puVar4 == puVar12) {
        puVar12 = puVar4;
        goto LAB_0281dea4;
      }
      puVar10 = puVar12 + 6;
    } while ((*(char *)(puVar12 + 4) != '\0') || (*(int *)((long)puVar12 + 0x24) != -1));
  }
LAB_0281dea4:
  if (puVar12 != (undefined8 *)0x0 && puVar4 != puVar12) {
    uVar3 = *puVar12;
    uVar5 = puVar12[1];
    uVar13 = puVar12[2];
    plVar6 = (long *)puVar12[3];
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    local_70 = (long **)local_80;
    local_80._0_8_ = (long *)0x0;
    uStack_68 = uVar3;
    local_60 = uVar5;
    uStack_58 = uVar13;
    local_50 = plVar6;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    FUN_02813244(param_1,&local_70,0);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    uVar3 = local_80._0_8_;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))(plVar6);
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
    local_38 = (long *)uVar3;
    uVar7 = *(undefined4 *)(param_1 + 0x940);
    local_80 = (**(code **)(*(long *)uVar3 + 0x48))(uVar3);
    FUN_0281da98(param_1,uVar7,local_80,param_1 + 0x950,&local_70);
    uVar13 = *(undefined8 *)(param_1 + 8);
    auVar14 = (**(code **)(*(long *)uVar3 + 0x48))(uVar3);
    local_8c = 5;
    local_90 = 2;
    local_80 = auVar14;
    FUN_0281dbd0(&local_88,uVar13,&local_38,local_80,&local_70,&local_8c,&local_90);
    local_98 = local_88;
    local_88 = (long *)0x0;
    FUN_0115b43c(*(undefined8 *)(param_1 + 0x878),&local_98,0x40);
    if (local_98 != (long *)0x0) {
      lVar11 = local_98[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = iVar2 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_98 + 0x20))();
      }
    }
    if (local_88 != (long *)0x0) {
      lVar11 = local_88[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = iVar2 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_88 + 0x20))();
      }
    }
  }
  return;
}


