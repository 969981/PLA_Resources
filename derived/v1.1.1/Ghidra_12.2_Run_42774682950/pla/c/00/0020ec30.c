/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020ec30; name: FUN_0020ec30
 */


void FUN_0020ec30(undefined8 param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0x100040 >> (ulong)((param_3 & 3) << 3);
  if (2 < param_3) {
    uVar1 = 0;
  }
  iVar2 = FUN_0020c5c4(param_1,uVar1);
  if ((iVar2 == 0) && (iVar2 = FUN_0020fdd4(param_1,*param_2,param_2[2]), iVar2 == 0)) {
    FUN_0020fdd4(param_1,param_2[1],param_2[3]);
    return;
  }
  return;
}


