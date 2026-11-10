/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0120bd50; name: FUN_0120bd50
 */


void FUN_0120bd50(long param_1,int param_2)

{
  undefined8 local_18;
  
  if (param_2 == 0) {
    local_18 = 0xcb074b1a63eb72ba;
    FUN_027bcc14(param_1 + 0xc0,&local_18);
    *(undefined8 *)(param_1 + 0xb0) = 9;
    return;
  }
  FUN_0120b9f0(param_1);
  return;
}


