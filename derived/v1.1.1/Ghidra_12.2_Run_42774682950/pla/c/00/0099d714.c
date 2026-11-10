/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0099d714; name: FUN_0099d714
 */


void FUN_0099d714(undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  char cVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *local_90 [3];
  long *local_78;
  long *local_70;
  long *local_68;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  
  local_90[0] = *(long **)(param_2 + 8);
  local_58[0] = param_5;
  local_54[0] = param_4;
  local_68 = (long *)FUN_009bb198(local_90[0],local_90,local_54,local_58);
  if (local_68 == (long *)0x0) {
    plVar11 = (long *)0x0;
  }
  else {
    lVar10 = local_68[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_0099da34;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    plVar11 = local_68;
  }
  FUN_0099da4c(&local_70,param_3);
  FUN_02a47560(local_90,&local_70);
  FUN_00adc9e8(plVar11,local_90,*(undefined8 *)(param_2 + 8));
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  lVar10 = FUN_00933eec(*(undefined8 *)(*(long *)(param_2 + 0x330) + 0xd0),local_54[0]);
  if (lVar10 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_02c5d638(*(undefined8 *)(*(long *)(lVar10 + 0x70) + 0x60));
  }
  (**(code **)(*plVar11 + 0xe0))(plVar11,0,uVar8);
  lVar10 = FUN_00933eec(*(undefined8 *)(*(long *)(param_2 + 0x330) + 0xd0),local_58[0]);
  if (lVar10 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_02c5d638(*(undefined8 *)(*(long *)(lVar10 + 0x70) + 0x60));
  }
  (**(code **)(*plVar11 + 0xe0))(plVar11,1,uVar8);
  lVar10 = plVar11[0xb];
  local_90[0] = plVar11;
  if (*(undefined8 **)(lVar10 + 0x18) != (undefined8 *)0x0) {
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar9;
    }
    plVar11 = local_90[0];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    *(undefined4 *)(local_90[0] + 0xd) = 1;
    FUN_0099ae98(param_2 + 0x4a0,local_90);
    if (((((*(byte *)(param_2 + 0x770) & 0x1f) != 0) || ((*(byte *)(param_2 + 0x768) & 0x1f) != 0))
        && (*(int *)(param_2 + 0x7b8) == 1)) && (lVar10 = FUN_0099d310(plVar11 + 10), lVar10 != 0))
    {
      uVar8 = *(undefined4 *)(param_2 + 0x7c0);
      *(undefined4 *)(lVar10 + 0xf0) = uVar8;
      plVar4 = *(long **)(lVar10 + 0x80);
      for (plVar3 = *(long **)(lVar10 + 0x78); plVar3 != plVar4; plVar3 = plVar3 + 1) {
        puVar12 = *(undefined8 **)(*plVar3 + 0xe0);
        puVar5 = *(undefined8 **)(*plVar3 + 0xe8);
        if ((puVar12 != puVar5) &&
           ((**(code **)(*(long *)*puVar12 + 0x90))(uVar8), puVar12 + 1 != puVar5)) {
          (**(code **)(*(long *)puVar12[1] + 0x90))(uVar8);
          for (puVar12 = puVar12 + 2; puVar12 != puVar5; puVar12 = puVar12 + 1) {
            (**(code **)(*(long *)*puVar12 + 0x90))(uVar8);
          }
        }
      }
    }
    if (plVar11 != (long *)0x0) {
      lVar10 = plVar11[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar2 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar11 + 0x20))(plVar11);
      }
    }
    FUN_0099dafc(param_1,*(undefined8 *)(param_2 + 8),&local_68);
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    if (local_68 != (long *)0x0) {
      lVar10 = local_68[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar2 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
      }
    }
    return;
  }
LAB_0099da34:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


