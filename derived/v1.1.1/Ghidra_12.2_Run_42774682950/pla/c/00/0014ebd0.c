/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0014ebd0; name: FUN_0014ebd0
 */


long * FUN_0014ebd0(undefined4 *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  int *piVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  uint uVar12;
  
  if (param_2 < 0x21) {
    param_2 = 0x20;
  }
  uVar10 = param_2;
  if ((param_2 - 1 & param_2) != 0) {
    uVar1 = 0x20;
    do {
      uVar10 = uVar1;
      uVar1 = uVar10 << 1;
    } while (uVar10 < param_2);
  }
  if (param_3 < -uVar10 - 0x80) {
    uVar1 = 0x20;
    if (0x16 < param_3) {
      uVar1 = param_3 + 0x17 & 0xfffffffffffffff0;
    }
    if (param_1 == &DAT_0438e1c0) {
      uVar5 = FUN_0014b420(uVar1 + uVar10 + 0x18);
      if (uVar5 == 0) {
        return (long *)0x0;
      }
    }
    else {
      uVar5 = FUN_0014de90(param_1);
      if (uVar5 == 0) {
        return (long *)0x0;
      }
    }
    plVar11 = (long *)(uVar5 - 0x10);
    if ((*(byte *)(param_1 + 0xdc) >> 1 & 1) != 0) {
      piVar6 = param_1 + 0xdd;
      do {
        iVar2 = *piVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar4) {
          *piVar6 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 != 0) {
        uVar12 = 0;
LAB_0014ec98:
        if (*piVar6 == 0) {
          do {
            iVar2 = *piVar6;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar4) {
              *piVar6 = 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 == 0) goto LAB_0014ecec;
        }
        uVar12 = uVar12 + 1;
        if ((uVar12 & 0x3f) == 0) {
          sched_yield();
        }
        goto LAB_0014ec98;
      }
    }
LAB_0014ecec:
    plVar8 = plVar11;
    if ((uVar10 - 1 & uVar5) != 0) {
      plVar8 = (long *)(((uVar5 + uVar10) - 1 & -uVar10) - 0x10);
      if ((ulong)((long)plVar8 - (long)plVar11) < 0x20) {
        plVar8 = (long *)((long)plVar8 + uVar10);
      }
      uVar7 = (long)plVar8 - (long)plVar11;
      uVar9 = (*(ulong *)(uVar5 - 8) & 0xfffffffffffffff8) - uVar7;
      if ((*(ulong *)(uVar5 - 8) & 3) == 0) {
        *plVar8 = *plVar11 + uVar7;
        plVar8[1] = uVar9;
      }
      else {
        plVar8[1] = uVar9 | plVar8[1] & 1U | 2;
        *(ulong *)((long)plVar8 + uVar9 + 8) = *(ulong *)((long)plVar8 + uVar9 + 8) | 1;
        *(ulong *)(uVar5 - 8) = uVar7 | *(ulong *)(uVar5 - 8) & 1 | 2;
        plVar8[1] = plVar8[1] | 1;
        FUN_0014f5d0(param_1,plVar11);
      }
    }
    uVar5 = plVar8[1];
    if (((uVar5 & 3) != 0) && (uVar7 = uVar5 & 0xfffffffffffffff8, uVar1 + 0x20 < uVar7)) {
      plVar8[1] = uVar1 | uVar5 & 1 | 2;
      *(ulong *)((long)plVar8 + uVar1 + 8) = uVar7 - uVar1 | 3;
      *(ulong *)((long)plVar8 + uVar7 + 8) = *(ulong *)((long)plVar8 + uVar7 + 8) | 1;
      FUN_0014f5d0(param_1);
      uVar5 = plVar8[1];
    }
    if (((uVar5 & 0xfffffffffffffff8) < uVar1) ||
       (plVar11 = plVar8 + 2, (uVar10 - 1 & (ulong)plVar11) != 0)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    FUN_0014d190(param_1,plVar8);
    if ((*(byte *)(param_1 + 0xdc) >> 1 & 1) != 0) {
      param_1[0xdd] = 0;
    }
  }
  else if (param_1 == (undefined4 *)0x0) {
    plVar11 = (long *)0x0;
  }
  else {
    piVar6 = __errno_location();
    plVar11 = (long *)0x0;
    *piVar6 = 0xc;
  }
  return plVar11;
}


