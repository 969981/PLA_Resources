/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c2d3b0; name: FUN_02c2d3b0
 */


undefined8 FUN_02c2d3b0(undefined8 param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = *param_2;
  if (uVar1 - 0x60 < 0x1b) {
switchD_02c2d3e8_caseD_e0:
    uVar2 = uVar1 - 0x20;
    goto switchD_02c2d3e8_caseD_153;
  }
  uVar2 = 0x152;
  switch((uint)uVar1) {
  case 0xe0:
  case 0xe1:
  case 0xe2:
  case 0xe4:
  case 0xe6:
  case 0xe7:
  case 0xe8:
  case 0xe9:
  case 0xea:
  case 0xeb:
  case 0xed:
  case 0xee:
  case 0xef:
  case 0xf1:
  case 0xf3:
  case 0xf4:
  case 0xf6:
  case 0xfa:
  case 0xfb:
  case 0xfc:
    goto switchD_02c2d3e8_caseD_e0;
  default:
    return 0;
  case 0x153:
switchD_02c2d3e8_caseD_153:
    *param_2 = uVar2;
    return 1;
  }
}


