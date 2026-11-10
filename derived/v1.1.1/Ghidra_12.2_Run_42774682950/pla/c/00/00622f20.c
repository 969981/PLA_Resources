/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00622f20; name: FUN_00622f20
 */


void FUN_00622f20(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  bool bVar13;
  long lVar14;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_80 = *param_2;
  local_78 = param_2[1];
  if (local_78 == 0) {
    lVar14 = 0;
  }
  else {
    plVar1 = (long *)(local_78 + 8);
    do {
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *plVar1 = *plVar1 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    lVar14 = local_78;
  }
  uVar2 = param_2[2];
  uVar7 = param_2[3];
  param_2[2] = 0;
  param_2[3] = 0;
  uVar3 = param_2[4];
  uVar8 = param_2[5];
  param_2[4] = 0;
  param_2[5] = 0;
  uVar4 = param_2[6];
  uVar9 = param_2[7];
  local_40 = *(undefined1 *)(param_2 + 8);
  param_2[6] = 0;
  param_2[7] = 0;
  uVar5 = param_2[9];
  uVar10 = param_2[10];
  param_2[9] = 0;
  param_2[10] = 0;
  uVar6 = param_2[0xb];
  uVar11 = param_2[0xc];
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  local_18 = param_2[0xd];
  *param_1 = local_80;
  param_1[1] = lVar14;
  if (lVar14 != 0) {
    plVar1 = (long *)(lVar14 + 8);
    do {
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *plVar1 = *plVar1 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
  }
  param_1[2] = uVar2;
  param_1[3] = uVar7;
  local_70 = 0;
  uStack_68 = 0;
  param_1[4] = uVar3;
  param_1[5] = uVar8;
  local_60 = 0;
  uStack_58 = 0;
  param_1[6] = uVar4;
  param_1[7] = uVar9;
  local_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 8) = local_40;
  param_1[9] = uVar5;
  param_1[10] = uVar10;
  local_28 = 0;
  local_38 = 0;
  uStack_30 = 0;
  param_1[0xb] = uVar6;
  param_1[0xc] = uVar11;
  local_20 = 0;
  param_1[0xd] = local_18;
  FUN_00622020(&local_80);
  return;
}


