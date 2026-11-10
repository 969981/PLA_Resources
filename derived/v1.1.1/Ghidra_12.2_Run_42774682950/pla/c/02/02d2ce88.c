/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d2ce88; name: FUN_02d2ce88
 */


void FUN_02d2ce88(long *param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  long lVar4;
  
  if (param_1[1] != 0) {
    lVar4 = *param_1;
    nn::os::LockMutex((MutexType *)(lVar4 + 0x200));
    cVar2 = *(char *)(lVar4 + 0x1d8);
    nn::os::UnlockMutex((MutexType *)(lVar4 + 0x200));
    if ((cVar2 == '\0') && (iVar1 = *(int *)(lVar4 + 0x70), iVar1 != 3)) {
      if (iVar1 == 2) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(param_1[1] + 0x100);
        if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
          lVar4 = lVar4 + 0x178;
          lVar3 = param_1[1] + 0x120;
LAB_02d2cf34:
                    /* WARNING: Could not recover jumptable at 0x02d2cf40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)(lVar3,lVar4);
          return;
        }
      }
      else if ((iVar1 == 1) && (*(char *)(lVar4 + 0x110) != '\0')) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(param_1[1] + 0x80);
        if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
          lVar4 = lVar4 + 0x118;
          lVar3 = param_1[1] + 0xa0;
          goto LAB_02d2cf34;
        }
      }
    }
    else {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(param_1[1] + 0x180);
      if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02d2cee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(param_1[1] + 0x1a0);
        return;
      }
    }
  }
  return;
}


