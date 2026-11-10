/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a0997c; name: FUN_02a0997c
 */


void FUN_02a0997c(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined8 local_a0;
  ulong local_98 [4];
  undefined4 local_78;
  char local_70 [8];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_47;
  undefined4 local_44;
  undefined1 uStack_40;
  undefined2 uStack_3f;
  undefined1 uStack_3d;
  undefined4 uStack_3c;
  undefined1 local_38;
  
  *param_2 = 0;
  local_78 = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  FUN_02985748(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_3 + 2),*param_3,param_3[1],
               local_98);
  local_a0 = param_3[3];
  FUN_02985b68(*(undefined8 *)(param_1 + 0x38),*param_3,param_3[1],*(undefined4 *)(param_3 + 2),
               &local_a0);
  local_68 = *param_3;
  uStack_60 = param_3[1];
  local_58 = *(undefined4 *)(param_3 + 2);
  local_48 = *(undefined1 *)(param_3 + 4);
  local_44 = *(undefined4 *)((long)param_3 + 0x24);
  uStack_3f = *(undefined2 *)(param_3 + 5);
  uStack_3d = *(undefined1 *)((long)param_3 + 0x2a);
  uStack_40 = 0;
  local_50 = local_a0;
  FUN_029cecb4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x20),local_70,&local_68);
  if (local_70[0] == '\0') {
    local_68 = *param_3;
    uStack_60 = param_3[1];
    local_58 = *(undefined4 *)(param_3 + 2);
    local_50 = local_a0;
    local_47 = (local_98[0] & 0x7f0000) == 0;
    local_48 = 1;
    uStack_40 = SUB81(local_98,0);
    uStack_3f = (undefined2)((ulong)local_98 >> 8);
    uStack_3d = (undefined1)((ulong)local_98 >> 0x18);
    uStack_3c = (undefined4)((ulong)local_98 >> 0x20);
    local_38 = 0;
    FUN_029cf4f8(**(undefined8 **)(param_1 + 0x60),local_70,&local_68);
    *param_2 = 1;
  }
  return;
}


