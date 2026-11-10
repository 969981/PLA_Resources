/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d18030; name: FUN_00d18030
 */


void FUN_00d18030(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_38;
  char *pcStack_30;
  undefined8 local_28;
  long *local_20;
  long *local_18;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148a98(&local_18);
  uVar5 = FUN_01145680(0);
  if ((uVar5 & 1) != 0) {
    local_38 = 0x4d0bf62c6cfa9468;
    pcStack_30 = "FSYS_SAVEDATA_LINKAGE_BEL_01";
    local_28 = 0x1c;
    local_20 = (long *)0x0;
    FUN_010f4de4(local_18,&local_38);
    if (local_20 != (long *)0x0) {
      (**(code **)(*local_20 + 0x20))();
    }
  }
  uVar5 = FUN_01145680(1);
  if ((uVar5 & 1) != 0) {
    local_38 = 0x6ec43c91530ef0b9;
    pcStack_30 = "FSYS_SAVEDATA_LINKAGE_ORI_01";
    local_28 = 0x1c;
    local_20 = (long *)0x0;
    FUN_010f4de4(local_18,&local_38);
    if (local_20 != (long *)0x0) {
      (**(code **)(*local_20 + 0x20))();
    }
  }
  uVar5 = FUN_01145680(2);
  if ((uVar5 & 1) != 0) {
    local_38 = 0xd6a2d3fc52ce2052;
    pcStack_30 = "FSYS_SAVEDATA_LINKAGE_DEL_01";
    local_28 = 0x1c;
    local_20 = (long *)0x0;
    FUN_010f4de4(local_18,&local_38);
    if (local_20 != (long *)0x0) {
      (**(code **)(*local_20 + 0x20))();
    }
  }
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
  return;
}


