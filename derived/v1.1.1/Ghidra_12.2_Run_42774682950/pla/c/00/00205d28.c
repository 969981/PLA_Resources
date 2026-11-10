/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00205d28; name: FUN_00205d28
 */


void FUN_00205d28(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long local_18;
  
  iVar1 = FUN_00205d6c(&local_18,param_2,param_3,0,0,0);
  if (iVar1 == 0) {
    *(undefined4 *)(local_18 + 0x930) = 1;
    *param_1 = local_18;
  }
  return;
}


