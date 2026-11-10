/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004b8d10; name: FUN_004b8d10
 */


void FUN_004b8d10(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  undefined1 auStack_d8 [128];
  uint local_58;
  uint uStack_54;
  uint local_48;
  uint uStack_44;
  
  if (param_3 != 0) {
    pbVar3 = (byte *)(param_1 + 0xc);
    local_48 = (uint)*pbVar3;
    pbVar4 = (byte *)(param_1 + 0x14);
    local_58 = (uint)*pbVar4;
    uVar5 = 0;
    do {
      uVar1 = *(uint *)(param_2 + uVar5);
      uVar2 = ((uint *)(param_2 + uVar5))[1];
      *(byte *)(param_1 + 0xc) = (byte)local_48 & 0x9f | 0x40;
      *(byte *)(param_1 + 0x14) = (byte)local_58 & 0xbf | 0x20;
      local_58 = uVar1;
      uStack_54 = uVar2;
      local_48 = uVar1;
      uStack_44 = uVar2;
      FUN_0047d2c0(pbVar3);
      FUN_0047d330(pbVar3,auStack_d8);
      FUN_0047a3f0(&local_48,auStack_d8,1);
      FUN_0047d2c0(pbVar4);
      FUN_0047d330(pbVar4,auStack_d8);
      FUN_0047a3f0(&local_58,auStack_d8,1);
      uVar5 = uVar5 + 8;
      local_48 = local_48 ^ uVar1;
      *(char *)(param_1 + 0xd) = (char)(local_48 >> 8);
      *(char *)(param_1 + 0xe) = (char)(local_48 >> 0x10);
      *(char *)(param_1 + 0xf) = (char)(local_48 >> 0x18);
      uStack_54 = uStack_54 ^ uVar2;
      *(char *)(param_1 + 0x11) = (char)(uStack_54 >> 8);
      local_58 = local_58 ^ uVar1;
      uStack_44 = uStack_44 ^ uVar2;
      *(char *)(param_1 + 0x12) = (char)(uStack_54 >> 0x10);
      *(char *)(param_1 + 0x13) = (char)(uStack_54 >> 0x18);
      *(char *)(param_1 + 0x15) = (char)(local_58 >> 8);
      *(char *)(param_1 + 0x16) = (char)(local_58 >> 0x10);
      *(char *)(param_1 + 0x17) = (char)(local_58 >> 0x18);
      *(char *)(param_1 + 0x18) = (char)uStack_44;
      *(char *)(param_1 + 0x19) = (char)(uStack_44 >> 8);
      *(char *)(param_1 + 0xc) = (char)local_48;
      *(char *)(param_1 + 0x10) = (char)uStack_54;
      *(char *)(param_1 + 0x14) = (char)local_58;
      *(char *)(param_1 + 0x1a) = (char)(uStack_44 >> 0x10);
      *(char *)(param_1 + 0x1b) = (char)(uStack_44 >> 0x18);
    } while (uVar5 < param_3);
  }
  return;
}


