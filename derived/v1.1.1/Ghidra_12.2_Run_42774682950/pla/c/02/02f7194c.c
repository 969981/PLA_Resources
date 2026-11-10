/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f7194c; name: FUN_02f7194c
 */


void FUN_02f7194c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,long param_6,byte param_7,long param_8,undefined8 param_9)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [48];
  long local_c0;
  long local_b8;
  long lStack_b0;
  short local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  byte local_78;
  long local_70;
  undefined8 uStack_68;
  
  lVar7 = tpidr_el0;
  if (*(long *)(lVar7 + 0x38d490) == 0) {
    lVar5 = FUN_0333d16c(0,1);
    *(long *)(lVar7 + 0x38d490) = lVar5;
    lVar7 = *(long *)(lVar5 + 0x10);
  }
  else {
    lVar7 = *(long *)(*(long *)(lVar7 + 0x38d490) + 0x10);
  }
  if (lVar7 != 0) {
    puVar2 = *(undefined8 **)(lVar7 + 8);
    uVar4 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= *(ulong *)(lVar7 + 0x10)) &&
       (*(ulong *)(lVar7 + 8) = uVar4, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "TtCompoundCastShape";
      uVar3 = nn::os::GetSystemTick();
      puVar2[1] = uVar3;
    }
  }
  local_c0 = lVar7;
  FUN_02f761dc(param_2,param_3,param_6,auStack_f0,auStack_100);
  lStack_b0 = *(long *)(param_6 + 0x28);
  local_b8 = param_4;
  local_a0 = param_1;
  uStack_98 = param_2;
  local_90 = param_3;
  uStack_88 = param_5;
  local_80 = param_6;
  local_70 = param_8;
  if (lStack_b0 == 0) {
    if (*(char *)(param_4 + 0x100) == '\x02') {
      local_78 = param_7 & 1;
      uStack_68 = param_9;
      local_a8 = (ushort)(*(byte *)(param_8 + 8) & 1) << 8;
      FUN_02f7673c(param_4 + 0xe8,auStack_f0,auStack_100,&local_b8,
                   (*(byte *)(param_8 + 8) & 0x41) == 0,1);
    }
    else {
      local_78 = param_7 & 1;
      local_a8 = 0;
      uStack_68 = param_9;
      FUN_02f771fc(param_4 + 200,auStack_f0,auStack_100,&local_b8);
    }
  }
  else {
    lVar5 = *(long *)(param_4 + 0x30);
    plVar6 = (long *)0x0;
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + param_4 + 0x30);
    }
    if (*(int *)(param_4 + 0x38) != 0) {
      lVar5 = (long)*(int *)(param_4 + 0x38) << 3;
      do {
        lVar1 = *plVar6 + (long)plVar6;
        if ((*plVar6 != 0 && lVar1 != 0) && (*(short *)(lVar1 + 0x18) == -0xfeb)) {
          local_78 = param_7 & 1;
          uStack_68 = param_9;
          local_a8 = (ushort)(*(byte *)(param_8 + 8) & 1) << 8;
          FUN_02f77704(param_4 + 0xe8,auStack_f0,auStack_100,&local_b8,
                       (*(byte *)(param_8 + 8) & 0x41) == 0,1);
          goto joined_r0x02f71bd0;
        }
        plVar6 = plVar6 + 1;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
    if (*(char *)(param_4 + 0x100) == '\x02') {
      local_78 = param_7 & 1;
      uStack_68 = param_9;
      local_a8 = (ushort)(*(byte *)(param_8 + 8) & 1) << 8;
      FUN_02f78168(param_4 + 0xe8,auStack_f0,auStack_100,&local_b8,
                   (*(byte *)(param_8 + 8) & 0x41) == 0,1);
    }
    else {
      local_78 = param_7 & 1;
      local_a8 = 0;
      uStack_68 = param_9;
      FUN_02f78be0(param_4 + 200,auStack_f0,auStack_100,&local_b8);
    }
  }
joined_r0x02f71bd0:
  if (lVar7 != 0) {
    puVar2 = *(undefined8 **)(lVar7 + 8);
    uVar4 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= *(ulong *)(lVar7 + 0x10)) &&
       (*(ulong *)(lVar7 + 8) = uVar4, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_0390f40e;
      uVar3 = nn::os::GetSystemTick();
      puVar2[1] = uVar3;
    }
  }
  return;
}


