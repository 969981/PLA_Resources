/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004bbc10; name: FUN_004bbc10
 */


undefined8 FUN_004bbc10(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((DAT_0439e9d4 & 1) != 0) {
    return 1;
  }
  if (param_1 == (undefined8 *)0x0) {
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar1 = *param_1;
    uVar2 = param_1[1];
  }
  FUN_004bbc90();
  FUN_004016d0();
  uVar1 = FUN_00415130(uVar1,uVar2,0x30);
  DAT_0439e9d4 = 1;
  return uVar1;
}


