/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0280e96c; name: FUN_0280e96c
 */


void FUN_0280e96c(long param_1,int param_2,int param_3,undefined1 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  long *plVar15;
  long *local_90;
  long *local_88;
  undefined8 local_80;
  int local_78;
  int iStack_74;
  long **local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_50;
  long *local_48;
  
  lVar10 = *(long *)(param_1 + 0x468);
  iVar12 = *(int *)(lVar10 + 0x1c);
  if (iVar12 == 0) {
    iVar4 = *(int *)(lVar10 + 0xc);
    iStack_74 = 0;
    if (iVar4 != 0) {
      iStack_74 = param_3 / iVar4;
    }
    local_78 = param_3 - iStack_74 * iVar4;
  }
  else {
    iVar4 = *(int *)(lVar10 + 0x10);
    local_78 = 0;
    if (iVar4 != 0) {
      local_78 = param_3 / iVar4;
    }
    iStack_74 = param_3 - local_78 * iVar4;
  }
  if (iVar12 == 0) {
    iVar14 = *(int *)(lVar10 + 0xc);
    iVar4 = 0;
    if (iVar14 != 0) {
      iVar4 = param_2 / iVar14;
    }
    iVar14 = param_2 - iVar4 * iVar14;
  }
  else {
    iVar4 = *(int *)(lVar10 + 0x10);
    iVar14 = 0;
    if (iVar4 != 0) {
      iVar14 = param_2 / iVar4;
    }
    iVar4 = param_2 - iVar14 * iVar4;
  }
  local_80 = CONCAT44(iVar4,iVar14);
  if (*(code **)(param_1 + 0x100) != (code *)0x0) {
    local_70 = (long **)(CONCAT71(local_70._1_7_,param_4) & 0xffffffffffffff01);
    (**(code **)(param_1 + 0x100))(param_1 + 0x120,&local_80,&local_78,&local_70);
    lVar10 = *(long *)(param_1 + 0x468);
    iVar12 = *(int *)(lVar10 + 0x1c);
  }
  if (iVar12 == 0) {
    uVar13 = local_78 + *(int *)(lVar10 + 0xc) * iStack_74;
  }
  else {
    uVar13 = iStack_74 + *(int *)(lVar10 + 0x10) * local_78;
  }
  puVar11 = (undefined8 *)(*(long *)(*(long *)(lVar10 + 0x40) + 0x20) + (ulong)uVar13 * 0x28);
  uVar9 = *puVar11;
  uVar3 = puVar11[1];
  uVar2 = puVar11[2];
  plVar15 = (long *)puVar11[3];
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x18))(plVar15);
    (**(code **)(*plVar15 + 0x18))(plVar15);
  }
  local_70 = &local_48;
  local_48 = (long *)0x0;
  uStack_68 = uVar9;
  local_60 = uVar3;
  uStack_58 = uVar2;
  local_50 = plVar15;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x18))(plVar15);
  }
  FUN_02813244(param_1,&local_70,0);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  plVar7 = local_48;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x20))(plVar15);
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  lVar10 = *(long *)(param_1 + 0x468);
  if (*(int *)(lVar10 + 0x1c) == 0) {
    uVar13 = (int)local_80 + *(int *)(lVar10 + 0xc) * local_80._4_4_;
  }
  else {
    uVar13 = local_80._4_4_ + *(int *)(lVar10 + 0x10) * (int)local_80;
  }
  puVar11 = (undefined8 *)(*(long *)(*(long *)(lVar10 + 0x40) + 0x20) + (ulong)uVar13 * 0x28);
  uVar9 = *puVar11;
  uVar3 = puVar11[1];
  uVar2 = puVar11[2];
  plVar15 = (long *)puVar11[3];
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x18))(plVar15);
    (**(code **)(*plVar15 + 0x18))(plVar15);
  }
  local_70 = &local_48;
  local_48 = (long *)0x0;
  uStack_68 = uVar9;
  local_60 = uVar3;
  uStack_58 = uVar2;
  local_50 = plVar15;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x18))(plVar15);
  }
  FUN_02813244(param_1,&local_70,0);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  plVar8 = local_48;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x20))(plVar15);
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0xe8))(plVar7);
  }
  plVar15 = *(long **)(param_1 + 0x408);
  if (plVar15 != (long *)0x0) {
    local_88 = plVar7;
    if (plVar7 != (long *)0x0) {
      lVar10 = plVar7[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_0280ed2c;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar9;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    local_90 = plVar8;
    if (plVar8 != (long *)0x0) {
      lVar10 = plVar8[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_0280ed2c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar9;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    (**(code **)(*plVar15 + 0xf8))(plVar15,&local_88,&local_90);
    if (local_90 != (long *)0x0) {
      lVar10 = local_90[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_90 + 0x20))();
      }
    }
    if (local_88 != (long *)0x0) {
      lVar10 = local_88[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_88 + 0x20))();
      }
    }
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0xe0))(plVar8);
  }
  return;
}


