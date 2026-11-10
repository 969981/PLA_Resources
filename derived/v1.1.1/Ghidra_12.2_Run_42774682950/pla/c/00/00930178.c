/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00930178; name: FUN_00930178
 */


void FUN_00930178(long param_1,undefined8 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  if ((param_4 & 0xff) == 5) {
    return;
  }
  FUN_009301e0(param_1,param_2,param_4);
  FUN_0092f2e4(param_1,param_3,param_4);
  uVar1 = (uint)param_2 & 0xff;
  FUN_02c36c30(*(undefined8 *)(param_1 + 0x78),uVar1,uVar1,param_3 & 0xff);
  return;
}


