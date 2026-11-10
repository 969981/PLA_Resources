/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00231a08; name: FUN_00231a08
 */


undefined8 FUN_00231a08(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58;
  float fStack_54;
  
  (**(code **)(**(long **)(param_1 + 0x38) + 0x60))(*(long **)(param_1 + 0x38),&local_58);
  iVar3 = (int)fStack_54;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  iVar2 = (int)local_58;
  local_98 = 0;
  uStack_90 = 0;
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  if (iVar3 < 2) {
    iVar3 = 1;
  }
  FUN_00876d98(&local_98);
  uStack_80 = CONCAT44(uStack_80._4_4_,iVar3);
  uStack_90 = CONCAT44(*(undefined4 *)(param_1 + 0x44),(undefined4)uStack_90);
  local_88 = CONCAT44(iVar2,0xa0);
  local_98._0_2_ = CONCAT11(2,(undefined1)local_98);
  local_98 = CONCAT26(1,(undefined6)local_98);
  uVar1 = (**(code **)(**(long **)(param_1 + 0x20) + 0x30))();
  if ((uVar1 & 1) == 0) {
    FUN_002500f8(*(undefined8 *)(param_1 + 0x20),param_2,param_3,&local_98,param_4);
  }
  iVar2 = (int)(local_58 * *(float *)(param_1 + 0x28));
  iVar3 = (int)(fStack_54 * *(float *)(param_1 + 0x28));
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  if (iVar3 < 2) {
    iVar3 = 1;
  }
  local_88 = CONCAT44(iVar2,(undefined4)local_88);
  uStack_80 = CONCAT44(uStack_80._4_4_,iVar3);
  uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x30))();
  if ((uVar1 & 1) == 0) {
    FUN_002500f8(*(undefined8 *)(param_1 + 8),param_2,param_3,&local_98,param_4);
  }
  if ((*(int *)(*(long *)(param_1 + 0x20) + 0xd4) == 0) &&
     (*(int *)(*(long *)(param_1 + 8) + 0xd4) == 0)) {
    *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) | 4;
  }
  return 1;
}


