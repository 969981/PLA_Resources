/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013b74e4; name: FUN_013b74e4
 */


void FUN_013b74e4(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  long lVar9;
  
  pcVar7 = (code *)param_1[1];
  if (pcVar7 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar7)(param_1 + 4);
  }
  uVar8 = *param_2;
  *param_2 = 0;
  param_1[4] = uVar8;
  lVar9 = param_2[1];
  param_1[5] = lVar9;
  if (lVar9 != 0) {
    lVar9 = *(long *)(lVar9 + 0x58);
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar6 = PTR_LAB_0437f1b8;
  puVar5 = PTR_LAB_0437f1b0;
  puVar4 = PTR_LAB_0437f1a8;
  *param_1 = PTR_FUN_0437f1a0;
  param_1[1] = puVar4;
  param_1[2] = puVar5;
  param_1[3] = puVar6;
  return;
}


