/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a0a96c; name: FUN_02a0a96c
 */


undefined8 FUN_02a0a96c(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  char local_14 [4];
  
  local_14[0] = *(char *)(param_1 + 0x54);
  uVar3 = 0;
  uVar2 = 2;
  switch(local_14[0]) {
  case '\0':
    break;
  case '\x01':
    uVar3 = 1;
    break;
  case '\x02':
    uVar3 = 2;
    break;
  case '\x03':
    uVar3 = 3;
    break;
  case '\x04':
    uVar3 = 4;
    break;
  case '\x05':
    uVar3 = 5;
    break;
  case '\x06':
    uVar3 = 6;
    break;
  case '\a':
    uVar3 = 7;
    break;
  case '\b':
    uVar3 = 8;
    break;
  case '\t':
    uVar3 = 9;
    break;
  case '\n':
    uVar3 = 10;
    break;
  case '\v':
    uVar3 = 0xb;
    break;
  case '\f':
    uVar3 = 0xc;
    break;
  case '\r':
    uVar3 = 0xd;
    break;
  case '\x0e':
    uVar3 = 0xe;
    break;
  case '\x0f':
    uVar3 = 0xf;
    break;
  case '\x10':
    uVar3 = 0x10;
    break;
  case '\x11':
    uVar3 = 0x11;
    break;
  case '\x12':
    uVar3 = 0x12;
    break;
  case '\x13':
    uVar3 = 0x13;
    break;
  case '\x14':
    uVar3 = 0x14;
    break;
  case '\x15':
    uVar3 = 0x15;
    break;
  case '\x16':
    uVar3 = 0x16;
    break;
  case '\x17':
    uVar3 = 0x17;
    break;
  case '\x18':
    uVar3 = 0x18;
    break;
  case '\x19':
    uVar3 = 0x19;
    break;
  case '\x1a':
    uVar3 = 0x1a;
    break;
  case '\x1b':
    uVar3 = 0x1b;
    break;
  case '\x1c':
    uVar3 = 0x1c;
    break;
  case '\x1d':
    uVar3 = 0x1d;
    break;
  case '\x1e':
    uVar3 = 0x1e;
    break;
  case '\x1f':
    uVar3 = 0x1f;
    break;
  case ' ':
    uVar3 = 0x20;
    break;
  case '!':
    uVar3 = 0x21;
    break;
  case '\"':
    uVar3 = 0x22;
    break;
  case '#':
    uVar3 = 0x23;
    break;
  case '$':
    uVar3 = 0x24;
    break;
  case '%':
    uVar3 = 0x25;
    break;
  case '&':
    uVar3 = 0x26;
    break;
  case '\'':
    uVar3 = 0x27;
    break;
  case '(':
    uVar3 = 0x28;
    break;
  case ')':
    uVar3 = 0x29;
    break;
  case '*':
    uVar3 = 0x2a;
    break;
  case '+':
    uVar3 = 0x2b;
    break;
  case ',':
    goto switchD_02a0a9a4_caseD_2c;
  default:
    pcVar4 = (code *)0x0;
    goto LAB_02a0ab18;
  }
  pcVar4 = (code *)(&PTR_LAB_04279200)[uVar3 * 3];
  uVar3 = (&DAT_04279208)[uVar3 * 3];
LAB_02a0ab18:
  if ((pcVar4 == (code *)0x0) && (uVar3 == 0 || (uVar3 & 1) == 0)) {
    uVar2 = 2;
  }
  else {
    plVar1 = (long *)(param_1 + ((long)uVar3 >> 1));
    if ((uVar3 & 1) != 0) {
      pcVar4 = *(code **)(pcVar4 + *plVar1);
    }
    uVar2 = (*pcVar4)(plVar1,param_1 + 0x58,local_14);
    if (local_14[0] != *(char *)(param_1 + 0x54)) {
      *(char *)(param_1 + 0x54) = local_14[0];
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
  }
switchD_02a0a9a4_caseD_2c:
  return uVar2;
}


