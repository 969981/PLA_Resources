/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013f539c; name: FUN_013f539c
 */


void FUN_013f539c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *local_60;
  undefined8 local_58;
  char *pcStack_50;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
  if ((*(char *)(param_1 + 0x6d8) == '\0') ||
     (uVar6 = FUN_01363370(*(undefined8 *)(param_1 + 0x5b8)), (uVar6 & 1) == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_01363038(*(undefined8 *)(param_1 + 0x5b8));
  }
  plVar9 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_60 = &local_38;
  local_58 = 0xed6e84e657de12cb;
  pcStack_50 = "ShortcutInputMinus";
  local_40 = (long *)0x0;
  local_38 = 0;
  local_48 = 0x12;
  FUN_00d6190c(plVar9,&local_60,0);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  lVar10 = local_38;
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  if (lVar10 != 0) {
    FUN_0280779c(lVar10,*(undefined1 *)(param_1 + 0xc24));
  }
  FUN_013ee5d8(*(undefined8 *)(*(long *)(param_1 + 0x5c0) + 0x68),*(undefined1 *)(param_1 + 0xc24),
               uVar5 & 1);
  return;
}


