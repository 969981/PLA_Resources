/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0014d220; name: FUN_0014d220
 */


bool FUN_0014d220(long param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  uint uVar12;
  
  if (DAT_0438e190 == 0) {
    do {
      iVar3 = DAT_0438e180;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x438e180,0x10);
      if (bVar2) {
        DAT_0438e180 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 != 0) {
      uVar12 = 0;
LAB_0014d3d0:
      if (DAT_0438e180 == 0) {
        do {
          iVar3 = DAT_0438e180;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(0x438e180,0x10);
          if (bVar2) {
            DAT_0438e180 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar3 == 0) goto LAB_0014d3f8;
      }
      uVar12 = uVar12 + 1;
      if ((uVar12 & 0x3f) == 0) {
        sched_yield();
      }
      goto LAB_0014d3d0;
    }
LAB_0014d3f8:
    if (DAT_0438e190 == 0) {
      DAT_0438e198 = 0x1000;
      DAT_0438e1a0 = 0x10000;
      DAT_0438e1a8 = 0x40000;
      DAT_0438e1b0 = 0x200000;
      DAT_0438e1b8 = 7;
      DAT_0438e530 = 7;
      uVar6 = time((time_t *)0x0);
      DAT_0438e190 = uVar6 & 0xfffffffffffffff0 ^ 0x55555558;
      DAT_0438e180 = 0;
    }
    else {
      DAT_0438e180 = 0;
    }
  }
  if ((param_2 < 0xffffffffffffff80) && (uVar6 = *(ulong *)(param_1 + 0x28), uVar6 != 0)) {
    if (param_2 + 0x50 < *(ulong *)(param_1 + 0x10)) {
      uVar10 = 0;
      if (DAT_0438e1a0 != 0) {
        uVar10 = ((-0x51 - param_2) + *(ulong *)(param_1 + 0x10) + DAT_0438e1a0) / DAT_0438e1a0;
      }
      uVar10 = (uVar10 - 1) * DAT_0438e1a0;
      puVar4 = (ulong *)(param_1 + 0x378);
      puVar11 = puVar4;
      do {
        if ((*puVar11 <= uVar6) && (uVar6 < *puVar11 + puVar11[1])) break;
        puVar11 = (ulong *)puVar11[2];
      } while (puVar11 != (ulong *)0x0);
      if ((puVar11[3] & 9) == 1) {
        uVar6 = puVar11[1];
        if (uVar6 < uVar10) goto LAB_0014d410;
        puVar8 = (ulong *)*puVar11;
        do {
          if ((puVar8 <= puVar4) && (puVar4 < (ulong *)((long)puVar8 + uVar6))) goto LAB_0014d410;
          puVar4 = (ulong *)puVar4[2];
        } while (puVar4 != (ulong *)0x0);
        iVar3 = munmap((void *)((long)puVar8 + (uVar6 - uVar10)),uVar10);
        if ((uVar10 == 0) || (iVar3 != 0)) goto LAB_0014d4a4;
        puVar11[1] = puVar11[1] - uVar10;
        *(ulong *)(param_1 + 0x358) = *(long *)(param_1 + 0x358) - uVar10;
        lVar5 = *(long *)(param_1 + 0x28);
        lVar7 = *(long *)(param_1 + 0x10) - uVar10;
        uVar6 = 0;
        if ((lVar5 + 0x10U & 0xf) != 0) {
          uVar6 = (ulong)(uint)-(int)(lVar5 + 0x10U) & 0xf;
        }
        uVar9 = lVar7 - uVar6;
        *(ulong *)(param_1 + 0x10) = uVar9;
        *(ulong *)(param_1 + 0x28) = lVar5 + uVar6;
        *(ulong *)(lVar5 + uVar6 + 8) = uVar9 | 1;
        *(undefined8 *)(lVar5 + lVar7 + 8) = 0x50;
        *(undefined8 *)(param_1 + 0x30) = DAT_0438e1b0;
        FUN_0014c360(param_1,*(undefined8 *)(param_1 + 0x28));
        lVar5 = FUN_0014d5b0(param_1);
        lVar5 = lVar5 + uVar10;
      }
      else {
LAB_0014d4a4:
        lVar5 = FUN_0014d5b0(param_1);
      }
    }
    else {
LAB_0014d410:
      lVar5 = FUN_0014d5b0(param_1);
    }
    if (lVar5 != 0) goto LAB_0014d4b4;
    if (*(ulong *)(param_1 + 0x30) < *(ulong *)(param_1 + 0x10)) {
      lVar5 = 0;
      *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
      goto LAB_0014d4b4;
    }
  }
  lVar5 = 0;
LAB_0014d4b4:
  return lVar5 != 0;
}


