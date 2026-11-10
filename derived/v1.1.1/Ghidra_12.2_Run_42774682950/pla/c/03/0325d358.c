/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0325d358; name: FUN_0325d358
 */


void FUN_0325d358(float param_1,float *param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined *puVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  undefined1 auVar26 [12];
  undefined1 auVar27 [12];
  undefined1 auVar28 [12];
  undefined1 auVar29 [12];
  undefined1 auVar30 [12];
  undefined8 *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  lVar16 = tpidr_el0;
  lVar18 = *(long *)(lVar16 + 0x38d490);
  if (lVar18 == 0) {
    lVar18 = FUN_0333d16c(0,1);
    *(long *)(lVar16 + 0x38d490) = lVar18;
  }
  lVar18 = *(long *)(lVar18 + 8);
  if (0x7f < *(ulong *)(lVar18 + 0x10)) {
    puVar17 = *(undefined8 **)(lVar18 + 0x18);
    if (puVar17 + 0x10 <= *(undefined8 **)(lVar18 + 0x20)) {
      *(undefined8 **)(lVar18 + 0x18) = puVar17 + 0x10;
      goto LAB_0325d3c0;
    }
  }
  puVar17 = (undefined8 *)FUN_032ce670(lVar18,0x80);
LAB_0325d3c0:
  fVar21 = param_1 + (float)*(undefined8 *)(param_2 + 4);
  fVar22 = param_1 + (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
  fVar23 = param_1 + (float)*(undefined8 *)(param_2 + 6);
  fVar19 = *param_2 - param_1;
  fVar20 = param_2[1] - param_1;
  param_1 = param_2[2] - param_1;
  puVar17[1] = (ulong)(uint)fVar23;
  *puVar17 = CONCAT44(fVar22,fVar21);
  puVar15 = PTR_DAT_043723a0;
  auVar1._4_4_ = fVar20;
  auVar1._0_4_ = fVar19;
  auVar1._8_4_ = param_1;
  auVar8._4_4_ = fVar22;
  auVar8._0_4_ = fVar21;
  auVar8._8_4_ = fVar23;
  auVar24._4_4_ = fVar22;
  auVar24._0_4_ = fVar21;
  auVar24._8_4_ = fVar23;
  auVar24 = auVar24 ^ (auVar8 ^ auVar1) & SUB1612(*(undefined1 (*) [16])(PTR_DAT_043723a0 + 0x10),0)
  ;
  puVar17[3] = (ulong)auVar24._8_4_;
  puVar17[2] = auVar24._0_8_;
  auVar2._4_4_ = fVar20;
  auVar2._0_4_ = fVar19;
  auVar2._8_4_ = param_1;
  auVar9._4_4_ = fVar22;
  auVar9._0_4_ = fVar21;
  auVar9._8_4_ = fVar23;
  auVar25._4_4_ = fVar22;
  auVar25._0_4_ = fVar21;
  auVar25._8_4_ = fVar23;
  auVar25 = auVar25 ^ (auVar9 ^ auVar2) & SUB1612(*(undefined1 (*) [16])(puVar15 + 0x20),0);
  puVar17[5] = (ulong)auVar25._8_4_;
  puVar17[4] = auVar25._0_8_;
  auVar3._4_4_ = fVar20;
  auVar3._0_4_ = fVar19;
  auVar3._8_4_ = param_1;
  auVar10._4_4_ = fVar22;
  auVar10._0_4_ = fVar21;
  auVar10._8_4_ = fVar23;
  auVar26._4_4_ = fVar22;
  auVar26._0_4_ = fVar21;
  auVar26._8_4_ = fVar23;
  auVar26 = auVar26 ^ (auVar10 ^ auVar3) & SUB1612(*(undefined1 (*) [16])(puVar15 + 0x30),0);
  puVar17[7] = (ulong)auVar26._8_4_;
  puVar17[6] = auVar26._0_8_;
  auVar4._4_4_ = fVar20;
  auVar4._0_4_ = fVar19;
  auVar4._8_4_ = param_1;
  auVar11._4_4_ = fVar22;
  auVar11._0_4_ = fVar21;
  auVar11._8_4_ = fVar23;
  auVar27._4_4_ = fVar22;
  auVar27._0_4_ = fVar21;
  auVar27._8_4_ = fVar23;
  auVar27 = auVar27 ^ (auVar11 ^ auVar4) & SUB1612(*(undefined1 (*) [16])(puVar15 + 0x40),0);
  puVar17[9] = (ulong)auVar27._8_4_;
  puVar17[8] = auVar27._0_8_;
  auVar5._4_4_ = fVar20;
  auVar5._0_4_ = fVar19;
  auVar5._8_4_ = param_1;
  auVar12._4_4_ = fVar22;
  auVar12._0_4_ = fVar21;
  auVar12._8_4_ = fVar23;
  auVar28._4_4_ = fVar22;
  auVar28._0_4_ = fVar21;
  auVar28._8_4_ = fVar23;
  auVar28 = auVar28 ^ (auVar12 ^ auVar5) & SUB1612(*(undefined1 (*) [16])(puVar15 + 0x50),0);
  puVar17[0xb] = (ulong)auVar28._8_4_;
  puVar17[10] = auVar28._0_8_;
  auVar6._4_4_ = fVar20;
  auVar6._0_4_ = fVar19;
  auVar6._8_4_ = param_1;
  auVar13._4_4_ = fVar22;
  auVar13._0_4_ = fVar21;
  auVar13._8_4_ = fVar23;
  auVar29._4_4_ = fVar22;
  auVar29._0_4_ = fVar21;
  auVar29._8_4_ = fVar23;
  auVar29 = auVar29 ^ (auVar13 ^ auVar6) & SUB1612(*(undefined1 (*) [16])(puVar15 + 0x60),0);
  puVar17[0xd] = (ulong)auVar29._8_4_;
  puVar17[0xc] = auVar29._0_8_;
  auVar7._4_4_ = fVar20;
  auVar7._0_4_ = fVar19;
  auVar7._8_4_ = param_1;
  auVar14._4_4_ = fVar22;
  auVar14._0_4_ = fVar21;
  auVar14._8_4_ = fVar23;
  auVar30._4_4_ = fVar22;
  auVar30._0_4_ = fVar21;
  auVar30._8_4_ = fVar23;
  auVar30 = auVar30 ^ (auVar14 ^ auVar7) & SUB1612(*(undefined1 (*) [16])(puVar15 + 0x70),0);
  puVar17[0xf] = (ulong)auVar30._8_4_;
  puVar17[0xe] = auVar30._0_8_;
  local_78 = 8;
  uStack_58 = param_4[3];
  local_60 = param_4[2];
  uStack_68 = param_4[1];
  local_70 = *param_4;
  local_80 = puVar17;
  local_50 = param_3;
  FUN_0325c03c(&local_80,param_5);
  lVar18 = *(long *)(lVar16 + 0x38d490);
  if (lVar18 == 0) {
    lVar18 = FUN_0333d16c(0,1);
    *(long *)(lVar16 + 0x38d490) = lVar18;
  }
  lVar16 = *(long *)(lVar18 + 8);
  if (((*(ulong *)(lVar16 + 0x10) < 0x80) || (*(undefined8 **)(lVar16 + 0x18) != puVar17 + 0x10)) ||
     (*(undefined8 **)(lVar16 + 0x28) == puVar17)) {
    FUN_032cedf0(lVar16,puVar17,0x80);
    return;
  }
  *(undefined8 **)(lVar16 + 0x18) = puVar17;
  return;
}


