/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025d35b8; name: FUN_025d35b8
 */


void FUN_025d35b8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  bool bVar7;
  ulong uVar8;
  int iVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  undefined4 local_5c;
  undefined8 local_58;
  char *pcStack_50;
  undefined8 local_48;
  long *local_40;
  undefined2 local_34;
  undefined1 local_32;
  undefined4 uStack_30;
  undefined3 uStack_2c;
  undefined4 uStack_28;
  undefined3 uStack_24;
  
  puVar10 = (undefined1 *)*param_2;
  if (puVar10 == &DAT_cbf29ce484222645) {
    return;
  }
  iVar2 = *(int *)(param_2 + 1);
  if ((*(char *)(param_1 + 0x2ac) != '\0') && (iVar2 != 3)) {
    return;
  }
  cVar3 = *(char *)(param_1 + 600);
  if ((cVar3 != '\0') && (*(int *)(param_1 + 0x268) < iVar2)) {
    return;
  }
  uStack_28 = *(undefined4 *)((long)param_2 + 0xd);
  cVar4 = *(char *)((long)param_2 + 0xc);
  uStack_24 = (undefined3)((uint)*(undefined4 *)(param_2 + 2) >> 8);
  uStack_30 = *(undefined4 *)((long)param_2 + 0x15);
  uVar5 = *(undefined1 *)((long)param_2 + 0x14);
  uStack_2c = (undefined3)((uint)*(undefined4 *)(param_2 + 3) >> 8);
  uVar6 = *(undefined1 *)((long)param_2 + 0x1c);
  if (cVar4 != '\0') {
    local_5c = *(undefined4 *)(param_2 + 2);
    goto LAB_025d3638;
  }
  local_58 = 0xcf5a30d7e9c86222;
  pcStack_50 = "face_change_event_default_frame";
  local_48 = 0x1f;
  local_40 = (long *)0x0;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & 0xdda9f413319d82e4;
    }
    else if (uVar11 < 0xdda9f413319d82e5) {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = 0xdda9f413319d82e4 / uVar11;
      }
      uVar13 = 0xdda9f413319d82e4 - uVar13 * uVar11;
    }
    else {
      uVar13 = 0xdda9f413319d82e4;
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == 0xdda9f413319d82e4) {
            if (plVar15[2] == -0x22560becce627d1c) goto LAB_025d37bc;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) goto LAB_025d3848;
          plVar15 = (long *)*plVar15;
          local_5c = 0;
        } while (plVar15 != (long *)0x0);
        goto joined_r0x025d386c;
      }
      do {
        uVar12 = plVar15[1];
        if (uVar12 == 0xdda9f413319d82e4) {
          if (plVar15[2] == -0x22560becce627d1c) goto LAB_025d37bc;
        }
        else {
          if (uVar11 <= uVar12) {
            uVar8 = 0;
            if (uVar11 != 0) {
              uVar8 = uVar12 / uVar11;
            }
            uVar12 = uVar12 - uVar8 * uVar11;
          }
          if (uVar12 != uVar13) break;
        }
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
  }
LAB_025d3848:
  local_5c = 0;
joined_r0x025d386c:
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  cVar3 = *(char *)(param_1 + 600);
LAB_025d3638:
  *(undefined1 **)(param_1 + 0x260) = puVar10;
  *(int *)(param_1 + 0x268) = iVar2;
  *(char *)(param_1 + 0x26c) = cVar4;
  *(uint *)(param_1 + 0x270) = CONCAT31(uStack_24,uStack_28._3_1_);
  *(undefined4 *)(param_1 + 0x26d) = uStack_28;
  *(undefined1 *)(param_1 + 0x274) = uVar5;
  *(uint *)(param_1 + 0x278) = CONCAT31(uStack_2c,uStack_30._3_1_);
  *(undefined4 *)(param_1 + 0x275) = uStack_30;
  *(undefined1 *)(param_1 + 0x27c) = uVar6;
  *(undefined2 *)(param_1 + 0x27d) = (undefined2)local_58;
  *(undefined1 *)(param_1 + 0x27f) = local_58._2_1_;
  *(undefined4 *)(param_1 + 0x280) = local_5c;
  *(undefined1 *)(param_1 + 0x284) = 1;
  if (cVar3 == '\0') {
    *(undefined1 *)(param_1 + 0x287) = local_32;
    *(undefined2 *)(param_1 + 0x285) = local_34;
    *(undefined1 *)(param_1 + 600) = 1;
  }
  return;
LAB_025d37bc:
  plVar15 = (long *)plVar15[3];
  if (plVar15 == (long *)0x0) goto LAB_025d3848;
  plVar1 = plVar15 + 10;
  do {
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  local_5c = FUN_00d78f50(plVar15,&local_58);
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *(int *)plVar1 = iVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
  }
  goto joined_r0x025d386c;
}


