/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f0cc4; name: FUN_001f0cc4
 */


undefined8 FUN_001f0cc4(long *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  *param_2 = (int)param_1[0x4b];
  if (((*(uint *)(lVar3 + 0x1c0) & 0x22) == 2) || (iVar1 = FUN_0020b444(param_1[0xaa]), iVar1 != 0))
  {
    uVar2 = 0x10001;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


