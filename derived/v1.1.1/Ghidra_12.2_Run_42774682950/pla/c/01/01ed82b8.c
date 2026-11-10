/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ed82b8; name: FUN_01ed82b8
 */


void FUN_01ed82b8(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_24;
  long *local_18;
  
  if (*(long *)(param_1 + 200) == 0) {
    local_18 = (long *)0x0;
  }
  else {
    FUN_00959d38(&local_18);
    if (local_18 != (long *)0x0) {
      local_24 = 7;
      FUN_02604d38(local_18,&local_24);
      if (local_18 != (long *)0x0) {
        lVar6 = local_18[0xb];
        piVar1 = (int *)(lVar6 + 0xc);
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
          *(undefined8 *)(lVar6 + 0x18) = 0;
          (**(code **)(*local_18 + 0x20))();
        }
      }
    }
  }
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379578), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  uVar5 = *(undefined8 *)PTR_DAT_04379580;
  *(undefined8 *)PTR_DAT_04379588 = uVar5;
  FUN_00954984(uVar5,param_1 + 0x78);
  return;
}


