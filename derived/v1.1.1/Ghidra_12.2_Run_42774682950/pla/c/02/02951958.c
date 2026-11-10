/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02951958; name: FUN_02951958
 */


void FUN_02951958(long param_1,undefined4 param_2)

{
  char cVar1;
  
  if (*(long *)(param_1 + 0x4a0) == 0) {
    switch(param_2) {
    case 8:
      goto switchD_02951980_caseD_8;
    case 9:
    case 0xb:
      goto switchD_029519ac_caseD_9;
    case 10:
      goto switchD_02951980_caseD_a;
    default:
      goto switchD_02951980_default;
    }
  }
  switch(param_2) {
  case 8:
switchD_02951980_caseD_8:
    cVar1 = *(char *)(param_1 + 0x2e4);
    break;
  case 9:
  case 0xb:
switchD_029519ac_caseD_9:
    if ('\x01' < *(char *)(param_1 + 0x2e5)) goto LAB_029519bc;
    goto switchD_02951980_default;
  case 10:
switchD_02951980_caseD_a:
    cVar1 = *(char *)(param_1 + 0x2e4);
    break;
  default:
    goto switchD_02951980_default;
  }
  if (cVar1 < '\x01') {
LAB_029519bc:
    FUN_0295084c();
    return;
  }
switchD_02951980_default:
  FUN_029506a8();
  return;
}


