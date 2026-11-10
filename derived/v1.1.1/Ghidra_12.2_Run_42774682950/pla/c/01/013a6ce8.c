/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013a6ce8; name: FUN_013a6ce8
 */


uint FUN_013a6ce8(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long *local_18;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar6 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar6;
  if (lVar6 != 0) {
    FUN_011490f0(&local_18);
    if (local_18 != (long *)0x0) {
      uVar4 = FUN_01143250(local_18,2);
      if (local_18 != (long *)0x0) {
        lVar6 = local_18[0xb];
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
          (**(code **)(*local_18 + 0x20))();
        }
      }
      goto LAB_013a6d78;
    }
  }
  uVar4 = 0;
LAB_013a6d78:
  return uVar4 & 1;
}


