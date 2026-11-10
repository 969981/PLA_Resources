/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019e1424; name: FUN_019e1424
 */


void FUN_019e1424(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  long *local_48;
  
  puVar5 = PTR_DAT_0437a6e0;
  puVar4 = PTR_DAT_0437a6d8;
  lVar9 = *(long *)(param_1 + 0x230);
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0xc) != 0)) {
    piVar1 = (int *)(lVar9 + 0xc);
    iVar6 = *(int *)(lVar9 + 0xc);
    do {
      plVar10 = *(long **)(lVar9 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
        uVar8 = FUN_00ad3750();
        *(undefined8 *)puVar5 = uVar8;
        __cxa_guard_release(puVar4);
      }
      while( true ) {
        if (plVar10 == (long *)0x0) goto LAB_019e144c;
        if (plVar10 == (long *)puVar5) break;
        plVar10 = (long *)*plVar10;
      }
      iVar7 = *piVar1;
      if (iVar7 == iVar6) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_019e1580;
        lVar9 = *(long *)(lVar9 + 0x18);
        if (lVar9 != 0) {
          plVar10 = (long *)(lVar9 + -0x50);
          FUN_02c90b50(plVar10,0);
          lVar9 = *(long *)(lVar9 + 8);
          piVar1 = (int *)(lVar9 + 0xc);
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
            *(undefined8 *)(lVar9 + 0x18) = 0;
            (**(code **)(*plVar10 + 0x20))(plVar10);
            lVar9 = *(long *)(param_1 + 0x250);
            goto joined_r0x019e161c;
          }
        }
        break;
      }
      ClearExclusiveLocal();
LAB_019e1580:
      iVar6 = iVar7;
    } while (iVar7 != 0);
  }
LAB_019e144c:
  lVar9 = *(long *)(param_1 + 0x250);
joined_r0x019e161c:
  if (lVar9 == 0) {
    local_48 = (long *)0x0;
  }
  else {
    FUN_00bd9360(&local_48);
    if (local_48 != (long *)0x0) {
      local_70 = 0x1dba37de3b02a674;
      pcStack_68 = "PLAY_RIDING_BALOON_RND";
      local_60 = 0x16;
      local_58 = (long *)0x0;
      FUN_0290b66c(local_48,&local_70,0);
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      if (local_48 != (long *)0x0) {
        lVar9 = local_48[0xb];
        piVar1 = (int *)(lVar9 + 0xc);
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
          *(undefined8 *)(lVar9 + 0x18) = 0;
          (**(code **)(*local_48 + 0x20))();
        }
      }
    }
  }
  if (((*PTR_DAT_043796b8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_043796b8), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379c58,PTR_DAT_043796c0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_043796b8);
  }
  lVar9 = *(long *)PTR_DAT_043796c0;
  *(long *)PTR_DAT_043796c8 = lVar9;
  local_70 = 0xb3c71ac4676cd4a1;
  FUN_00da3604(lVar9 + 0x3c0,&local_70,0);
  FUN_019e16d0(param_1,0);
  local_70 = 0xe0a0f12f67f1a4d8;
  pcStack_68 = "break";
  local_60 = 5;
  local_58 = (long *)0x0;
  FUN_019e18f8(param_1,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  *(undefined4 *)(param_1 + 0x450) = 0xf;
  *(undefined4 *)(param_1 + 0x208) = 2;
  return;
}


