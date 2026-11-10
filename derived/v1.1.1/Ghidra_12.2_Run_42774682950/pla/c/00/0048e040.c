/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0048e040; name: FUN_0048e040
 */


long FUN_0048e040(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_f0 [64];
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [64];
  
  FUN_00494d70(auStack_70,param_1,param_1 + 0x40);
  lVar1 = param_1 + 0x80;
  FUN_00494d70(auStack_b0,lVar1,param_1 + 0xc0);
  uVar2 = FUN_004945a0(auStack_70,auStack_b0);
  FUN_004953f0(auStack_70,param_1);
  FUN_004953f0(auStack_b0,param_1 + 0x40);
  FUN_004943a0(auStack_70,auStack_b0,auStack_70);
  FUN_004953f0(auStack_b0,param_1 + 0xc0);
  FUN_00495240(auStack_f0,auStack_b0,0x98aa);
  FUN_004943a0(auStack_f0,&DAT_03a15a90,auStack_f0);
  FUN_004953f0(auStack_b0,lVar1);
  FUN_00494000(auStack_b0,auStack_b0,auStack_f0);
  uVar3 = FUN_004945a0(auStack_70,auStack_b0);
  uVar4 = FUN_004945a0(lVar1,&DAT_03a15a90);
  return (long)(int)(uVar3 & uVar2 & (uVar4 ^ 0xffffffff));
}


