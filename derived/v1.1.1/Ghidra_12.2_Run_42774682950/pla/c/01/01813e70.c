/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01813e70; name: FUN_01813e70
 */


void FUN_01813e70(undefined8 param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 local_68;
  undefined *puStack_60;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  char *pcStack_40;
  undefined8 local_38;
  long *local_30;
  long *local_28;
  
  FUN_01813750(&local_28);
  if (local_28 != (long *)0x0) {
    switch(*param_2) {
    default:
      local_68 = 0x9e17f12673931a7e;
      puStack_60 = &DAT_03975d98;
      break;
    case 3:
    case 7:
      local_68 = 0x3265b326c7df4ec7;
      puStack_60 = &DAT_038b95d8;
    }
    local_30 = (long *)0x0;
    local_38 = 7;
    pcStack_40 = "Weather";
    local_48 = 0x229327eb5df28e93;
    local_58 = 3;
    local_50 = (long *)0x0;
    (**(code **)(*local_28 + 0xf0))(local_28,&local_48,&local_68);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    if (local_30 != (long *)0x0) {
      (**(code **)(*local_30 + 0x20))();
    }
    lVar5 = local_28[0xb];
    piVar1 = (int *)(lVar5 + 0xc);
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
      *(undefined8 *)(lVar5 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))(local_28);
    }
  }
  return;
}


