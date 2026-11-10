/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0279ae98; name: FUN_0279ae98
 */


void FUN_0279ae98(long param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  
  if (*param_2 != 0) {
    uVar2 = FUN_0279b098();
    if (((uVar2 & 1) == 0) && (iVar1 = *(int *)(param_1 + 0x70), iVar1 != 3)) {
      if (iVar1 == 2) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_2 + 0x100);
        if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
          param_1 = param_1 + 0x120;
          lVar3 = *param_2 + 0x120;
LAB_0279af28:
                    /* WARNING: Could not recover jumptable at 0x0279af30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)(lVar3,param_1);
          return;
        }
      }
      else if ((iVar1 == 1) && (*(char *)(param_1 + 0x110) != '\0')) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_2 + 0x80);
        if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
          param_1 = param_1 + 0x118;
          lVar3 = *param_2 + 0xa0;
          goto LAB_0279af28;
        }
      }
    }
    else {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_2 + 0x180);
      if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0279aed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(*param_2 + 0x1a0);
        return;
      }
    }
  }
  return;
}


