/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002fd090; name: FUN_002fd090
 */


void FUN_002fd090(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_002f8bb0();
  if (iVar1 == 0) {
    DAT_04399880 = 1;
  }
  else {
    uVar2 = FUN_002f8bb0();
    DAT_04399880 = uVar2 & 0xffffffff;
  }
  uVar3 = FUN_002ebd80(DAT_04399880 * 0x1d50);
  *(undefined8 *)PTR_DAT_043738c0 = uVar3;
  return;
}


