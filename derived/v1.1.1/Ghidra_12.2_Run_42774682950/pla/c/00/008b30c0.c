/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008b30c0; name: FUN_008b30c0
 */


void FUN_008b30c0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 local_38;
  
  lVar7 = FUN_00923bb4(**(undefined8 **)(param_1 + 0x70));
  if (**(char **)(lVar7 + 0x398) != '\0') {
    uVar8 = FUN_00923c00(**(undefined8 **)(param_1 + 0x70));
    uVar5 = FUN_00934260(uVar8,0);
    uVar8 = FUN_00923c00(**(undefined8 **)(param_1 + 0x70));
    uVar6 = FUN_00934260(uVar8,1);
    uVar8 = FUN_00923bc4(**(undefined8 **)(param_1 + 0x70));
    FUN_0099d714(&local_38,uVar8,lVar7 + 0x390,uVar5,uVar6);
    plVar9 = *(long **)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = 0;
    if (plVar9 != (long *)0x0) {
      lVar7 = plVar9[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
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
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*plVar9 + 0x20))();
      }
    }
    *(undefined8 *)(param_1 + 0x80) = local_38;
  }
  return;
}


