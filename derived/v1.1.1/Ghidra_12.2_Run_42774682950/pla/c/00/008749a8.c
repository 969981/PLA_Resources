/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008749a8; name: FUN_008749a8
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_008749a8(long param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auStack_154 [4];
  undefined1 local_150 [8];
  undefined1 *local_148;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined *local_130;
  undefined1 local_128;
  undefined2 local_127;
  undefined1 local_125 [197];
  int local_60 [5];
  undefined1 local_4c;
  undefined8 local_4b;
  undefined4 local_43;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  
  if (*(int *)(param_1 + 0x7b8) == 4) {
    uVar3 = *(undefined8 *)(param_1 + 0x7c0);
    local_4b = 0;
    local_43 = 0;
    local_3f = (undefined1)((ulong)uVar3 >> 0x38);
    local_3d = (undefined1)((ulong)uVar3 >> 0x28);
    local_3b = (undefined1)((ulong)uVar3 >> 0x18);
    local_3e = (undefined1)((ulong)uVar3 >> 0x30);
    local_38 = (undefined1)uVar3;
    local_3c = (undefined1)((ulong)uVar3 >> 0x20);
    local_36 = (undefined1)*(undefined2 *)(param_1 + 0x7c8);
    local_3a = (undefined1)((ulong)uVar3 >> 0x10);
    local_37 = (undefined1)((ushort)*(undefined2 *)(param_1 + 0x7c8) >> 8);
    local_35 = (undefined1)((ulong)param_4 >> 8);
    local_39 = (undefined1)((ulong)uVar3 >> 8);
    local_34 = (undefined1)param_4;
    local_150 = (undefined1  [8])((ulong)local_150 & 0xffffffff00000000);
    local_60[0] = 0;
    local_4c = param_2;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_150 | 4),(Result *)local_60);
    FUN_007ee578(local_60,local_150);
    puVar2 = PTR_DAT_043777e0;
    if (local_60[0] == 0) {
      local_150 = (undefined1  [8])(PTR_DAT_043777e0 + 0x10);
      local_130 = PTR_DAT_043777e0 + 0x68;
      local_148 = &local_128;
      uStack_140 = 0xc0;
      local_128 = 0;
      lVar4 = 0;
      puVar5 = (undefined8 *)local_150;
      do {
        *(undefined2 *)((long)puVar5 + 0x29) = 0;
        lVar1 = lVar4 + 4;
        *(undefined1 *)((long)puVar5 + 0x2b) = 0;
        puVar5 = (undefined8 *)((long)local_150 + lVar1);
        local_125[lVar4 + 1] = 0;
        lVar4 = lVar1;
      } while (lVar1 != 0xc0);
      local_13c = 0;
      uStack_138 = 0;
      FUN_007e37e0(param_3,local_150);
      FUN_007ebf54(local_150,*(undefined8 *)(param_1 + 0x6e8),&local_4c,0x19,param_3,auStack_154);
      FUN_007ee660(local_60,local_150);
      local_150 = (undefined1  [8])(puVar2 + 0x10);
      local_130 = puVar2 + 0x68;
      local_148 = &local_128;
      uStack_140 = 0xc0;
      local_128 = 0;
      lVar4 = 0;
      puVar5 = (undefined8 *)local_150;
      do {
        *(undefined2 *)((long)puVar5 + 0x29) = 0;
        lVar1 = lVar4 + 4;
        *(undefined1 *)((long)puVar5 + 0x2b) = 0;
        puVar5 = (undefined8 *)((long)local_150 + lVar1);
        local_125[lVar4 + 1] = 0;
        lVar4 = lVar1;
      } while (lVar1 != 0xc0);
      local_13c = 0;
      uStack_138 = 0;
      FUN_007e37e0(param_3,local_150);
    }
  }
  return;
}


