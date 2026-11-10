/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c54d90; name: FUN_01c54d90
 */


long FUN_01c54d90(long param_1,long param_2,long param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  if (param_1 != param_2) {
    FUN_00b5fc1c(param_3,param_1);
    FUN_00b6081c(param_3 + 0x10,param_1 + 0x10);
    FUN_0087fcf0(param_3 + 0x20,param_1 + 0x20);
    *(undefined8 *)(param_3 + 0x38) = *(undefined8 *)(param_1 + 0x38);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    plVar5 = *(long **)(param_3 + 0x40);
    *(undefined8 *)(param_3 + 0x40) = 0;
    *(undefined8 *)(param_3 + 0x30) = uVar6;
    lVar8 = param_3;
    if (plVar5 != (long *)0x0) {
      lVar7 = plVar5[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar4 = *piVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto joined_r0x01c54e0c;
      } while( true );
    }
    while( true ) {
      uVar6 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(lVar8 + 0x40) = uVar6;
      lVar7 = param_1 + 0x50;
      *(undefined4 *)(lVar8 + 0x48) = *(undefined4 *)(param_1 + 0x48);
      param_3 = lVar8 + 0x50;
      if (lVar7 == param_2) break;
      FUN_00b5fc1c(param_3,lVar7);
      FUN_00b6081c(lVar8 + 0x60,param_1 + 0x60);
      FUN_0087fcf0(lVar8 + 0x70,param_1 + 0x70);
      *(undefined8 *)(lVar8 + 0x88) = *(undefined8 *)(param_1 + 0x88);
      uVar6 = *(undefined8 *)(param_1 + 0x80);
      plVar5 = *(long **)(lVar8 + 0x90);
      *(undefined8 *)(lVar8 + 0x90) = 0;
      *(undefined8 *)(lVar8 + 0x80) = uVar6;
      lVar8 = param_3;
      param_1 = lVar7;
      if (plVar5 != (long *)0x0) {
        lVar7 = plVar5[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          iVar4 = *piVar1 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
joined_r0x01c54e0c:
        if (iVar4 == 0) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*plVar5 + 0x20))();
        }
      }
    }
  }
  return param_3;
}


