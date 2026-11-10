/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a6f9a8; name: FUN_00a6f9a8
 */


void FUN_00a6f9a8(long param_1,ulong param_2,ulong param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long *local_40;
  undefined1 auStack_38 [8];
  
  FUN_00aad37c(&local_40,*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c));
  if (local_40 != (long *)0x0) {
    lVar6 = FUN_009abf14(local_40 + 0x1e,auStack_38);
    if (lVar6 != 0) {
      if ((param_3 & 1) == 0) {
        FUN_00aba774(lVar6);
      }
      else {
        if (((*PTR_DAT_04379578 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379578), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379578);
        }
        *(undefined8 *)PTR_DAT_04379588 = *(undefined8 *)PTR_DAT_04379580;
        FUN_00954924();
        FUN_00aad3a8(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c));
        if ((param_2 & 1) == 0) {
          uVar4 = 0x1f;
        }
        else {
          uVar4 = FUN_00aad3a8(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x90));
        }
        FUN_00aba250(lVar6,uVar4,*(char *)(param_1 + 0x94) == '\0');
      }
    }
    if (local_40 != (long *)0x0) {
      lVar6 = local_40[0xb];
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
        (**(code **)(*local_40 + 0x20))();
      }
    }
  }
  return;
}


