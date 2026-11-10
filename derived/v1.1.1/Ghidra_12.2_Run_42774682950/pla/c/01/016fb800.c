/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016fb800; name: FUN_016fb800
 */


void FUN_016fb800(undefined8 param_1,long *param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  long *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  undefined8 local_40;
  undefined *puStack_38;
  
  lVar3 = FUN_001511d0(param_1,2);
  uVar6 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_0437acb0 != '\0') && (iVar2 = FUN_00155630(param_1,2,"class_cast"), iVar2 != 0)) {
    pcVar7 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar5 = FUN_00b4fc10();
    uVar6 = (*pcVar7)(uVar6,uVar5);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  pcVar7 = (code *)*param_2;
  plVar1 = (long *)(param_3 + (param_2[1] >> 1));
  if ((param_2[1] & 1U) != 0) {
    pcVar7 = *(code **)(pcVar7 + *plVar1);
  }
  (*pcVar7)(&local_b8,plVar1,uVar6);
  FUN_0014ff10(param_1,0);
  FUN_016f3c68();
  puStack_38 = DAT_043cd400;
  if ((DAT_043cd3f0 & 1) == 0) {
    puStack_38 = &DAT_043cd3f1;
  }
  local_40 = param_1;
  puVar4 = (undefined8 *)FUN_016f5de0(param_1);
  *puVar4 = local_b8;
  puVar4[1] = local_b0;
  puVar4[2] = local_a8;
  puVar4[3] = local_a0;
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x18))();
  }
  puVar4[4] = local_98;
  puVar4[5] = local_90;
  puVar4[6] = local_88;
  puVar4[7] = local_80;
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x18))();
  }
  puVar4[8] = local_78;
  puVar4[9] = local_70;
  puVar4[10] = local_68;
  puVar4[0xb] = local_60;
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x18))();
  }
  *(undefined2 *)(puVar4 + 0xe) = local_48;
  puVar4[0xc] = local_58;
  puVar4[0xd] = uStack_50;
  FUN_016f5fd8(&local_40);
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  return;
}


