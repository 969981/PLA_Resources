/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d56844; name: FUN_00d56844
 */


uint FUN_00d56844(long *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  long lVar4;
  undefined4 local_30;
  int local_2c;
  undefined2 local_28;
  short local_26;
  ushort local_24;
  ushort local_22;
  
  local_30 = (undefined4)param_1[0xdd];
  local_28 = *(undefined2 *)((long)param_1 + 0x6ec);
  local_2c = (int)param_1[0xdb];
  iVar1 = local_2c;
  if (local_2c == 2) {
    iVar1 = 0;
  }
  lVar4 = FUN_00d2ee28(param_1 + 0x30,&DAT_043ab7d8 + (long)iVar1 * 0x28);
  lVar4 = *(long *)(lVar4 + 0x8b0);
  puVar2 = (undefined4 *)(lVar4 + 0x20);
  if (*(int *)(lVar4 + 0x28) != 0) {
    puVar2 = (undefined4 *)(lVar4 + 0x24);
  }
  local_26 = (short)*(undefined4 *)(lVar4 + 0x14) +
             (short)*puVar2 * (short)*(undefined4 *)(lVar4 + 0x10);
  local_24 = (ushort)*(byte *)((long)param_1 + 0x6ee);
  local_22 = (ushort)*(byte *)((long)param_1 + 0x6ef);
  uVar3 = (**(code **)(*param_1 + 0x158))(param_1,&local_30);
  return uVar3 & 1;
}


