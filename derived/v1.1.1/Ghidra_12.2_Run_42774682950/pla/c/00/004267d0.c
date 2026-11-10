/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004267d0; name: FUN_004267d0
 */


bool FUN_004267d0(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_0040c5d0();
  if (lVar2 != 0) {
    FUN_0040c6b0(param_1 + 0x18,0);
    uVar1 = FUN_0040c070(param_2);
    *(undefined4 *)(param_1 + 0x30) = uVar1;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return lVar2 != 0;
}


