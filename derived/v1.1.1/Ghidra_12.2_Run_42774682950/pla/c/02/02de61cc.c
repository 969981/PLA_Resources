/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02de61cc; name: FUN_02de61cc
 */


void FUN_02de61cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_DAT_04379570;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  uVar1 = *(undefined8 *)puVar3;
  uVar2 = *(undefined8 *)(puVar3 + 8);
  *(undefined1 *)(param_1 + 0x11c) = 0;
  *(undefined8 *)(param_1 + 0xd0) = uVar1;
  *(undefined8 *)(param_1 + 0xd8) = uVar2;
  return;
}


