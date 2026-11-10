/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020beb0; name: FUN_0020beb0
 */


undefined8 FUN_0020beb0(int param_1)

{
  switch(param_1) {
  case -0x215:
    return 7;
  case -0x214:
  case -0x213:
    goto switchD_0020bed0_caseD_fffffdec;
  case -0x212:
  case -0x211:
  case -0x210:
  case -0x20f:
  case -0x20e:
  case -0x20d:
    return 2;
  case -0x20c:
    return 3;
  case -0x20b:
    return 9;
  case -0x20a:
    return 6;
  default:
    if (param_1 == -0x1fe) {
      return 5;
    }
    if (param_1 != -0x1f9) {
      return 2;
    }
switchD_0020bed0_caseD_fffffdec:
    return 1;
  }
}


