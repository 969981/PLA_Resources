/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030f6350; name: FUN_030f6350
 */


void FUN_030f6350(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  
  if (*(long *)(param_1 + 0x6c0) != 0) {
    uVar6 = *(uint *)(param_1 + 0x6d8);
    if (*(char *)(param_1 + 0x6cc) != '\0') {
      plVar5 = *(long **)(param_1 + 0x6d0);
      if ((int)uVar6 < 1) {
        plVar9 = plVar5;
      }
      else {
        plVar9 = plVar5;
        if (uVar6 != 1) {
          iVar10 = (uVar6 & 1) - uVar6;
          do {
            if (*plVar9 == 0) {
              lVar11 = plVar9[1];
              plVar8 = plVar5;
            }
            else {
              *plVar5 = *plVar9;
              lVar11 = plVar9[1];
              plVar8 = plVar5 + 1;
            }
            plVar5 = plVar8;
            if (lVar11 != 0) {
              plVar5 = plVar8 + 1;
              *plVar8 = lVar11;
            }
            plVar9 = plVar9 + 2;
            iVar10 = iVar10 + 2;
          } while (iVar10 != 0);
        }
        plVar8 = plVar5;
        if (((uVar6 & 1) != 0) && (*plVar9 != 0)) {
          plVar8 = plVar5 + 1;
          *plVar5 = *plVar9;
        }
        plVar5 = plVar8;
        plVar9 = *(long **)(param_1 + 0x6d0);
      }
      *(undefined1 *)(param_1 + 0x6cc) = 0;
      uVar6 = (uint)((ulong)((long)plVar5 - (long)plVar9) >> 3);
    }
    if (uVar6 != 0) {
      (**(code **)(**(long **)(param_1 + 0x6c0) + 0x28))
                (*(long **)(param_1 + 0x6c0),*(undefined8 *)(param_1 + 0x6d0));
    }
    *(undefined4 *)(param_1 + 0x6d8) = 0;
    *(undefined4 *)(param_1 + 0x6c8) = 0;
  }
  puVar4 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0x6d8) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x6dc)) && (*(long *)(param_1 + 0x6d0) != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,*(long *)(param_1 + 0x6d0),
               ((ulong)*(uint *)(param_1 + 0x6dc) & 0x3fffffff) << 3);
  }
  *(undefined8 *)(param_1 + 0x6d0) = 0;
  *(undefined4 *)(param_1 + 0x6dc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x558) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x55c)) && (*(long *)(param_1 + 0x550) != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,*(long *)(param_1 + 0x550),
               ((ulong)*(uint *)(param_1 + 0x55c) & 0x3fffffff) << 6);
  }
  *(undefined8 *)(param_1 + 0x550) = 0;
  *(undefined4 *)(param_1 + 0x55c) = 0x80000000;
  if (*(int *)(param_1 + 0x3ac) == 0) {
    plVar5 = *(long **)(param_1 + 0x398);
    if (plVar5[1] != 0) {
      plVar9 = plVar5 + 2;
      do {
        lVar11 = *plVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = lVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))();
      }
    }
    plVar5 = *(long **)(param_1 + 0x3a0);
    if (plVar5[1] != 0) {
      plVar9 = plVar5 + 2;
      do {
        lVar11 = *plVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = lVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x298);
  *(undefined **)(param_1 + 800) = PTR_DAT_043723c0 + 0x10;
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar9 = plVar5 + 2;
    do {
      lVar11 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
      lVar11 = *(long *)(param_1 + 0x290);
      goto joined_r0x030f6410;
    }
  }
  lVar11 = *(long *)(param_1 + 0x290);
joined_r0x030f6410:
  if (lVar11 != 0) {
    *(undefined **)(lVar11 + 0x210) = PTR_DAT_043724f0 + 0x10;
    if (*(long **)(lVar11 + 0x218) != (long *)0x0) {
      (**(code **)(**(long **)(lVar11 + 0x218) + 8))();
    }
    lVar3 = tpidr_el0;
    lVar7 = *(long *)(lVar3 + 0x38d490);
    if (lVar7 == 0) {
      lVar7 = FUN_0333d16c(0,1);
      *(long *)(lVar3 + 0x38d490) = lVar7;
    }
    plVar5 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar11,0xc90);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x54)) && (*(long *)(param_1 + 0x48) != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,*(long *)(param_1 + 0x48),((ulong)*(uint *)(param_1 + 0x54) & 0x3fffffff) << 6
              );
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x80000000;
  return;
}


