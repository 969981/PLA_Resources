/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01246a7c; name: FUN_01246a7c
 */


void FUN_01246a7c(long *param_1,uint param_2,long param_3,long param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_100 [24];
  long *local_e8;
  undefined4 local_e0 [2];
  long *local_d8;
  undefined1 local_d0;
  long *local_c8;
  long *local_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  int local_90;
  undefined1 local_8c;
  undefined4 local_88 [2];
  long *local_80;
  undefined1 local_78;
  long *local_70;
  long *local_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  int local_38;
  undefined1 local_34;
  
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    if (param_2 < 7) {
      lVar4 = *(long *)(&DAT_03a7a308 + (long)(int)param_2 * 8);
    }
    else {
      lVar4 = 0xc;
    }
    puVar2 = (undefined4 *)(param_4 + lVar4 * 0x58);
    local_88[0] = *puVar2;
    local_80 = *(long **)(puVar2 + 2);
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x18))();
    }
    lVar3 = param_4 + lVar4 * 0x58;
    local_78 = *(undefined1 *)(lVar3 + 0x10);
    local_70 = *(long **)(lVar3 + 0x18);
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x18))();
    }
    local_68 = *(long **)(param_4 + lVar4 * 0x58 + 0x20);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x18))();
    }
    lVar3 = param_4 + lVar4 * 0x58;
    local_60 = *(undefined8 *)(lVar3 + 0x28);
    local_58 = *(long **)(lVar3 + 0x30);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x18))();
    }
    param_4 = param_4 + lVar4 * 0x58;
    puVar2 = (undefined4 *)(param_3 + lVar4 * 0x58);
    local_50 = *(undefined8 *)(param_4 + 0x38);
    local_48 = *(undefined8 *)(param_4 + 0x40);
    uStack_40 = *(undefined8 *)(param_4 + 0x48);
    local_38 = *(int *)(param_4 + 0x50);
    local_34 = *(undefined1 *)(param_4 + 0x54);
    local_e0[0] = *puVar2;
    local_d8 = *(long **)(puVar2 + 2);
    if (local_d8 != (long *)0x0) {
      (**(code **)(*local_d8 + 0x18))();
    }
    lVar3 = param_3 + lVar4 * 0x58;
    local_d0 = *(undefined1 *)(lVar3 + 0x10);
    local_c8 = *(long **)(lVar3 + 0x18);
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x18))();
    }
    local_c0 = *(long **)(param_3 + lVar4 * 0x58 + 0x20);
    if (local_c0 != (long *)0x0) {
      (**(code **)(*local_c0 + 0x18))();
    }
    lVar3 = param_3 + lVar4 * 0x58;
    local_b8 = *(undefined8 *)(lVar3 + 0x28);
    local_b0 = *(long **)(lVar3 + 0x30);
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x18))();
    }
    param_3 = param_3 + lVar4 * 0x58;
    uStack_98 = *(undefined8 *)(param_3 + 0x48);
    local_a8 = *(undefined8 *)(param_3 + 0x38);
    local_a0 = *(undefined8 *)(param_3 + 0x40);
    local_90 = *(int *)(param_3 + 0x50);
    local_8c = *(undefined1 *)(param_3 + 0x54);
    bVar1 = local_38 == local_90;
    FUN_01246d68(param_1,local_88);
    FUN_01246f48(param_1,local_e0,bVar1);
    lVar4 = *param_1;
    FUN_02a4754c(auStack_100,&DAT_041fdb60);
    FUN_0283b1e8(lVar4,auStack_100);
    if (local_e8 != (long *)0x0) {
      (**(code **)(*local_e8 + 0x20))();
    }
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x20))();
    }
    if (local_c0 != (long *)0x0) {
      (**(code **)(*local_c0 + 0x20))();
    }
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    if (local_d8 != (long *)0x0) {
      (**(code **)(*local_d8 + 0x20))();
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
  }
  return;
}


