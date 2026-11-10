/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00997fc4; name: FUN_00997fc4
 */


uint FUN_00997fc4(long param_1,byte *param_2)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long *local_18;
  
  uVar9 = *(ulong *)(param_1 + 0x70);
  bVar3 = *param_2;
  uVar8 = (ulong)bVar3;
  if ((uVar9 & uVar9 - 1) == 0) {
    plVar10 = *(long **)(*(long *)(param_1 + 0x68) + ((int)uVar9 - 1 & uVar8) * 8);
    do {
      do {
        plVar10 = (long *)*plVar10;
      } while (plVar10[1] != uVar8);
    } while (*(byte *)(plVar10 + 2) != bVar3);
  }
  else {
    uVar11 = uVar8;
    if (uVar9 <= uVar8) {
      uVar11 = 0;
      if (uVar9 != 0) {
        uVar11 = uVar8 / uVar9;
      }
      uVar11 = uVar8 - uVar11 * uVar9;
    }
    plVar10 = *(long **)(*(long *)(param_1 + 0x68) + uVar11 * 8);
    do {
      do {
        plVar10 = (long *)*plVar10;
      } while (plVar10[1] != uVar8);
    } while (*(byte *)(plVar10 + 2) != bVar3);
  }
  local_18 = *(long **)((long)plVar10 + 0x18);
  if (local_18 != (long *)0x0) {
    lVar12 = local_18[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar6 = FUN_00ab07c4(&local_18);
  if (local_18 != (long *)0x0) {
    lVar12 = local_18[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_18 + 0x20))();
    }
  }
  return uVar6 & 1;
}


