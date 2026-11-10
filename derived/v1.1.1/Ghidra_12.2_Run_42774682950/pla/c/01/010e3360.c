/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010e3360; name: FUN_010e3360
 */


uint FUN_010e3360(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  uint uVar11;
  uint uVar12;
  long *local_48;
  
  plVar2 = (long *)(param_1 + 0x54668);
  if (*plVar2 == 0) {
    uVar11 = 0x20;
  }
  else {
    bVar3 = *(byte *)(*plVar2 + 0x4a8);
    uVar11 = (uint)bVar3;
    if (bVar3 == 0x20) {
      iVar7 = FUN_010e630c();
      uVar11 = iVar7 + 0x1d;
      if (0x1c < uVar11) {
        return uVar11;
      }
    }
    else if (0x1c < bVar3) {
      return (uint)bVar3;
    }
    uVar12 = 0;
    do {
      plVar10 = (long *)*param_2;
      local_48 = plVar10;
      if (plVar10 == (long *)0x0) {
        iVar7 = FUN_010e27d4(param_1,uVar12,&local_48,1);
      }
      else {
        plVar1 = plVar10 + 10;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        iVar7 = FUN_010e27d4(param_1,uVar12,&local_48,1);
        if (plVar10 != (long *)0x0) {
          plVar1 = plVar10 + 10;
          do {
            iVar6 = (int)*plVar1 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *(int *)plVar1 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
    } while ((iVar7 != 0) && (uVar12 = uVar12 + 1, uVar12 != 0x20));
    if (uVar11 <= uVar12) {
      if (uVar12 < 0x18) {
        lVar8 = *plVar2;
        if (uVar12 < 0x10) {
          uVar9 = 0x10;
        }
        else {
          uVar9 = 0x18;
        }
      }
      else {
        lVar8 = *plVar2;
        uVar9 = 0x20;
      }
      FUN_010e62f0(lVar8,uVar9);
    }
    uVar11 = (uint)*(byte *)(*plVar2 + 0x4a8);
    if (*(byte *)(*plVar2 + 0x4a8) == 0x20) {
      iVar7 = FUN_010e630c();
      uVar11 = iVar7 + 0x1d;
    }
  }
  return uVar11;
}


