/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009a02d0; name: FUN_009a02d0
 */


void FUN_009a02d0(long *param_1,long param_2,undefined1 param_3,undefined2 param_4)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  long *local_70;
  long *local_68;
  undefined2 local_58 [2];
  undefined1 local_54 [4];
  
  local_58[0] = param_4;
  local_54[0] = param_3;
  FUN_009a04b4(&local_70,*(undefined8 *)(param_2 + 8),local_54,local_58);
  local_68 = local_70;
  *(undefined4 *)(local_70 + 0xd) = 1;
  FUN_0099ae98(param_2 + 0x4a0,&local_68);
  if (((((*(byte *)(param_2 + 0x770) & 0x1f) != 0) || ((*(byte *)(param_2 + 0x768) & 0x1f) != 0)) &&
      (*(int *)(param_2 + 0x7b8) == 1)) && (lVar8 = FUN_0099d310(local_70 + 10), lVar8 != 0)) {
    uVar11 = *(undefined4 *)(param_2 + 0x7c0);
    *(undefined4 *)(lVar8 + 0xf0) = uVar11;
    plVar4 = *(long **)(lVar8 + 0x80);
    for (plVar3 = *(long **)(lVar8 + 0x78); plVar3 != plVar4; plVar3 = plVar3 + 1) {
      puVar10 = *(undefined8 **)(*plVar3 + 0xe0);
      puVar5 = *(undefined8 **)(*plVar3 + 0xe8);
      if ((puVar10 != puVar5) &&
         ((**(code **)(*(long *)*puVar10 + 0x90))(uVar11), puVar10 + 1 != puVar5)) {
        (**(code **)(*(long *)puVar10[1] + 0x90))(uVar11);
        for (puVar10 = puVar10 + 2; puVar10 != puVar5; puVar10 = puVar10 + 1) {
          (**(code **)(*(long *)*puVar10 + 0x90))(uVar11);
        }
      }
    }
  }
  lVar8 = FUN_009bb804(*(undefined8 *)(param_2 + 8),&local_68);
  *param_1 = lVar8;
  if (lVar8 != 0) {
    lVar8 = *(long *)(lVar8 + 0x58);
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    local_70 = local_68;
  }
  if (local_70 != (long *)0x0) {
    lVar8 = local_70[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar2 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))(local_70);
    }
  }
  return;
}


