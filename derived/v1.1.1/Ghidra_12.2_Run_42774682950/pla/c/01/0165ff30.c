/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0165ff30; name: FUN_0165ff30
 */


uint FUN_0165ff30(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long *plVar14;
  long *plVar15;
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379678), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar8 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar8;
  plVar15 = *(long **)(lVar8 + 0x100);
  if (plVar15 != (long *)0x0) {
    plVar7 = plVar15 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *(int *)plVar7 = (int)*plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar7 = (long *)plVar15[0x20];
  if (plVar7 != (long *)0x0) {
    plVar14 = plVar7 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar14 = (long *)plVar7[0x14];
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar1 = plVar7 + 10;
  do {
    iVar5 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar7 + 0x10))();
  }
  plVar7 = plVar15 + 10;
  do {
    iVar5 = (int)*plVar7 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *(int *)plVar7 = iVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
  }
  puVar9 = (undefined1 *)*param_1;
  if (puVar9 == &DAT_cbf29ce484222645) {
    uVar6 = 0;
  }
  else {
    puVar10 = (undefined1 *)plVar14[0xc];
    if (puVar10 != (undefined1 *)0x0) {
      uVar11 = (long)puVar10 - ((ulong)puVar10 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        puVar12 = (undefined1 *)((ulong)(puVar10 + -1) & (ulong)puVar9);
      }
      else if (puVar9 < puVar10) {
        puVar12 = puVar9;
      }
      else {
        uVar4 = 0;
        if (puVar10 != (undefined1 *)0x0) {
          uVar4 = (ulong)puVar9 / (ulong)puVar10;
        }
        puVar12 = puVar9 + -(uVar4 * (long)puVar10);
      }
      plVar15 = *(long **)(plVar14[0xb] + (long)puVar12 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if ((undefined1 *)plVar15[1] == puVar9) {
              if ((undefined1 *)plVar15[2] == puVar9) goto LAB_016601b4;
            }
            else if ((undefined1 *)((ulong)plVar15[1] & (ulong)(puVar10 + -1)) != puVar12)
            goto LAB_0166021c;
            plVar15 = (long *)*plVar15;
            uVar6 = 0;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            puVar13 = (undefined1 *)plVar15[1];
            if (puVar13 == puVar9) {
              if ((undefined1 *)plVar15[2] == puVar9) goto LAB_016601b4;
            }
            else {
              if (puVar10 <= puVar13) {
                uVar11 = 0;
                if (puVar10 != (undefined1 *)0x0) {
                  uVar11 = (ulong)puVar13 / (ulong)puVar10;
                }
                puVar13 = puVar13 + -(uVar11 * (long)puVar10);
              }
              if (puVar13 != puVar12) goto LAB_0166021c;
            }
            plVar15 = (long *)*plVar15;
            uVar6 = 0;
          } while (plVar15 != (long *)0x0);
        }
        goto joined_r0x01660214;
      }
    }
LAB_0166021c:
    uVar6 = 0;
  }
joined_r0x01660214:
  if (plVar14 != (long *)0x0) {
    plVar15 = plVar14 + 10;
    do {
      iVar5 = (int)*plVar15 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar3) {
        *(int *)plVar15 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  return uVar6 & 1;
LAB_016601b4:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar7 = plVar15 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *(int *)plVar7 = (int)*plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar6 = (**(code **)(*plVar15 + 0x28))(plVar15,param_1);
  if (plVar15 != (long *)0x0) {
    plVar7 = plVar15 + 10;
    do {
      iVar5 = (int)*plVar7 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *(int *)plVar7 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
  goto joined_r0x01660214;
}


