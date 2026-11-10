/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008b1d44; name: FUN_008b1d44
 */


void FUN_008b1d44(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 local_18;
  
  FUN_008b2878();
  FUN_00923ca0();
  uVar5 = FUN_00926dcc();
  if ((uVar5 & 1) != 0) {
    FUN_008b2878(param_1);
    uVar6 = FUN_00923bc4();
    FUN_009a5610(&local_18,uVar6,*(undefined1 *)(param_1 + 0x7d));
    plVar7 = *(long **)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xa0) = 0;
    if (plVar7 != (long *)0x0) {
      lVar8 = plVar7[0xb];
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
        (**(code **)(*plVar7 + 0x20))();
      }
    }
    *(undefined8 *)(param_1 + 0xa0) = local_18;
  }
  return;
}


