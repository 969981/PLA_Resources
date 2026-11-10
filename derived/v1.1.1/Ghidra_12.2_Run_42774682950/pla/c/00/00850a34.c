/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00850a34; name: FUN_00850a34
 */


undefined8
FUN_00850a34(long param_1,undefined8 param_2,undefined2 param_3,undefined4 param_4,
            undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_40 [2];
  
  uVar1 = FUN_007ed3e0(param_4);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    FUN_008506d4(local_40,param_1 + 0x48);
    FUN_008506d4(local_40,param_1 + 0x60);
    if (*(byte *)(param_1 + 0x28) < 0x18) {
      lVar2 = FUN_008551b4(*(undefined8 *)PTR_DAT_043773c0);
      lVar2 = lVar2 + (ulong)*(byte *)(param_1 + 0x28) * 0x30;
      *(undefined8 *)(lVar2 + 0x6450) = 0;
      *(undefined8 *)(lVar2 + 0x6458) = 0;
      *(undefined8 *)(lVar2 + 0x6460) = 0;
      *(undefined8 *)(lVar2 + 0x6468) = 0;
      *(undefined8 *)(lVar2 + 0x6470) = 0;
      *(undefined4 *)(lVar2 + 0x6478) = 0;
      *(undefined1 *)(lVar2 + 0x647c) = 0;
    }
    local_40[0] = 0;
    FUN_007ecf14(local_40);
    *(undefined8 *)(param_1 + 0x30) = param_2;
    *(char *)(param_1 + 0x28) = (char)param_4;
    *(undefined2 *)(param_1 + 0x38) = param_3;
    *(undefined8 *)(param_1 + 0x80) = local_40[0];
    *(undefined8 *)(param_1 + 0x88) = local_40[0];
    FUN_007f0f88(param_1 + 8,param_5);
    uVar3 = 1;
    *(undefined4 *)(param_1 + 0x3c) = 1;
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  return uVar3;
}


