/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013af7f0; name: FUN_013af7f0
 */


undefined8 FUN_013af7f0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined4 uVar6;
  long lVar7;
  long *local_18;
  
  switch(*(undefined4 *)(param_1 + 0xac)) {
  case 0x40:
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_0114924c(&local_18);
    if (local_18 == (long *)0x0) {
      return 1;
    }
    iVar4 = FUN_011215c4();
    uVar6 = 0x43;
    if (iVar4 != 0) {
      uVar6 = 0x41;
    }
    *(undefined4 *)(param_1 + 0xac) = uVar6;
    if (local_18 != (long *)0x0) {
      lVar7 = local_18[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
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
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_18 + 0x20))();
      }
    }
    break;
  case 0x41:
    uVar5 = FUN_013c60b0(*(undefined8 *)(param_1 + 0xc0),0xe);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    uVar6 = 0x42;
    goto LAB_013af90c;
  case 0x42:
    uVar5 = FUN_013c6220(*(undefined8 *)(param_1 + 0xc0),1);
    if ((uVar5 & 1) != 0) {
      return 1;
    }
    break;
  case 0x43:
    uVar5 = FUN_013c60b0(*(undefined8 *)(param_1 + 0xc0),0xf);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    uVar6 = 0x44;
LAB_013af90c:
    *(undefined4 *)(param_1 + 0xac) = uVar6;
    break;
  case 0x44:
    uVar5 = FUN_013c6220(*(undefined8 *)(param_1 + 0xc0),3);
    if ((uVar5 & 1) != 0) {
      return 1;
    }
    break;
  default:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return 0;
}


