/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011ce40c; name: FUN_011ce40c
 */


void FUN_011ce40c(long param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  int param3;
  char local_200 [16];
  undefined1 *local_1f0;
  code *local_1e8;
  undefined1 *local_1e0;
  undefined1 *puStack_1d8;
  long local_1d0;
  undefined1 *local_1c8;
  undefined8 local_1c0;
  undefined1 *local_170;
  code *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  long local_150;
  undefined1 *local_148;
  undefined8 local_140;
  undefined1 *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  long local_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  
  lVar1 = FUN_011cfed4();
  pcVar3 = *(code **)(lVar1 + 0x118);
  local_c8 = &LAB_011cff5c;
  local_c0 = 0;
  local_f0 = &LAB_011d2474;
  local_e8 = FUN_011d2498;
  local_e0 = &LAB_011d249c;
  puStack_d8 = &LAB_011d24b0;
  local_d0 = param_1;
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(lVar1 + 0x120) = 0;
    *(undefined8 *)(lVar1 + 0x128) = 0;
    *(undefined8 *)(lVar1 + 0x110) = 0;
    *(undefined8 *)(lVar1 + 0x118) = 0;
    (*pcVar3)(lVar1 + 0x130);
  }
  *(undefined1 **)(lVar1 + 0x138) = local_c8;
  *(undefined8 *)(lVar1 + 0x140) = local_c0;
  *(long *)(lVar1 + 0x130) = local_d0;
  *(undefined1 **)(lVar1 + 0x120) = local_e0;
  *(undefined1 **)(lVar1 + 0x128) = puStack_d8;
  *(undefined8 *)(lVar1 + 0x110) = local_f0;
  *(code **)(lVar1 + 0x118) = local_e8;
  pcVar3 = *(code **)(lVar1 + 0x218);
  local_148 = &LAB_011d03c4;
  local_140 = 0;
  local_170 = &LAB_011d2474;
  local_168 = FUN_011d2498;
  local_160 = &LAB_011d249c;
  local_158 = &LAB_011d24b0;
  local_150 = param_1;
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(lVar1 + 0x220) = 0;
    *(undefined8 *)(lVar1 + 0x228) = 0;
    *(undefined8 *)(lVar1 + 0x210) = 0;
    *(undefined8 *)(lVar1 + 0x218) = 0;
    (*pcVar3)(lVar1 + 0x230);
  }
  *(undefined8 *)(lVar1 + 0x240) = local_140;
  *(undefined1 **)(lVar1 + 0x238) = local_148;
  *(long *)(lVar1 + 0x230) = local_150;
  *(code **)(lVar1 + 0x218) = local_168;
  *(undefined1 **)(lVar1 + 0x228) = local_158;
  *(undefined1 **)(lVar1 + 0x220) = local_160;
  *(undefined8 *)(lVar1 + 0x210) = local_170;
  pcVar3 = *(code **)(lVar1 + 0x298);
  *(undefined1 *)(lVar1 + 0x91a) = 0;
  local_1c8 = &LAB_011d069c;
  local_1c0 = 0;
  local_1f0 = &LAB_011d2474;
  local_1e8 = FUN_011d2498;
  local_1e0 = &LAB_011d249c;
  puStack_1d8 = &LAB_011d24b0;
  local_1d0 = param_1;
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(lVar1 + 0x2a0) = 0;
    *(undefined8 *)(lVar1 + 0x2a8) = 0;
    *(undefined8 *)(lVar1 + 0x290) = 0;
    *(undefined8 *)(lVar1 + 0x298) = 0;
    (*pcVar3)(lVar1 + 0x2b0);
  }
  param3 = 0;
  *(undefined8 *)(lVar1 + 0x2c0) = local_1c0;
  *(undefined1 **)(lVar1 + 0x2b8) = local_1c8;
  *(long *)(lVar1 + 0x2b0) = local_1d0;
  *(undefined1 **)(lVar1 + 0x2a0) = local_1e0;
  *(undefined1 **)(lVar1 + 0x2a8) = puStack_1d8;
  *(undefined8 *)(lVar1 + 0x290) = local_1f0;
  *(code **)(lVar1 + 0x298) = local_1e8;
  do {
    local_200[0] = '\0';
    local_200[1] = '\0';
    local_200[2] = '\0';
    local_200[3] = '\0';
    local_200[4] = '\0';
    local_200[5] = '\0';
    local_200[6] = '\0';
    local_200[7] = '\0';
    local_200[8] = '\0';
    local_200[9] = '\0';
    local_200[10] = '\0';
    local_200[0xb] = '\0';
    local_200[0xc] = '\0';
    local_200[0xd] = '\0';
    local_200[0xe] = '\0';
    local_200[0xf] = '\0';
    snprintf(local_200,0x10,"button_%02d",param3);
    lVar1 = FUN_00d2e81c(param_1 + 0x180,local_200);
    if (lVar1 != 0) {
      *(undefined1 **)(lVar1 + 0x268) = &DAT_cbf29ce484222645;
      *(undefined1 **)(lVar1 + 0x270) = &DAT_03996322;
      *(undefined8 *)(lVar1 + 0x278) = 0;
      plVar2 = *(long **)(lVar1 + 0x280);
      *(undefined8 *)(lVar1 + 0x280) = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))();
      }
      *(undefined1 *)(lVar1 + 0x2aa) = 0;
    }
    param3 = param3 + 1;
  } while (param3 != 9);
  FUN_011cfc00(param_1,0);
  pcVar3 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar3)(&local_1d0);
  }
  pcVar3 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    local_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar3)(&local_150);
  }
  pcVar3 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (undefined1 *)0x0;
    puStack_d8 = (undefined1 *)0x0;
    local_f0 = (undefined1 *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar3)(&local_d0);
  }
  return;
}


