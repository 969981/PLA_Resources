/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a14874; name: FUN_02a14874
 */


void FUN_02a14874(long param_1,byte param_2,undefined4 param_3,undefined2 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)param_2 * 8 + 0x120);
  if (*(long *)(lVar1 + 0x4a0) == 0) {
    switch(param_3) {
    case 8:
    case 10:
      goto switchD_02a148ac_caseD_8;
    case 9:
    case 0xb:
      goto switchD_02a148dc_caseD_9;
    case 0xc:
      goto switchD_02a148ac_caseD_c;
    default:
      goto switchD_02a148ac_default;
    }
  }
  switch(param_3) {
  case 8:
  case 10:
switchD_02a148ac_caseD_8:
    *(undefined2 *)(lVar1 + 0x2d2) = param_4;
    return;
  case 9:
    break;
  case 0xb:
    break;
  case 0xc:
switchD_02a148ac_caseD_c:
    *(undefined2 *)(lVar1 + 0x2da) = param_4;
  default:
switchD_02a148ac_default:
    return;
  }
switchD_02a148dc_caseD_9:
  *(undefined2 *)(lVar1 + 0x2d4) = param_4;
  return;
}


