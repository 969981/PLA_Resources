/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01362368; name: FUN_01362368
 */


void FUN_01362368(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined4 uVar10;
  long *local_2c0;
  code *local_2b8;
  undefined1 *local_2b0;
  undefined1 *puStack_2a8;
  long local_2a0 [12];
  long *local_240;
  undefined8 uStack_238;
  long *local_230;
  long **local_228;
  undefined *local_220;
  undefined8 local_218;
  long *local_210;
  undefined4 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_120;
  undefined1 auStack_118 [96];
  undefined1 local_b8;
  long local_40;
  long *local_38;
  
  if (*(long **)(param_1 + 0x178) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x178) + 0x40))();
  }
  if (*(int *)(param_1 + 0x54) == 4) {
    if (*(char *)(param_1 + 0xc3) != '\0') {
      *(undefined1 *)(param_1 + 0xc0) = 0;
      goto switchD_013623f4_caseD_0;
    }
    if ((*(char *)(param_1 + 0x58) == '\0') && (*(char *)(param_1 + 0xc0) == '\0')) {
      if (*(char *)(param_1 + 0xc4) == '\0') {
        return;
      }
      if (*(long *)(param_1 + 0x90) == 0) {
        return;
      }
      lVar8 = FUN_009cfbc8(*(long *)(param_1 + 0x90) + 0xf0,&local_228);
      if (lVar8 == 0) {
        return;
      }
      FUN_02a4754c(&local_228,PTR_DAT_0437a3d8);
      lVar8 = FUN_0289e9f4(lVar8,&local_228);
      if (lVar8 == 0) {
        local_2c0 = (long *)0x0;
      }
      else {
        FUN_009cda48(&local_2c0,lVar8,&local_240);
      }
      if (local_210 != (long *)0x0) {
        (**(code **)(*local_210 + 0x20))();
      }
      local_228 = (long **)0x3565f88648ab40b8;
      local_220 = &DAT_039ac801;
      local_218 = 4;
      local_210 = (long *)0x0;
      local_240 = (long *)FUN_028dcc5c(local_2c0,&local_228);
      if (local_210 != (long *)0x0) {
        (**(code **)(*local_210 + 0x20))();
      }
      local_228 = (long **)FUN_028dd12c(local_2c0,&local_240);
      plVar9 = (long *)FUN_028edf8c(&local_228);
      lVar8 = *plVar9;
      plVar9 = (long *)plVar9[3];
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x18))();
      }
      if (((lVar8 == -0x644b25db3d71956c) || (lVar8 == 0x771901d10bdb1ea6)) ||
         (lVar8 == 0x3d47110dc253a10c)) {
        *(undefined1 *)(param_1 + 0xc4) = 0;
      }
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x20))();
      }
      if (local_2c0 == (long *)0x0) {
        return;
      }
      lVar8 = local_2c0[0xb];
      piVar2 = (int *)(lVar8 + 0xc);
      do {
        iVar6 = *piVar2;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_2c0 + 0x20))();
        return;
      }
      return;
    }
    local_2c0 = (long *)((ulong)local_2c0 & 0xffffffffffffff00);
    if (*(long *)(param_1 + 0x90) != 0) {
      local_228 = &local_2c0;
      FUN_013651c4(*(long *)(param_1 + 0x90) + 0xf0,&local_228);
    }
    uVar10 = 5;
  }
  else {
    switch(*(int *)(param_1 + 0x54)) {
    case 1:
      if (*(char *)(param_1 + 0xc3) != '\0') {
        return;
      }
      if (*(char *)(param_1 + 0xc0) == '\0') {
        return;
      }
      FUN_01362d74(param_1);
      FUN_01352fe4(&local_228,*(undefined8 *)(param_1 + 0xb0));
      local_148 = 0;
      local_140 = *(undefined8 *)(param_1 + 0x60);
      local_138 = *(undefined8 *)(param_1 + 0x68);
      uStack_130 = *(undefined8 *)(param_1 + 0x70);
      local_120 = *(undefined4 *)(param_1 + 200);
      local_b8 = 0;
      if (((*PTR_DAT_04379690 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379690), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379690);
      }
      *(undefined8 *)PTR_DAT_043796a0 = *(undefined8 *)PTR_DAT_04379698;
      FUN_0286bdd4(&local_230);
      (**(code **)(*local_230 + 0x10))(&local_2c0);
      local_240 = (long *)0x0;
      uStack_238 = 0;
      FUN_013643a0(&local_240,&local_2c0);
      plVar9 = local_2c0;
      if (local_2c0 != (long *)0x0) {
        plVar1 = local_2c0 + 1;
        do {
          iVar6 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 == 0) {
          local_2c0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_38 = (long *)*plVar9;
          FUN_02a44274(lVar8 + 0xd8,&local_38);
        }
      }
      FUN_01364ab0(auStack_118,&local_240);
      plVar9 = local_240;
      if (local_240 != (long *)0x0) {
        plVar1 = local_240 + 1;
        do {
          iVar6 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 == 0) {
          local_240[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_2c0 = (long *)*plVar9;
          FUN_02a44274(lVar8 + 0xd8,&local_2c0);
        }
      }
      *(undefined4 *)(local_40 + 0x68) = 3;
      local_120 = 0;
      FUN_01352878(&local_2c0,*(undefined8 *)(param_1 + 0xb0),param_1 + 0x168,&local_228);
      local_38 = local_2c0;
      if (((*PTR_DAT_0437a780 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437a780);
      }
      *(undefined8 *)PTR_DAT_0437a790 = *(undefined8 *)PTR_DAT_0437a788;
      FUN_01e65a40(&local_2c0);
      FUN_0135ad58(local_38 + 0x4d,&local_2c0);
      plVar9 = local_2c0;
      if (local_2c0 != (long *)0x0) {
        plVar1 = local_2c0 + 1;
        do {
          iVar6 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 == 0) {
          local_2c0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_240 = (long *)*plVar9;
          FUN_02a44274(lVar8 + 0xd8,&local_240);
        }
      }
      local_2c0 = (long *)&LAB_01364db0;
      local_2b8 = FUN_013651a8;
      local_2b0 = &LAB_013651ac;
      puStack_2a8 = &LAB_013651b8;
      local_2a0[0] = param_1;
      FUN_01352900(&local_240,*(undefined8 *)(param_1 + 0x178),0,&local_38,&local_2c0,0);
      pcVar4 = local_2b8;
      if (local_240 != (long *)0x0) {
        lVar8 = local_240[0xb];
        piVar2 = (int *)(lVar8 + 0xc);
        do {
          iVar6 = *piVar2;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*local_240 + 0x20))();
          pcVar4 = local_2b8;
          local_2b8 = (code *)0x0;
        }
      }
      if (pcVar4 != (code *)0x0) {
        local_2b0 = (undefined1 *)0x0;
        puStack_2a8 = (undefined1 *)0x0;
        local_2c0 = (long *)0x0;
        local_2b8 = (code *)0x0;
        (*pcVar4)(local_2a0);
      }
      if (local_38 != (long *)0x0) {
        lVar8 = local_38[0xb];
        piVar2 = (int *)(lVar8 + 0xc);
        do {
          iVar6 = *piVar2;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*local_38 + 0x20))();
        }
      }
      if (local_230 != (long *)0x0) {
        lVar8 = local_230[0xb];
        piVar2 = (int *)(lVar8 + 0xc);
        do {
          iVar6 = *piVar2;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*local_230 + 0x20))();
        }
      }
      FUN_00b17558(&local_228);
      *(undefined1 *)(param_1 + 0xc0) = 0;
      *(undefined4 *)(param_1 + 0x54) = 2;
      *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x60);
      return;
    case 2:
      if (((*(char *)(param_1 + 0xc3) != '\0') || (*(char *)(param_1 + 0x58) != '\0')) ||
         (*(char *)(param_1 + 0xc0) != '\0')) {
        if (*(char *)(param_1 + 0xa0) == '\0') {
          return;
        }
        goto LAB_013627fc;
      }
      if (*(char *)(param_1 + 0xa0) == '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x78) == 0x286) {
        bVar5 = *(ushort *)(param_1 + 0x7c) - 1 < 2;
      }
      else {
        bVar5 = false;
      }
      FUN_0136314c(param_1,bVar5,0);
      if (*(int *)(param_1 + 200) == 1) {
        FUN_01091160(*(undefined4 *)(param_1 + 0x78),*(undefined2 *)(param_1 + 0x7c),0,0);
      }
      if (*(char *)(param_1 + 0xc1) != '\0') {
        FUN_013621ec(0,0,param_1);
      }
      if (*(float *)(param_1 + 0xbc) < 0.0) {
        uVar10 = 0;
LAB_01362a54:
        *(undefined4 *)(param_1 + 0xbc) = uVar10;
      }
      else {
        uVar10 = 0x42b40000;
        if (90.0 < *(float *)(param_1 + 0xbc)) goto LAB_01362a54;
      }
      FUN_013634c4(param_1);
      if (*(code **)(param_1 + 0xe0) != (code *)0x0) {
        local_218 = *(undefined8 *)(param_1 + 0x88);
        local_228 = (long **)CONCAT26(local_228._6_2_,*(undefined6 *)(param_1 + 0x78));
        local_220 = (undefined *)CONCAT26(local_220._6_2_,*(undefined6 *)(param_1 + 0x80));
        (**(code **)(param_1 + 0xe0))(param_1 + 0x100,&local_228);
      }
      uVar10 = 3;
      break;
    case 3:
      if (((*(char *)(param_1 + 0xc3) == '\0') && (*(char *)(param_1 + 0x58) == '\0')) &&
         (*(char *)(param_1 + 0xc0) == '\0')) {
        uVar7 = FUN_01362c60(param_1 + 0x90);
        if (((uVar7 & 1) == 0) || (-1 < *(int *)(param_1 + 0x160))) {
          *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + -1;
          return;
        }
        *(undefined4 *)(param_1 + 0x54) = 4;
        *(undefined4 *)(param_1 + 0x160) = 2;
        if (*(char *)(param_1 + 0x164) == '\0') {
          return;
        }
        local_2c0 = (long *)CONCAT71(local_2c0._1_7_,1);
        if (*(long *)(param_1 + 0x90) == 0) {
          return;
        }
        local_228 = &local_2c0;
        FUN_013651c4(*(long *)(param_1 + 0x90) + 0xf0,&local_228);
        return;
      }
LAB_013627fc:
      uVar10 = 4;
      break;
    default:
      goto switchD_013623f4_caseD_4;
    case 5:
      FUN_01362d74(param_1);
      uVar10 = 6;
      break;
    case 6:
      if (*(long *)(param_1 + 0x90) != 0) {
        return;
      }
      if (*(int *)(param_1 + 0x5c) != 0) {
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
        return;
      }
      *(undefined1 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 2;
    case 0:
switchD_013623f4_caseD_0:
      uVar10 = 1;
    }
  }
  *(undefined4 *)(param_1 + 0x54) = uVar10;
switchD_013623f4_caseD_4:
  return;
}


