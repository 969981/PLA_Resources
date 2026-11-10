/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012618ec; name: FUN_012618ec
 */


uint FUN_012618ec(char *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  undefined8 local_48;
  long *local_38;
  
  puVar4 = PTR_DAT_04379558;
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar6 = PTR_DAT_04379568;
  puVar5 = PTR_DAT_04379560;
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148cdc(&local_38);
  cVar7 = FUN_01123ce8(local_38);
  if (local_38 != (long *)0x0) {
    lVar10 = local_38[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  if (*param_1 == cVar7) {
    if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)puVar6 = *(undefined8 *)puVar5;
    FUN_01148a98(&local_38);
    local_48 = *(undefined8 *)(param_1 + 0x18);
    uVar8 = FUN_010f4ccc(local_38,&local_48);
    if (local_38 != (long *)0x0) {
      lVar10 = local_38[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar7 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_38 + 0x20))();
      }
    }
    uVar8 = uVar8 & 1;
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}


