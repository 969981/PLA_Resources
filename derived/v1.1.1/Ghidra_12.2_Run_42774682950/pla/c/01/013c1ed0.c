/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013c1ed0; name: FUN_013c1ed0
 */


void FUN_013c1ed0(long param_1)

{
  long lVar1;
  code *pcVar2;
  long local_1b0;
  undefined1 *local_1a8;
  undefined8 uStack_1a0;
  undefined1 *local_150;
  code *local_148;
  code *local_140;
  undefined1 *local_138;
  long local_130;
  undefined1 *local_128;
  undefined8 uStack_120;
  undefined1 *local_d0;
  code *local_c8;
  code *local_c0;
  long *local_b8;
  long local_b0;
  undefined1 *local_a8;
  undefined8 uStack_a0;
  
  local_d0 = (undefined1 *)0xb90b4c826b98bdea;
  local_c8 = (code *)0x38f4e83;
  local_c0 = (code *)0x11;
  local_b8 = (long *)0x0;
  lVar1 = thunk_FUN_00d2ee28(param_1 + 0x180,&local_d0);
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  pcVar2 = *(code **)(lVar1 + 0x118);
  local_a8 = &LAB_013c2984;
  uStack_a0 = 0;
  local_d0 = &LAB_013c3500;
  local_c8 = FUN_013c3524;
  local_c0 = FUN_013c3528;
  local_b8 = (long *)&LAB_013c353c;
  local_b0 = param_1;
  if (pcVar2 == (code *)0x0) {
LAB_013c1f9c:
    (*local_c0)(&local_b0,lVar1 + 0x130);
    *(code **)(lVar1 + 0x118) = local_c8;
    *(long **)(lVar1 + 0x128) = local_b8;
    *(code **)(lVar1 + 0x120) = local_c0;
    *(undefined8 *)(lVar1 + 0x110) = local_d0;
  }
  else {
    *(undefined8 *)(lVar1 + 0x120) = 0;
    *(undefined8 *)(lVar1 + 0x128) = 0;
    *(undefined8 *)(lVar1 + 0x110) = 0;
    *(undefined8 *)(lVar1 + 0x118) = 0;
    (*pcVar2)(lVar1 + 0x130);
    if (local_c0 != (code *)0x0) goto LAB_013c1f9c;
  }
  pcVar2 = *(code **)(lVar1 + 0x218);
  local_128 = &LAB_013c298c;
  uStack_120 = 0;
  local_150 = &LAB_013c3500;
  local_148 = FUN_013c3524;
  local_140 = FUN_013c3528;
  local_138 = &LAB_013c353c;
  local_130 = param_1;
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(lVar1 + 0x220) = 0;
    *(undefined8 *)(lVar1 + 0x228) = 0;
    *(undefined8 *)(lVar1 + 0x210) = 0;
    *(undefined8 *)(lVar1 + 0x218) = 0;
    (*pcVar2)(lVar1 + 0x230);
    if (local_140 == (code *)0x0) goto LAB_013c203c;
  }
  (*local_140)(&local_130,lVar1 + 0x230);
  *(code **)(lVar1 + 0x218) = local_148;
  *(undefined1 **)(lVar1 + 0x228) = local_138;
  *(code **)(lVar1 + 0x220) = local_140;
  *(undefined8 *)(lVar1 + 0x210) = local_150;
LAB_013c203c:
  pcVar2 = *(code **)(lVar1 + 0x298);
  *(undefined1 *)(lVar1 + 0x91a) = 0;
  local_1a8 = &LAB_013c2990;
  uStack_1a0 = 0;
  local_1b0 = param_1;
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(lVar1 + 0x2a0) = 0;
    *(undefined8 *)(lVar1 + 0x2a8) = 0;
    *(undefined8 *)(lVar1 + 0x290) = 0;
    *(undefined8 *)(lVar1 + 0x298) = 0;
    (*pcVar2)(lVar1 + 0x2b0);
  }
  FUN_013c3528(&local_1b0,lVar1 + 0x2b0);
  *(code **)(lVar1 + 0x298) = FUN_013c3524;
  *(undefined1 **)(lVar1 + 0x2a8) = &LAB_013c353c;
  *(code **)(lVar1 + 0x2a0) = FUN_013c3528;
  *(undefined8 *)(lVar1 + 0x290) = &LAB_013c3500;
  FUN_0281efa4(lVar1,0x111000,&LAB_00444000);
  FUN_013c26cc(param_1);
  FUN_013c3524(&local_1b0);
  pcVar2 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = (code *)0x0;
    local_138 = (undefined1 *)0x0;
    local_150 = (undefined1 *)0x0;
    local_148 = (code *)0x0;
    (*pcVar2)(&local_130);
  }
  pcVar2 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (code *)0x0;
    local_b8 = (long *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar2)(&local_b0);
  }
  return;
}


