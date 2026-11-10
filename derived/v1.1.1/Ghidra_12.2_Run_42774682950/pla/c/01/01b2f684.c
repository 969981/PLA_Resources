/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b2f684; name: FUN_01b2f684
 */


void FUN_01b2f684(long param_1,int param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6,int *param_7,long *param_8)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  long *plStack_2b8;
  undefined1 auStack_2b0 [592];
  
  plVar11 = (long *)*param_3;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  lVar7 = param_1 + (long)param_2 * 0x2b0;
  plVar5 = *(long **)(lVar7 + 0x278);
  *(undefined8 *)(lVar7 + 0x278) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  *(long **)(lVar7 + 0x278) = plVar11;
  lVar7 = (long)param_2;
  plVar11 = (long *)*param_4;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  lVar8 = param_1 + lVar7 * 0x2b0;
  plVar5 = *(long **)(lVar8 + 0x280);
  *(undefined8 *)(lVar8 + 0x280) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  lVar9 = param_1 + lVar7 * 0x2b0;
  *(long **)(lVar8 + 0x280) = plVar11;
  local_2d0 = *(undefined8 *)(lVar9 + 600);
  local_2c8 = *(undefined8 *)(lVar9 + 0x260);
  local_2c0 = *(undefined8 *)(lVar9 + 0x268);
  plVar11 = *(long **)(lVar9 + 0x270);
  plStack_2b8 = plVar11;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  plVar5 = (long *)*param_4;
  local_2d8 = plVar5;
  if (plVar5 == (long *)0x0) {
    FUN_01b30490(auStack_2b0,param_1,&local_2d0,&local_2d8,param_7);
    FUN_01b2aa30(param_1 + lVar7 * 0x2b0 + 0x2a8,auStack_2b0);
    FUN_01b2b168(auStack_2b0);
  }
  else {
    (**(code **)(*plVar5 + 0x18))(plVar5);
    FUN_01b30490(auStack_2b0,param_1,&local_2d0,&local_2d8,param_7);
    FUN_01b2aa30(param_1 + lVar7 * 0x2b0 + 0x2a8,auStack_2b0);
    FUN_01b2b168(auStack_2b0);
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  lVar8 = *param_8;
  if (lVar8 != 0) {
    lVar9 = *(long *)(lVar8 + 0x58);
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar11 = (long *)(param_1 + lVar7 * 0x2b0 + 0x4f0);
  plVar5 = (long *)*plVar11;
  *plVar11 = lVar8;
  if (plVar5 != (long *)0x0) {
    lVar8 = plVar5[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  if (*(ushort *)((long)param_7 - (long)*param_7) < 0x69) {
    bVar4 = false;
  }
  else {
    uVar10 = (ulong)((ushort *)((long)param_7 - (long)*param_7))[0x34];
    bVar4 = false;
    if (uVar10 != 0) {
      bVar4 = *(char *)((long)param_7 + uVar10) != '\0';
    }
  }
  *(bool *)(param_1 + lVar7 * 0x2b0 + 0x500) = bVar4;
  plVar11 = (long *)*param_5;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  lVar8 = param_1 + lVar7 * 0x2b0;
  plVar5 = *(long **)(lVar8 + 0x288);
  *(undefined8 *)(lVar8 + 0x288) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  *(long **)(lVar8 + 0x288) = plVar11;
  plVar11 = (long *)*param_6;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  lVar8 = param_1 + lVar7 * 0x2b0;
  plVar5 = *(long **)(lVar8 + 0x290);
  *(undefined8 *)(lVar8 + 0x290) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  *(long **)(lVar8 + 0x290) = plVar11;
  if (*(ushort *)((long)param_7 - (long)*param_7) < 0x37) {
    uVar6 = 0;
  }
  else {
    uVar10 = (ulong)((ushort *)((long)param_7 - (long)*param_7))[0x1b];
    uVar6 = 0;
    if (uVar10 != 0) {
      uVar6 = *(undefined8 *)((long)param_7 + uVar10);
    }
  }
  *(undefined8 *)(param_1 + lVar7 * 0x2b0 + 0x298) = uVar6;
  if (*(ushort *)((long)param_7 - (long)*param_7) < 0x39) {
    uVar6 = 0;
  }
  else {
    uVar10 = (ulong)((ushort *)((long)param_7 - (long)*param_7))[0x1c];
    uVar6 = 0;
    if (uVar10 != 0) {
      uVar6 = *(undefined8 *)((long)param_7 + uVar10);
    }
  }
  *(undefined8 *)(param_1 + lVar7 * 0x2b0 + 0x2a0) = uVar6;
  return;
}


