/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d51c38; name: FUN_00d51c38
 */


undefined8 FUN_00d51c38(long param_1,uint *param_2,undefined4 *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = param_4;
  if (param_4 == 2) {
    iVar3 = 0;
  }
  lVar4 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)iVar3 * 0x28);
  *param_2 = *(uint *)(*(long *)(lVar4 + 0x8b0) + 0x14);
  *param_3 = *(undefined4 *)(*(long *)(lVar4 + 0x8b0) + 0x10);
  uVar1 = *(uint *)(param_1 + (long)param_4 * 0x60 + 0x640);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = *param_2 / uVar1;
  }
  return CONCAT44(uVar2,*param_2 - uVar2 * uVar1);
}


