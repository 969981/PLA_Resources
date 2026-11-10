/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01351220; name: FUN_01351220
 */


void FUN_01351220(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long local_a8;
  long lStack_a0;
  long local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  long local_78;
  long *plStack_70;
  
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_0135f3b4(&local_88,*(undefined8 *)(param_1 + 0x58));
    plVar7 = local_80;
    puVar4 = PTR_PTR_04379d00;
    puVar3 = PTR_DAT_04379c88;
    if (local_88 != local_80) {
      plVar8 = (long *)*local_88;
      plVar5 = local_88;
      while( true ) {
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x18))(plVar8);
        }
        uVar9 = *(undefined8 *)(param_1 + 0x90);
        plVar1 = (long *)puVar3;
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8 + 0xb;
        }
        local_a8 = *plVar1;
        plVar1 = (long *)puVar4;
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8 + 0xc;
        }
        lStack_a0 = *plVar1;
        if (plVar8 == (long *)0x0) {
          local_98 = 0;
        }
        else {
          local_98 = plVar8[0xd];
          local_90 = (long *)0x0;
          (**(code **)(*plVar8 + 0x18))(plVar8);
        }
        local_90 = plVar8;
        FUN_01b2b778(uVar9,&local_a8,0);
        if (local_90 != (long *)0x0) {
          (**(code **)(*local_90 + 0x20))();
        }
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x20))(plVar8);
        }
        plVar5 = plVar5 + 1;
        if (plVar7 == plVar5) break;
        plVar8 = (long *)*plVar5;
      }
    }
    plVar7 = local_88;
    if (local_88 != (long *)0x0) {
      if (local_80 == local_88) {
      }
      else {
        plVar5 = (long *)local_80[-1];
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x20))();
        }
        if (local_80 + -1 != plVar7) {
          plVar5 = (long *)local_80[-2];
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x20))();
          }
          if (local_80 + -2 != plVar7) {
            plVar5 = (long *)local_80[-3];
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x20))();
            }
            if (local_80 + -3 != plVar7) {
              plVar5 = (long *)local_80[-4];
              plVar8 = local_80;
              while( true ) {
                if (plVar5 != (long *)0x0) {
                  (**(code **)(*plVar5 + 0x20))();
                }
                if (plVar7 + 3 == plVar8 + -1) break;
                plVar5 = (long *)plVar8[-5];
                plVar8 = plVar8 + -1;
              }
            }
          }
        }
        plVar7 = local_88;
      }
      uVar6 = (**(code **)(*plStack_70 + 0xc0))(plStack_70);
      if ((uVar6 & 1) != 0) {
        lVar2 = tpidr_el0;
        if (*(char *)(lVar2 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar2 + 0x38d488) = 1;
          *(undefined8 *)(lVar2 + 0x38d478) = 0;
          *(undefined8 *)(lVar2 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar2 + 0x38d480)) {
          FUN_02bcc824(plStack_70,plVar7,local_78 - (long)plVar7,8);
          return;
        }
      }
      (**(code **)(*plStack_70 + 0x18))(plStack_70,plVar7,local_78 - (long)plVar7,8);
    }
  }
  return;
}


