/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008b1c80; name: FUN_008b1c80
 */


void FUN_008b1c80(long param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 local_28;
  
  uVar3 = *(uint *)(param_1 + 0x8c);
  uVar2 = *(undefined4 *)(&DAT_03a75658 + (long)(int)uVar3 * 4);
  FUN_008b2878();
  uVar7 = FUN_00923bc4();
  FUN_009a5a0c(&local_28,uVar7,uVar2,*(undefined1 *)(param_1 + 0x7c),*(undefined1 *)(param_1 + 0x7d)
               ,*(undefined4 *)(param_1 + 0x80));
  plVar8 = *(long **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (plVar8 != (long *)0x0) {
    lVar9 = plVar8[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))();
    }
  }
  *(undefined8 *)(param_1 + 0x98) = local_28;
  if (uVar3 < 2) {
    FUN_008b2878(param_1);
    FUN_00923c00();
    iVar6 = FUN_009350ec();
    if (iVar6 == 0) {
      FUN_008b2878(param_1);
      FUN_00923c78();
      FUN_00919dbc();
    }
  }
  return;
}


