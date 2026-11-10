/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ddaaac; name: FUN_01ddaaac
 */


void FUN_01ddaaac(long param_1)

{
  long lVar1;
  long local_40;
  undefined1 auStack_38 [24];
  
  FUN_01ddae00(&local_40,*(undefined8 *)(param_1 + 8));
  FUN_01ddaefc(param_1 + 0x660,&local_40);
  lVar1 = local_40;
  local_40 = 0;
  if (lVar1 != 0) {
    FUN_01ddb190(auStack_38);
  }
  return;
}


