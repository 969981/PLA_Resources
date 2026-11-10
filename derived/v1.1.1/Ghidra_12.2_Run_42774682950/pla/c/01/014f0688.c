/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014f0688; name: FUN_014f0688
 */


void FUN_014f0688(long param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_00d63240(*(undefined8 *)(param_1 + 8),param_3);
  if (lVar1 == 0) {
    return;
  }
  FUN_0284fbb0(*(undefined8 *)(param_1 + 0x20),param_2,1,lVar1,0,0);
  FUN_0283b11c(*(undefined8 *)(param_1 + 8),param_3,1);
  return;
}


