/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014375dc; name: FUN_014375dc
 */


undefined8 FUN_014375dc(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *local_78;
  undefined8 uStack_70;
  long *local_68;
  long *local_60;
  char *pcStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x688));
  if ((*param_2 == 0) || (*(int *)(*param_2 + 0xc) == 0)) {
    uVar12 = 0;
  }
  else {
    if (*param_2 == 0) {
      local_60 = (long *)0x0;
    }
    else {
      FUN_00b907c8(&local_60);
    }
    plVar6 = local_60;
    if ((*(int *)((long)local_60 + 0x62c) == 1) && (*param_2 != 0)) {
      FUN_00b907c8(&local_60,*param_2);
      plVar7 = local_60;
      if (local_60 == (long *)0x0) {
        uVar12 = 0;
      }
      else {
        FUN_01b39678(&local_60,local_60);
        uVar9 = FUN_02c628e4(local_60);
        if (local_60 != (long *)0x0) {
          plVar10 = local_60 + 10;
          do {
            iVar8 = (int)*plVar10 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar3) {
              *(int *)plVar10 = iVar8;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar8 == 0) {
            (**(code **)(*local_60 + 0x10))();
          }
        }
        if ((uVar9 & 1) == 0) {
          lVar11 = *(long *)(param_1 + 0x4c8);
          local_60 = (long *)0x65fe13ffeb2f98ca;
          pcStack_58 = "EnemyVisilancePlateView";
          local_50 = 0x17;
          uStack_48 = 0;
          plVar10 = (long *)FUN_01439ea0(*(undefined8 *)(lVar11 + 0x70),
                                         *(undefined8 *)(lVar11 + 0x78),&local_60);
          if ((*(long **)(lVar11 + 0x78) != plVar10) && (lVar11 = *plVar10, lVar11 != 0)) {
            plVar10 = (long *)(*(code *)**(undefined8 **)(lVar11 + 0x50))
                                        ((undefined8 *)(lVar11 + 0x50));
            puVar4 = PTR_DAT_0437f448;
            if (((*PTR_DAT_0437f440 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_0437f440), iVar8 != 0)) {
              uVar12 = FUN_01439fcc();
              *(undefined8 *)puVar4 = uVar12;
              __cxa_guard_release(PTR_DAT_0437f440);
            }
            for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
              if (plVar10 == (long *)puVar4) {
                FUN_01440094(&local_68,lVar11);
                plVar10 = local_68;
                uVar12 = 0;
                if (local_68 != (long *)0x0) {
                  local_78 = (undefined8 *)0x0;
                  uStack_70 = 0;
                  FUN_009ab200(&local_78,param_2);
                  FUN_01435cd4(plVar10,&local_78);
                  puVar5 = local_78;
                  if (local_78 != (undefined8 *)0x0) {
                    piVar1 = (int *)(local_78 + 1);
                    do {
                      iVar8 = *piVar1;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar3) {
                        *piVar1 = iVar8 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (iVar8 + -1 == 0) {
                      local_78[2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar11 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar11;
                      local_60 = (long *)*puVar5;
                      FUN_02a44274(lVar11 + 0xd8,&local_60);
                    }
                  }
                  if (local_68 != (long *)0x0) {
                    lVar11 = local_68[0xb];
                    piVar1 = (int *)(lVar11 + 0xc);
                    do {
                      iVar8 = *piVar1;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar3) {
                        *piVar1 = iVar8 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (iVar8 == 1) {
                      *(undefined8 *)(lVar11 + 0x18) = 0;
                      (**(code **)(*local_68 + 0x20))();
                    }
                  }
                  uVar12 = 1;
                }
                goto LAB_01437710;
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        uVar12 = 0;
LAB_01437710:
        lVar11 = plVar7[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar7 + 0x20))(plVar7);
        }
      }
    }
    else {
      uVar12 = 0;
    }
    if (plVar6 != (long *)0x0) {
      lVar11 = plVar6[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar6 + 0x20))();
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x688));
  return uVar12;
}


