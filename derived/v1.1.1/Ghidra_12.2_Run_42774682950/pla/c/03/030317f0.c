/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030317f0; name: FUN_030317f0
 */


void FUN_030317f0(long param_1,undefined8 *param_2,ulong param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 local_8a0;
  undefined8 uStack_898;
  undefined2 local_890;
  undefined4 local_88c;
  undefined8 local_888;
  undefined1 local_880;
  undefined2 local_87f;
  undefined8 local_870;
  undefined8 uStack_868;
  undefined8 local_860;
  undefined8 uStack_858;
  undefined8 *local_850;
  undefined8 local_848;
  undefined8 local_840;
  undefined8 local_838;
  undefined8 local_830;
  undefined8 local_828;
  
  if ((param_3 & 0xffffff) == 0xffffff) {
    local_848 = 0xffffffffffffffff;
  }
  else {
    local_848 = *(undefined8 *)(*(long *)(param_1 + 0x38) + (param_3 & 0xffffff) * 0xc0 + 0xb0);
  }
  local_850 = (undefined8 *)CONCAT26(local_850._6_2_,0x3302000030);
  local_828 = param_2[3];
  local_838 = param_2[1];
  local_840 = *param_2;
  local_830 = param_2[2];
  plVar2 = *(long **)(param_1 + 0x7f0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_850);
  }
  local_88c = 0;
  local_850 = &local_840;
  local_888 = 0;
  local_848 = 0x8000020000000000;
  local_890 = 0xffff;
  local_880 = 1;
  local_8a0 = 0;
  uStack_898 = 0;
  uStack_868 = param_2[1];
  local_870 = *param_2;
  uStack_858 = param_2[3];
  local_860 = param_2[2];
  local_87f = 0x208;
  (**(code **)(**(long **)(param_1 + 0x4c0) + 0x78))
            (*(long **)(param_1 + 0x4c0),&local_8a0,&local_850);
  uVar1 = FUN_03035378(param_1,param_3 & 0xffffffff,local_850,local_848 & 0xffffffff);
  if (0 < (int)uVar1) {
    uVar4 = 0;
    do {
      uVar3 = (ulong)*(uint *)((long)local_850 + uVar4 * 4);
      if ((*(byte *)(*(long *)(param_1 + 0x38) + (uVar3 & 0xffffff) * 0xc0 + 0x54) & 9) == 0) {
        FUN_03030748(param_1,uVar3,0);
      }
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
  }
  uVar4 = local_848;
  uVar1 = local_848._4_4_;
  local_848 = (ulong)local_848._4_4_ << 0x20;
  if ((-1 < (long)uVar4) && (local_850 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))(PTR_PTR_0434a080,local_850,uVar1 << 2);
  }
  return;
}


