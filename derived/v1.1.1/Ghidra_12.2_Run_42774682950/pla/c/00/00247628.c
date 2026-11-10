/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00247628; name: FUN_00247628
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00247628(long param_1,long param_2,int param_3)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ushort local_70;
  ushort uStack_6e;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  ulong uStack_58;
  ulong local_50;
  ulong uStack_48;
  float local_40;
  float fStack_3c;
  float local_38;
  float local_34;
  
  (**(code **)(**(long **)(param_1 + 0x48) + 0x20))(&local_70);
  fVar13 = (float)NEON_ucvtf((uint)local_70);
  local_38 = fVar13;
  (**(code **)(**(long **)(param_1 + 0x48) + 0x20))(&local_70);
  local_34 = (float)NEON_ucvtf((uint)uStack_6e);
  local_40 = fVar13 * -0.5;
  fStack_3c = local_34 * 0.5;
  puVar1 = (ulong *)(*(long *)(*(long *)(param_2 + 200) + 0x38) + (long)param_3);
  FUN_0023e3b4(&local_70,*(long *)(param_1 + 8) + 0x18,param_1 + 0x10);
  bVar9 = (*(byte *)(*(long *)(param_1 + 8) + 4) & 1) != 0;
  lVar2 = 0x90;
  if (bVar9) {
    lVar2 = 0x70;
  }
  *(uint *)((long)puVar1 + lVar2) = CONCAT22(uStack_6e,local_70);
  lVar2 = 0xa0;
  if (bVar9) {
    lVar2 = 0x80;
  }
  lVar3 = 0x94;
  if (bVar9) {
    lVar3 = 0x74;
  }
  lVar4 = 0x98;
  if (bVar9) {
    lVar4 = 0x78;
  }
  *(undefined4 *)((long)puVar1 + lVar3) = uStack_6c;
  *(undefined4 *)((long)puVar1 + lVar4) = 0;
  lVar3 = 0x9c;
  if (bVar9) {
    lVar3 = 0x7c;
  }
  lVar4 = 0xa4;
  if (bVar9) {
    lVar4 = 0x84;
  }
  *(undefined4 *)((long)puVar1 + lVar3) = uStack_68;
  *(undefined4 *)((long)puVar1 + lVar2) = uStack_64;
  lVar2 = 0xa8;
  if (bVar9) {
    lVar2 = 0x88;
  }
  *(undefined4 *)((long)puVar1 + lVar4) = local_60;
  *(undefined4 *)((long)puVar1 + lVar2) = 0;
  lVar2 = 0xac;
  if (bVar9) {
    lVar2 = 0x8c;
  }
  *(undefined4 *)((long)puVar1 + lVar2) = local_5c;
  FUN_0022d1f0(param_2,puVar1,&local_40,&local_38,1,&DAT_039cfc04);
  fVar10 = local_40 + local_40 + local_38;
  fVar12 = 1.0 / ((local_40 + local_38) - local_40);
  fVar13 = fStack_3c + (fStack_3c - local_34);
  fVar11 = 1.0 / ((fStack_3c - local_34) - fStack_3c);
  FUN_00251180(&local_70,param_2);
  puVar1[1] = (ulong)(uint)-(fVar10 * fVar12) << 0x20;
  *puVar1 = (ulong)(uint)(fVar12 + fVar12);
  uVar6 = _UNK_038899f8;
  uVar5 = _DAT_038899f0;
  puVar1[3] = (ulong)(uint)-(fVar13 * fVar11) << 0x20;
  puVar1[2] = (ulong)(uint)(fVar11 + fVar11) << 0x20;
  uVar8 = _UNK_0388a138;
  uVar7 = _DAT_0388a130;
  puVar1[5] = uVar6;
  puVar1[4] = uVar5;
  puVar1[7] = uVar8;
  puVar1[6] = uVar7;
  puVar1[0xd] = uStack_48;
  puVar1[0xc] = local_50;
  puVar1[9] = CONCAT44(uStack_64,uStack_68);
  puVar1[8] = CONCAT44(uStack_6c,CONCAT22(uStack_6e,local_70));
  puVar1[0xb] = uStack_58;
  puVar1[10] = CONCAT44(local_5c,local_60);
  return;
}


