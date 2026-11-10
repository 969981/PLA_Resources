/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f0a78; name: FUN_001f0a78
 */


bool FUN_001f0a78(undefined8 *param_1)

{
  bool bVar1;
  int iVar2;
  
  if ((param_1[0x12] == 0) && (iVar2 = FUN_0020af90(*param_1), iVar2 == 0)) {
    iVar2 = FUN_0020b444(*param_1);
    bVar1 = iVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


