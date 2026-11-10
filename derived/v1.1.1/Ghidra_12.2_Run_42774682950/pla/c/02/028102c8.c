/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028102c8; name: FUN_028102c8
 */


undefined8 FUN_028102c8(long param_1,ulong param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined1 local_90 [16];
  undefined1 *local_78;
  long local_70;
  long local_68;
  long *local_60;
  long *local_58;
  
  if (*(int *)(*(long *)(param_1 + 0x420) + 0x68) == 0) {
    if (*(code **)(param_1 + 0x200) != (code *)0x0) {
      local_78 = (undefined1 *)CONCAT44(local_78._4_4_,*(undefined4 *)(param_1 + 0x418));
      local_90._0_4_ = *(undefined4 *)(*(long *)(param_1 + 0x468) + 8);
      (**(code **)(param_1 + 0x200))(param_1 + 0x220,&local_78,local_90);
    }
    puVar5 = (undefined8 *)
             (*(long *)(*(long *)(*(long *)(param_1 + 0x468) + 0x40) + 0x20) +
             (param_2 & 0xffffffff) * 0x28);
    uVar4 = *puVar5;
    uVar2 = puVar5[1];
    uVar1 = puVar5[2];
    plVar7 = (long *)puVar5[3];
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    local_90._0_8_ = (long *)0x0;
    local_78 = local_90;
    local_70 = uVar4;
    local_68 = uVar2;
    local_60 = (long *)uVar1;
    local_58 = plVar7;
    if (plVar7 != (long *)0x0) {
      local_78 = local_90;
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    FUN_02813244(param_1,&local_78,0);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    uVar4 = local_90._0_8_;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))(plVar7);
      (**(code **)(*plVar7 + 0x20))(plVar7);
    }
    puVar5 = (undefined8 *)
             (*(long *)(*(long *)(*(long *)(param_1 + 0x468) + 0x40) + 0x20) + (ulong)param_3 * 0x28
             );
    uVar1 = *puVar5;
    uVar3 = puVar5[1];
    uVar2 = puVar5[2];
    plVar7 = (long *)puVar5[3];
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    local_90._0_8_ = 0;
    local_78 = local_90;
    local_70 = uVar1;
    local_68 = uVar3;
    local_60 = (long *)uVar2;
    local_58 = plVar7;
    if (plVar7 != (long *)0x0) {
      local_78 = local_90;
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    FUN_02813244(param_1,&local_78,0);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    uVar1 = local_90._0_8_;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))(plVar7);
      (**(code **)(*plVar7 + 0x20))(plVar7);
    }
    lVar6 = *(long *)(param_1 + 0x448);
    local_78 = *(undefined1 **)(lVar6 + 0xa8);
    plVar7 = *(long **)(param_1 + 0xe8);
    local_70 = *(undefined8 *)(lVar6 + 0xb0);
    local_68 = *(undefined8 *)(lVar6 + 0xb8);
    local_60 = *(long **)(lVar6 + 0xc0);
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x18))();
    }
    (**(code **)(*plVar7 + 0x50))(plVar7,&local_78,0);
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x20))();
    }
    local_78 = *(undefined1 **)(uVar4 + 0xa8);
    plVar7 = *(long **)(param_1 + 0xe8);
    local_70 = *(long *)(uVar4 + 0xb0);
    local_68 = *(long *)(uVar4 + 0xb8);
    local_60 = *(long **)(uVar4 + 0xc0);
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x18))();
    }
    local_90 = (**(code **)(*(long *)uVar4 + 0x48))(uVar4);
    (**(code **)(*plVar7 + 0x28))(plVar7,&local_78,local_90);
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x20))();
    }
    local_78 = *(undefined1 **)(uVar4 + 0xa8);
    plVar7 = *(long **)(param_1 + 0xe8);
    local_70 = *(long *)(uVar4 + 0xb0);
    local_68 = *(long *)(uVar4 + 0xb8);
    local_60 = *(long **)(uVar4 + 0xc0);
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x18))();
    }
    (**(code **)(*plVar7 + 0x50))(plVar7,&local_78,1);
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x20))();
    }
    local_78 = *(undefined1 **)(uVar1 + 0xa8);
    plVar7 = *(long **)(param_1 + 0xe8);
    local_70 = *(undefined8 *)(uVar1 + 0xb0);
    local_68 = *(undefined8 *)(uVar1 + 0xb8);
    local_60 = *(long **)(uVar1 + 0xc0);
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x18))();
    }
    (**(code **)(*plVar7 + 0x28))(plVar7,&local_78,param_1 + 0x450);
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x20))();
    }
    local_78 = *(undefined1 **)(uVar1 + 0xa8);
    plVar7 = *(long **)(param_1 + 0xe8);
    local_70 = *(undefined8 *)(uVar1 + 0xb0);
    local_68 = *(undefined8 *)(uVar1 + 0xb8);
    local_60 = *(long **)(uVar1 + 0xc0);
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x18))();
    }
    (**(code **)(*plVar7 + 0x50))(plVar7,&local_78,1);
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x20))();
    }
    FUN_028106b0(*(undefined8 *)(param_1 + 0x408));
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


