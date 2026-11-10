/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019118b0; name: FUN_019118b0
 */


void FUN_019118b0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [96];
  undefined8 local_38;
  
  if (*param_1 != 0) {
    local_38 = 0xf9dcaff7b9a4a1b5;
    plVar11 = *(long **)(*param_1 + 0x5e8);
    if (plVar11 != (long *)0x0) {
      plVar1 = plVar11 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar6 = FUN_02c6849c(plVar11[0x13]);
    uVar5 = FUN_02c6f924(plVar11[0x13]);
    uVar9 = FUN_0165b1f8(&local_38,uVar6,uVar5,*(undefined8 *)(*param_1 + 0x750),
                         &DAT_cbf29ce484222645,&DAT_cbf29ce484222645);
    if ((uVar9 & 1) == 0) {
      uVar7 = 1;
    }
    else {
      uVar6 = FUN_02c6849c(plVar11[0x13]);
      uVar5 = FUN_02c6f924(plVar11[0x13]);
      local_c0 = &LAB_0191564c;
      local_b8 = FUN_01915650;
      local_b0 = &LAB_01915654;
      puStack_a8 = &LAB_01915658;
      uVar7 = FUN_016698d0(&local_38,uVar6,uVar5,*(undefined8 *)(*param_1 + 0x750),
                           &DAT_cbf29ce484222645,&local_c0);
      pcVar4 = local_b8;
      if (local_b8 != (code *)0x0) {
        local_b0 = (undefined1 *)0x0;
        puStack_a8 = (undefined1 *)0x0;
        local_c0 = (undefined1 *)0x0;
        local_b8 = (code *)0x0;
        (*pcVar4)(auStack_a0);
      }
      uVar7 = uVar7 ^ 1;
    }
    if (((*PTR_DAT_0437e418 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_0437e418), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_0437f2f8,PTR_DAT_0437e420,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437e418);
    }
    lVar10 = *(long *)PTR_DAT_0437e420;
    *(long *)PTR_DAT_0437f2f0 = lVar10;
    if ((uVar7 & 1) == 0) {
      if (lVar10 != 0) {
        *(ulong *)(lVar10 + 0x60) = *(ulong *)(lVar10 + 0x60) | 0x20;
      }
    }
    else if (lVar10 != 0) {
      FUN_010cc20c(lVar10,0);
    }
    plVar1 = plVar11 + 10;
    do {
      iVar8 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  return;
}


