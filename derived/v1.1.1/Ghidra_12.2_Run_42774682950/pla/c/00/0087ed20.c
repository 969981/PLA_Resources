/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0087ed20; name: FUN_0087ed20
 */


void FUN_0087ed20(undefined1 *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(long *)(param_3 + 0x18) + 8);
  *(undefined1 **)(param_1 + 0x10) = param_1 + 0x18;
  (**(code **)PTR_DAT_04372b78)();
  (**(code **)PTR_DAT_04372b80)(*(undefined8 *)(param_1 + 0x10),*(undefined2 *)(param_3 + 2),1);
  (**(code **)PTR_DAT_04378b88)
            (*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_3 + 8),
             *(undefined4 *)(param_3 + 0xc));
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_0087bec0(*(undefined4 *)(param_3 + 4));
  (**(code **)PTR_DAT_04378b90)(uVar2,uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_0087bf78(*param_3);
  (**(code **)PTR_DAT_04378ba8)(uVar2,uVar1);
  param_1[1] = param_1[1] & 0xfe;
  *param_1 = 1;
  return;
}


