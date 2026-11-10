/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014f05d8; name: FUN_014f05d8
 */


void FUN_014f05d8(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_02c63ba8(*(undefined8 *)(param_1 + 0x10));
  uVar2 = FUN_02c63ce0(*(undefined8 *)(param_1 + 0x10));
  FUN_014f0688(param_1,uVar1,param_1 + 0xb0);
  if ((uVar1 & 0xff) == (uVar2 & 0xff)) {
    FUN_0283b11c(*(undefined8 *)(param_1 + 8),param_1 + 0xd0,0);
    return;
  }
  FUN_014f0688(param_1,uVar2,param_1 + 0xd0);
  return;
}


