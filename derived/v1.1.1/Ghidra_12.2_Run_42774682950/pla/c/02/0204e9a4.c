/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0204e9a4; name: FUN_0204e9a4
 */


void FUN_0204e9a4(undefined8 param_1)

{
  long lVar1;
  
  FUN_001511d0(param_1,0xfff0b9d6);
  lVar1 = FUN_001511d0(param_1,1);
                    /* WARNING: Could not recover jumptable at 0x0204e9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(lVar1 + ((ulong)(uint)-(int)lVar1 & 7)))();
  return;
}


