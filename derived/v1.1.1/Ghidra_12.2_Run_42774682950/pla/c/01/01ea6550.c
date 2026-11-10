/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ea6550; name: FUN_01ea6550
 */


void FUN_01ea6550(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  local_50 = 0xd85cde8288093edd;
  pcStack_48 = "disable_terrain_hit_frame";
  local_40 = 0x19;
  local_38 = (long *)0x0;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379660), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar10 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar10;
  uVar7 = *(ulong *)(lVar10 + 0x60);
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & 0xd65830cac3e925da;
    }
    else if (uVar7 < 0xd65830cac3e925db) {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = 0xd65830cac3e925da / uVar7;
      }
      uVar9 = 0xd65830cac3e925da - uVar9 * uVar7;
    }
    else {
      uVar9 = 0xd65830cac3e925da;
    }
    plVar11 = *(long **)(*(long *)(lVar10 + 0x58) + uVar9 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar11[1] == 0xd65830cac3e925da) {
            if (plVar11[2] == -0x29a7cf353c16da26) goto LAB_01ea6648;
          }
          else if ((plVar11[1] & uVar7 - 1) != uVar9) goto LAB_01ea66e4;
          plVar11 = (long *)*plVar11;
          uVar5 = 0;
        } while (plVar11 != (long *)0x0);
        goto LAB_01ea6688;
      }
      do {
        uVar8 = plVar11[1];
        if (uVar8 == 0xd65830cac3e925da) {
          if (plVar11[2] == -0x29a7cf353c16da26) goto LAB_01ea6648;
        }
        else {
          if (uVar7 <= uVar8) {
            uVar4 = 0;
            if (uVar7 != 0) {
              uVar4 = uVar8 / uVar7;
            }
            uVar8 = uVar8 - uVar4 * uVar7;
          }
          if (uVar8 != uVar9) break;
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
LAB_01ea66e4:
  uVar5 = 0;
LAB_01ea6688:
  *(undefined4 *)(param_1 + 0x5f0) = uVar5;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  iVar6 = FUN_0108d1cc(*(undefined8 *)(param_1 + 0x208));
  if (0 < iVar6) {
    uVar5 = FUN_0108d1cc(*(undefined8 *)(param_1 + 0x208));
    *(undefined4 *)(param_1 + 0x5f0) = uVar5;
  }
  return;
LAB_01ea6648:
  plVar11 = (long *)plVar11[3];
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
    uVar5 = FUN_00d78f50(plVar11,&local_50);
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
    goto LAB_01ea6688;
  }
  goto LAB_01ea66e4;
}


