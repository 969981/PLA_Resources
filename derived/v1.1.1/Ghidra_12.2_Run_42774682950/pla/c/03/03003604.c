/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03003604; name: FUN_03003604
 */


void FUN_03003604(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined2 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  ulong *puVar14;
  long *plVar15;
  long *plVar16;
  
  puVar6 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xb4)) && (*(long *)(param_1 + 0xa8) != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))
              (puVar6,*(long *)(param_1 + 0xa8),((ulong)*(uint *)(param_1 + 0xb4) & 0x3fffffff) << 3
              );
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0x80000000;
  FUN_032c0f00(param_1 + 0x90);
  FUN_03002e5c(param_1 + 0x78);
  if (0 < (int)*(uint *)(param_1 + 0x8c)) {
    lVar10 = 0;
    lVar9 = (ulong)*(uint *)(param_1 + 0x8c) + 1;
    do {
      if (*(short *)(*(long *)(param_1 + 0x80) + lVar10) != -1) {
        *(undefined2 *)(*(long *)(param_1 + 0x80) + lVar10) = 0xffff;
      }
      lVar9 = lVar9 + -1;
      lVar10 = lVar10 + 0x10;
    } while (lVar9 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0x88);
  *(uint *)(param_1 + 0x88) = uVar2 & 0x80000000;
  if ((-1 < (int)uVar2) && (*(long *)(param_1 + 0x80) != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))
              (puVar6,*(long *)(param_1 + 0x80),(long)(*(int *)(param_1 + 0x8c) * 0x10 + 0x10));
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0xffffffff00000000;
  if (*(int *)(param_1 + 0x70) != 0) {
    plVar15 = *(long **)(param_1 + 0x68);
    plVar16 = plVar15 + (long)*(int *)(param_1 + 0x70) + -1;
    plVar7 = (long *)*plVar16;
    if (plVar7 != (long *)0x0) goto LAB_030036c0;
LAB_030036b0:
    if (plVar16 != plVar15) {
      while( true ) {
        plVar16 = plVar16 + -1;
        plVar7 = (long *)*plVar16;
        if (plVar7 == (long *)0x0) break;
LAB_030036c0:
        if (plVar7[1] == 0) break;
        plVar1 = plVar7 + 2;
        do {
          lVar9 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar9 + -1 != 0) break;
        (**(code **)(*plVar7 + 0x18))();
        if (plVar16 == plVar15) goto LAB_030036f4;
      }
      goto LAB_030036b0;
    }
  }
LAB_030036f4:
  *(undefined4 *)(param_1 + 0x70) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x74)) && (*(long *)(param_1 + 0x68) != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))
              (puVar6,*(long *)(param_1 + 0x68),((ulong)*(uint *)(param_1 + 0x74) & 0x3fffffff) << 3
              );
  }
  iVar12 = *(int *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x74) = 0x80000000;
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (0 < iVar12) {
    lVar10 = 0;
    lVar9 = 0;
    do {
      lVar13 = *(long *)(param_1 + 0x38) + lVar10;
      if ((*(int *)(lVar13 + 0x14) != 0x7fffffff) &&
         (plVar7 = *(long **)(lVar13 + 0x28), plVar7 != (long *)0x0)) {
        (**(code **)(*plVar7 + 8))();
        iVar12 = *(int *)(param_1 + 0x40);
      }
      lVar9 = lVar9 + 1;
      lVar10 = lVar10 + 0x38;
    } while (lVar9 < iVar12);
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    (**(code **)(*(long *)puVar6 + 0x18))
              (puVar6,*(long *)(param_1 + 0x48),(long)*(int *)(param_1 + 0x50));
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x44)) && (*(long *)(param_1 + 0x38) != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))
              (puVar6,*(long *)(param_1 + 0x38),
               ((ulong)*(uint *)(param_1 + 0x44) & 0x3fffffff) * 0x38);
  }
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar9 = 0;
    lVar10 = tpidr_el0;
    do {
      lVar13 = *(long *)(param_1 + 8);
      if (*(int *)(lVar13 + lVar9 * 0x68 + 0x30) != 0x7fffffff) {
        puVar14 = (ulong *)(lVar13 + lVar9 * 0x68 + 0x58);
        uVar8 = *puVar14;
        if (1 < uVar8) {
          uVar3 = *(undefined2 *)(lVar13 + lVar9 * 0x68 + 0x56);
          lVar11 = *(long *)(lVar10 + 0x38d490);
          if (lVar11 == 0) {
            lVar11 = FUN_0333d16c(0,1);
            *(long *)(lVar10 + 0x38d490) = lVar11;
          }
          plVar7 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
          (**(code **)(*plVar7 + 0x18))(plVar7,uVar8,uVar3);
        }
        lVar13 = lVar13 + lVar9 * 0x68;
        *puVar14 = 0;
        plVar7 = *(long **)(lVar13 + 0x20);
        *(undefined2 *)(lVar13 + 0x56) = 0;
        if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
          plVar15 = plVar7 + 2;
          do {
            lVar13 = *plVar15;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar5) {
              *plVar15 = lVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar13 + -1 == 0) {
            (**(code **)(*plVar7 + 0x18))();
          }
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(param_1 + 0x10));
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(*(long *)puVar6 + 0x18))
              (puVar6,*(long *)(param_1 + 0x18),(long)*(int *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*(long *)(param_1 + 8) != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))
              (puVar6,*(long *)(param_1 + 8),((ulong)*(uint *)(param_1 + 0x14) & 0x3fffffff) * 0x68)
    ;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  return;
}


