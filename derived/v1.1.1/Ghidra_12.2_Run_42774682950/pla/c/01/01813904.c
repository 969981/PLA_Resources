/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01813904; name: FUN_01813904
 */


/* WARNING: Removing unreachable block (ram,0x01813a58) */

void FUN_01813904(float param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  float fVar6;
  long *local_60;
  undefined8 local_58;
  char *pcStack_50;
  undefined8 local_48;
  long *local_40;
  long *local_38;
  
  FUN_01813750(&local_60);
  if ((local_60 == (long *)0x0) || (*(char *)(param_2 + 0x2a8) == '\0')) {
    *(undefined4 *)(param_2 + 0x2ac) = 0;
    FUN_01813750(&local_38,param_2);
    if (local_38 != (long *)0x0) {
      local_58 = 0xd27b8ddf4a0d6a16;
      pcStack_50 = "PL_FALLTIME";
      local_48 = 0xb;
      local_40 = (long *)0x0;
      (**(code **)(*local_38 + 0xf8))(*(undefined4 *)(param_2 + 0x2ac),local_38,&local_58,0);
      if (local_40 != (long *)0x0) {
        (**(code **)(*local_40 + 0x20))();
      }
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
    if (local_60 == (long *)0x0) {
      return;
    }
  }
  else {
    param_1 = *(float *)(param_2 + 0x2ac) + param_1;
    *(float *)(param_2 + 0x2ac) = param_1;
    local_58 = 0xd27b8ddf4a0d6a16;
    pcStack_50 = "PL_FALLTIME";
    local_48 = 0xb;
    local_40 = (long *)0x0;
    param_1 = param_1 * 1000.0;
    fVar6 = 0.0;
    if (0.0 <= param_1) {
      fVar6 = param_1;
    }
    (**(code **)(*local_60 + 0xf8))(fVar6,local_60,&local_58,0);
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 0x20))();
    }
  }
  lVar5 = local_60[0xb];
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
    (**(code **)(*local_60 + 0x20))(local_60);
  }
  return;
}


