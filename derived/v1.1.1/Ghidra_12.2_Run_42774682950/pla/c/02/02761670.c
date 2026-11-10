/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02761670; name: FUN_02761670
 */


undefined8 FUN_02761670(byte param_1)

{
  if ((-1 < (char)param_1) || (0xbf < param_1)) {
switchD_027616b0_caseD_b5:
    return 1;
  }
  switch(param_1) {
  case 0x80:
  case 0x84:
    return 2;
  case 0x81:
  case 0x85:
    return 3;
  case 0x82:
  case 0x86:
  case 0x88:
    return 5;
  case 0x83:
  case 0x87:
  case 0x89:
    return 9;
  default:
    return 0;
  case 0xb5:
  case 0xb6:
  case 0xb7:
  case 0xb8:
  case 0xb9:
  case 0xba:
  case 0xbb:
  case 0xbc:
  case 0xbd:
  case 0xbe:
  case 0xbf:
    goto switchD_027616b0_caseD_b5;
  }
}


