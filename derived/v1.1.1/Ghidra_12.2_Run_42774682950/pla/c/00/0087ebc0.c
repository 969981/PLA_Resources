/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0087ebc0; name: FUN_0087ebc0
 */


void FUN_0087ebc0(undefined1 *param_1,undefined8 param_2,char *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(long *)(param_3 + 0x30) + 8);
  *(undefined1 **)(param_1 + 0x10) = param_1 + 0x18;
  (**(code **)PTR_DAT_04372b78)();
  (**(code **)PTR_DAT_04372b80)
            (*(undefined8 *)(param_1 + 0x10),*(undefined2 *)(param_3 + 0x10),
             *(undefined2 *)(param_3 + 0x12));
  if (*param_3 != '\x02') {
    (**(code **)PTR_DAT_04378b88)
              (*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_3 + 0x20),
               *(undefined4 *)(param_3 + 0x24));
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_0087bec0(*(undefined4 *)(param_3 + 4));
  FUN_0087ef04(uVar2,uVar1,*(undefined8 *)(param_1 + 8));
  (**(code **)PTR_DAT_04378b98)
            (*(undefined8 *)(param_1 + 0x10),
             *(undefined4 *)(&DAT_03a753e8 + (ulong)(byte)param_3[8] * 4),
             *(undefined4 *)(&DAT_03a753e8 + (ulong)(byte)param_3[9] * 4),
             *(undefined4 *)(&DAT_03a753e8 + (ulong)(byte)param_3[10] * 4),
             *(undefined4 *)(&DAT_03a753e8 + (ulong)(byte)param_3[0xb] * 4));
  (**(code **)PTR_DAT_04378ba0)(*(undefined8 *)(param_1 + 0x10),param_3[1] != '\0');
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_0087bf78(*param_3);
  (**(code **)PTR_DAT_04378ba8)(uVar2,uVar1);
  param_1[1] = param_1[1] & 0xfe;
  *param_1 = 1;
  return;
}


