/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01948a70; name: FUN_01948a70
 */


void FUN_01948a70(long param_1,undefined8 *param_2,long *param_3,byte param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long *local_68;
  long *local_60;
  undefined4 *puStack_58;
  long *local_50;
  byte *pbStack_48;
  undefined4 local_40;
  byte local_3c [4];
  long local_38;
  
  local_3c[0] = param_4 & 1;
  if ((param_1 != 0) && (plVar9 = (long *)*param_2, plVar9 != (long *)0x0)) {
    puStack_58 = &local_40;
    local_50 = &local_38;
    pbStack_48 = local_3c;
    local_40 = 0;
    lVar10 = plVar9[0xb];
    local_60 = plVar9;
    local_38 = param_1;
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_01948c1c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar6 = FUN_019494d4(&puStack_58,&local_60);
    lVar10 = plVar9[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
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
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
    if ((local_3c[0] == 0) && (((uVar6 ^ 1) & 1) != 0)) {
      puVar11 = (undefined8 *)*param_3;
      puVar3 = (undefined8 *)param_3[1];
      local_3c[0] = 0;
      if (puVar11 != puVar3) {
        do {
          plVar9 = (long *)*puVar11;
          local_68 = plVar9;
          if (plVar9 == (long *)0x0) {
            uVar8 = FUN_019494d4(&puStack_58,&local_68);
            uVar8 = uVar8 & 0xffffffff;
          }
          else {
            lVar10 = plVar9[0xb];
            if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_01948c1c;
            if (*(long *)(lVar10 + 0x10) == 0) {
              uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
              *(undefined8 *)(lVar10 + 0x10) = uVar7;
            }
            piVar1 = (int *)(lVar10 + 0xc);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = *piVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            uVar8 = FUN_019494d4(&puStack_58,&local_68);
            lVar10 = plVar9[0xb];
            uVar8 = uVar8 & 0xffffffff;
            piVar1 = (int *)(lVar10 + 0xc);
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
              *(undefined8 *)(lVar10 + 0x18) = 0;
              (**(code **)(*plVar9 + 0x20))(plVar9);
            }
          }
          puVar11 = puVar11 + 1;
        } while ((puVar11 != puVar3) && ((uVar8 & 1) == 0));
      }
    }
  }
  return;
}


