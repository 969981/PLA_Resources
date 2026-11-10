/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004221e0; name: FUN_004221e0
 */


void FUN_004221e0(undefined8 *param_1,ushort *param_2)

{
  char *pcVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  do {
    if ((*param_2 & 0x306) != 0) goto switchD_0042223c_caseD_1;
    pcVar1 = *(char **)(param_2 + 0x10);
    if (*pcVar1 != '\0') {
      switch(*pcVar1) {
      case '\x01':
      case '\x02':
      case '\x06':
        break;
      default:
        goto switchD_0042223c_caseD_3;
      case '\x04':
        if ((*(long *)(pcVar1 + 0x20) != 0) &&
           (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(pcVar1 + 0x20) + 0x18),
           UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00422250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
        break;
      case '\x05':
        if (((pcVar1 != (char *)0x0) && (*(long *)(pcVar1 + 0x20) != 0)) &&
           (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(pcVar1 + 0x20) + 0x20),
           UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00422280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
      }
      goto switchD_0042223c_caseD_1;
    }
    param_2 = *(ushort **)(pcVar1 + 0x10);
  } while (param_2 != (ushort *)0x0);
  if (*(long *)(pcVar1 + 0x20) == 0) {
    if (*(int *)(pcVar1 + 8) == 1) {
      *(int *)param_1 = (int)*(undefined8 *)(pcVar1 + 0x28);
      return;
    }
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(pcVar1 + 0x20) + 0x20);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00422218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
switchD_0042223c_caseD_1:
  *param_1 = 0;
switchD_0042223c_caseD_3:
  return;
}


