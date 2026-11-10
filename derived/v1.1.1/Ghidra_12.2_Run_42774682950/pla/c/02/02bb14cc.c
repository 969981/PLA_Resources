/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bb14cc; name: FUN_02bb14cc
 */


void FUN_02bb14cc(long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  uint local_68 [4];
  uint local_58;
  uint local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar4 = *(undefined4 **)(param_1 + 0xf0);
  for (puVar3 = *(undefined4 **)(param_1 + 0xe8); puVar3 != puVar4; puVar3 = puVar3 + 8) {
    lVar10 = *(long *)(puVar3 + 2);
    uVar1 = *puVar3;
    uVar2 = puVar3[1];
    if (lVar10 == 0) {
      local_68[0] = local_68[0] & 0xffffff00;
      puVar7 = local_68;
      local_58 = 0xffffffff;
      local_50 = *(undefined8 *)(*param_2 + 0x62a0);
      uStack_48 = *(undefined8 *)(*param_2 + 0x62a8);
      puVar8 = &local_54;
      puVar9 = &local_58;
    }
    else {
      uVar5 = *(uint *)(lVar10 + 0xa0);
      uVar12 = *(ulong *)(*(long *)(lVar10 + 0x98) + 0x138);
      uVar11 = (uint)uVar12;
      if (uVar5 < 3) {
        uVar11 = uVar11 & uVar5 - 1;
      }
      else {
        iVar6 = 0;
        if ((ulong)uVar5 != 0) {
          iVar6 = (int)(uVar12 / uVar5);
        }
        uVar11 = uVar11 - iVar6 * uVar5;
      }
      puVar7 = (uint *)FUN_02bc0470((long)(int)uVar11,lVar10 + 0x58);
      local_68[0] = 0xffffffff;
      if (*(char *)(puVar3 + 4) == '\0') {
        local_50 = *(undefined8 *)(*param_2 + 0x62a0);
        uStack_48 = *(undefined8 *)(*param_2 + 0x62a8);
      }
      else {
        local_50 = *(undefined8 *)(puVar3 + 4);
        uStack_48 = *(undefined8 *)(puVar3 + 6);
      }
      puVar8 = local_68;
      puVar9 = &local_54;
    }
    local_54 = 0xffffffff;
    FUN_02b9cf4c(param_2,uVar1,uVar2,puVar7,&local_50,puVar8,puVar9);
  }
  return;
}


