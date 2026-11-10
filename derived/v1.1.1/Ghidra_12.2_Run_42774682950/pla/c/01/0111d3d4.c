/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0111d3d4; name: FUN_0111d3d4
 */


void FUN_0111d3d4(long param_1,undefined8 param_2,uint param_3)

{
  undefined1 uVar1;
  
  if (param_3 < 6) {
    FUN_02c30580(param_1 + (ulong)param_3 * 0x2a + 0x338,param_2,0x15);
    uVar1 = FUN_00d15530();
    *(undefined1 *)(param_1 + (ulong)param_3 + 0x534) = uVar1;
  }
  return;
}


