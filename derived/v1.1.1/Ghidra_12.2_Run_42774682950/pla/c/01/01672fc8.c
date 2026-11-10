/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01672fc8; name: FUN_01672fc8
 */


int FUN_01672fc8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  if (*(long *)(param_1 + 0xd8) == 0) {
    iVar5 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x100) != '\0') {
      FUN_01660ff0(*(undefined8 *)(param_1 + 0x120));
      iVar5 = 0;
      *(undefined1 *)(param_1 + 0x100) = 0;
      if (*(long *)(param_1 + 0xd8) == 0) goto LAB_016730ac;
    }
    uVar7 = *(ulong *)(param_1 + 0xd0);
    lVar10 = tpidr_el0;
    do {
      iVar5 = FUN_0163478c(*(undefined8 *)(param_1 + 0x128),
                           *(long *)(*(long *)(param_1 + 0x98) + (uVar7 >> 6 & 0x3fffffffffffff8)) +
                           (uVar7 & 0x1ff) * 8);
      if (iVar5 == 1) {
        return 1;
      }
      plVar6 = *(long **)(*(long *)(*(long *)(param_1 + 0x98) +
                                   (*(ulong *)(param_1 + 0xd0) >> 6 & 0x3fffffffffffff8)) +
                         (*(ulong *)(param_1 + 0xd0) & 0x1ff) * 8);
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 10;
        do {
          iVar4 = (int)*plVar1 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
      }
      uVar7 = *(long *)(param_1 + 0xd0) + 1;
      lVar8 = *(long *)(param_1 + 0xd8) + -1;
      *(ulong *)(param_1 + 0xd0) = uVar7;
      *(long *)(param_1 + 0xd8) = lVar8;
      if (0x3ff < uVar7) {
        plVar6 = *(long **)(param_1 + 0xe0);
        uVar11 = **(undefined8 **)(param_1 + 0x98);
        uVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
        if ((uVar7 & 1) == 0) {
LAB_016731b8:
          (**(code **)(*plVar6 + 0x18))(plVar6,uVar11,0x1000,8);
        }
        else {
          if (*(char *)(lVar10 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar10 + 0x38d488) = 1;
            *(undefined8 *)(lVar10 + 0x38d478) = 0;
            *(undefined8 *)(lVar10 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_016731b8;
          FUN_02bcc824(plVar6,uVar11,0x1000,8);
        }
        *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + 8;
        lVar8 = *(long *)(param_1 + 0xd8);
        uVar7 = *(long *)(param_1 + 0xd0) - 0x200;
        *(ulong *)(param_1 + 0xd0) = uVar7;
      }
      if (iVar5 == 2) {
        if (lVar8 != 0) {
          return 2;
        }
        break;
      }
    } while (lVar8 != 0);
  }
LAB_016730ac:
  lVar10 = *(long *)(param_1 + 0x120);
  *(undefined1 *)(param_1 + 0x100) = 1;
  if (*(long *)(lVar10 + 0x148) != 0) {
    plVar6 = (long *)(lVar10 + 0xf0);
    FUN_0165e814(plVar6,*(undefined8 *)(lVar10 + 0x120));
    lVar8 = *(long *)(lVar10 + 0xf8);
    *(undefined8 *)(lVar10 + 0x120) = 0;
    if (((lVar8 != 0) && (*(undefined8 *)*plVar6 = 0, lVar8 != 1)) &&
       (*(undefined8 *)(*plVar6 + 8) = 0, lVar8 != 2)) {
      lVar9 = 2;
      do {
        *(undefined8 *)(*plVar6 + lVar9 * 8) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar8 != lVar9);
    }
    *(undefined8 *)(lVar10 + 0x148) = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x130) + 0x54) = 0;
  return iVar5;
}


