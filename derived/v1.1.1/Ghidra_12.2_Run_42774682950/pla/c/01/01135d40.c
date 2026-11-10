/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01135d40; name: FUN_01135d40
 */


undefined4 FUN_01135d40(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long *local_18;
  
  if ((undefined1 *)*param_1 != &DAT_cbf29ce484222645) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar6 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar6;
    if ((lVar6 != 0) && (FUN_01148a98(&local_18), local_18 != (long *)0x0)) {
      uVar7 = FUN_010f5b6c(local_18,param_1);
      if ((uVar7 & 1) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_010f5984(local_18,param_1);
      }
      if (local_18 == (long *)0x0) {
        return uVar4;
      }
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
        return uVar4;
      }
      return uVar4;
    }
  }
  return 0;
}


