/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025c797c; name: FUN_025c797c
 */


void FUN_025c797c(long param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 local_38;
  char *pcStack_30;
  undefined8 local_28;
  long *local_20;
  long *local_18;
  
  if ((*param_2 != 0) && (*(char *)(param_1 + 600) != '\0')) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_01148a98(&local_18);
    if (local_18 != (long *)0x0) {
      local_38 = 0x3d993dea67de3ef;
      pcStack_30 = "FSYS_NS_REMATCH_NO_ADDITIONAL_REWARD";
      local_28 = 0x24;
      local_20 = (long *)0x0;
      FUN_010f4de4(local_18,&local_38);
      if (local_20 != (long *)0x0) {
        (**(code **)(*local_20 + 0x20))();
      }
      if (local_18 != (long *)0x0) {
        lVar5 = local_18[0xb];
        piVar1 = (int *)(lVar5 + 0xc);
        do {
          iVar4 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 + -1 == 0) {
          *(undefined8 *)(lVar5 + 0x18) = 0;
          (**(code **)(*local_18 + 0x20))();
        }
      }
    }
  }
  return;
}


