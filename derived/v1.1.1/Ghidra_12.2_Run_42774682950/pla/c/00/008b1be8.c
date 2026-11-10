/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008b1be8; name: FUN_008b1be8
 */


void FUN_008b1be8(long param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 local_28;
  
  uVar3 = *(undefined4 *)(&DAT_03a7564c + (long)*(int *)(param_1 + 0x8c) * 4);
  FUN_008b2878();
  uVar6 = FUN_00923bc4();
  FUN_009a5a0c(&local_28,uVar6,uVar3,*(undefined1 *)(param_1 + 0x7c),*(undefined1 *)(param_1 + 0x7d)
               ,*(undefined4 *)(param_1 + 0x80));
  plVar7 = *(long **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (plVar7 != (long *)0x0) {
    lVar8 = plVar7[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))();
    }
  }
  *(undefined8 *)(param_1 + 0x98) = local_28;
  return;
}


