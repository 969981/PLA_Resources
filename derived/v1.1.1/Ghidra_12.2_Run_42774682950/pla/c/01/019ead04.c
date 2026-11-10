/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019ead04; name: FUN_019ead04
 */


void FUN_019ead04(long param_1,long param_2,uint param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 *local_58;
  char local_50;
  undefined8 local_48;
  
  lVar7 = nn::os::GetCurrentThread();
  plVar13 = (long *)(param_1 + 0x398);
  do {
    if (*plVar13 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38c));
        while (*plVar13 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_019ead70;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar4) {
      *plVar13 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_019ead70:
  uVar9 = *(ulong *)(param_1 + 0x328);
  if (uVar9 != 0) {
    uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar12 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar10 = (ulong)param_3;
    if (uVar12 < 2) {
      uVar11 = (ulong)((int)uVar9 - 1U & param_3);
    }
    else {
      uVar11 = uVar10;
      if (uVar9 <= uVar10) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar10 / uVar9;
        }
        uVar11 = uVar10 - uVar11 * uVar9;
      }
    }
    plVar13 = *(long **)(*(long *)(param_1 + 800) + uVar11 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar13[1] == uVar10) {
            if (*(uint *)(plVar13 + 2) == param_3) goto LAB_019eae64;
          }
          else if ((plVar13[1] & uVar9 - 1) != uVar11) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar13[1];
          if (uVar12 == uVar10) {
            if (*(uint *)(plVar13 + 2) == param_3) goto LAB_019eae64;
          }
          else {
            if (uVar9 <= uVar12) {
              uVar5 = 0;
              if (uVar9 != 0) {
                uVar5 = uVar12 / uVar9;
              }
              uVar12 = uVar12 - uVar5 * uVar9;
            }
            if (uVar12 != uVar11) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
  goto LAB_019eae74;
LAB_019eae64:
  lVar7 = plVar13[5];
  iVar6 = (int)lVar7 + -1;
  *(int *)(plVar13 + 5) = iVar6;
  if (iVar6 != 0 && 0 < (int)lVar7) goto LAB_019eae74;
  FUN_019ed30c(&local_60);
  lVar7 = local_60;
  local_60 = 0;
  if (lVar7 != 0) {
    if ((local_50 != '\0') &&
       (puVar14 = *(undefined8 **)(lVar7 + 0x18), puVar14 != (undefined8 *)0x0)) {
      piVar1 = (int *)(puVar14 + 1);
      do {
        iVar6 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        puVar14[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_48 = *puVar14;
        FUN_02a44274(lVar8 + 0xd8,&local_48);
      }
    }
    plVar13 = (long *)*local_58;
    uVar9 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar9 & 1) != 0) {
      lVar8 = tpidr_el0;
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar8 + 0x38d480)) {
        FUN_02bcc824(plVar13,lVar7,0x38,8);
        goto LAB_019eaf94;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,lVar7,0x38,8);
  }
LAB_019eaf94:
  local_70 = (long *)0x0;
  uStack_68 = 0;
  FUN_00b63974(&local_70,param_2 + 8);
  FUN_019e7d78(param_1,&local_70);
  plVar13 = local_70;
  if (local_70 != (long *)0x0) {
    plVar2 = local_70 + 1;
    do {
      iVar6 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      local_70[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_60 = *plVar13;
      FUN_02a44274(lVar7 + 0xd8,&local_60);
    }
  }
LAB_019eae74:
  *(undefined8 *)(param_1 + 0x398) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x38c));
  return;
}


