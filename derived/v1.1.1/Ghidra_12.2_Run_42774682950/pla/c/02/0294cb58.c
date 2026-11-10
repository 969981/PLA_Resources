/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0294cb58; name: FUN_0294cb58
 */


void FUN_0294cb58(long param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  
  lVar13 = 0;
  do {
    lVar3 = param_2 + lVar13 * 8;
    if (*(long *)(lVar3 + 0x120) == 0) {
      lVar3 = param_1 + lVar13 * 8;
      if (*(long *)(lVar3 + 0x210) == 0) {
        plVar9 = (long *)(lVar3 + 0x210);
        lVar10 = *(long *)(lVar3 + 0x120);
        if (lVar10 == 0) {
          *plVar9 = 0;
        }
        else {
          piVar1 = (int *)(lVar10 + 0x50);
          do {
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = *piVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          plVar8 = (long *)*plVar9;
          *plVar9 = lVar10;
          if (plVar8 != (long *)0x0) {
            plVar9 = plVar8 + 10;
            do {
              iVar6 = (int)*plVar9 + -1;
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar7) {
                *(int *)plVar9 = iVar6;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar6 == 0) {
              (**(code **)(*plVar8 + 0x10))();
            }
          }
        }
        plVar9 = *(long **)(lVar3 + 0x120);
        *(long *)(lVar3 + 0x120) = 0;
        if (plVar9 != (long *)0x0) {
          plVar8 = plVar9 + 10;
          do {
            iVar6 = (int)*plVar8 + -1;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar7) {
              *(int *)plVar8 = iVar6;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*plVar9 + 0x10))();
          }
        }
      }
      plVar9 = (long *)(param_1 + lVar13 * 8 + 0x210);
      puVar14 = (undefined8 *)(param_2 + lVar13 * 8 + 0x210);
    }
    else {
      puVar14 = (undefined8 *)(lVar3 + 0x120);
      lVar3 = param_1 + lVar13 * 8;
      plVar9 = (long *)(lVar3 + 0x120);
      if (*(long *)(lVar3 + 0x120) == 0) {
        lVar10 = *(long *)(lVar3 + 0x210);
        if (lVar10 == 0) {
          *plVar9 = 0;
        }
        else {
          piVar1 = (int *)(lVar10 + 0x50);
          do {
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = *piVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          plVar8 = (long *)*plVar9;
          *plVar9 = lVar10;
          if (plVar8 != (long *)0x0) {
            plVar2 = plVar8 + 10;
            do {
              iVar6 = (int)*plVar2 + -1;
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar7) {
                *(int *)plVar2 = iVar6;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar6 == 0) {
              (**(code **)(*plVar8 + 0x10))();
            }
          }
        }
        plVar8 = *(long **)(lVar3 + 0x210);
        *(long *)(lVar3 + 0x210) = 0;
        if (plVar8 != (long *)0x0) {
          plVar2 = plVar8 + 10;
          do {
            iVar6 = (int)*plVar2 + -1;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar7) {
              *(int *)plVar2 = iVar6;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*plVar8 + 0x10))();
          }
        }
      }
    }
    FUN_02950338(*plVar9,*puVar14);
    lVar13 = lVar13 + 1;
  } while (lVar13 != 0x1e);
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (*(char *)(param_2 + 0x38) != '\0') {
    uVar11 = *(undefined8 *)(param_1 + (ulong)*(byte *)(*(long *)(param_2 + 8) + 0x7d) * 8 + 0x120);
    *(undefined1 *)(param_1 + 0x38) = 1;
    *(undefined8 *)(param_1 + 8) = uVar11;
    if (1 < *(byte *)(param_2 + 0x38)) {
      uVar12 = 2;
      do {
        bVar4 = *(byte *)(param_1 + 0x38);
        uVar11 = *(undefined8 *)
                  (param_1 + (ulong)*(byte *)(*(long *)(param_2 + uVar12 * 8) + 0x7d) * 8 + 0x120);
        *(byte *)(param_1 + 0x38) = bVar4 + 1;
        *(undefined8 *)(param_1 + (ulong)bVar4 * 8 + 8) = uVar11;
        bVar7 = uVar12 < *(byte *)(param_2 + 0x38);
        uVar12 = uVar12 + 1;
      } while (bVar7);
    }
  }
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (*(char *)(param_2 + 0x70) != '\0') {
    uVar11 = *(undefined8 *)
              (param_1 + (ulong)*(byte *)(*(long *)(param_2 + 0x40) + 0x7d) * 8 + 0x120);
    *(undefined1 *)(param_1 + 0x70) = 1;
    *(undefined8 *)(param_1 + 0x40) = uVar11;
    if (1 < *(byte *)(param_2 + 0x70)) {
      lVar13 = 9;
      do {
        bVar4 = *(byte *)(param_1 + 0x70);
        uVar11 = *(undefined8 *)
                  (param_1 + (ulong)*(byte *)(*(long *)(param_2 + lVar13 * 8) + 0x7d) * 8 + 0x120);
        *(byte *)(param_1 + 0x70) = bVar4 + 1;
        *(undefined8 *)(param_1 + (ulong)bVar4 * 8 + 0x40) = uVar11;
        uVar12 = lVar13 - 7;
        lVar13 = lVar13 + 1;
      } while (uVar12 < *(byte *)(param_2 + 0x70));
    }
  }
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (*(char *)(param_2 + 0xa8) != '\0') {
    uVar11 = *(undefined8 *)
              (param_1 + (ulong)*(byte *)(*(long *)(param_2 + 0x78) + 0x7d) * 8 + 0x120);
    *(undefined1 *)(param_1 + 0xa8) = 1;
    *(undefined8 *)(param_1 + 0x78) = uVar11;
    if (1 < *(byte *)(param_2 + 0xa8)) {
      lVar13 = 0x10;
      do {
        bVar4 = *(byte *)(param_1 + 0xa8);
        uVar11 = *(undefined8 *)
                  (param_1 + (ulong)*(byte *)(*(long *)(param_2 + lVar13 * 8) + 0x7d) * 8 + 0x120);
        *(byte *)(param_1 + 0xa8) = bVar4 + 1;
        *(undefined8 *)(param_1 + (ulong)bVar4 * 8 + 0x78) = uVar11;
        uVar12 = lVar13 - 0xe;
        lVar13 = lVar13 + 1;
      } while (uVar12 < *(byte *)(param_2 + 0xa8));
    }
  }
  *(undefined1 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if (*(char *)(param_2 + 0xe0) != '\0') {
    uVar11 = *(undefined8 *)
              (param_1 + (ulong)*(byte *)(*(long *)(param_2 + 0xb0) + 0x7d) * 8 + 0x120);
    *(undefined1 *)(param_1 + 0xe0) = 1;
    *(undefined8 *)(param_1 + 0xb0) = uVar11;
    if (1 < *(byte *)(param_2 + 0xe0)) {
      lVar13 = 0x17;
      do {
        bVar4 = *(byte *)(param_1 + 0xe0);
        uVar11 = *(undefined8 *)
                  (param_1 + (ulong)*(byte *)(*(long *)(param_2 + lVar13 * 8) + 0x7d) * 8 + 0x120);
        *(byte *)(param_1 + 0xe0) = bVar4 + 1;
        *(undefined8 *)(param_1 + (ulong)bVar4 * 8 + 0xb0) = uVar11;
        uVar12 = lVar13 - 0x15;
        lVar13 = lVar13 + 1;
      } while (uVar12 < *(byte *)(param_2 + 0xe0));
    }
  }
  *(undefined1 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if (*(char *)(param_2 + 0x118) != '\0') {
    uVar11 = *(undefined8 *)
              (param_1 + (ulong)*(byte *)(*(long *)(param_2 + 0xe8) + 0x7d) * 8 + 0x120);
    *(undefined1 *)(param_1 + 0x118) = 1;
    *(undefined8 *)(param_1 + 0xe8) = uVar11;
    if (1 < *(byte *)(param_2 + 0x118)) {
      lVar13 = 0x1e;
      do {
        bVar4 = *(byte *)(param_1 + 0x118);
        uVar11 = *(undefined8 *)
                  (param_1 + (ulong)*(byte *)(*(long *)(param_2 + lVar13 * 8) + 0x7d) * 8 + 0x120);
        *(byte *)(param_1 + 0x118) = bVar4 + 1;
        *(undefined8 *)(param_1 + (ulong)bVar4 * 8 + 0xe8) = uVar11;
        uVar12 = lVar13 - 0x1c;
        lVar13 = lVar13 + 1;
      } while (uVar12 < *(byte *)(param_2 + 0x118));
    }
  }
  return;
}


