/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b42570; name: FUN_01b42570
 */


void FUN_01b42570(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 *local_48;
  char *pcStack_40;
  undefined8 local_38;
  long *local_30;
  long *local_28;
  undefined8 local_18;
  
  FUN_01a92c54(&local_48);
  if (local_48 == (undefined8 *)0x0) {
    local_28 = (long *)0x0;
  }
  else {
    FUN_00bd9360(&local_28);
    if (local_48 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_48 + 1);
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
        local_48[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar5 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar5;
        local_18 = *local_48;
        FUN_02a44274(lVar5 + 0xd8,&local_18);
      }
    }
  }
  if (local_28 != (long *)0x0) {
    local_48 = (undefined8 *)0xca7e3b816db38b07;
    pcStack_40 = "PLAY_BA_SYS_POKE_BALL";
    local_38 = 0x15;
    local_30 = (long *)0x0;
    FUN_0290b66c(local_28,&local_48,0);
    if (local_30 != (long *)0x0) {
      (**(code **)(*local_30 + 0x20))();
    }
    if (local_28 != (long *)0x0) {
      lVar5 = local_28[0xb];
      piVar1 = (int *)(lVar5 + 0xc);
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
        *(undefined8 *)(lVar5 + 0x18) = 0;
        (**(code **)(*local_28 + 0x20))();
      }
    }
  }
  return;
}


