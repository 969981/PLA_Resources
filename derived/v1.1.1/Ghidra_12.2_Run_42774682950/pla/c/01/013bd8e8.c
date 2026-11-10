/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013bd8e8; name: FUN_013bd8e8
 */


void FUN_013bd8e8(long param_1)

{
  long lVar1;
  code *pcVar2;
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
  
  local_d0 = (undefined1 *)0x767b05eae3332696;
  local_c8 = (code *)0x39b54e1;
  local_c0 = (code *)0x14;
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
  local_a8 = &LAB_013be5c0;
  uStack_a0 = 0;
  local_d0 = &LAB_013c0dbc;
  local_c8 = FUN_013c0de0;
  local_c0 = FUN_013c0de4;
  local_b8 = (long *)&LAB_013c0df8;
  local_b0 = param_1;
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(lVar1 + 0x120) = 0;
    *(undefined8 *)(lVar1 + 0x128) = 0;
    *(undefined8 *)(lVar1 + 0x110) = 0;
    *(undefined8 *)(lVar1 + 0x118) = 0;
    (*pcVar2)(lVar1 + 0x130);
    if (local_c0 == (code *)0x0) goto LAB_013bd9e4;
  }
  (*local_c0)(&local_b0,lVar1 + 0x130);
  *(code **)(lVar1 + 0x118) = local_c8;
  *(long **)(lVar1 + 0x128) = local_b8;
  *(code **)(lVar1 + 0x120) = local_c0;
  *(undefined8 *)(lVar1 + 0x110) = local_d0;
LAB_013bd9e4:
  pcVar2 = *(code **)(lVar1 + 0x218);
  local_128 = &LAB_013be5c8;
  uStack_120 = 0;
  local_130 = param_1;
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(lVar1 + 0x220) = 0;
    *(undefined8 *)(lVar1 + 0x228) = 0;
    *(undefined8 *)(lVar1 + 0x210) = 0;
    *(undefined8 *)(lVar1 + 0x218) = 0;
    (*pcVar2)(lVar1 + 0x230);
  }
  FUN_013c0de4(&local_130,lVar1 + 0x230);
  *(code **)(lVar1 + 0x218) = FUN_013c0de0;
  *(undefined1 **)(lVar1 + 0x228) = &LAB_013c0df8;
  *(code **)(lVar1 + 0x220) = FUN_013c0de4;
  *(undefined8 *)(lVar1 + 0x210) = &LAB_013c0dbc;
  *(undefined1 *)(lVar1 + 0x91a) = 0;
  FUN_013c0e0c(lVar1,0);
  FUN_0281efa4(lVar1,0x111000,&LAB_00444000);
  FUN_013be308(param_1);
  FUN_013c0de0(&local_130);
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


