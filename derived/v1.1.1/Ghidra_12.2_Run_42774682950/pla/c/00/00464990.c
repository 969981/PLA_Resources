/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00464990; name: FUN_00464990
 */


undefined8 FUN_00464990(long param_1,long param_2,undefined8 *param_3,undefined4 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_0044f830();
  if ((lVar1 != param_2) || ((*(byte *)(param_1 + 0xe1) & 1) == 0)) {
    uVar2 = FUN_00464ad0(PTR_DAT_043743e8,param_2,param_1,param_3,param_4);
    return uVar2;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0x14;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x138);
  uVar2 = *(undefined8 *)(param_1 + 0x130);
  *(undefined4 *)(param_3 + 2) = *(undefined4 *)(param_1 + 0x140);
  param_3[1] = uVar3;
  *param_3 = uVar2;
  return 1;
}


