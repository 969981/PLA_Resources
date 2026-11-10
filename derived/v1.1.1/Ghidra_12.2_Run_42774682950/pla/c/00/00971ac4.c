/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00971ac4; name: FUN_00971ac4
 */


void FUN_00971ac4(long param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *local_48;
  undefined8 local_40;
  undefined *puStack_38;
  undefined8 local_30;
  long *local_28;
  
  FUN_00931034(&local_48,*(undefined8 *)(param_1 + 0x58));
  lVar5 = local_48[0xd3];
  if (*(char *)(lVar5 + 0x5ab) != '\0') {
    if ((param_2 & 1) != 0) {
      local_40 = DAT_041f9b40;
      puStack_38 = PTR_s_PLAY_UI_BATTLE_CLOSE_041f9b48;
      local_30 = DAT_041f9b50;
      local_28 = (long *)0x0;
      FUN_028354b0(&local_40);
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x20))();
      }
    }
    FUN_00d7331c(lVar5,1);
    *(undefined1 *)(lVar5 + 0x5ab) = 0;
  }
  if (local_48 != (long *)0x0) {
    lVar5 = local_48[0xb];
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
      (**(code **)(*local_48 + 0x20))();
    }
  }
  return;
}


