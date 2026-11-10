/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0119687c; name: FUN_0119687c
 */


undefined8 FUN_0119687c(long param_1,int param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined2 uVar11;
  long *plVar12;
  
  if ((param_2 != 0) || (lVar9 = FUN_011945c8(param_1), lVar9 == 0)) {
    FUN_011a0c80(*(undefined8 *)(param_1 + 0x1a8));
    FUN_011953c8(param_1);
    return 0;
  }
  uVar7 = FUN_00d4bf2c(*(undefined8 *)(param_1 + 0x1a8),1);
  puVar10 = (undefined8 *)FUN_0118fdb8(lVar9,uVar7);
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (puVar10 = (undefined8 *)__cxa_guard_acquire(PTR_DAT_04379558), (int)puVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    puVar10 = (undefined8 *)__cxa_guard_release(PTR_DAT_04379558);
  }
  lVar9 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar9;
  plVar12 = *(long **)(lVar9 + 0x280);
  if (plVar12 != (long *)0x0) {
    lVar9 = plVar12[0xb];
    puVar10 = *(undefined8 **)(lVar9 + 0x18);
    if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      puVar10 = (undefined8 *)(**(code **)*puVar10)();
      *(undefined8 **)(lVar9 + 0x10) = puVar10;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  iVar3 = *(int *)(*(long *)(param_1 + 0x1a8) + 0x16c4);
  uVar4 = *(ushort *)(*(long *)(param_1 + 0x1a8) + 0x16b0);
  uVar8 = FUN_010dac08(puVar10,iVar3);
  if (iVar3 == 0) {
    plVar2 = plVar12 + 0xd;
joined_r0x011969e0:
    if (uVar4 < uVar8) {
      uVar11 = *(undefined2 *)((long)plVar2 + (ulong)uVar4 * 4);
      goto LAB_01196950;
    }
  }
  else {
    if (iVar3 == 1) {
      plVar2 = (long *)((long)plVar12 + 0xaf4);
      goto joined_r0x011969e0;
    }
    if (iVar3 == 2) {
      plVar2 = (long *)((long)plVar12 + 0xc84);
      goto joined_r0x011969e0;
    }
  }
  uVar11 = 0;
LAB_01196950:
  FUN_010db560(plVar12,uVar11,1,(ulong)uVar4);
  FUN_00dac164(1);
  FUN_011a0c80(*(undefined8 *)(param_1 + 0x1a8));
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  if (plVar12 != (long *)0x0) {
    lVar9 = plVar12[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  return 0;
}


