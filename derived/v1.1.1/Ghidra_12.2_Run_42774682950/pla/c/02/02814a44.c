/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02814a44; name: FUN_02814a44
 */


void FUN_02814a44(long param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 local_e0;
  char *local_d8;
  undefined8 uStack_d0;
  long *local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  uint local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  if ((DAT_043eb4d8 & 1) == 0) {
    local_a0._0_4_ = 0;
    local_78 = 0x100000000;
    local_70 = 0x300000002;
    local_68 = 4;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x490);
    if (uVar2 != 0xd) {
      uVar2 = (uint)*(byte *)((long)&DAT_043eb4d9 + (long)(int)uVar2);
    }
    local_a0 = (ulong)uVar2 << 0x20;
    if (*(int *)(param_1 + 0x4c0) == 0xd) {
      uVar2 = 0xe;
    }
    else {
      uVar2 = (uint)*(byte *)((long)&DAT_043eb4d9 + (long)*(int *)(param_1 + 0x4c0));
    }
    local_98 = (char *)CONCAT44(uVar2,1);
    if (*(int *)(param_1 + 0x4f0) == 0xd) {
      uVar2 = 0xf;
    }
    else {
      uVar2 = (uint)*(byte *)((long)&DAT_043eb4d9 + (long)*(int *)(param_1 + 0x4f0));
    }
    local_90 = CONCAT44(uVar2,2);
    if (*(int *)(param_1 + 0x520) == 0xd) {
      uVar2 = 0x10;
    }
    else {
      uVar2 = (uint)*(byte *)((long)&DAT_043eb4d9 + (long)*(int *)(param_1 + 0x520));
    }
    local_88 = (long *)CONCAT44(uVar2,3);
    local_80 = 4;
    if (*(int *)(param_1 + 0x550) == 0xd) {
      local_7c = 0x11;
    }
    else {
      local_7c = (uint)*(byte *)((long)&DAT_043eb4d9 + (long)*(int *)(param_1 + 0x550));
    }
    FUN_02815d30(&local_a0,&local_78);
    local_78 = CONCAT44((undefined4)local_98,(int)local_a0);
    local_70 = CONCAT44((undefined4)local_88,(int)local_90);
    local_68 = local_80;
  }
  lVar4 = 0;
  while( true ) {
    lVar6 = param_1 + (long)(int)local_a0 * 0x30;
    lVar5 = (long)(int)local_a0;
    if (*(int *)(lVar6 + 0x490) == 0xd) {
      lVar5 = param_1 + lVar5 * 0x60;
      local_a0 = *(long *)(lVar5 + 0xf0);
      local_98 = *(char **)(lVar5 + 0xf8);
      local_90 = *(undefined8 *)(lVar5 + 0x100);
      local_88 = *(long **)(lVar5 + 0x108);
      if (local_88 == (long *)0x0) {
        cVar1 = *local_98;
      }
      else {
        (**(code **)(*local_88 + 0x18))();
        cVar1 = *local_98;
      }
      if (cVar1 != '\0') {
        (**(code **)(**(long **)(param_1 + 0xe8) + 0x50))(*(long **)(param_1 + 0xe8),&local_a0,0);
      }
    }
    else {
      lVar3 = param_1 + lVar5 * 0x60;
      local_a0 = *(long *)(lVar3 + 0x110);
      local_98 = *(char **)(lVar3 + 0x118);
      local_90 = *(undefined8 *)(lVar3 + 0x120);
      local_88 = *(long **)(lVar3 + 0x128);
      if (local_88 == (long *)0x0) {
        cVar1 = *local_98;
      }
      else {
        (**(code **)(*local_88 + 0x18))();
        cVar1 = *local_98;
      }
      if (cVar1 != '\0') {
        (**(code **)(**(long **)(param_1 + 0xe8) + 0xb0))
                  (*(long **)(param_1 + 0xe8),&local_a0,
                   *(undefined8 *)(param_1 + lVar5 * 0x30 + 0x498));
      }
      lVar3 = param_1 + lVar5 * 0x60;
      local_c0 = *(undefined8 *)(lVar3 + 0x130);
      local_b8 = *(char **)(lVar3 + 0x138);
      uStack_b0 = *(undefined8 *)(lVar3 + 0x140);
      local_a8 = *(long **)(lVar3 + 0x148);
      if (local_a8 == (long *)0x0) {
        cVar1 = *local_b8;
      }
      else {
        (**(code **)(*local_a8 + 0x18))();
        cVar1 = *local_b8;
      }
      if (cVar1 != '\0') {
        (**(code **)(**(long **)(param_1 + 0xe8) + 0xd8))
                  (*(long **)(param_1 + 0xe8),&local_c0,
                   (&DAT_043eb270)[(long)*(int *)(lVar6 + 0x490) * 6]);
      }
      lVar5 = param_1 + lVar5 * 0x60;
      local_e0 = *(undefined8 *)(lVar5 + 0xf0);
      local_d8 = *(char **)(lVar5 + 0xf8);
      uStack_d0 = *(undefined8 *)(lVar5 + 0x100);
      local_c8 = *(long **)(lVar5 + 0x108);
      if (local_c8 == (long *)0x0) {
        cVar1 = *local_d8;
      }
      else {
        (**(code **)(*local_c8 + 0x18))();
        cVar1 = *local_d8;
      }
      if (cVar1 != '\0') {
        (**(code **)(**(long **)(param_1 + 0xe8) + 0x50))(*(long **)(param_1 + 0xe8),&local_e0,1);
      }
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 0x20))();
      }
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
    }
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    if (lVar4 == 0x10) break;
    local_a0._0_4_ = *(int *)(((ulong)&local_78 | 4) + lVar4);
    lVar4 = lVar4 + 4;
  }
  if (**(char **)(param_1 + 0x3d8) != '\0') {
    (**(code **)(**(long **)(param_1 + 0xe8) + 0xe0))(*(long **)(param_1 + 0xe8),param_1 + 0x3d0);
  }
  if (**(char **)(param_1 + 0x2d8) != '\0') {
    (**(code **)(**(long **)(param_1 + 0xe8) + 0x50))
              (*(long **)(param_1 + 0xe8),param_1 + 0x2d0,param_2 & 1);
  }
  return;
}


