/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029e3114; name: FUN_029e3114
 */


void FUN_029e3114(long param_1,undefined1 *param_2,byte *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [240];
  long local_130 [10];
  undefined6 uStack_e0;
  undefined2 local_da;
  undefined2 uStack_d8;
  char cStack_d6;
  char cStack_d5;
  undefined1 uStack_d4;
  char cStack_d3;
  undefined1 auStack_d0 [40];
  undefined8 *local_a8;
  undefined1 *puStack_a0;
  undefined8 *local_98;
  long *plStack_90;
  long *local_88;
  undefined8 local_80;
  undefined1 *puStack_78;
  undefined1 auStack_70 [16];
  
  *param_2 = 0;
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 8) + 0x120;
  puVar1 = *(undefined8 **)(lVar2 + (ulong)*param_3 * 8);
  lVar2 = *(long *)(lVar2 + (ulong)param_3[1] * 8);
  FUN_02967e64(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_3 + 4),
               *(undefined4 *)(param_3 + 4),0,0,puVar1,auStack_d0);
  uStack_d8 = 0;
  uStack_d4 = 0;
  local_130[0] = 0;
  uStack_e0 = 0;
  local_da = 0;
  local_130[8] = 0;
  local_130[5] = 0;
  local_130[3] = 0;
  local_130[4] = 0;
  local_130[1] = 0;
  local_130[2] = 0;
  cStack_d6 = lVar2 != 0;
  if ((bool)cStack_d6) {
    local_130[0] = lVar2;
  }
  local_130[9] = 0;
  local_130[7] = 0;
  local_130[6] = 0;
  cStack_d3 = '\x01';
  cStack_d5 = cStack_d6;
  FUN_029983fc(local_130,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xa8));
  if ((cStack_d3 == '\0' && cStack_d5 == '\0') || (cStack_d6 != '\0')) {
    FUN_02998ff8(auStack_220);
    local_88 = (long *)CONCAT53(local_88._3_5_,0x10000);
    local_230 = 0;
    uStack_228 = 0;
    local_88 = (long *)CONCAT62(local_88._2_6_,0x101);
    local_240 = 0;
    uStack_238 = 0;
    local_250 = 0;
    uStack_248 = 0;
    local_80 = 0;
    local_a8 = &local_250;
    puStack_a0 = auStack_d0;
    local_98 = puVar1;
    plStack_90 = local_130;
    puStack_78 = auStack_220;
    FUN_02a06110(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1b20),&local_268,&local_a8);
    if ((char)local_268 == '\0') {
      lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      lVar2 = lVar2 + (ulong)*(byte *)(lVar2 + 0x1c8) * 0x40;
      local_268 = *(undefined8 *)(lVar2 + 0x18);
      local_260 = *(undefined8 *)(lVar2 + 0x20);
      local_258 = *(undefined8 *)(lVar2 + 0x28);
      *(undefined4 *)(lVar2 + 0x18) = 0;
      *(undefined2 *)(lVar2 + 0x1c) = 0x606;
      *(undefined4 *)(lVar2 + 0x1e) = 0;
      *(undefined1 *)(lVar2 + 0x22) = 0;
      *(undefined2 *)(lVar2 + 0x24) = 0xffff;
      *(undefined8 *)(lVar2 + 0x26) = 0;
      *(undefined2 *)(lVar2 + 0x2e) = 0;
      lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      FUN_02a3fd78(lVar2 + (ulong)*(byte *)(lVar2 + 0x1c8) * 0x40 + 0x18,puVar1,local_130,
                   *(undefined8 *)(*(long *)(param_1 + 0x10) + 0xa8));
      lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      *(byte *)(lVar2 + (ulong)*(byte *)(lVar2 + 0x1c8) * 0x40 + 0x1c) = param_3[2];
      lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      *(undefined1 *)(lVar2 + (ulong)*(byte *)(lVar2 + 0x1c8) * 0x40 + 0x1e) = 1;
      local_80 = CONCAT71(local_80._1_7_,1);
      local_a8 = puVar1;
      puStack_a0 = auStack_d0;
      local_98 = &local_250;
      plStack_90 = (long *)auStack_220;
      local_88 = local_130;
      FUN_029df664(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x8e0),auStack_70,&local_a8);
      lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      *param_2 = *(undefined1 *)(lVar2 + (ulong)*(byte *)(lVar2 + 0x1c8) * 0x40 + 0x21);
      lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      lVar2 = lVar2 + (ulong)*(byte *)(lVar2 + 0x1c8) * 0x40;
      *(undefined8 *)(lVar2 + 0x20) = local_260;
      *(undefined8 *)(lVar2 + 0x28) = local_258;
      *(undefined8 *)(lVar2 + 0x18) = local_268;
    }
  }
  else {
    FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,0x237,0xffff0000);
  }
  return;
}


