/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b445c4; name: FUN_01b445c4
 */


void FUN_01b445c4(long param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  long *local_28;
  undefined1 local_14 [4];
  
  uVar5 = param_2[0xb];
  *(undefined8 *)(param_1 + 0xe58) = param_2[9];
  *(undefined8 *)(param_1 + 0xe68) = uVar5;
  uVar5 = param_2[7];
  *(undefined8 *)(param_1 + 0xe38) = param_2[5];
  *(undefined8 *)(param_1 + 0xe48) = uVar5;
  uVar5 = param_2[3];
  *(undefined8 *)(param_1 + 0xe18) = param_2[1];
  *(undefined8 *)(param_1 + 0xe28) = uVar5;
  uVar5 = *param_2;
  *(undefined8 *)(param_1 + 0xe20) = param_2[2];
  *(undefined8 *)(param_1 + 0xe10) = uVar5;
  uVar5 = param_2[4];
  *(undefined8 *)(param_1 + 0xe40) = param_2[6];
  *(undefined8 *)(param_1 + 0xe30) = uVar5;
  uVar5 = param_2[8];
  *(undefined8 *)(param_1 + 0xe60) = param_2[10];
  *(undefined8 *)(param_1 + 0xe50) = uVar5;
  FUN_00956dac(&local_28,param_1 + 0x1a8);
  *(undefined1 *)(local_28 + 0x1c) = 1;
  local_28[0x16] = 0;
  local_28[0x17] = 0;
  if (local_28 != (long *)0x0) {
    lVar6 = local_28[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
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
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
      pcVar7 = *(code **)(param_1 + 0xae0);
      goto joined_r0x01b44678;
    }
  }
  pcVar7 = *(code **)(param_1 + 0xae0);
joined_r0x01b44678:
  if (pcVar7 != (code *)0x0) {
    local_14[0] = 0;
    (*pcVar7)(param_1 + 0xb00,local_14);
  }
  return;
}


