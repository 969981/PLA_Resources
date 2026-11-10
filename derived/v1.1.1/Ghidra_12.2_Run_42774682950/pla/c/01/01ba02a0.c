/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ba02a0; name: FUN_01ba02a0
 */


void FUN_01ba02a0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 0x854) = *param_2;
  uVar2 = param_2[2];
  uVar1 = param_2[3];
  uVar3 = param_2[4];
  *(undefined8 *)(param_1 + 0x85c) = param_2[1];
  *(undefined8 *)(param_1 + 0x874) = uVar3;
  *(undefined8 *)(param_1 + 0x86c) = uVar1;
  *(undefined8 *)(param_1 + 0x864) = uVar2;
  if (*(char *)(param_1 + 0x850) == '\0') {
    *(undefined1 *)(param_1 + 0x850) = 1;
  }
  return;
}


