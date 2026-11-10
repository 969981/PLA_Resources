/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008761ac; name: FUN_008761ac
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_008761ac(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 local_230;
  undefined1 *local_228;
  undefined4 uStack_220;
  undefined4 local_21c;
  undefined4 uStack_218;
  undefined *local_210;
  undefined1 local_208;
  undefined2 local_207;
  undefined1 local_205 [197];
  undefined1 local_140 [8];
  undefined1 *local_138;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined *local_120;
  undefined1 local_118;
  undefined2 local_117;
  undefined1 local_115 [197];
  
  puVar6 = &local_230;
  lVar7 = param_1 + (param_2 & 0xffff) * 0xb0;
  lVar1 = lVar7 + 0x870;
  FUN_007e34ac(lVar1,*(undefined4 *)(param_3 + 0xc));
  *(undefined2 *)(lVar7 + 0x888) = *(undefined2 *)(param_3 + 0x10);
  lVar2 = lVar7 + 0x890;
  FUN_007e34ac(lVar2,*(undefined4 *)(param_3 + 0x14));
  *(undefined2 *)(lVar7 + 0x8a8) = *(undefined2 *)(param_3 + 0x18);
  puVar4 = PTR_DAT_043777e0;
  local_140 = (undefined1  [8])(PTR_DAT_043777e0 + 0x10);
  local_120 = PTR_DAT_043777e0 + 0x68;
  local_138 = &local_118;
  uStack_130 = 0xc0;
  local_118 = 0;
  lVar7 = 0;
  puVar5 = (undefined8 *)local_140;
  do {
    *(undefined2 *)((long)puVar5 + 0x29) = 0;
    lVar3 = lVar7 + 4;
    *(undefined1 *)((long)puVar5 + 0x2b) = 0;
    puVar5 = (undefined8 *)((long)local_140 + lVar3);
    local_115[lVar7 + 1] = 0;
    lVar7 = lVar3;
  } while (lVar3 != 0xc0);
  local_12c = 0;
  uStack_128 = 0;
  FUN_007e37e0(lVar1,local_140);
  local_230 = puVar4 + 0x10;
  local_210 = puVar4 + 0x68;
  local_228 = &local_208;
  uStack_220 = 0xc0;
  local_208 = 0;
  lVar7 = 0;
  do {
    *(undefined2 *)((long)puVar6 + 0x29) = 0;
    lVar3 = lVar7 + 4;
    *(undefined1 *)((long)puVar6 + 0x2b) = 0;
    puVar6 = (undefined8 *)(local_205 + lVar7 + -0x27);
    local_205[lVar7 + 1] = 0;
    lVar7 = lVar3;
  } while (lVar3 != 0xc0);
  local_21c = 0;
  uStack_218 = 0;
  FUN_007e37e0(lVar2,&local_230);
  lVar7 = param_1 + (param_2 & 0xffff) * 0xb0;
  *(undefined1 *)(lVar7 + 0x8e8) = 1;
  FUN_00874c48(param_1,3,lVar1,param_2 & 0xffffffff,*(undefined2 *)(lVar7 + 0x868));
  *(undefined1 *)(lVar7 + 0x8e9) = 1;
  FUN_00874c48(param_1,4,lVar2,param_2 & 0xffffffff,*(undefined2 *)(lVar7 + 0x868));
  FUN_007ecf14(lVar7 + 0x8f0);
  return;
}


