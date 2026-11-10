/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01206bd0; name: FUN_01206bd0
 */


void FUN_01206bd0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  uVar1 = FUN_0142f990(*(undefined8 *)(param_1 + 0xa8));
  FUN_0121fda4(uVar2,uVar1);
  FUN_01206c08(param_1);
  return;
}


