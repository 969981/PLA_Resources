/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f59f0; name: FUN_031f59f0
 */


void FUN_031f59f0(byte *param_1,byte *param_2,byte *param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar42;
  byte bVar43;
  float extraout_s0;
  int iVar41;
  byte bVar44;
  byte bVar46;
  byte bVar47;
  float extraout_var;
  int iVar45;
  byte bVar48;
  
  auVar2 = *(undefined1 (*) [16])
            (PTR_DAT_043723a0 +
            (ulong)(uint)(1 << (ulong)((int)(char)param_1[0x18] >> 1 & 0x1f)) * 0x10);
  FUN_031f6140();
  iVar41 = -(uint)(extraout_s0 < 0.0);
  iVar45 = -(uint)(extraout_var < 0.0);
  bVar42 = (byte)((uint)iVar41 >> 8);
  bVar43 = (byte)((uint)iVar41 >> 0x10);
  bVar44 = (byte)((uint)iVar41 >> 0x18);
  bVar46 = (byte)((uint)iVar45 >> 8);
  bVar47 = (byte)((uint)iVar45 >> 0x10);
  bVar48 = (byte)((uint)iVar45 >> 0x18);
  uVar1 = *(undefined8 *)(param_1 + 8);
  bVar33 = *param_1;
  bVar34 = param_1[1];
  bVar35 = param_1[2];
  bVar36 = param_1[3];
  bVar37 = param_1[4];
  bVar38 = param_1[5];
  bVar39 = param_1[6];
  bVar40 = param_1[7];
  bVar3 = *param_2;
  bVar4 = param_2[1];
  bVar5 = param_2[2];
  bVar6 = param_2[3];
  bVar7 = param_2[4];
  bVar8 = param_2[5];
  bVar9 = param_2[6];
  bVar10 = param_2[7];
  bVar11 = param_2[9];
  bVar12 = param_2[10];
  bVar13 = param_2[0xb];
  bVar14 = param_2[0xc];
  bVar15 = param_2[0xd];
  bVar16 = param_2[0xe];
  bVar17 = param_2[0xf];
  bVar18 = *param_2;
  bVar19 = param_2[1];
  bVar20 = param_2[2];
  bVar21 = param_2[3];
  bVar22 = param_2[4];
  bVar23 = param_2[5];
  bVar24 = param_2[6];
  bVar25 = param_2[7];
  bVar26 = param_2[9];
  bVar27 = param_2[10];
  bVar28 = param_2[0xb];
  bVar29 = param_2[0xc];
  bVar30 = param_2[0xd];
  bVar31 = param_2[0xe];
  bVar32 = param_2[0xf];
  param_3[8] = param_2[8] ^ (param_2[8] ^ param_1[8]) & (byte)iVar41 & auVar2[8];
  param_3[9] = bVar11 ^ (bVar26 ^ (byte)((ulong)uVar1 >> 8)) & bVar42 & auVar2[9];
  param_3[10] = bVar12 ^ (bVar27 ^ (byte)((ulong)uVar1 >> 0x10)) & bVar43 & auVar2[10];
  param_3[0xb] = bVar13 ^ (bVar28 ^ (byte)((ulong)uVar1 >> 0x18)) & bVar44 & auVar2[0xb];
  param_3[0xc] = bVar14 ^ (bVar29 ^ (byte)((ulong)uVar1 >> 0x20)) & (byte)iVar45 & auVar2[0xc];
  param_3[0xd] = bVar15 ^ (bVar30 ^ (byte)((ulong)uVar1 >> 0x28)) & bVar46 & auVar2[0xd];
  param_3[0xe] = bVar16 ^ (bVar31 ^ (byte)((ulong)uVar1 >> 0x30)) & bVar47 & auVar2[0xe];
  param_3[0xf] = bVar17 ^ (bVar32 ^ (byte)((ulong)uVar1 >> 0x38)) & bVar48 & auVar2[0xf];
  *param_3 = bVar3 ^ (bVar18 ^ bVar33) & (byte)iVar41 & auVar2[0];
  param_3[1] = bVar4 ^ (bVar19 ^ bVar34) & bVar42 & auVar2[1];
  param_3[2] = bVar5 ^ (bVar20 ^ bVar35) & bVar43 & auVar2[2];
  param_3[3] = bVar6 ^ (bVar21 ^ bVar36) & bVar44 & auVar2[3];
  param_3[4] = bVar7 ^ (bVar22 ^ bVar37) & (byte)iVar45 & auVar2[4];
  param_3[5] = bVar8 ^ (bVar23 ^ bVar38) & bVar46 & auVar2[5];
  param_3[6] = bVar9 ^ (bVar24 ^ bVar39) & bVar47 & auVar2[6];
  param_3[7] = bVar10 ^ (bVar25 ^ bVar40) & bVar48 & auVar2[7];
  return;
}


