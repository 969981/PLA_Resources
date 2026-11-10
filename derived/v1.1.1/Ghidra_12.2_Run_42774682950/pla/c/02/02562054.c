/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02562054; name: FUN_02562054
 */


void FUN_02562054(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long *local_28;
  
  FUN_025645e4(param_1 + 0x220);
  FUN_02564890(param_1 + 0x4c0,param_2 + 0x2a0);
  *(undefined1 *)(param_1 + 0x4d0) = *(undefined1 *)(param_2 + 0x2b0);
  plVar10 = *(long **)(param_2 + 0x2b8);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  plVar6 = *(long **)(param_1 + 0x4d8);
  *(long **)(param_1 + 0x4d8) = plVar10;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  uVar3 = *(undefined1 *)(param_2 + 0x2e8);
  *(undefined8 *)(param_1 + 0x4f8) = *(undefined8 *)(param_2 + 0x2d8);
  *(undefined8 *)(param_1 + 0x4e8) = *(undefined8 *)(param_2 + 0x2c8);
  *(undefined8 *)(param_1 + 0x4e0) = *(undefined8 *)(param_2 + 0x2c0);
  uVar8 = *(undefined8 *)(param_2 + 0x2d0);
  uVar9 = *(undefined8 *)(param_2 + 0x2e0);
  *(undefined1 *)(param_1 + 0x508) = uVar3;
  *(undefined8 *)(param_1 + 0x500) = uVar9;
  *(undefined8 *)(param_1 + 0x4f0) = uVar8;
  FUN_02562154(param_1);
  FUN_009c69bc(&local_28,param_1);
  FUN_019005f0(local_28,local_28[1]);
  if (local_28 != (long *)0x0) {
    lVar7 = local_28[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
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
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}


