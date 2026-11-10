/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ca1ac; name: FUN_001ca1ac
 */


char * FUN_001ca1ac(int param_1)

{
  switch(param_1) {
  case -0xfff6:
    return "Invalid Product";
  case -0xfff5:
    return "Empty Keycode";
  case -0xfff4:
    return "Invalid Keycode Format";
  case -0xfff3:
    return "Mismatched Product Against Keycode";
  case -0xfff2:
    goto switchD_001ca1d8_caseD_ffff000e;
  case -0xfff1:
    return "Expired Keycode";
  default:
    if (param_1 == -0xff01) {
      return "Base System Is Still Initializing... Continue And Retry";
    }
switchD_001ca1d8_caseD_ffff000e:
    return "Unknown Error";
  }
}


