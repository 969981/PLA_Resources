/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00821b80; name: FUN_00821b80
 */


void FUN_00821b80(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = nn::os::GetSystemTick();
  uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
  uVar1 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 2;
  uVar2 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
  *param_1 = uVar3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
  return;
}


