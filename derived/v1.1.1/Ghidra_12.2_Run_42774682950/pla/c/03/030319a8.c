/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030319a8; name: FUN_030319a8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_030319a8(long param_1,short *param_2)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  short sVar8;
  char cVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  long *plVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 uVar19;
  float fVar21;
  undefined1 auVar20 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 local_b0;
  undefined2 local_ac;
  uint local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar2 = (uint *)(param_1 + 0x16c);
  if ((~*(uint *)(param_1 + 0x16c) & 0xffffff) == 0) {
    FUN_0301569c(param_1 + 0x6f0,param_1,param_1 + 0x140);
  }
  uVar1 = *puVar2;
  do {
    while( true ) {
      local_a8 = uVar1 & 0xffffff;
      if (local_a8 == 0xffffff) {
        return 0x7fffffff;
      }
      uVar18 = (ulong)local_a8;
      uVar6 = *puVar2;
      if (uVar6 == uVar1) break;
      ClearExclusiveLocal();
      uVar1 = uVar6;
    }
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar10) {
      *puVar2 = uVar1 + 0x1000000 & 0xff000000 |
                *(uint *)(*(long *)(param_1 + 0x150) + uVar18 * 0x80) & 0xffffff;
      cVar9 = ExclusiveMonitorsStatus();
    }
    uVar1 = uVar6;
  } while (cVar9 != '\0');
  piVar3 = (int *)(param_1 + 0x170);
  do {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
    if (bVar10) {
      *piVar3 = *piVar3 + 1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  iVar7 = *(int *)(param_1 + 0x174);
  uVar1 = iVar7 + 1;
  if (uVar1 <= local_a8) {
    uVar6 = local_a8 + 1;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    piVar3 = (int *)(param_1 + 0x174);
    do {
      if (*piVar3 != iVar7) {
        do {
          ClearExclusiveLocal();
          iVar7 = *piVar3;
          uVar1 = uVar6;
          if (uVar6 < iVar7 + 1U) {
            uVar1 = iVar7 + 1;
          }
          while (*piVar3 == iVar7) {
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar10) {
              *piVar3 = uVar1 - 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
            if (cVar9 == '\0') goto LAB_03031a5c;
          }
        } while( true );
      }
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar10) {
        *piVar3 = uVar1 - 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
LAB_03031a5c:
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x150) + uVar18 * 0x80);
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  uVar17 = *(undefined8 *)(param_2 + 0x18);
  uVar19 = *(undefined8 *)(param_2 + 0x14);
  puVar4[2] = *(undefined8 *)(param_2 + 0x10);
  puVar4[3] = uVar19;
  puVar4[4] = uVar17;
  uVar19 = *(undefined8 *)(param_2 + 0x20);
  puVar4[1] = *(undefined8 *)(param_2 + 0x24);
  *puVar4 = uVar19;
  fVar11 = *(float *)(param_2 + 8);
  fVar12 = *(float *)(param_2 + 10);
  fVar13 = *(float *)(param_2 + 0xc);
  fVar21 = *(float *)(param_2 + 2);
  *(undefined4 *)((long)puVar4 + 0x5a) = 0x5f800000;
  puVar4[8] = CONCAT26((short)((uint)(fVar21 * 1.0039062) >> 0x10),
                       CONCAT24((short)((uint)(fVar13 * 1.0039062) >> 0x10),
                                CONCAT22((short)((uint)(fVar12 * 1.0039062) >> 0x10),
                                         (short)((uint)(fVar11 * 1.0039062) >> 0x10))));
  uVar17 = _UNK_0388a0f8;
  uVar19 = _DAT_0388a0f0;
  sVar8 = *param_2;
  if (sVar8 == -1) {
    sVar8 = 1;
  }
  *(short *)(puVar4 + 0xb) = sVar8;
  puVar4[0xd] = uVar17;
  puVar4[0xc] = uVar19;
  puVar4[0xf] = uVar17;
  puVar4[0xe] = uVar19;
  uVar14 = *(undefined4 *)(param_2 + 0x28);
  uVar15 = *(undefined4 *)(param_2 + 0x2a);
  *(undefined4 *)(puVar4 + 0xd) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)((long)puVar4 + 0x6c) = 0x5f7ffff0;
  *(undefined4 *)(puVar4 + 0xc) = uVar14;
  *(undefined4 *)((long)puVar4 + 100) = uVar15;
  auVar20 = *(undefined1 (*) [16])(param_2 + 0x30);
  puVar4[9] = 0x7fffffff00ffffff;
  *(undefined2 *)((long)puVar4 + 0x5e) = 0x1ff;
  auVar22._0_12_ = auVar20._0_12_;
  auVar22._12_4_ = 0x5f7ffff0;
  puVar4[0xf] = auVar22._8_8_;
  puVar4[0xe] = auVar20._0_8_;
  if (*(long *)(param_1 + 0x698) != 0) {
    auVar20._8_4_ = 0x3f8ccccd;
    auVar20._0_8_ = 0x3f8ccccd3f8ccccd;
    auVar20._12_4_ = 0x3f8ccccd;
    puVar5 = (undefined4 *)(*(long *)(*(long *)(param_1 + 0x698) + 0x388) + uVar18 * 0x20);
    auVar22 = NEON_frecpe(auVar20,4);
    auVar26 = NEON_frecps(auVar20,auVar22,4);
    sVar8 = param_2[1];
    auVar23._0_4_ = auVar22._0_4_ * auVar26._0_4_;
    auVar23._4_4_ = auVar22._4_4_ * auVar26._4_4_;
    auVar23._8_4_ = auVar22._8_4_ * auVar26._8_4_;
    auVar23._12_4_ = auVar22._12_4_ * auVar26._12_4_;
    *(undefined1 *)((long)puVar5 + 0xb) = 0;
    uVar17 = _UNK_0388a138;
    uVar19 = _DAT_0388a130;
    auVar20 = NEON_frecps(auVar20,auVar23,4);
    *(byte *)((long)puVar5 + 10) = (byte)local_a8 & 3;
    auVar24._8_4_ = 0x7f;
    auVar24._0_8_ = 0x7f0000007f;
    auVar24._12_4_ = 0x7f;
    auVar26._0_8_ =
         CONCAT44((int)(auVar23._4_4_ * auVar20._4_4_ * 128.0 * (float)((ulong)uVar19 >> 0x20)) +
                  0x7f,(int)(auVar23._0_4_ * auVar20._0_4_ * 128.0 * (float)uVar19) + 0x7f);
    auVar26._8_4_ = (int)(auVar23._8_4_ * auVar20._8_4_ * 128.0 * (float)uVar17) + 0x7f;
    auVar26._12_4_ =
         (int)(auVar23._12_4_ * auVar20._12_4_ * 128.0 * (float)((ulong)uVar17 >> 0x20)) + 0x7f;
    auVar25._8_8_ = auVar24._8_8_;
    auVar25._0_8_ = NEON_sqxtn(0x7f0000007f,auVar26,4);
    auVar20 = NEON_sqxtn2(auVar25,auVar26,4);
    *puVar5 = 0;
    uVar19 = NEON_sqxtun(auVar26._0_8_,auVar20,2);
    *(char *)(puVar5 + 1) = (char)uVar19;
    *(char *)((long)puVar5 + 5) = (char)((ulong)uVar19 >> 8);
    *(char *)((long)puVar5 + 6) = (char)((ulong)uVar19 >> 0x10);
    *(char *)((long)puVar5 + 7) = (char)((ulong)uVar19 >> 0x18);
    *(bool *)((long)puVar5 + 0xe) = (char)sVar8 == '\0';
    puVar5[4] = 0xffffffff;
  }
  local_b0 = 0x2000080;
  local_ac = 0x3b;
  local_98 = *(undefined8 *)(param_2 + 4);
  local_38 = *(undefined8 *)(param_2 + 0x34);
  local_48 = *(undefined8 *)(param_2 + 0x2c);
  local_58 = *(undefined8 *)(param_2 + 0x24);
  local_68 = *(undefined8 *)(param_2 + 0x1c);
  local_78 = *(undefined8 *)(param_2 + 0x14);
  local_88 = *(undefined8 *)(param_2 + 0xc);
  local_a0 = *(undefined8 *)param_2;
  local_90 = *(undefined8 *)(param_2 + 8);
  local_80 = *(undefined8 *)(param_2 + 0x10);
  local_70 = *(undefined8 *)(param_2 + 0x18);
  local_60 = *(undefined8 *)(param_2 + 0x20);
  local_50 = *(undefined8 *)(param_2 + 0x28);
  local_40 = *(undefined8 *)(param_2 + 0x30);
  plVar16 = *(long **)(param_1 + 0x7f0);
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x20))(plVar16,&local_b0);
  }
  FUN_03031d0c(param_1 + 0x708,param_1,param_2,uVar18);
  return uVar18;
}


