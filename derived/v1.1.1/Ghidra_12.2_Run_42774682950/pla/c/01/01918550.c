/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01918550; name: FUN_01918550
 */


bool FUN_01918550(long param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  undefined1 auStack_1a8 [120];
  long *local_130;
  long *local_110;
  long *local_f0;
  long *local_d0;
  long *local_b0;
  long *local_90;
  int aiStack_80 [20];
  long *local_28;
  
  if (*(long *)(param_1 + 0x278) == 0) {
    bVar5 = false;
  }
  else {
    FUN_0191cb34(&local_28);
    if (local_28 == (long *)0x0) {
      bVar5 = false;
    }
    else {
      FUN_01918414(auStack_1a8,param_1,param_2);
      if (7 < *(uint *)(param_1 + 0x288)) {
                    /* WARNING: Subroutine does not return */
        FUN_0191aa30();
      }
      bVar5 = aiStack_80[(int)*(uint *)(param_1 + 0x288)] == 2;
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x20))();
      }
      if (local_b0 != (long *)0x0) {
        (**(code **)(*local_b0 + 0x20))();
      }
      if (local_d0 != (long *)0x0) {
        (**(code **)(*local_d0 + 0x20))();
      }
      if (local_f0 != (long *)0x0) {
        (**(code **)(*local_f0 + 0x20))();
      }
      if (local_110 != (long *)0x0) {
        (**(code **)(*local_110 + 0x20))();
      }
      if (local_130 != (long *)0x0) {
        (**(code **)(*local_130 + 0x20))();
      }
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
        }
      }
    }
  }
  return bVar5;
}


