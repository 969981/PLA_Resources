/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d5038; name: FUN_029d5038
 */


void FUN_029d5038(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  long lVar1;
  ulong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined1 local_64 [4];
  char local_60 [4];
  char local_5c [4];
  undefined1 local_58;
  undefined1 local_57;
  ulong local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined4 local_34;
  undefined1 auStack_28 [4];
  char local_24 [4];
  
  *param_2 = 0;
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_0297dd6c(*(undefined8 *)(param_1 + 0x38),*param_3,param_3[1],param_3[2],param_3[3],
               *(undefined2 *)(param_3 + 4),local_24,local_5c,local_60,local_64,&local_88);
  if (local_24[0] != '\0') {
    *param_2 = 1;
    if ((local_88 & 0x7f0000) == 0) {
      if ((local_60[0] == '\0' && local_5c[0] == '\0') && (*(char *)((long)param_3 + 0x22) != '\0'))
      {
        FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0xa8,
                     *(undefined1 *)(param_3[1] + 0x7d),*(undefined1 *)(param_3[2] + 0x7d));
        lVar1 = *(long *)(*(long *)(param_1 + 0x40) + 8);
        *(undefined1 *)(lVar1 + (ulong)*(byte *)(lVar1 + 0x1c8) * 0x40 + 0x43) = 1;
      }
    }
    else if (*(char *)((long)param_3 + 0x22) != '\0') {
      local_58 = *(undefined1 *)(param_3[2] + 0x7d);
      local_57 = local_64[0];
      local_4c = uStack_80;
      local_3c = uStack_70;
      local_44 = local_78;
      local_34 = local_68;
      local_54 = local_88;
      FUN_029e54ac(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xde0),auStack_28,&local_58);
      lVar1 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      *(char *)(lVar1 + (ulong)*(byte *)(lVar1 + 0x1c8) * 0x40 + 0x43) = local_5c[0];
    }
  }
  return;
}


