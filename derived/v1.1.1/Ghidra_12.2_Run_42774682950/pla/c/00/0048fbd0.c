/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0048fbd0; name: FUN_0048fbd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0048fbd0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_190 [64];
  undefined1 auStack_150 [64];
  undefined1 auStack_110 [64];
  undefined1 auStack_d0 [64];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 local_67;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  byte bStack_58;
  
  lVar8 = param_1 + 0x40;
  uStack_88 = param_2[1];
  local_90 = *param_2;
  uStack_78 = param_2[3];
  local_80 = param_2[2];
  uStack_70 = param_2[4];
  uStack_60 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x29) >> 0x38);
  bStack_58 = (byte)((ulong)*(undefined8 *)((long)param_2 + 0x31) >> 0x38);
  uVar9 = (uint)bStack_58;
  bStack_58 = bStack_58 & 0x7f;
  uStack_68 = (undefined1)param_2[5];
  local_67 = (undefined7)((ulong)param_2[5] >> 8);
  uStack_5f = (undefined7)*(undefined8 *)((long)param_2 + 0x31);
  uVar6 = FUN_004941f0(lVar8,&local_90,1,0);
  uVar10 = (uint)bStack_58;
  FUN_004953f0(param_1,lVar8);
  lVar1 = param_1 + 0x80;
  FUN_004943a0(lVar1,&DAT_03a15b10,param_1);
  lVar2 = param_1 + 0xc0;
  FUN_00495240(lVar2,param_1,0x98a9);
  FUN_004943a0(lVar2,&DAT_03a15a90,lVar2);
  FUN_004943a0(lVar2,&DAT_03a15b10,lVar2);
  FUN_00494d70(param_1,lVar1,lVar2);
  uVar7 = FUN_00494640(lVar2,param_1);
  uVar7 = uVar6 & (int)(uVar10 - 1) >> 0x1f & uVar7;
  FUN_00494d70(param_1,lVar2,lVar1);
  uVar6 = FUN_004941b0(param_1);
  FUN_0048fe60(param_1,uVar6 ^ (int)((uVar9 & 0x80) - 1) >> 0x1f ^ 0xffffffffU);
  uVar5 = _UNK_03a15b48;
  uVar4 = _DAT_03a15b40;
  uVar3 = _DAT_03a15b30;
  *(undefined8 *)(param_1 + 0xa8) = _UNK_03a15b38;
  *(undefined8 *)(param_1 + 0xa0) = uVar3;
  *(undefined8 *)(param_1 + 0xb8) = uVar5;
  *(undefined8 *)(param_1 + 0xb0) = uVar4;
  uVar5 = _UNK_03a15b28;
  uVar4 = _DAT_03a15b20;
  uVar3 = _DAT_03a15b10;
  *(undefined8 *)(param_1 + 0x88) = _UNK_03a15b18;
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  *(undefined8 *)(param_1 + 0x98) = uVar5;
  *(undefined8 *)(param_1 + 0x90) = uVar4;
  FUN_004953f0(auStack_150,param_1);
  FUN_004953f0(auStack_d0,lVar8);
  FUN_00494000(auStack_190,auStack_150,auStack_d0);
  FUN_00494000(lVar2,lVar8,param_1);
  FUN_004953f0(auStack_110,lVar2);
  FUN_004943a0(auStack_110,auStack_110,auStack_190);
  FUN_004943a0(lVar2,auStack_d0,auStack_150);
  FUN_004953f0(param_1,lVar1);
  FUN_00494000(lVar1,param_1,param_1);
  FUN_004943a0(auStack_d0,lVar1,auStack_190);
  FUN_00494d70(param_1,auStack_d0,auStack_110);
  FUN_00494d70(lVar1,lVar2,auStack_d0);
  FUN_00494d70(lVar8,lVar2,auStack_190);
  FUN_00494d70(lVar2,auStack_110,auStack_190);
  FUN_004006a0(auStack_d0,0x40);
  FUN_004006a0(auStack_110,0x40);
  FUN_004006a0(auStack_150,0x40);
  FUN_004006a0(auStack_190,0x40);
  FUN_004006a0(&local_90,0x39);
  lVar8 = FUN_0048e040(param_1);
  if ((uVar7 == 0xffffffff) && (lVar8 == 0)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("curve448_point_valid(p) || ~succ",
                  "external/openssl/crypto/ec/curve448/curve448.c",0x176,
                  "nnopenssl_curve448_point_decode_like_eddsa_and_mul_by_ratio");
  }
  return uVar7;
}


