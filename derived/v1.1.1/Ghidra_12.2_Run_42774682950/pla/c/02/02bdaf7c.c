/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bdaf7c; name: FUN_02bdaf7c
 */


void FUN_02bdaf7c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long *local_28;
  
  if ((*(long *)(param_1 + 0x3c0) != 0) && (*(int *)(*(long *)(param_1 + 0x3c0) + 0xc) != 0)) {
    cVar4 = DAT_00000068;
    if (*(long *)(param_1 + 0x3c0) != 0) {
      FUN_02bdbfc4(&local_28);
      cVar4 = (char)local_28[0xd];
      if (local_28 != (long *)0x0) {
        lVar6 = local_28[0xb];
        piVar1 = (int *)(lVar6 + 0xc);
        do {
          iVar5 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) {
          *(undefined8 *)(lVar6 + 0x18) = 0;
          (**(code **)(*local_28 + 0x20))();
        }
      }
    }
    if (cVar4 != '\0') {
      if (((*PTR_DAT_0437a648 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437a648);
      }
      lVar6 = *(long *)PTR_DAT_0437a650;
      *(long *)PTR_DAT_0437a658 = lVar6;
      FUN_02bf8b10(*(undefined8 *)(lVar6 + 0x230),param_1 + 0x3c0);
    }
  }
  return;
}


