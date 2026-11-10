/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef886c; name: FUN_02ef886c
 */


void FUN_02ef886c(ulong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  if ((param_1 & 0xff9c0000) == 0) {
    FUN_02f59e60(0,uVar1);
    return;
  }
  FUN_02f1245c(uVar1,&PTR_PTR_042a9240);
  (**(code **)(PTR_PTR_042a9240 + 0x18))(&PTR_PTR_042a9240,uVar1);
  return;
}


