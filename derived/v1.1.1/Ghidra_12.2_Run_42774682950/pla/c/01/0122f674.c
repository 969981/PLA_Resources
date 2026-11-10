/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0122f674; name: FUN_0122f674
 */


void FUN_0122f674(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = param_2 & 0xffffffff;
  FUN_012305ec(param_1,param_2,0xf78b9ed1507ad6df);
  FUN_01230708(param_1,0,uVar1,0x162afedc30eafc13);
  FUN_01230708(param_1,1,uVar1,0x162affdc30eafdc6);
  FUN_01230708(param_1,2,uVar1,0x162b00dc30eaff79);
  FUN_01230a04(0x3f800000,param_1,uVar1);
  return;
}


