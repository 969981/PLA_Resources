/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f203f4; name: FUN_02f203f4
 */


void FUN_02f203f4(long *param_1)

{
  long lVar1;
  
  *param_1 = (long)&PTR_FUN_042ac240;
  if ((param_1[2] == 0) || ((*(byte *)((long)param_1 + 0x82) >> 4 & 1) != 0)) {
    lVar1 = param_1[0xb];
  }
  else {
    (*DAT_0442d150)(5);
    lVar1 = param_1[0xb];
  }
  if (lVar1 != 0) {
    (**(code **)(*param_1 + 0x78))();
  }
  *param_1 = (long)&PTR_FUN_042ac108;
  return;
}


