/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00170d00; name: FUN_00170d00
 */


uint FUN_00170d00(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = tolower(param_2);
  switch(iVar1) {
  case 0x61:
    param_1 = (param_1 | 0x20) - 0x61;
    goto LAB_00170dc0;
  default:
    return (uint)(param_2 == param_1);
  case 99:
    uVar2 = iscntrl(param_1);
    break;
  case 100:
    uVar2 = (uint)(param_1 - 0x30 < 10);
    break;
  case 0x67:
    uVar2 = (uint)(param_1 - 0x21 < 0x5e);
    break;
  case 0x6c:
    param_1 = param_1 - 0x61;
    goto LAB_00170dc0;
  case 0x70:
    uVar2 = ispunct(param_1);
    break;
  case 0x73:
    uVar2 = 1;
    if (param_1 != 0x20) {
      uVar2 = (uint)(param_1 - 9 < 5);
    }
    break;
  case 0x75:
    param_1 = param_1 - 0x41;
LAB_00170dc0:
    uVar2 = (uint)(param_1 < 0x1a);
    break;
  case 0x77:
    uVar2 = isalnum(param_1);
    break;
  case 0x78:
    uVar2 = isxdigit(param_1);
    break;
  case 0x7a:
    uVar2 = (uint)(param_1 == 0);
  }
  if (0x19 < param_2 - 0x61) {
    uVar2 = (uint)(uVar2 == 0);
  }
  return uVar2;
}


