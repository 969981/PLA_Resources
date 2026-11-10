/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b1fb5c; name: FUN_01b1fb5c
 */


void FUN_01b1fb5c(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 local_58;
  undefined *puStack_50;
  undefined8 local_48;
  long *local_40;
  undefined8 *local_38;
  char *pcStack_30;
  undefined8 local_28;
  long *local_20;
  long *local_18;
  
  FUN_01a92c54(&local_38);
  FUN_01b1fcf0(&local_18,&local_38);
  if (local_38 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_38 + 1);
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
      local_38[2] = 0;
      if ((*PTR_DAT_04379498 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(PTR_DAT_04379498);
        if (iVar4 != 0) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
      }
      lVar5 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar5;
      local_58 = *local_38;
      FUN_02a44274(lVar5 + 0xd8,&local_58);
    }
  }
  if (local_18 != (long *)0x0) {
    local_38 = (undefined8 *)0x8b24ea80eafe26d;
    pcStack_30 = "PLAY_PL_EFV_COMM";
    local_28 = 0x10;
    local_20 = (long *)0x0;
    local_58 = 0xd36b2ac302427423;
    puStack_50 = &DAT_038f1ace;
    local_48 = 4;
    local_40 = (long *)0x0;
    FUN_029217c0(local_18,&local_38,&local_58,1);
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 0x20))();
    }
    if (local_20 != (long *)0x0) {
      (**(code **)(*local_20 + 0x20))();
    }
    if (local_18 != (long *)0x0) {
      lVar5 = local_18[0xb];
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
        (**(code **)(*local_18 + 0x20))();
      }
    }
  }
  return;
}


