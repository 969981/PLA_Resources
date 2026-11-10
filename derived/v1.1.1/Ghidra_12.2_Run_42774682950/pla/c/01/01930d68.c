/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01930d68; name: FUN_01930d68
 */


void FUN_01930d68(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  int *piVar8;
  ulong uVar9;
  long *plVar10;
  long *local_78;
  char local_70 [8];
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  long local_38;
  
  FUN_0192ce14(local_70,param_1 + 8);
  if (local_70[0] != '\0') {
    lVar6 = FUN_0192cab8(local_68);
    plVar4 = local_50;
    for (plVar10 = *(long **)(lVar6 + 0x30); local_50 = plVar4, plVar10 != (long *)0x0;
        plVar10 = (long *)*plVar10) {
      piVar8 = (int *)plVar10[3];
      if (*(ushort *)((long)piVar8 - (long)*piVar8) < 5) {
        local_38 = 0;
      }
      else {
        uVar9 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2];
        local_38 = 0;
        if (uVar9 != 0) {
          local_38 = *(long *)((long)piVar8 + uVar9);
        }
      }
      if (local_38 != *param_2) {
        if (plVar4 == (long *)0x0) {
          FUN_01930c88(piVar8,&local_78);
        }
        else {
          lVar6 = plVar4[0xb];
          if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar6 + 0x10) == 0) {
            uVar7 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
            *(undefined8 *)(lVar6 + 0x10) = uVar7;
          }
          piVar1 = (int *)(lVar6 + 0xc);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          FUN_01930c88(piVar8,&local_78);
          lVar6 = plVar4[0xb];
          piVar8 = (int *)(lVar6 + 0xc);
          do {
            iVar5 = *piVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar3) {
              *piVar8 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 + -1 == 0) {
            *(undefined8 *)(lVar6 + 0x18) = 0;
            (**(code **)(*plVar4 + 0x20))(plVar4);
          }
        }
        FUN_01102c4c(local_58,&local_38);
      }
      plVar4 = local_50;
    }
    if (((*PTR_DAT_0437a780 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a780);
    }
    lVar6 = *(long *)PTR_DAT_0437a788;
    *(long *)PTR_DAT_0437a790 = lVar6;
    for (plVar10 = *(long **)(*(long *)(lVar6 + 0x78) + 0x930); plVar10 != (long *)0x0;
        plVar10 = (long *)*plVar10) {
      piVar8 = (int *)plVar10[3];
      if (*(ushort *)((long)piVar8 - (long)*piVar8) < 5) {
        local_38 = 0;
      }
      else {
        uVar9 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2];
        local_38 = 0;
        if (uVar9 != 0) {
          local_38 = *(long *)((long)piVar8 + uVar9);
        }
      }
      if (local_38 != *param_2) {
        FUN_01930360();
        FUN_01102c4c(local_58,&local_38);
      }
    }
    if (local_70[0] != '\0') {
      if (local_48 != (long *)0x0) {
        lVar6 = local_48[0xb];
        piVar8 = (int *)(lVar6 + 0xc);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) {
          *(undefined8 *)(lVar6 + 0x18) = 0;
          (**(code **)(*local_48 + 0x20))();
        }
      }
      if (local_50 != (long *)0x0) {
        lVar6 = local_50[0xb];
        piVar8 = (int *)(lVar6 + 0xc);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) {
          *(undefined8 *)(lVar6 + 0x18) = 0;
          (**(code **)(*local_50 + 0x20))();
        }
      }
      if (local_58 != (long *)0x0) {
        lVar6 = local_58[0xb];
        piVar8 = (int *)(lVar6 + 0xc);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) {
          *(undefined8 *)(lVar6 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))();
        }
      }
      if (local_60 != (long *)0x0) {
        lVar6 = local_60[0xb];
        piVar8 = (int *)(lVar6 + 0xc);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) {
          *(undefined8 *)(lVar6 + 0x18) = 0;
          (**(code **)(*local_60 + 0x20))();
        }
      }
      if (local_68 != (long *)0x0) {
        lVar6 = local_68[0xb];
        piVar8 = (int *)(lVar6 + 0xc);
        do {
          iVar5 = *piVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) {
          *(undefined8 *)(lVar6 + 0x18) = 0;
          (**(code **)(*local_68 + 0x20))();
        }
      }
    }
  }
  return;
}


