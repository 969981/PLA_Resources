/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029ee8bc; name: FUN_029ee8bc
 */


void FUN_029ee8bc(long param_1,undefined1 *param_2,undefined1 *param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  byte bVar4;
  char local_58 [8];
  undefined1 local_50;
  undefined1 local_4f;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined2 local_42;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined8 local_38;
  
  *param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  local_50 = *param_3;
  local_4f = *(undefined1 *)(*(long *)(param_3 + 8) + 0x7d);
  local_4c = *(undefined4 *)(param_3 + 0x10);
  local_48 = *(undefined4 *)(param_3 + 0x14);
  local_44 = param_3[0x1c];
  local_42 = *(undefined2 *)(param_3 + 0x1e);
  local_40 = *(undefined4 *)(param_3 + 0x20);
  local_3c = param_3[0x24];
  local_3b = param_3[0x25];
  local_38 = *(undefined8 *)(param_3 + 0x28);
  FUN_029eeba8(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x15c0),local_58,&local_50);
  if (local_58[0] == '\0') {
    return;
  }
  *param_2 = 1;
  if (*(long *)(param_3 + 0x38) != 0) {
    FUN_02a3a6c4(*(undefined8 *)(param_1 + 0x20));
  }
  iVar1 = FUN_02975784(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_3 + 8),
                       *(undefined4 *)(param_3 + 0x10),*param_3,*(undefined2 *)(param_3 + 0x1e),
                       *(undefined4 *)(param_3 + 0x14));
  uVar2 = FUN_02975f60(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_3 + 8),*param_3,
                       *(undefined4 *)(param_3 + 0x10),iVar1,param_3[0x1c]);
  if ((uVar2 & 1) != 0) {
    FUN_029764b4(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_3 + 8),*param_3,
                 *(undefined4 *)(param_3 + 0x10),iVar1);
    return;
  }
  if (*(int *)(param_3 + 0x10) != 9) {
    if (iVar1 < 0) {
      lVar3 = *(long *)(param_3 + 8);
      bVar4 = *(byte *)(lVar3 + 0x386) | 0x40;
    }
    else {
      if (iVar1 == 0) goto LAB_029eea04;
      lVar3 = *(long *)(param_3 + 8);
      bVar4 = *(byte *)(lVar3 + 0x386) | 0x20;
    }
    *(byte *)(lVar3 + 0x386) = bVar4;
  }
LAB_029eea04:
  FUN_02a3bb60(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_3 + 8),
               *(undefined4 *)(param_3 + 0x10),iVar1,*(undefined4 *)(param_3 + 0x18),
               *(undefined2 *)(param_3 + 0x1e),param_3[0x30],param_3[0x40]);
  FUN_02975b3c(*(undefined8 *)(param_1 + 0x38),*param_3,*(undefined8 *)(param_3 + 8),
               *(undefined4 *)(param_3 + 0x10),iVar1);
  *(int *)(param_2 + 4) = iVar1;
  return;
}


