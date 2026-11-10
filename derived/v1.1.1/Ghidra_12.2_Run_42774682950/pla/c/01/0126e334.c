/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0126e334; name: FUN_0126e334
 */


undefined8 FUN_0126e334(long param_1)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 local_48;
  char *pcStack_40;
  undefined8 local_38;
  long *local_30;
  long *local_28;
  
  lVar8 = *(long *)(param_1 + 0x98);
  bVar5 = *(int *)(lVar8 + 0xa98) != *(int *)(lVar8 + 0xa28);
  uVar9 = 1;
  if (bVar5) {
    uVar9 = 2;
  }
  uVar2 = (uint)bVar5;
  if (*(int *)(lVar8 + 0xa9c) != *(int *)(lVar8 + 0xa2c)) {
    uVar2 = uVar9;
  }
  if (*(int *)(lVar8 + 0xaa0) != *(int *)(lVar8 + 0xa30)) {
    uVar2 = uVar2 + 1;
  }
  if (3 < uVar2) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379558), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148a98(&local_28);
  local_48 = 0xe56748a23aa6ae3;
  pcStack_40 = "WPHA_STORY";
  local_38 = 10;
  local_30 = (long *)0x0;
  uVar7 = FUN_010f5878(local_28,&local_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  puVar3 = &UNK_03888380;
  if (0x270 < (uint)((uVar7 & 0xffffffff) >> 6)) {
    puVar3 = &UNK_03888b80;
  }
  uVar10 = *(undefined8 *)(puVar3 + (ulong)uVar2 * 8);
  if (local_28 != (long *)0x0) {
    lVar8 = local_28[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return uVar10;
}


