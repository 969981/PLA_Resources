/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00dc8e80; name: FUN_00dc8e80
 */


void FUN_00dc8e80(undefined8 param_1)

{
  char *pcVar1;
  undefined1 auStack_38 [8];
  char *local_30;
  char local_28;
  undefined8 local_18;
  
  local_18 = 0;
  FUN_008e8bd0(auStack_38,param_1,0xfffffffe,PTR_LAB_04379768,&local_18);
  pcVar1 = "(unknown)";
  if (local_28 != '\0') {
    pcVar1 = local_30;
  }
  FUN_00154110(param_1,
               "sol: attempt to index (set) nil value \"%s\" on userdata (bad (misspelled?) key name or does not exist)"
               ,pcVar1);
  return;
}


