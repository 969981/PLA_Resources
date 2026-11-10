/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001df0f0; name: FUN_001df0f0
 */


void FUN_001df0f0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x3fc);
  puVar1 = (undefined8 *)(param_1 + 0xd0);
  if ((uVar2 & 4) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x100);
  }
  if ((uVar2 & 0x20) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x160);
  }
  if ((uVar2 & 0x40) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x120);
  }
  FUN_001e64cc(param_2,0x80,"%ld%s",*(undefined8 *)(param_1 + 400),*puVar1);
  return;
}


