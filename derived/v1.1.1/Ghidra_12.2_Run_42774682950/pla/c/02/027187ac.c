/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027187ac; name: FUN_027187ac
 */


void FUN_027187ac(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined4 local_134;
  long *local_130;
  char *pcStack_128;
  undefined8 local_120;
  long *local_118;
  long *local_110;
  undefined1 auStack_108 [72];
  long local_c0;
  
  if (*(long *)(param_1 + 0x70) == 0) {
    local_130 = (long *)0x0;
  }
  else {
    FUN_0271ac88(&local_130);
  }
  FUN_02663af8(auStack_108,local_130 + 0x12);
  if (local_130 != (long *)0x0) {
    lVar5 = local_130[0xb];
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
      (**(code **)(*local_130 + 0x20))();
    }
  }
  if (local_c0 == 0) {
    local_110 = (long *)0x0;
  }
  else {
    FUN_018ecdb8(&local_110);
    if (local_110 != (long *)0x0) {
      local_130 = (long *)0x31a10bd7573e484a;
      pcStack_128 = "RideOdosisiStateExit";
      local_120 = 0x14;
      local_118 = (long *)0x0;
      local_134 = *(undefined4 *)(param_1 + 0x68);
      FUN_02718648(local_110,&local_130,&local_134,auStack_108);
      if (local_118 != (long *)0x0) {
        (**(code **)(*local_118 + 0x20))();
      }
      if (local_110 != (long *)0x0) {
        lVar5 = local_110[0xb];
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
          (**(code **)(*local_110 + 0x20))();
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x68);
  FUN_02455bbc(auStack_108);
  return;
}


