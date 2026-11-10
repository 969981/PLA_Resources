/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03186670; name: FUN_03186670
 */


uint FUN_03186670(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_50 [8];
  float fStack_48;
  undefined1 auStack_40 [8];
  float fStack_38;
  undefined1 local_30 [8];
  float fStack_28;
  undefined1 auStack_20 [8];
  float fStack_18;
  
  FUN_031865f0(param_1,local_50,auStack_40,local_30,auStack_20);
  fVar1 = (local_50._0_4_ + auStack_40._0_4_) * 0.5 - (local_30._0_4_ + auStack_20._0_4_) * 0.5;
  fVar3 = (local_50._4_4_ + auStack_40._4_4_) * 0.5 - (local_30._4_4_ + auStack_20._4_4_) * 0.5;
  fVar4 = (fStack_48 + fStack_38) * 0.5 - (fStack_28 + fStack_18) * 0.5;
  fVar1 = fVar1 * fVar1;
  fVar3 = fVar3 * fVar3;
  fVar4 = fVar4 * fVar4;
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
  fVar2 = (float)uVar7 * fVar1 * fVar2;
  return (uint)((float)CONCAT13((byte)((uint)fVar2 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18),
                                CONCAT12((byte)((uint)fVar2 >> 0x10) & ~(byte)((uint)iVar5 >> 0x10),
                                         CONCAT11((byte)((uint)fVar2 >> 8) &
                                                  ~(byte)((uint)iVar5 >> 8),
                                                  SUB41(fVar2,0) & ~(byte)iVar5))) * 1.0039062) >>
         0x10;
}


