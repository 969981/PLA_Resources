/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026531f0; name: FUN_026531f0
 */


void FUN_026531f0(long *param_1,uint param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *local_38;
  
  if (param_1[0xb9] == 0) {
    local_38 = (long *)0x0;
  }
  else {
    FUN_0265df5c(&local_38);
    if (local_38 != (long *)0x0) {
      FUN_0264aea8(local_38,param_2 & 1);
      if (local_38 != (long *)0x0) {
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
          (**(code **)(*local_38 + 0x20))();
        }
      }
    }
  }
  FUN_01a9bc84(param_1,~param_2 & 1);
  FUN_026523b0(param_1,param_2 & 1);
  if ((~param_2 & 1) == 0) {
    (**(code **)(*param_1 + 0x140))(param_1);
    param_1[0x1a9] = param_3[1];
    param_1[0x1a8] = *param_3;
    param_1[0x1a7] = param_3[1];
    param_1[0x1a6] = *param_3;
    FUN_026532f0(param_1);
    FUN_01a8ac20(param_1);
  }
  *(undefined2 *)((long)param_1 + 0xcb1) = 0;
  *(undefined4 *)((long)param_1 + 0xcb4) = 0;
  *(undefined4 *)((long)param_1 + 0xd54) = 0;
  return;
}


