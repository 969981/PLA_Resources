/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d4d5ec; name: FUN_00d4d5ec
 */


void FUN_00d4d5ec(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  code *pcVar10;
  long *plVar11;
  long lVar12;
  
  plVar11 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar11 == (long *)0x0) {
    lVar12 = FUN_00d4d2c4(0,*(undefined8 *)(param_1 + 8),param_2);
  }
  else {
    lVar12 = plVar11[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar12 = FUN_00d4d2c4(plVar11,*(undefined8 *)(param_1 + 8),param_2);
    lVar9 = plVar11[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar2 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
  }
  *(undefined8 *)(lVar12 + 0xf8) = *param_4;
  *(undefined8 *)(lVar12 + 0x300) = *param_5;
  *(undefined8 *)(lVar12 + 0x308) = param_5[1];
  *(undefined8 *)(lVar12 + 0x310) = param_5[2];
  plVar11 = (long *)param_5[3];
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  plVar8 = *(long **)(lVar12 + 0x318);
  *(long **)(lVar12 + 0x318) = plVar11;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  pcVar10 = *(code **)(lVar12 + 0x288);
  if (pcVar10 != (code *)0x0) {
    *(undefined8 *)(lVar12 + 0x290) = 0;
    *(undefined8 *)(lVar12 + 0x298) = 0;
    *(undefined8 *)(lVar12 + 0x280) = 0;
    *(undefined8 *)(lVar12 + 0x288) = 0;
    (*pcVar10)(lVar12 + 0x2a0);
  }
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,lVar12 + 0x2a0);
    uVar7 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[3];
    *(undefined8 *)(lVar12 + 0x290) = param_3[2];
    *(undefined8 *)(lVar12 + 0x298) = uVar4;
    *(undefined8 *)(lVar12 + 0x280) = uVar7;
    *(undefined8 *)(lVar12 + 0x288) = uVar3;
  }
  return;
}


