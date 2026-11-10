/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0334a980; name: FUN_0334a980
 */


void FUN_0334a980(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_032cf2d8(PTR_PTR_0434a080,0x18,0x10);
  *param_1 = uVar1;
  FUN_032c4b00(uVar1,0xff,0x180);
  param_1[1] = 0xf00000000;
  return;
}


