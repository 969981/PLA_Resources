/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00928784; name: FUN_00928784
 */


bool FUN_00928784(undefined8 param_1)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = FUN_009287cc(param_1,0xffffffff);
  bVar1 = (uVar2 & 0xff) != 0x1f;
  if (bVar1) {
    FUN_009289bc(param_1,uVar2);
  }
  return bVar1;
}


