/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293e560; name: FUN_0293e560
 */


ulong FUN_0293e560(byte param_1,undefined1 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  
  if (param_1 == 0x12) {
    return 0;
  }
  uVar2 = (ulong)param_1;
  uVar1 = 0;
  cVar3 = DAT_043ecde8;
  switch((&DAT_03a84908)[uVar2 * 0x12]) {
  case 0:
  case 2:
    if (DAT_043ecde8 == '\0') goto switchD_0293e5b4_caseD_1;
    uVar1 = 0;
    cVar3 = '\x01';
    break;
  default:
switchD_0293e5b4_caseD_1:
    *param_2 = 0;
    uVar1 = 1;
    cVar3 = DAT_043ecde8;
    break;
  case 4:
    break;
  case 8:
    if (DAT_043ecde8 != '\0') goto switchD_0293e5b4_caseD_1;
    uVar1 = 0;
  }
  switch((&DAT_03a84909)[uVar2 * 0x12]) {
  case 0:
  case 2:
    if (cVar3 == '\0') goto switchD_0293e600_caseD_1;
    cVar3 = '\x01';
    break;
  default:
switchD_0293e600_caseD_1:
    param_2[uVar1] = 1;
    uVar1 = (ulong)((int)uVar1 + 1);
    cVar3 = DAT_043ecde8;
    break;
  case 4:
    break;
  case 8:
    if (cVar3 != '\0') goto switchD_0293e600_caseD_1;
  }
  switch((&DAT_03a8490a)[uVar2 * 0x12]) {
  case 0:
  case 2:
    if (cVar3 == '\0') goto switchD_0293e650_caseD_1;
    cVar3 = '\x01';
    break;
  default:
switchD_0293e650_caseD_1:
    param_2[uVar1] = 2;
    uVar1 = (ulong)((int)uVar1 + 1);
    cVar3 = DAT_043ecde8;
    break;
  case 4:
    break;
  case 8:
    if (cVar3 != '\0') goto switchD_0293e650_caseD_1;
  }
  switch((&DAT_03a8490b)[uVar2 * 0x12]) {
  case 0:
  case 2:
    if (cVar3 == '\0') goto switchD_0293e6a0_caseD_1;
    cVar3 = '\x01';
    break;
  default:
switchD_0293e6a0_caseD_1:
    param_2[uVar1] = 3;
    uVar1 = (ulong)((int)uVar1 + 1);
    cVar3 = DAT_043ecde8;
    break;
  case 4:
    break;
  case 8:
    if (cVar3 != '\0') goto switchD_0293e6a0_caseD_1;
  }
  switch((&DAT_03a8490c)[uVar2 * 0x12]) {
  case 0:
  case 2:
    if (cVar3 == '\0') goto switchD_0293e6f0_caseD_1;
    cVar3 = '\x01';
    break;
  default:
switchD_0293e6f0_caseD_1:
    param_2[uVar1] = 4;
    uVar1 = (ulong)((int)uVar1 + 1);
    cVar3 = DAT_043ecde8;
    break;
  case 4:
    break;
  case 8:
    if (cVar3 != '\0') goto switchD_0293e6f0_caseD_1;
  }
  switch((&DAT_03a8490d)[uVar2 * 0x12]) {
  case 0:
  case 2:
    if (cVar3 == '\0') goto switchD_0293e740_caseD_1;
    cVar3 = '\x01';
    break;
  default:
switchD_0293e740_caseD_1:
    param_2[uVar1] = 5;
    uVar1 = (ulong)((int)uVar1 + 1);
    cVar3 = DAT_043ecde8;
    break;
  case 4:
    break;
  case 8:
    if (cVar3 != '\0') goto switchD_0293e740_caseD_1;
  }
  switch((&DAT_03a8490e)[uVar2 * 0x12]) {
  case 0:
  case 2:
    if (cVar3 == '\0') goto switchD_0293e790_caseD_1;
    cVar3 = '\x01';
    break;
  default:
switchD_0293e790_caseD_1:
    param_2[uVar1] = 6;
    uVar1 = (ulong)((int)uVar1 + 1);
    cVar3 = DAT_043ecde8;
    break;
  case 4:
    break;
  case 8:
    if (cVar3 != '\0') goto switchD_0293e790_caseD_1;
  }
  switch((&DAT_03a8490f)[uVar2 * 0x12]) {
  case 0:
  case 2:
    if (cVar3 == '\0') goto switchD_0293e7e0_caseD_1;
    cVar3 = '\x01';
    break;
  default:
switchD_0293e7e0_caseD_1:
    param_2[uVar1] = 7;
    uVar1 = (ulong)((int)uVar1 + 1);
    cVar3 = DAT_043ecde8;
    break;
  case 4:
    break;
  case 8:
    if (cVar3 != '\0') goto switchD_0293e7e0_caseD_1;
  }
  switch((&DAT_03a84910)[uVar2 * 0x12]) {
  case 0:
  case 2:
    if (cVar3 == '\0') goto switchD_0293e830_caseD_1;
    cVar3 = '\x01';
    break;
  default:
switchD_0293e830_caseD_1:
    param_2[uVar1] = 8;
    uVar1 = (ulong)((int)uVar1 + 1);
    cVar3 = DAT_043ecde8;
    break;
  case 4:
    break;
  case 8:
    if (cVar3 != '\0') goto switchD_0293e830_caseD_1;
  }
  switch((&DAT_03a84911)[uVar2 * 0x12]) {
  case 0:
  case 2:
    if (cVar3 == '\0') goto switchD_0293e880_caseD_1;
    cVar3 = '\x01';
    break;
  default:
switchD_0293e880_caseD_1:
    param_2[uVar1 & 0xff] = 9;
    uVar1 = (ulong)((int)uVar1 + 1);
    cVar3 = DAT_043ecde8;
    break;
  case 4:
    break;
  case 8:
    if (cVar3 != '\0') goto switchD_0293e880_caseD_1;
  }
  switch((&DAT_03a84912)[uVar2 * 0x12]) {
  case 0:
  case 2:
    if (cVar3 == '\0') goto switchD_0293e8d4_caseD_1;
    cVar3 = '\x01';
    break;
  default:
switchD_0293e8d4_caseD_1:
    param_2[uVar1 & 0xff] = 10;
    uVar1 = (ulong)((int)uVar1 + 1);
    cVar3 = DAT_043ecde8;
    break;
  case 4:
    break;
  case 8:
    if (cVar3 != '\0') goto switchD_0293e8d4_caseD_1;
  }
  switch((&DAT_03a84913)[uVar2 * 0x12]) {
  case 0:
  case 2:
    if (cVar3 == '\0') goto switchD_0293e928_caseD_1;
    cVar3 = '\x01';
    break;
  default:
switchD_0293e928_caseD_1:
    param_2[uVar1 & 0xff] = 0xb;
    uVar1 = (ulong)((int)uVar1 + 1);
    cVar3 = DAT_043ecde8;
    break;
  case 4:
    break;
  case 8:
    if (cVar3 != '\0') goto switchD_0293e928_caseD_1;
  }
  switch((&DAT_03a84914)[uVar2 * 0x12]) {
  case 0:
  case 2:
    if (cVar3 == '\0') goto switchD_0293e97c_caseD_1;
    cVar3 = '\x01';
    break;
  default:
switchD_0293e97c_caseD_1:
    param_2[uVar1 & 0xff] = 0xc;
    uVar1 = (ulong)((int)uVar1 + 1);
    cVar3 = DAT_043ecde8;
    break;
  case 4:
    break;
  case 8:
    if (cVar3 != '\0') goto switchD_0293e97c_caseD_1;
  }
  switch((&DAT_03a84915)[uVar2 * 0x12]) {
  case 0:
  case 2:
    if (cVar3 == '\0') goto switchD_0293e9d0_caseD_1;
    cVar3 = '\x01';
    break;
  default:
switchD_0293e9d0_caseD_1:
    param_2[uVar1 & 0xff] = 0xd;
    uVar1 = (ulong)((int)uVar1 + 1);
    cVar3 = DAT_043ecde8;
    break;
  case 4:
    break;
  case 8:
    if (cVar3 != '\0') goto switchD_0293e9d0_caseD_1;
  }
  switch((&DAT_03a84916)[uVar2 * 0x12]) {
  case 0:
  case 2:
    if (cVar3 == '\0') goto switchD_0293ea24_caseD_1;
    cVar3 = '\x01';
    break;
  default:
switchD_0293ea24_caseD_1:
    param_2[uVar1 & 0xff] = 0xe;
    uVar1 = (ulong)((int)uVar1 + 1);
    cVar3 = DAT_043ecde8;
    break;
  case 4:
    break;
  case 8:
    if (cVar3 != '\0') goto switchD_0293ea24_caseD_1;
  }
  switch((&DAT_03a84917)[uVar2 * 0x12]) {
  case 0:
  case 2:
    if (cVar3 == '\0') goto switchD_0293ea78_caseD_1;
    cVar3 = '\x01';
    break;
  default:
switchD_0293ea78_caseD_1:
    param_2[uVar1 & 0xff] = 0xf;
    uVar1 = (ulong)((int)uVar1 + 1);
    cVar3 = DAT_043ecde8;
    break;
  case 4:
    break;
  case 8:
    if (cVar3 != '\0') goto switchD_0293ea78_caseD_1;
  }
  switch((&DAT_03a84918)[uVar2 * 0x12]) {
  case 0:
  case 2:
    if (cVar3 == '\0') goto switchD_0293eacc_caseD_1;
    cVar3 = '\x01';
    break;
  default:
switchD_0293eacc_caseD_1:
    param_2[uVar1 & 0xff] = 0x10;
    uVar1 = (ulong)((int)uVar1 + 1);
    cVar3 = DAT_043ecde8;
    break;
  case 4:
    break;
  case 8:
    if (cVar3 != '\0') goto switchD_0293eacc_caseD_1;
  }
  switch((&DAT_03a84919)[uVar2 * 0x12]) {
  case 0:
  case 2:
    if (cVar3 == '\0') goto switchD_0293eb20_caseD_1;
    break;
  default:
switchD_0293eb20_caseD_1:
    param_2[uVar1 & 0xff] = 0x11;
    return (ulong)((int)uVar1 + 1);
  case 4:
    break;
  case 8:
    if (cVar3 != '\0') goto switchD_0293eb20_caseD_1;
  }
  return uVar1;
}


