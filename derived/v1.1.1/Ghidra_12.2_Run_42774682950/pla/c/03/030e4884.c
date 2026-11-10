/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030e4884; name: FUN_030e4884
 */


void FUN_030e4884(long param_1,uint param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [64];
  
  puVar2 = PTR_PTR_0434a080;
  lVar6 = *(long *)(param_1 + 0x8a8);
  local_b0 = auStack_a0;
  local_a8 = 0x8000001000000000;
  lVar8 = *(long *)(param_1 + 0x38);
  uVar4 = param_2;
  do {
    uVar9 = (ulong)(uVar4 & 0xffffff);
    lVar7 = lVar8 + uVar9 * 0xc0;
    FUN_0301a9bc(lVar7,param_3,lVar6 + (ulong)*(byte *)(lVar7 + 0x89) * 0x40 + 0x20,param_1 + 0x530,
                 param_1 + 0x4e0,0,param_4);
    uVar3 = local_a8;
    if ((*(byte *)(lVar7 + 0x88) >> 2 & 1) != 0) {
      uVar4 = (int)local_a8 + 1;
      if ((int)(local_a8._4_4_ & 0x3fffffff) <= (int)local_a8) {
        if (0x3ffffffe < (int)local_a8) {
          FUN_032bd0a8(uVar4);
        }
        uVar5 = (local_a8._4_4_ & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar5) {
          uVar5 = 0x3fffffff;
        }
        uVar1 = uVar4;
        if ((int)uVar4 <= (int)uVar5) {
          uVar1 = uVar5;
        }
        local_b0 = (undefined1 *)
                   FUN_032bd1d4(puVar2,uVar1,4,local_b0,uVar3 & 0xffffffff,(long)&local_a8 + 4);
      }
      *(undefined4 *)(local_b0 + (long)(int)local_a8 * 4) =
           *(undefined4 *)(lVar8 + uVar9 * 0xc0 + 0x50);
      local_a8 = CONCAT44(local_a8._4_4_,uVar4);
    }
    lVar8 = *(long *)(param_1 + 0x38);
    uVar4 = *(uint *)(lVar8 + uVar9 * 0xc0 + 0x84);
  } while (uVar4 != param_2);
  (**(code **)(**(long **)(param_1 + 0x4c0) + 0x40))
            (*(long **)(param_1 + 0x4c0),local_b0,local_a8 & 0xffffffff,4);
  uVar3 = local_a8;
  uVar4 = local_a8._4_4_;
  local_a8 = (ulong)local_a8._4_4_ << 0x20;
  if ((-1 < (long)uVar3) && (local_b0 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)puVar2 + 0x18))(puVar2,local_b0,uVar4 << 2);
  }
  return;
}


