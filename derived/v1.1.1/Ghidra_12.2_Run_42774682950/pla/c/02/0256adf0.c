/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0256adf0; name: FUN_0256adf0
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_0256adf0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  ulong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x4a8) != '\0') {
    return;
  }
  if (*(char *)(*(long *)(param_1 + 0x488) + 0x524) == '\0') {
    return;
  }
  FUN_02c0bc34(*(undefined8 *)(param_1 + 0x480),param_1 + 0x440);
  lVar10 = *(long *)(param_1 + 0x480);
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  local_78 = (long *)0x0;
  plVar8 = *(long **)(lVar10 + 0x290);
  local_58 = *(ulong *)(lVar10 + 0x298);
  local_50 = *(undefined8 *)(lVar10 + 0x2a0);
  uStack_48 = *(undefined8 *)(lVar10 + 0x2a8);
  lVar9 = *(long *)(lVar10 + 0x280) - *(long *)(lVar10 + 0x278);
  local_60 = plVar8;
  if (lVar9 != 0) {
    uVar6 = local_58;
    if (0x7ffffffffffffffe < local_58) {
      uVar6 = 0x7fffffffffffffff;
    }
    if (uVar6 < (ulong)(lVar9 >> 3)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    plVar5 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,lVar9,8);
    if (plVar5 == (long *)0x0) {
      (**(code **)(*plVar8 + 0xb8))(plVar8);
    }
    local_68 = plVar5 + (lVar9 >> 3);
    lVar9 = *(long *)(lVar10 + 0x278);
    lVar10 = *(long *)(lVar10 + 0x280);
    local_78 = plVar5;
    if (lVar9 != lVar10) {
      local_70 = plVar5;
      do {
        FUN_02564e08(&local_60,local_70,lVar9);
        plVar5 = local_70;
        lVar9 = lVar9 + 8;
        plVar8 = local_70 + 1;
        local_70 = plVar8;
      } while (lVar10 != lVar9);
      plVar11 = local_78;
      if (local_78 == plVar8) {
        *(undefined1 *)(param_1 + 0x4a8) = 1;
        goto LAB_0256af40;
      }
      do {
        if (*(char *)(param_1 + 0x3b0) != '\0') {
          FUN_00956dac(&local_80,*plVar11 + 0x1a8);
          plVar8 = local_80;
          if (local_80 == (long *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          lVar9 = local_80[0xb];
          if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar9 + 0x10) == 0) {
            uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
            *(undefined8 *)(lVar9 + 0x10) = uVar7;
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
          (**(code **)(*plVar8 + 0x98))(plVar8,0);
          lVar9 = plVar8[0xb];
          piVar1 = (int *)(lVar9 + 0xc);
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
            *(undefined8 *)(lVar9 + 0x18) = 0;
            (**(code **)(*plVar8 + 0x20))(plVar8);
          }
          if (local_80 != (long *)0x0) {
            lVar9 = local_80[0xb];
            piVar1 = (int *)(lVar9 + 0xc);
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
              *(undefined8 *)(lVar9 + 0x18) = 0;
              (**(code **)(*local_80 + 0x20))();
            }
          }
        }
        bVar4 = plVar11 != plVar5;
        plVar11 = plVar11 + 1;
      } while (bVar4);
    }
  }
  *(undefined1 *)(param_1 + 0x4a8) = 1;
  plVar8 = local_78;
  if (local_78 == (long *)0x0) {
    return;
  }
LAB_0256af40:
  plVar5 = local_60;
  lVar9 = (long)local_68 - (long)plVar8;
  local_70 = plVar8;
  uVar6 = (**(code **)(*local_60 + 0xc0))(local_60);
  if ((uVar6 & 1) != 0) {
    lVar10 = tpidr_el0;
    if (*(char *)(lVar10 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar10 + 0x38d488) = 1;
      *(undefined8 *)(lVar10 + 0x38d478) = 0;
      *(undefined8 *)(lVar10 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar10 + 0x38d480)) {
      FUN_02bcc824(plVar5,plVar8,lVar9,8);
      return;
    }
  }
  (**(code **)(*plVar5 + 0x18))(plVar5,plVar8,lVar9,8);
  return;
}


