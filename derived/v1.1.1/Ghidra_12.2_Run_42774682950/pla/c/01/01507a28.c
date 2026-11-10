/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01507a28; name: FUN_01507a28
 */


bool FUN_01507a28(long param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  uint uVar8;
  long *local_28;
  
  uVar5 = *(ulong *)(*(long *)(param_1 + 0x630) + 0xb0);
  if ((int)uVar5 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    uVar5 = uVar5 & 0xffffffff;
    piVar7 = (int *)(param_1 + 0x648);
    do {
      if (*piVar7 != 0) {
        uVar8 = piVar7[-1] + uVar8;
      }
      uVar5 = uVar5 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar5 != 0);
  }
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148c68(&local_28);
  uVar3 = FUN_011171a4(local_28);
  if (local_28 != (long *)0x0) {
    lVar6 = local_28[0xb];
    piVar7 = (int *)(lVar6 + 0xc);
    do {
      iVar4 = *piVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return uVar8 <= uVar3;
}


