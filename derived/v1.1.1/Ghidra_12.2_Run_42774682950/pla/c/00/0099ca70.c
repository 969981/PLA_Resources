/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0099ca70; name: FUN_0099ca70
 */


void FUN_0099ca70(long param_1,byte param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *local_30;
  long *local_28;
  
  *(byte *)(param_1 + 0x571) = param_2 & 1;
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379578), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar5 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar5;
  FUN_0098f80c(&local_28,lVar5 + 0xd8);
  if (local_28 != (long *)0x0) {
    FUN_0199c1ac(&local_30);
    if (local_30 != (long *)0x0) {
      lVar5 = local_30[0xb];
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
        (**(code **)(*local_30 + 0x20))(local_30);
      }
      FUN_025700e4(local_30,~param_2 & 1);
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


