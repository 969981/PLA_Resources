/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018caa24; name: FUN_018caa24
 */


undefined8 * FUN_018caa24(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *local_38;
  
  puVar8 = (undefined8 *)(param_1 + 8);
  if ((((undefined1 *)*puVar8 == &DAT_cbf29ce484222645) ||
      (uVar5 = FUN_018cb578(puVar8), (uVar5 & 1) == 0)) ||
     (puVar7 = (undefined8 *)(param_1 + 0x30), (undefined1 *)*puVar7 == &DAT_cbf29ce484222645)) {
    puVar7 = (undefined8 *)(param_1 + 0x10);
  }
  else {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_01148a98(&local_38);
    FUN_010f4ef0(local_38,puVar8);
    if (local_38 != (long *)0x0) {
      lVar6 = local_38[0xb];
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
        (**(code **)(*local_38 + 0x20))();
      }
    }
  }
  return puVar7;
}


