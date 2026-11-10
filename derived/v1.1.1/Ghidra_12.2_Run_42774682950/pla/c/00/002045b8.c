/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002045b8; name: FUN_002045b8
 */


undefined8 FUN_002045b8(void)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = nnsslInitialize();
  uVar2 = nnResultIsFailure(uVar1);
  if (((uVar2 & 1) == 0) || (uVar2 = FUN_00204e08(uVar1,0x1927b), (uVar2 & 1) != 0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


