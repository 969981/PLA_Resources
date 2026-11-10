/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b2af7c; name: FUN_02b2af7c
 */


void FUN_02b2af7c(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *local_68;
  
  if (*(char *)(param_1 + 0x189) != '\0') {
    lVar7 = *(long *)(param_1 + 0x118);
    lVar4 = *(long *)(param_1 + 0x120);
    while (lVar4 != lVar7) {
      plVar8 = (long *)(lVar4 + -8);
      lVar4 = lVar4 + -0x20;
      if ((long *)*plVar8 != (long *)0x0) {
        (**(code **)(*(long *)*plVar8 + 0x20))();
      }
    }
    plVar8 = (long *)(param_1 + 0xd0);
    lVar4 = *plVar8;
    *(long *)(param_1 + 0x120) = lVar7;
    uVar6 = (*(long *)(lVar4 + 0xb8) - *(long *)(lVar4 + 0xb0) >> 4) * 0xc4ec4ec5;
    if ((int)uVar6 != 0) {
      FUN_02b2bd3c(param_1 + 0x118,*(undefined8 *)(lVar4 + 0xb0));
      lVar7 = (uVar6 & 0xffffffff) - 1;
      if (lVar7 != 0) {
        lVar4 = 0xd0;
        do {
          FUN_02b2bd3c(param_1 + 0x118,*(long *)(*plVar8 + 0xb0) + lVar4);
          lVar7 = lVar7 + -1;
          lVar4 = lVar4 + 0xd0;
        } while (lVar7 != 0);
      }
    }
    lVar4 = *(long *)(param_1 + 0xe0);
    for (lVar7 = *(long *)(param_1 + 0xd8); plVar10 = (long *)(*(long *)(param_1 + 0x60) + 0x58),
        lVar7 != lVar4; lVar7 = lVar7 + 0x28) {
      FUN_02b3343c(&local_68,*(undefined8 *)(param_1 + 0x58),lVar7);
      (**(code **)(*plVar10 + 0x10))(plVar10,&local_68);
      if (local_68 != (long *)0x0) {
        plVar10 = local_68 + 10;
        do {
          iVar3 = (int)*plVar10 + -1;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar2) {
            *(int *)plVar10 = iVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar3 == 0) {
          (**(code **)(*local_68 + 0x10))();
        }
      }
    }
    (**(code **)(*plVar10 + 0x10))(plVar10,plVar8);
    *(undefined1 *)(param_1 + 0x189) = 0;
    if (*(long *)(param_1 + 0x200) != 0) {
      if (*(long **)(param_1 + 0x1d8) != (long *)0x0) {
        lVar7 = tpidr_el0;
        plVar8 = *(long **)(param_1 + 0x1d8);
        do {
          while( true ) {
            plVar10 = (long *)*plVar8;
            if ((long *)plVar8[5] != (long *)0x0) {
              (**(code **)(*(long *)plVar8[5] + 0x20))();
            }
            plVar9 = *(long **)(param_1 + 0x1e0);
            uVar6 = (**(code **)(*plVar9 + 0xc0))(plVar9);
            if ((uVar6 & 1) != 0) break;
LAB_02b2b178:
            (**(code **)(*plVar9 + 0x18))(plVar9,plVar8,0x30,8);
            plVar8 = plVar10;
            if (plVar10 == (long *)0x0) goto LAB_02b2b200;
          }
          if (*(char *)(lVar7 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar7 + 0x38d488) = 1;
            *(undefined8 *)(lVar7 + 0x38d478) = 0;
            *(undefined8 *)(lVar7 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar7 + 0x38d480) < 1) goto LAB_02b2b178;
          FUN_02bcc824(plVar9,plVar8,0x30,8);
          plVar8 = plVar10;
        } while (plVar10 != (long *)0x0);
      }
LAB_02b2b200:
      uVar6 = *(ulong *)(param_1 + 0x1b0);
      *(undefined8 *)(param_1 + 0x1d8) = 0;
      if (uVar6 != 0) {
        uVar5 = uVar6 & 3;
        if (uVar6 - 1 < 3) {
          lVar7 = 0;
        }
        else {
          lVar7 = 0;
          do {
            lVar4 = lVar7 * 8;
            lVar7 = lVar7 + 4;
            *(undefined8 *)(*(long *)(param_1 + 0x1a8) + lVar4) = 0;
            *(undefined8 *)(*(long *)(param_1 + 0x1a8) + lVar4 + 8) = 0;
            *(undefined8 *)(*(long *)(param_1 + 0x1a8) + lVar4 + 0x10) = 0;
            *(undefined8 *)(*(long *)(param_1 + 0x1a8) + lVar4 + 0x18) = 0;
          } while (uVar6 - uVar5 != lVar7);
        }
        if (uVar5 != 0) {
          lVar7 = lVar7 << 3;
          do {
            *(undefined8 *)(*(long *)(param_1 + 0x1a8) + lVar7) = 0;
            uVar5 = uVar5 - 1;
            lVar7 = lVar7 + 8;
          } while (uVar5 != 0);
        }
      }
      *(undefined8 *)(param_1 + 0x200) = 0;
    }
    if (*(long *)(param_1 + 0x268) != 0) {
      if (*(long **)(param_1 + 0x240) != (long *)0x0) {
        lVar7 = tpidr_el0;
        plVar8 = *(long **)(param_1 + 0x240);
        do {
          while( true ) {
            plVar10 = (long *)*plVar8;
            if ((long *)plVar8[5] != (long *)0x0) {
              (**(code **)(*(long *)plVar8[5] + 0x20))();
            }
            plVar9 = *(long **)(param_1 + 0x248);
            uVar6 = (**(code **)(*plVar9 + 0xc0))(plVar9);
            if ((uVar6 & 1) != 0) break;
LAB_02b2b32c:
            (**(code **)(*plVar9 + 0x18))(plVar9,plVar8,0x30,8);
            plVar8 = plVar10;
            if (plVar10 == (long *)0x0) goto LAB_02b2b3b4;
          }
          if (*(char *)(lVar7 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar7 + 0x38d488) = 1;
            *(undefined8 *)(lVar7 + 0x38d478) = 0;
            *(undefined8 *)(lVar7 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar7 + 0x38d480) < 1) goto LAB_02b2b32c;
          FUN_02bcc824(plVar9,plVar8,0x30,8);
          plVar8 = plVar10;
        } while (plVar10 != (long *)0x0);
      }
LAB_02b2b3b4:
      uVar6 = *(ulong *)(param_1 + 0x218);
      *(undefined8 *)(param_1 + 0x240) = 0;
      if (uVar6 != 0) {
        uVar5 = uVar6 & 3;
        if (uVar6 - 1 < 3) {
          lVar7 = 0;
        }
        else {
          lVar7 = 0;
          do {
            lVar4 = lVar7 * 8;
            lVar7 = lVar7 + 4;
            *(undefined8 *)(*(long *)(param_1 + 0x210) + lVar4) = 0;
            *(undefined8 *)(*(long *)(param_1 + 0x210) + lVar4 + 8) = 0;
            *(undefined8 *)(*(long *)(param_1 + 0x210) + lVar4 + 0x10) = 0;
            *(undefined8 *)(*(long *)(param_1 + 0x210) + lVar4 + 0x18) = 0;
          } while (uVar6 - uVar5 != lVar7);
        }
        if (uVar5 != 0) {
          lVar7 = lVar7 << 3;
          do {
            *(undefined8 *)(*(long *)(param_1 + 0x210) + lVar7) = 0;
            uVar5 = uVar5 - 1;
            lVar7 = lVar7 + 8;
          } while (uVar5 != 0);
        }
      }
      *(undefined8 *)(param_1 + 0x268) = 0;
    }
  }
  return;
}


