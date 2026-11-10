/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fcb8c0; name: FUN_00fcb8c0
 */


void FUN_00fcb8c0(undefined8 param_1,long *param_2,long param_3)

{
  code *pcVar1;
  long *local_18;
  
  pcVar1 = (code *)*param_2;
  if ((param_2[1] & 1U) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_3 + (param_2[1] >> 1)));
  }
  (*pcVar1)(&local_18);
  FUN_0014ff10(param_1,0);
  FUN_00fcb980();
  FUN_00fcb928(param_1,&local_18);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


