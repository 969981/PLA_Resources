/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02677b10; name: FUN_02677b10
 */


void FUN_02677b10(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 *local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  long *local_40;
  undefined8 local_38;
  
  FUN_01a92c54(&local_60);
  if (local_60 == (undefined8 *)0x0) {
    local_40 = (long *)0x0;
  }
  else {
    FUN_00bd9360(&local_40);
    puVar7 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_60 + 1);
      do {
        iVar10 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 == 0) {
        local_60[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_38 = *puVar7;
        FUN_02a44274(lVar11 + 0xd8,&local_38);
      }
    }
  }
  if (local_40 != (long *)0x0) {
    lVar11 = (long)*(int *)(param_1 + 0xc50) * 0x18;
    local_60 = *(undefined8 **)(&DAT_042665e0 + lVar11);
    pcStack_58 = (&PTR_s_PLAY_PV_RD_899_00_DASH_042665e8)[(long)*(int *)(param_1 + 0xc50) * 3];
    local_50 = *(undefined8 *)(&DAT_042665f0 + lVar11);
    local_48 = (long *)0x0;
    FUN_0290b66c(local_40,&local_60,0);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    if (local_40 != (long *)0x0) {
      lVar11 = local_40[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_40 + 0x20))();
      }
    }
  }
  FUN_01a82160(&local_60,param_1);
  if (local_60 == (undefined8 *)0x0) {
    local_40 = (long *)0x0;
    plVar6 = local_40;
  }
  else {
    FUN_01bfc61c(&local_40);
    puVar7 = local_60;
    plVar6 = local_40;
    if (local_60 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_60 + 1);
      do {
        iVar10 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 == 0) {
        local_60[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_38 = *puVar7;
        FUN_02a44274(lVar11 + 0xd8,&local_38);
        plVar6 = local_40;
      }
    }
  }
  if (plVar6 == (long *)0x0) {
    return;
  }
  iVar10 = *(int *)(param_1 + 0xc50);
  local_60 = (undefined8 *)0x38f9a78446d05464;
  pcStack_58 = "action_voice_mouch_open_frame";
  local_50 = 0x1d;
  local_48 = (long *)0x0;
  local_40 = plVar6;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar11 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar11;
  uVar13 = *(ulong *)(lVar11 + 0x60);
  if (uVar13 != 0) {
    uVar12 = *(ulong *)(&DAT_04266328 + (long)iVar10 * 0x18);
    uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar15 = uVar13 - 1 & uVar12;
    }
    else if (uVar12 < uVar13) {
      uVar15 = uVar12;
    }
    else {
      uVar15 = 0;
      if (uVar13 != 0) {
        uVar15 = uVar12 / uVar13;
      }
      uVar15 = uVar12 - uVar15 * uVar13;
    }
    plVar16 = *(long **)(*(long *)(lVar11 + 0x58) + uVar15 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar16[1] == uVar12) {
            if (plVar16[2] == uVar12) goto LAB_02677cb4;
          }
          else if ((plVar16[1] & uVar13 - 1) != uVar15) goto LAB_02677d6c;
          plVar16 = (long *)*plVar16;
          uVar8 = 0;
        } while (plVar16 != (long *)0x0);
        goto LAB_02677cf4;
      }
      do {
        uVar14 = plVar16[1];
        if (uVar14 == uVar12) {
          if (plVar16[2] == uVar12) goto LAB_02677cb4;
        }
        else {
          if (uVar13 <= uVar14) {
            uVar5 = 0;
            if (uVar13 != 0) {
              uVar5 = uVar14 / uVar13;
            }
            uVar14 = uVar14 - uVar5 * uVar13;
          }
          if (uVar14 != uVar15) break;
        }
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
    }
  }
LAB_02677d6c:
  uVar8 = 0;
LAB_02677cf4:
  FUN_0261bf38(plVar6,uVar8);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_40 != (long *)0x0) {
    lVar11 = local_40[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_40 + 0x20))();
    }
  }
  return;
LAB_02677cb4:
  plVar16 = (long *)plVar16[3];
  if (plVar16 != (long *)0x0) {
    plVar2 = plVar16 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar8 = FUN_00d78f50(plVar16,&local_60);
    do {
      iVar10 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    goto LAB_02677cf4;
  }
  goto LAB_02677d6c;
}


