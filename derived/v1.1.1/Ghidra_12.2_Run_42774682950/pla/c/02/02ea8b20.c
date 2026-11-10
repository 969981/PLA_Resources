/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea8b20; name: FUN_02ea8b20
 */


undefined4 FUN_02ea8b20(int *param_1,undefined4 param_2,undefined8 param_3,int param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 local_30 [4];
  undefined8 local_2c;
  
  if (*param_1 == param_4) {
    local_30[0] = 0;
    local_2c = 0;
    if (param_4 == 0) {
      lVar2 = *(long *)(param_1 + 2);
      if (lVar2 == 0) {
        return 0;
      }
    }
    else if (*(char *)((long)param_1 + 0x12) == '\0') {
      lVar2 = FUN_02ea8c34(param_1,*(undefined8 *)(param_1 + 2));
      if (lVar2 == 0) {
        return 0;
      }
    }
    else {
      lVar2 = FUN_02ea86a4(param_1,param_3,param_4,param_2,param_2,local_30);
      if (lVar2 == 0) {
        return 0;
      }
    }
    if ((*(ushort *)(param_1 + 4) < 100) || (*(ushort *)(lVar2 + 10) < 100)) {
      DAT_0440a190 = DAT_0440a190 * 0x5851f42d4c957f2d + 1;
      uVar1 = *(undefined4 *)(lVar2 + 4);
      if ((uint)(ushort)(*(ushort *)(lVar2 + 10) * *(ushort *)(param_1 + 4)) <=
          (uint)(int)((double)(uint)((ulong)DAT_0440a190 >> 0x21) * 4.656612875245797e-06)) {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = *(undefined4 *)(lVar2 + 4);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


