/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027a7df0; name: FUN_027a7df0
 */


void FUN_027a7df0(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  char local_80 [8];
  undefined1 auStack_78 [72];
  undefined4 local_24;
  
  FUN_027a7f34(local_80,param_3);
  local_24 = param_2;
  (*(code *)*param_1)(param_1 + 4,&local_24,local_80);
  if (local_80[0] != '\0') {
    FUN_02727c1c(auStack_78);
  }
  return;
}


