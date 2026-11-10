/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d67248; name: FUN_00d67248
 */


undefined8 FUN_00d67248(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar2 = *(uint *)(param_1 + 0x62c);
  if (param_2 < 0) {
    uVar3 = *(ushort *)(param_1 + 0x5b4);
    if (uVar2 == uVar3) {
      if (*(char *)(param_1 + 0x634) != '\0') {
        return 0;
      }
      uVar4 = (uint)*(ushort *)(param_1 + 0x5b6);
    }
    else {
      uVar4 = (uint)uVar3;
      if ((int)(uint)uVar3 <= (int)(uVar2 + param_2)) {
        uVar4 = uVar2 + param_2;
      }
    }
    if (uVar2 != uVar4) {
      local_40 = 0x8365d102289604c8;
      pcStack_38 = "anime_L_cursor_01_key_select";
      goto LAB_00d6729c;
    }
  }
  else {
    uVar3 = *(ushort *)(param_1 + 0x5b6);
    if (uVar2 == uVar3) {
      if (*(char *)(param_1 + 0x634) != '\0') {
        return 0;
      }
      uVar4 = (uint)*(ushort *)(param_1 + 0x5b4);
    }
    else {
      uVar1 = uVar2 + param_2;
      uVar4 = (uint)uVar3;
      if (uVar1 == uVar3 || (int)uVar1 < (int)(uint)uVar3) {
        uVar4 = uVar1;
      }
    }
    if (uVar2 != uVar4) {
      local_40 = 0x21c94826ad681fa5;
      pcStack_38 = "anime_L_cursor_00_key_select";
LAB_00d6729c:
      local_30 = 0x1c;
      uStack_28 = 0;
      if (*(long *)(param_1 + 0x2c8) != 0) {
        FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_40);
      }
      *(uint *)(param_1 + 0x62c) = uVar4;
      FUN_00d66a38(param_1);
      if (*(int *)(param_1 + 0x5b8) != 0) {
        *(int *)(param_1 + 0x630) = *(int *)(param_1 + 0x62c) * *(int *)(param_1 + 0x5b8);
        FUN_00d66dcc(param_1);
      }
      if (*(char *)(param_1 + 0x634) == '\0') {
        *(undefined1 *)(param_1 + 0x634) = 1;
        return 1;
      }
      return 1;
    }
  }
  return 0;
}


