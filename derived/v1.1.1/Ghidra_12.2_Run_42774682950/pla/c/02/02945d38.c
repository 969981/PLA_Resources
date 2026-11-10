/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02945d38; name: FUN_02945d38
 */


void FUN_02945d38(long *param_1,ulong param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  short sVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  char *pcVar13;
  ulong uVar14;
  char cVar15;
  
  uVar14 = 0;
  do {
    cVar15 = *(char *)((long)param_3 + uVar14 + 8);
    if (cVar15 < '\0') {
      cVar15 = '\x1f';
    }
    else {
      cVar15 = (&DAT_03a7eb48)[param_2 & 0xff] + cVar15;
    }
    plVar10 = (long *)(**(code **)(*(long *)*param_3 + 0x58))((long *)*param_3,uVar14 & 0xffffffff);
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar11 = FUN_02c6cf3c(plVar10[0x13]);
    lVar12 = plVar10[0x13];
    if (((uVar11 & 1) == 0) && ((*(ushort *)(*(long *)(lVar12 + 0x10) + 4) >> 2 & 1) == 0)) {
      uVar8 = FUN_02c6849c();
      lVar12 = plVar10[0x13];
    }
    else {
      uVar8 = 0x38a;
    }
    uVar6 = FUN_02c6f924(lVar12);
    uVar9 = FUN_02c6f5e8(plVar10[0x13]);
    uVar5 = FUN_02c5fb2c(plVar10);
    sVar7 = FUN_02c687d4(plVar10[0x13]);
    pcVar13 = (char *)(*param_1 + uVar14 * 0x14 + 0x60);
    if (*pcVar13 == '\x1f') {
      lVar12 = *param_1 + uVar14 * 0x14;
      *pcVar13 = cVar15;
      *(undefined4 *)(lVar12 + 100) = uVar8;
      *(undefined2 *)(lVar12 + 0x68) = uVar6;
      *(undefined4 *)(lVar12 + 0x6c) = uVar9;
      *(undefined1 *)(lVar12 + 0x70) = uVar5;
      *(bool *)(lVar12 + 0x71) = sVar7 != 0;
    }
    plVar1 = plVar10 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar15 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar15 = ExclusiveMonitorsStatus();
      }
    } while (cVar15 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    uVar14 = uVar14 + 1;
  } while (uVar14 != 6);
  return;
}


