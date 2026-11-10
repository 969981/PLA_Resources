/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00941bb4; name: FUN_00941bb4
 */


void FUN_00941bb4(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *local_60;
  undefined8 uStack_58;
  long *local_50;
  undefined1 local_44 [4];
  undefined8 *local_40 [2];
  undefined8 local_28;
  
  local_44[0] = *(undefined1 *)(*(long *)(param_2 + 0x70) + 0x7d);
  uVar6 = FUN_00923bc4(*(undefined8 *)(param_1 + 8));
  FUN_00995ec4(&local_50,uVar6,local_44);
  if (local_50 == (long *)0x0) {
    return;
  }
  FUN_00923bbc(*(undefined8 *)(param_1 + 8));
  lVar7 = FUN_00923bbc(*(undefined8 *)(param_1 + 8));
  if ((*(long *)(lVar7 + 0x100) == 0) || (uVar8 = FUN_02a43a8c(), (uVar8 & 1) != 0)) {
    lVar7 = 0;
  }
  else {
    FUN_00923bbc(*(undefined8 *)(param_1 + 8));
    lVar7 = FUN_00923bbc(*(undefined8 *)(param_1 + 8));
    if ((*(long *)(lVar7 + 0x130) == 0) || (uVar8 = FUN_02a43a8c(), (uVar8 & 1) != 0)) {
      lVar7 = 1;
    }
    else {
      FUN_00923bbc(*(undefined8 *)(param_1 + 8));
      lVar7 = FUN_00923bbc(*(undefined8 *)(param_1 + 8));
      if ((*(long *)(lVar7 + 0x160) == 0) || (uVar8 = FUN_02a43a8c(), (uVar8 & 1) != 0)) {
        lVar7 = 2;
      }
      else {
        FUN_00923bbc(*(undefined8 *)(param_1 + 8));
        lVar7 = FUN_00923bbc(*(undefined8 *)(param_1 + 8));
        if ((*(long *)(lVar7 + 400) == 0) || (uVar8 = FUN_02a43a8c(), (uVar8 & 1) != 0)) {
          lVar7 = 3;
        }
        else {
          FUN_00923bbc(*(undefined8 *)(param_1 + 8));
          lVar7 = FUN_00923bbc(*(undefined8 *)(param_1 + 8));
          if ((*(long *)(lVar7 + 0x1c0) != 0) && (uVar8 = FUN_02a43a8c(), (uVar8 & 1) == 0)) {
            FUN_00923bbc(*(undefined8 *)(param_1 + 8));
            plVar4 = local_50;
            goto joined_r0x00941d90;
          }
          lVar7 = 4;
        }
      }
    }
  }
  (**(code **)(*local_50 + 0x10))(local_40);
  local_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  FUN_0087f944(&local_60,local_40);
  puVar9 = local_40[0];
  if (local_40[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_40[0] + 1);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      local_40[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_28 = *puVar9;
      FUN_02a44274(lVar10 + 0xd8,&local_28);
    }
  }
  lVar10 = FUN_00923bbc(*(undefined8 *)(param_1 + 8));
  FUN_0087fcf0(lVar10 + lVar7 * 0x30 + 0x100,&local_60);
  puVar9 = local_60;
  if (local_60 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_60 + 1);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      local_60[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_40[0] = (undefined8 *)*puVar9;
      FUN_02a44274(lVar10 + 0xd8,local_40);
    }
  }
  FUN_00933eec(*(undefined8 *)(*(long *)(param_1 + 8) + 0xd0),local_44[0]);
  puVar9 = (undefined8 *)FUN_00931efc();
  lVar10 = FUN_00923bbc(*(undefined8 *)(param_1 + 8));
  uVar6 = puVar9[1];
  lVar10 = lVar10 + lVar7 * 0x30;
  *(undefined8 *)(lVar10 + 0x110) = *puVar9;
  *(undefined8 *)(lVar10 + 0x118) = uVar6;
  FUN_00933eec(*(undefined8 *)(*(long *)(param_1 + 8) + 0xd0),local_44[0]);
  puVar9 = (undefined8 *)FUN_00931f04();
  lVar10 = FUN_00923bbc(*(undefined8 *)(param_1 + 8));
  uVar6 = puVar9[1];
  lVar10 = lVar10 + lVar7 * 0x30;
  *(undefined8 *)(lVar10 + 0x120) = *puVar9;
  *(undefined8 *)(lVar10 + 0x128) = uVar6;
  plVar4 = local_50;
joined_r0x00941d90:
  if ((plVar4 != (long *)0x0) && (uVar8 = FUN_02a43a5c(plVar4[0xb]), (uVar8 & 1) != 0)) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  return;
}


