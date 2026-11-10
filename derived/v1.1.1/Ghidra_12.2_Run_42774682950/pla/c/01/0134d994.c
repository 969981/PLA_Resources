/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0134d994; name: FUN_0134d994
 */


void FUN_0134d994(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long *local_b0;
  code *local_a8;
  code *local_a0;
  undefined8 local_98;
  long *local_90 [12];
  long local_28;
  
  puVar3 = (undefined8 *)(param_1 + 0x30);
  if ((code *)*puVar3 != (code *)0x0) {
    local_b0 = (long *)CONCAT44(local_b0._4_4_,*(undefined4 *)(param_1 + 0x28));
    (*(code *)*puVar3)(param_1 + 0x50,&local_b0);
  }
  FUN_0134e400(param_1);
  lVar1 = FUN_00d2eb20(*(undefined8 *)(param_1 + 0x10),"stamp_panel");
  if (lVar1 != 0) {
    FUN_028077c0(lVar1,0);
    local_b0 = &local_28;
    local_28 = 0;
    local_a8 = (code *)0x4a4d4336cb7efd78;
    local_a0 = (code *)0x391e721;
    local_98 = 0x12;
    local_90[0] = (long *)0x0;
    FUN_00d36f04(lVar1,&local_b0,0);
    if (local_90[0] != (long *)0x0) {
      (**(code **)(*local_90[0] + 0x20))();
    }
    if (local_28 != 0) {
      FUN_028077c0(local_28,0);
    }
    FUN_0280779c(lVar1,0);
    local_a0 = (code *)0x0;
    local_98 = 0;
    local_b0 = (long *)0x0;
    local_a8 = (code *)0x0;
    pcVar2 = *(code **)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (pcVar2 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *puVar3 = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      (*pcVar2)(param_1 + 0x50);
      if (local_a0 != (code *)0x0) {
        (*local_a0)(local_90,param_1 + 0x50);
        *(code **)(param_1 + 0x38) = local_a8;
        *(undefined8 *)(param_1 + 0x48) = local_98;
        *(code **)(param_1 + 0x40) = local_a0;
        *puVar3 = local_b0;
      }
    }
    FUN_0280779c(*(undefined8 *)(param_1 + 0x20),0);
    pcVar2 = local_a8;
    if (local_a8 != (code *)0x0) {
      local_a0 = (code *)0x0;
      local_98 = 0;
      local_b0 = (long *)0x0;
      local_a8 = (code *)0x0;
      (*pcVar2)(local_90);
    }
  }
  return;
}


