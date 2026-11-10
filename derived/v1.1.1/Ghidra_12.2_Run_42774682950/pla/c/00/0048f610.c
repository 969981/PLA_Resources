/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0048f610; name: FUN_0048f610
 */


void FUN_0048f610(undefined8 *param_1,long param_2,int param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int iStack_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar1 = param_1 + 8;
  FUN_00491290(&local_b0,puVar1,param_1);
  FUN_00494d70(&local_70,param_2,&local_b0);
  local_b0 = CONCAT44((int)((ulong)param_1[8] >> 0x20) + (int)((ulong)*param_1 >> 0x20),
                      (int)param_1[8] + (int)*param_1);
  uStack_a8 = CONCAT44((int)((ulong)param_1[9] >> 0x20) + (int)((ulong)param_1[1] >> 0x20),
                       (int)param_1[9] + (int)param_1[1]);
  local_a0 = CONCAT44((int)((ulong)param_1[10] >> 0x20) + (int)((ulong)param_1[2] >> 0x20),
                      (int)param_1[10] + (int)param_1[2]);
  uStack_98 = CONCAT44((int)((ulong)param_1[0xb] >> 0x20) + (int)((ulong)param_1[3] >> 0x20),
                       (int)param_1[0xb] + (int)param_1[3]);
  local_90 = CONCAT44((int)((ulong)param_1[0xc] >> 0x20) + (int)((ulong)param_1[4] >> 0x20),
                      (int)param_1[0xc] + (int)param_1[4]);
  uStack_88 = CONCAT44((int)((ulong)param_1[0xd] >> 0x20) + (int)((ulong)param_1[5] >> 0x20),
                       (int)param_1[0xd] + (int)param_1[5]);
  local_80 = CONCAT44((int)((ulong)param_1[0xe] >> 0x20) + (int)((ulong)param_1[6] >> 0x20),
                      (int)param_1[0xe] + (int)param_1[6]);
  uStack_78 = CONCAT44((int)((ulong)param_1[0xf] >> 0x20) + (int)((ulong)param_1[7] >> 0x20),
                       (int)param_1[0xf] + (int)param_1[7]);
  FUN_00494d70(puVar1,param_2 + 0x40,&local_b0);
  FUN_00494d70(param_1,param_2 + 0x80,param_1 + 0x18);
  local_f0 = *(int *)(param_1 + 8) + (int)local_70;
  local_ec = *(int *)((long)param_1 + 0x44) + local_70._4_4_;
  local_e8 = *(int *)(param_1 + 9) + (int)uStack_68;
  local_e4 = *(int *)((long)param_1 + 0x4c) + uStack_68._4_4_;
  local_e0 = *(int *)(param_1 + 10) + (int)local_60;
  local_dc = *(int *)((long)param_1 + 0x54) + local_60._4_4_;
  local_d8 = *(int *)(param_1 + 0xb) + (int)uStack_58;
  local_d4 = *(int *)((long)param_1 + 0x5c) + uStack_58._4_4_;
  local_d0 = *(int *)(param_1 + 0xc) + (int)local_50;
  iStack_cc = *(int *)((long)param_1 + 100) + local_50._4_4_;
  local_c8 = *(int *)(param_1 + 0xd) + (int)uStack_48;
  local_c4 = *(int *)((long)param_1 + 0x6c) + uStack_48._4_4_;
  uVar2 = (*(int *)((long)param_1 + 0x6c) - uStack_48._4_4_) + 0x1ffffffe;
  uVar3 = (*(int *)(param_1 + 0xd) - (int)uStack_48) + 0x1ffffffe;
  uVar4 = (*(int *)((long)param_1 + 0x5c) - uStack_58._4_4_) + 0x1ffffffe;
  uVar5 = (*(int *)((long)param_1 + 0x4c) - uStack_68._4_4_) + 0x1ffffffe;
  uVar6 = (*(int *)(param_1 + 9) - (int)uStack_68) + 0x1ffffffe;
  uVar7 = (*(int *)((long)param_1 + 0x44) - local_70._4_4_) + 0x1ffffffe;
  uVar8 = (*(int *)(param_1 + 8) - (int)local_70) + 0x1ffffffe;
  local_c0 = *(int *)(param_1 + 0xe) + (int)local_40;
  local_bc = *(int *)((long)param_1 + 0x74) + local_40._4_4_;
  uVar9 = (*(int *)((long)param_1 + 0x74) - local_40._4_4_) + 0x1ffffffe;
  uVar10 = (*(int *)(param_1 + 0xe) - (int)local_40) + 0x1ffffffe;
  local_b8 = *(int *)(param_1 + 0xf) + (int)uStack_38;
  local_80 = CONCAT44((uVar9 & 0xfffffff) + (uVar10 >> 0x1c),(uVar10 & 0xfffffff) + (uVar2 >> 0x1c))
  ;
  uVar10 = (*(int *)(param_1 + 0xb) - (int)uStack_58) + 0x1ffffffe;
  uVar11 = (*(int *)((long)param_1 + 100) - local_50._4_4_) + 0x1ffffffe;
  uStack_88 = CONCAT44((uVar2 & 0xfffffff) + (uVar3 >> 0x1c),(uVar3 & 0xfffffff) + (uVar11 >> 0x1c))
  ;
  uVar2 = (*(int *)((long)param_1 + 0x54) - local_60._4_4_) + 0x1ffffffe;
  uStack_98 = CONCAT44((uVar4 & 0xfffffff) + (uVar10 >> 0x1c),(uVar10 & 0xfffffff) + (uVar2 >> 0x1c)
                      );
  uVar3 = (*(int *)(param_1 + 10) - (int)local_60) + 0x1ffffffe;
  local_a0 = CONCAT44((uVar2 & 0xfffffff) + (uVar3 >> 0x1c),(uVar3 & 0xfffffff) + (uVar5 >> 0x1c));
  uVar2 = (*(int *)(param_1 + 0xf) - (int)uStack_38) + 0x1ffffffe;
  uStack_a8 = CONCAT44((uVar5 & 0xfffffff) + (uVar6 >> 0x1c),(uVar6 & 0xfffffff) + (uVar7 >> 0x1c));
  local_b4 = *(int *)((long)param_1 + 0x7c) + uStack_38._4_4_;
  uVar3 = (*(int *)((long)param_1 + 0x7c) - uStack_38._4_4_) + 0x1ffffffe;
  uVar6 = uVar3 >> 0x1c;
  uVar5 = (*(int *)(param_1 + 0xc) - (int)local_50) + uVar6 + 0x1ffffffc;
  local_b0 = CONCAT44((uVar7 & 0xfffffff) + (uVar8 >> 0x1c),uVar6 + (uVar8 & 0xfffffff));
  uStack_78 = CONCAT44((uVar3 & 0xfffffff) + (uVar2 >> 0x1c),(uVar2 & 0xfffffff) + (uVar9 >> 0x1c));
  local_90 = CONCAT44((uVar11 & 0xfffffff) + (uVar5 >> 0x1c),(uVar5 & 0xfffffff) + (uVar4 >> 0x1c));
  FUN_00491290(puVar1,param_1 + 0x10,param_1);
  local_70 = CONCAT44((int)((ulong)param_1[0x10] >> 0x20) + (int)((ulong)*param_1 >> 0x20),
                      (int)param_1[0x10] + (int)*param_1);
  uStack_68 = CONCAT44((int)((ulong)param_1[0x11] >> 0x20) + (int)((ulong)param_1[1] >> 0x20),
                       (int)param_1[0x11] + (int)param_1[1]);
  local_60 = CONCAT44((int)((ulong)param_1[0x12] >> 0x20) + (int)((ulong)param_1[2] >> 0x20),
                      (int)param_1[0x12] + (int)param_1[2]);
  uStack_58 = CONCAT44((int)((ulong)param_1[0x13] >> 0x20) + (int)((ulong)param_1[3] >> 0x20),
                       (int)param_1[0x13] + (int)param_1[3]);
  local_50 = CONCAT44((int)((ulong)param_1[0x14] >> 0x20) + (int)((ulong)param_1[4] >> 0x20),
                      (int)param_1[0x14] + (int)param_1[4]);
  uStack_48 = CONCAT44((int)((ulong)param_1[0x15] >> 0x20) + (int)((ulong)param_1[5] >> 0x20),
                       (int)param_1[0x15] + (int)param_1[5]);
  local_40 = CONCAT44((int)((ulong)param_1[0x16] >> 0x20) + (int)((ulong)param_1[6] >> 0x20),
                      (int)param_1[0x16] + (int)param_1[6]);
  uStack_38 = CONCAT44((int)((ulong)param_1[0x17] >> 0x20) + (int)((ulong)param_1[7] >> 0x20),
                       (int)param_1[0x17] + (int)param_1[7]);
  FUN_00494d70(param_1 + 0x10,&local_70,puVar1);
  FUN_00494d70(param_1,puVar1,&local_b0);
  FUN_00494d70(puVar1,&local_70,&local_f0);
  if (param_3 == 0) {
    FUN_00494d70(param_1 + 0x18,&local_b0,&local_f0);
  }
  return;
}


