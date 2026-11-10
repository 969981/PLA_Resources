/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029ce668; name: FUN_029ce668
 */


void FUN_029ce668(long param_1,undefined1 *param_2,byte *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  long local_78;
  long lStack_70;
  undefined4 local_68;
  undefined8 local_60;
  byte local_58;
  undefined1 local_57;
  undefined4 local_54;
  undefined8 local_50;
  byte local_48;
  char local_38 [8];
  
  uVar2 = local_50;
  *param_2 = 0;
  lVar3 = *(long *)(param_1 + 0x10);
  if ((ulong)*param_3 == 0x1f) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(*(long *)(lVar3 + 8) + (ulong)*param_3 * 8 + 0x120);
  }
  pcVar4 = *(char **)(lVar3 + 0xa8);
  bVar1 = param_3[1];
  if ((((((*pcVar4 != '\0') && (pcVar4[2] == bVar1)) ||
        ((pcVar4[3] != '\0' && (pcVar4[5] == bVar1)))) ||
       (((pcVar4[6] != '\0' && (pcVar4[8] == bVar1)) ||
        ((pcVar4[9] != '\0' && (pcVar4[0xb] == bVar1)))))) ||
      (((pcVar4[0xc] != '\0' && (pcVar4[0xe] == bVar1)) ||
       ((pcVar4[0xf] != '\0' && (pcVar4[0x11] == bVar1)))))) &&
     ((lVar3 = *(long *)(*(long *)(lVar3 + 8) + (ulong)bVar1 * 8 + 0x120),
      *(short *)(lVar3 + 0x74) != 0 || (param_3[0x17] != 0)))) {
    local_68 = *(undefined4 *)(param_3 + 4);
    local_60 = *(undefined8 *)(param_3 + 8);
    local_58 = param_3[0x10];
    local_54 = 0;
    local_50._4_4_ = SUB84(uVar2,4);
    local_50._0_4_ = (uint)CONCAT12(param_3[0x13],CONCAT11(param_3[0x13],param_3[0x11]));
    local_78 = lVar5;
    lStack_70 = lVar3;
    FUN_029cecb4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x20),local_38,&local_78);
    if (local_38[0] == '\0') {
      if (((param_3[0x12] != 0) && (lVar5 != 0)) && (*(char *)(lVar5 + 0x7d) != '\x1f')) {
        FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x99,*(char *)(lVar5 + 0x7d),
                     0);
      }
      local_68 = *(undefined4 *)(param_3 + 4);
      local_57 = false;
      local_50 = param_3 + 0x18;
      local_58 = param_3[0x14];
      local_48 = param_3[0x16];
      local_60 = *(undefined8 *)(param_3 + 8);
      if (param_3[0x15] == 0) {
        local_57 = (param_3[0x1a] & 0x7f) == 0;
      }
      local_78 = lVar5;
      lStack_70 = lVar3;
      FUN_029cf4f8(**(undefined8 **)(param_1 + 0x60),local_38,&local_78);
      if (((param_3[0x12] != 0) && (lVar5 != 0)) && (*(char *)(lVar5 + 0x7d) != '\x1f')) {
        FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9a);
      }
      *param_2 = 1;
    }
  }
  return;
}


