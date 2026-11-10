/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022e0c8; name: FUN_0022e0c8
 */


void FUN_0022e0c8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_80 = 0;
  local_78 = 0;
  FUN_00876ba8(&local_80);
  local_80 = CONCAT44(8,(undefined4)local_80);
  iVar2 = FUN_00877190(param_2,&local_80);
  local_70 = 0;
  uStack_68 = 0;
  lVar1 = 0;
  if (param_3 != 0) {
    lVar1 = param_4;
  }
  local_80 = 0;
  local_78 = 0;
  lVar9 = (long)(((ulong)(iVar2 + 0x1fU & -iVar2) << 0x20) + -0x2000000000) >> 0x20;
  FUN_00876bb0(&local_80);
  local_80 = CONCAT44(local_80._4_4_,0x22);
  lVar3 = FUN_00878470(param_2,&local_80);
  local_80 = 0;
  local_78 = 0;
  FUN_00876ba8(&local_80);
  local_80 = CONCAT44(4,(undefined4)local_80);
  uVar4 = FUN_00877190(param_2,&local_80);
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  local_78 = 0;
  FUN_00876bb0(&local_80);
  local_80 = CONCAT44(local_80._4_4_,0x22);
  uVar5 = FUN_00878468(param_2,&local_80);
  if (param_3 == 0) {
    uVar8 = lVar9 + lVar3 + 0x2bU & -lVar3;
    if (uVar5 <= uVar4) {
      uVar5 = uVar4;
    }
    uVar6 = FUN_00232638(uVar8,uVar5);
    *(undefined8 *)(param_1 + 0x50) = uVar6;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    local_78 = 0;
    FUN_00876bb0(&local_80);
    local_80 = CONCAT44((int)uVar8,0x22);
    local_78 = *(undefined8 *)(param_1 + 0x50);
    param_3 = param_1 + 0x88;
    FUN_00878498(param_3,param_2,&local_80);
  }
  local_80 = 0;
  local_78 = 0;
  FUN_00876ba8(&local_80);
  lVar3 = param_1 + 0x1a8;
  local_80 = 0x400000020;
  FUN_008772c0(lVar3,param_2,&local_80,param_3,lVar1,0x20);
  FUN_00877434(lVar3,param_1 + 0x1f0);
  puVar7 = (undefined8 *)FUN_008773dc(lVar3);
  *puVar7 = 0;
  puVar7[1] = 0x3f800000;
  puVar7[2] = 0x3f80000000000000;
  puVar7[3] = 0x3f8000003f800000;
  FUN_008773f0(lVar3);
  local_80 = 0;
  local_78 = 0;
  FUN_00876ba8(&local_80);
  lVar3 = param_1 + 0x200;
  local_80 = 0x80000000c;
  FUN_008772c0(lVar3,param_2,&local_80,param_3,lVar1 + lVar9 + 0x20,0xc);
  FUN_00877434(lVar3,param_1 + 0x248);
  puVar7 = (undefined8 *)FUN_008773dc(lVar3);
  *puVar7 = 0x300000001;
  *(undefined4 *)(puVar7 + 1) = 0x30002;
  FUN_008773f0(lVar3);
  return;
}


