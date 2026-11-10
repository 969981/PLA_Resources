/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00163720; name: FUN_00163720
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

long FUN_00163720(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 ,undefined4 param_6)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long local_148;
  undefined8 local_140;
  undefined1 *local_138;
  undefined8 *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined1 local_10c;
  undefined1 auStack_108 [16];
  int local_f8;
  long *local_d8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98 [2];
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined1 local_70;
  undefined2 local_6f;
  
  lVar3 = FUN_0015c6c0(param_1,1);
  plVar6 = *(long **)(param_1 + 0x10);
  *plVar6 = lVar3;
  *(undefined4 *)(plVar6 + 1) = 0x46;
  FUN_0015a750(param_1);
  local_b8 = FUN_00171cf0(param_1);
  puVar7 = *(undefined8 **)(param_1 + 0x10);
  *puVar7 = local_b8;
  *(undefined4 *)(puVar7 + 1) = 0x45;
  FUN_0015a750(param_1);
  lVar4 = FUN_0015c910(param_1);
  *(long *)(lVar3 + 0x18) = lVar4;
  local_148 = lVar4;
  uVar5 = FUN_0016d990(param_1,param_5);
  *(undefined8 *)(lVar4 + 0x68) = uVar5;
  *(undefined4 *)(param_4 + 0x28) = 0;
  *(undefined4 *)(param_4 + 0x18) = 0;
  *(undefined4 *)(param_4 + 8) = 0;
  local_c0 = param_3;
  local_b0 = param_4;
  FUN_0016a380(param_1,auStack_108,param_2,*(undefined8 *)(lVar4 + 0x68),param_6);
  local_140 = local_d8;
  local_d8 = &local_148;
  local_128 = 0;
  uStack_120 = 0xffffffff;
  local_110 = 0;
  local_118 = 0;
  local_10c = 0;
  local_114 = *(undefined4 *)(local_b0 + 8);
  *(undefined8 *)(lVar4 + 0x68) = uStack_a8;
  *(undefined1 *)(lVar4 + 0xc) = 2;
  local_70 = 0;
  local_6f = 0;
  local_78 = *(undefined4 *)(local_b0 + 0x28);
  uStack_74 = *(undefined4 *)(local_b0 + 0x18);
  local_80 = 0;
  local_130 = &local_80;
  *(undefined1 *)(lVar4 + 0xb) = 1;
  local_88 = 0xffffffffffffffff;
  local_90 = 0;
  local_98[0] = 8;
  local_138 = auStack_108;
  FUN_00163920(&local_148,local_a0,local_98);
  FUN_0016a400(auStack_108);
  do {
    iVar2 = local_f8;
    if (local_f8 - 0x104U < 0x1e && (1 << (ulong)(local_f8 - 0x104U & 0x1f) & 0x20020007U) != 0)
    break;
    FUN_00163c30(auStack_108);
  } while (iVar2 != 0x112);
  if (local_f8 != 0x121) {
    FUN_00166920(auStack_108,0x121);
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0,0x163918);
    (*pcVar1)();
  }
  FUN_00163a50(auStack_108);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  return lVar3;
}


