/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01363588; name: FUN_01363588
 */


void FUN_01363588(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *local_c8;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  long *local_a8;
  long local_a0;
  undefined1 *local_98;
  undefined8 uStack_90;
  long *local_40;
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + 0x90) != 0) {
    lVar7 = FUN_009cfbc8(*(long *)(param_1 + 0x90) + 0xf0,&local_c0);
    if (lVar7 != 0) {
      FUN_02a4754c(&local_c0,PTR_DAT_0437a3d8);
      lVar8 = FUN_0289e9f4(lVar7,&local_c0);
      if (lVar8 == 0) {
        local_40 = (long *)0x0;
      }
      else {
        FUN_009cda48(&local_40,lVar8,&local_c8);
      }
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
      if (local_40 != (long *)0x0) {
        local_98 = &LAB_01362e10;
        uStack_90 = 0;
        local_c0 = &LAB_013655ec;
        local_b8 = FUN_01365608;
        local_b0 = &LAB_0136560c;
        local_a8 = (long *)&LAB_01365620;
        local_a0 = param_1;
        FUN_028ddb50(local_40,&local_c0);
        pcVar4 = local_b8;
        if (local_b8 != (code *)0x0) {
          local_b0 = (undefined1 *)0x0;
          local_a8 = (long *)0x0;
          local_c0 = (undefined1 *)0x0;
          local_b8 = (code *)0x0;
          (*pcVar4)(&local_a0);
        }
      }
      FUN_02a4754c(&local_c0,PTR_DAT_0437a3d8);
      lVar8 = FUN_0289e9f4(lVar7,&local_c0);
      if (lVar8 == 0) {
        local_c8 = (long *)0x0;
      }
      else {
        FUN_0135c23c(&local_c8,lVar8,auStack_38);
      }
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
      if (local_c8 != (long *)0x0) {
        FUN_01365634(lVar7,&local_c0);
      }
      FUN_02a4754c(&local_c0,PTR_DAT_0437a3d8);
      puVar9 = (undefined8 *)FUN_0289f734(lVar7,&local_c0);
      plVar10 = (long *)*puVar9;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
      if (plVar10 != (long *)0x0) {
        local_98 = &LAB_01362e9c;
        uStack_90 = 0;
        local_b0 = &LAB_0136595c;
        local_c0 = &LAB_0136593c;
        local_b8 = FUN_01365958;
        local_a8 = (long *)&LAB_01365970;
        local_a0 = param_1;
        (**(code **)(*plVar10 + 0x100))(plVar10,&local_c0);
        pcVar4 = local_b8;
        if (local_b8 != (code *)0x0) {
          local_b0 = (undefined1 *)0x0;
          local_a8 = (long *)0x0;
          local_c0 = (undefined1 *)0x0;
          local_b8 = (code *)0x0;
          (*pcVar4)(&local_a0);
        }
      }
      if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar6 != 0)) {
        FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437a0d0);
      }
      FUN_0289fdcc(0x3f800000,lVar7,PTR_DAT_0437a0d8);
      *(undefined1 *)(param_1 + 0xc4) = 0;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
      if (local_c8 != (long *)0x0) {
        lVar7 = local_c8[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          iVar6 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*local_c8 + 0x20))();
        }
      }
      if (local_40 != (long *)0x0) {
        lVar7 = local_40[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          iVar6 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*local_40 + 0x20))();
        }
      }
    }
    lVar7 = FUN_00ab974c(*(long *)(param_1 + 0x90) + 0xf0,&local_c0);
    if (lVar7 != 0) {
      FUN_02dab9a8(lVar7,1);
      FUN_02daba5c(lVar7,0);
      FUN_02daba64(lVar7,*(undefined4 *)(param_1 + 0xcc));
      uVar5 = FUN_02daafc4(lVar7);
      *(undefined4 *)(param_1 + 0x180) = uVar5;
      FUN_02daafcc(&local_c0,lVar7);
      *(undefined4 *)(param_1 + 0x19c) = local_a8._0_4_;
      *(code **)(param_1 + 0x18c) = local_b8;
      *(undefined1 **)(param_1 + 0x194) = local_b0;
      *(undefined1 **)(param_1 + 0x184) = local_c0;
    }
  }
  return;
}


