/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0099db74; name: FUN_0099db74
 */


void FUN_0099db74(undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
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
    plVar10 = (long *)0x0;
  }
  else {
    lVar9 = local_68[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_0099de20;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    plVar10 = local_68;
  }
  plVar3 = local_68;
  FUN_0099da4c(&local_70,param_3);
  FUN_02a47560(local_90,&local_70);
  FUN_00adc9e8(plVar10,local_90,*(undefined8 *)(param_2 + 8));
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
    plVar10 = plVar3;
  }
  lVar9 = plVar10[0xb];
  local_90[0] = plVar10;
  if (*(undefined8 **)(lVar9 + 0x18) != (undefined8 *)0x0) {
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar8;
    }
    plVar10 = local_90[0];
    piVar1 = (int *)(lVar9 + 0xc);
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
        && (*(int *)(param_2 + 0x7b8) == 1)) && (lVar9 = FUN_0099d310(plVar10 + 10), lVar9 != 0)) {
      uVar12 = *(undefined4 *)(param_2 + 0x7c0);
      *(undefined4 *)(lVar9 + 0xf0) = uVar12;
      plVar4 = *(long **)(lVar9 + 0x80);
      for (plVar3 = *(long **)(lVar9 + 0x78); plVar3 != plVar4; plVar3 = plVar3 + 1) {
        puVar11 = *(undefined8 **)(*plVar3 + 0xe0);
        puVar5 = *(undefined8 **)(*plVar3 + 0xe8);
        if ((puVar11 != puVar5) &&
           ((**(code **)(*(long *)*puVar11 + 0x90))(uVar12), puVar11 + 1 != puVar5)) {
          (**(code **)(*(long *)puVar11[1] + 0x90))(uVar12);
          for (puVar11 = puVar11 + 2; puVar11 != puVar5; puVar11 = puVar11 + 1) {
            (**(code **)(*(long *)*puVar11 + 0x90))(uVar12);
          }
        }
      }
    }
    if (plVar10 != (long *)0x0) {
      lVar9 = plVar10[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
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
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
    }
    FUN_0099dafc(param_1,*(undefined8 *)(param_2 + 8),&local_68);
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    if (local_68 != (long *)0x0) {
      lVar9 = local_68[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
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
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
      }
    }
    return;
  }
LAB_0099de20:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


