/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0181330c; name: FUN_0181330c
 */


void FUN_0181330c(long param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 local_58;
  char *pcStack_50;
  undefined8 local_48;
  long *local_40;
  long *local_38;
  
  if (*(byte *)(param_1 + 0x2a8) != (param_2 & 1)) {
    FUN_01813750(&local_38);
    if (local_38 != (long *)0x0) {
      *(undefined4 *)(param_1 + 0x2ac) = 0;
      local_58 = 0xd27b8ddf4a0d6a16;
      pcStack_50 = "PL_FALLTIME";
      local_48 = 0xb;
      local_40 = (long *)0x0;
      (**(code **)(*local_38 + 0xf8))(0,local_38,&local_58,0);
      if (local_40 != (long *)0x0) {
        (**(code **)(*local_40 + 0x20))();
      }
      if ((param_2 & 1) == 0) {
        local_58 = 0x93295bae6fba7657;
        pcStack_50 = "STOP_PL_FOLEY_FALL_LP";
      }
      else {
        local_58 = 0x36f0091254f5e6f5;
        pcStack_50 = "PLAY_PL_FOLEY_FALL_LP";
      }
      local_48 = 0x15;
      local_40 = (long *)0x0;
      FUN_0290b66c(local_38,&local_58,0);
      if (local_40 != (long *)0x0) {
        (**(code **)(*local_40 + 0x20))();
      }
      *(byte *)(param_1 + 0x2a8) = param_2 & 1;
      lVar5 = local_38[0xb];
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
        (**(code **)(*local_38 + 0x20))(local_38);
      }
    }
  }
  return;
}


