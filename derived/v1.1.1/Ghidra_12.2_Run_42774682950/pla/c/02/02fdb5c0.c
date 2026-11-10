/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fdb5c0; name: FUN_02fdb5c0
 */


undefined8
FUN_02fdb5c0(long param_1,undefined8 *param_2,long param_3,undefined8 *param_4,undefined2 *param_5,
            undefined1 (*param_6) [16])

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined2 local_d0 [2];
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  long local_a0;
  undefined2 local_98 [2];
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined1 auStack_50 [16];
  
  (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(param_3 + 0x18) * 0x200 + 0x18))
            (param_3,&DAT_03aae430,local_60);
  auVar6._0_4_ = -(uint)(local_60._0_4_ <= *(float *)(param_1 + 0x40));
  auVar6._4_4_ = -(uint)(local_60._4_4_ <= *(float *)(param_1 + 0x44));
  auVar6._8_4_ = -(uint)(local_60._8_4_ <= *(float *)(param_1 + 0x48));
  auVar6._12_4_ = -(uint)(local_60._12_4_ <= *(float *)(param_1 + 0x4c));
  auVar8._0_4_ = -(uint)(*(float *)(param_1 + 0x30) <= auStack_50._0_4_);
  auVar8._4_4_ = -(uint)(*(float *)(param_1 + 0x34) <= auStack_50._4_4_);
  auVar8._8_4_ = -(uint)(*(float *)(param_1 + 0x38) <= auStack_50._8_4_);
  auVar8._12_4_ = -(uint)(*(float *)(param_1 + 0x3c) <= auStack_50._12_4_);
  if ((CONCAT13((byte)((uint)auVar8._0_4_ >> 0x18) & (byte)((uint)auVar6._0_4_ >> 0x18),
                CONCAT12((byte)((uint)auVar8._0_4_ >> 0x10) & (byte)((uint)auVar6._0_4_ >> 0x10),
                         CONCAT11((byte)((uint)auVar8._0_4_ >> 8) & (byte)((uint)auVar6._0_4_ >> 8),
                                  (byte)auVar8._0_4_ & (byte)auVar6._0_4_))) &
       CONCAT13((byte)((uint)auVar8._4_4_ >> 0x18) & (byte)((uint)auVar6._4_4_ >> 0x18),
                CONCAT12((byte)((uint)auVar8._4_4_ >> 0x10) & (byte)((uint)auVar6._4_4_ >> 0x10),
                         CONCAT11((byte)((uint)auVar8._4_4_ >> 8) & (byte)((uint)auVar6._4_4_ >> 8),
                                  (byte)auVar8._4_4_ & (byte)auVar6._4_4_))) &
      CONCAT13((byte)((uint)auVar8._8_4_ >> 0x18) & (byte)((uint)auVar6._8_4_ >> 0x18),
               CONCAT12((byte)((uint)auVar8._8_4_ >> 0x10) & (byte)((uint)auVar6._8_4_ >> 0x10),
                        CONCAT11((byte)((uint)auVar8._8_4_ >> 8) & (byte)((uint)auVar6._8_4_ >> 8),
                                 (byte)auVar8._8_4_ & (byte)auVar6._8_4_)))) == 0) {
    uVar5 = 0;
    if (param_6 != (undefined1 (*) [16])0x0) {
      uVar2 = *(undefined8 *)(param_6[1] + 8);
      uVar10 = (undefined1)((ulong)uVar2 >> 8);
      uVar11 = (undefined1)((ulong)uVar2 >> 0x10);
      uVar12 = (undefined1)((ulong)uVar2 >> 0x18);
      uVar13 = (undefined1)((ulong)uVar2 >> 0x20);
      uVar14 = (undefined1)((ulong)uVar2 >> 0x28);
      uVar15 = (undefined1)((ulong)uVar2 >> 0x30);
      uVar16 = (undefined1)((ulong)uVar2 >> 0x38);
      auVar7[9] = uVar10;
      auVar7._0_9_ = *(unkbyte9 *)param_6[1];
      auVar7[10] = uVar11;
      auVar7[0xb] = uVar12;
      auVar7[0xc] = uVar13;
      auVar7[0xd] = uVar14;
      auVar7[0xe] = uVar15;
      auVar7[0xf] = uVar16;
      auVar7 = NEON_fmin(auVar7,local_60,4);
      auVar9 = NEON_fmax(*param_6,auStack_50,4);
      auVar1[9] = uVar10;
      auVar1._0_9_ = *(unkbyte9 *)param_6[1];
      auVar1[10] = uVar11;
      auVar1[0xb] = uVar12;
      auVar1[0xc] = uVar13;
      auVar1[0xd] = uVar14;
      auVar1[0xe] = uVar15;
      auVar1[0xf] = uVar16;
      auVar7 = auVar7 ^ (auVar7 ^ auVar1) & auVar6;
      auVar9 = auVar9 ^ (auVar9 ^ *param_6) & auVar8;
      *(long *)(*param_6 + 8) = auVar9._8_8_;
      *(long *)*param_6 = auVar9._0_8_;
      *(long *)(param_6[1] + 8) = auVar7._8_8_;
      *(long *)param_6[1] = auVar7._0_8_;
    }
  }
  else {
    plVar3 = *(long **)(param_1 + 8);
    if (plVar3 != (long *)0x0) {
      local_98[0] = *(undefined2 *)(param_1 + 0x10);
      local_94 = *(undefined8 *)(param_1 + 0x14);
      local_8c = *(undefined4 *)(param_1 + 0x1c);
      local_88 = *param_2;
      local_80 = param_2[1];
      local_78 = param_2[2];
      local_70 = *(undefined4 *)(param_2 + 3);
      local_68 = 0;
      local_d0[0] = *param_5;
      local_cc = *(undefined8 *)(param_5 + 2);
      local_c4 = *(undefined4 *)(param_5 + 6);
      local_c0 = *param_4;
      local_b8 = param_4[1];
      local_b0 = param_4[2];
      local_a8 = *(undefined4 *)(param_4 + 3);
      local_a0 = param_3;
      uVar4 = (**(code **)(*plVar3 + 0x40))(plVar3,6,1,local_98,local_d0);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}


