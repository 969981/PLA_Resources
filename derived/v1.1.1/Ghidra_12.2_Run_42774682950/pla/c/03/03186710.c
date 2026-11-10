/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03186710; name: FUN_03186710
 */


uint FUN_03186710(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_a0 [8];
  float fStack_98;
  undefined1 auStack_90 [8];
  float fStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60 [16];
  undefined1 auStack_50 [16];
  undefined1 local_40 [16];
  undefined1 auStack_30 [16];
  
  FUN_031865f0(param_3,local_60,auStack_50,local_40,auStack_30);
  local_70 = CONCAT44((local_60._4_4_ + auStack_50._4_4_) * 0.5,
                      (local_60._0_4_ + auStack_50._0_4_) * 0.5);
  uStack_68 = CONCAT44((local_60._12_4_ + auStack_50._12_4_) * 0.5,
                       (local_60._8_4_ + auStack_50._8_4_) * 0.5);
  local_80 = CONCAT44((local_40._4_4_ + auStack_30._4_4_) * 0.5,
                      (local_40._0_4_ + auStack_30._0_4_) * 0.5);
  uStack_78 = CONCAT44((local_40._12_4_ + auStack_30._12_4_) * 0.5,
                       (local_40._8_4_ + auStack_30._8_4_) * 0.5);
  FUN_032cc3fc(auStack_90,param_1,&local_70);
  FUN_032cc3fc(local_a0,param_2,&local_80);
  fVar1 = auStack_90._0_4_ - local_a0._0_4_;
  fVar3 = auStack_90._4_4_ - local_a0._4_4_;
  fVar1 = fVar1 * fVar1;
  fVar3 = fVar3 * fVar3;
  fVar4 = (fStack_88 - fStack_98) * (fStack_88 - fStack_98);
  fVar2 = fVar1 + fVar3 + fVar4;
  uVar7 = CONCAT44(fVar1 + fVar3 + fVar4,fVar2);
  uVar6 = NEON_frsqrte(uVar7,4);
  fVar1 = (float)uVar6;
  fVar3 = (float)((ulong)uVar6 >> 0x20);
  uVar6 = NEON_frsqrts(uVar7,CONCAT44(fVar3 * fVar3,fVar1 * fVar1),4);
  fVar1 = fVar1 * (float)uVar6;
  fVar3 = fVar3 * (float)((ulong)uVar6 >> 0x20);
  uVar7 = NEON_frsqrts(uVar7,CONCAT44(fVar3 * fVar3,fVar1 * fVar1),4);
  iVar5 = -(uint)(fVar2 <= 0.0);
  fVar2 = fVar2 * (float)uVar7 * fVar1;
  return (uint)((float)CONCAT13((byte)((uint)fVar2 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18),
                                CONCAT12((byte)((uint)fVar2 >> 0x10) & ~(byte)((uint)iVar5 >> 0x10),
                                         CONCAT11((byte)((uint)fVar2 >> 8) &
                                                  ~(byte)((uint)iVar5 >> 8),
                                                  SUB41(fVar2,0) & ~(byte)iVar5))) * 1.0039062) >>
         0x10;
}


