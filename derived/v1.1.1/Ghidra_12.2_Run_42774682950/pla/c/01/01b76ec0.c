/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b76ec0; name: FUN_01b76ec0
 */


void FUN_01b76ec0(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 in_q3 [16];
  undefined8 uVar11;
  long *local_28;
  
  uVar11 = in_q3._8_8_;
  uVar10 = in_q3._0_8_;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  puVar7 = PTR_DAT_0437a120;
  *(undefined1 *)(param_1 + 0xc) = 0;
  uVar8 = *(undefined8 *)puVar7;
  uVar3 = *(undefined8 *)(puVar7 + 8);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = uVar8;
  param_1[0xb] = uVar3;
  *(undefined4 *)((long)param_1 + 0x61) = 0x1010101;
  *param_1 = *param_3;
  param_1[1] = param_3[1];
  plVar4 = (long *)param_3[3];
  param_1[2] = param_3[2];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  uVar8 = *(undefined8 *)(param_2 + 8);
  param_1[3] = plVar4;
  param_1[4] = uVar8;
  FUN_009c69bc(&local_28,param_2);
  (**(code **)(*local_28 + 0x40))();
  param_1[7] = uVar11;
  param_1[6] = uVar10;
  if (local_28 != (long *)0x0) {
    lVar9 = local_28[0xb];
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
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}


