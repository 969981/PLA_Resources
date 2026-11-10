/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004b2d40; name: FUN_004b2d40
 */


void FUN_004b2d40(uint *param_1,undefined1 *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar5;
  uint uVar4;
  uint uVar7;
  uint uVar6;
  uint uVar8;
  uint uVar9;
  
  uVar4 = (param_1[2] & 0xff00ff00) >> 8 | (param_1[2] & 0xff00ff) << 8;
  uVar5 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar4 = param_3[0x1e] ^ uVar5;
  uVar6 = (param_1[3] & 0xff00ff00) >> 8 | (param_1[3] & 0xff00ff) << 8;
  uVar7 = uVar6 >> 0x10 | uVar6 << 0x10;
  uVar6 = uVar4 ^ param_3[0x1f] ^ uVar7;
  uVar6 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar6 >> 0x18) * 4);
  uVar4 = uVar6 + uVar4;
  uVar4 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar4 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar4 >> 0x18) * 4);
  uVar6 = uVar4 + uVar6;
  uVar6 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar6 >> 0x18) * 4);
  uVar8 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  uVar9 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
  uVar9 = uVar6 ^ (uVar9 >> 0x10 | uVar9 << 0x10);
  uVar8 = uVar6 + uVar4 ^ (uVar8 >> 0x10 | uVar8 << 0x10);
  uVar4 = uVar8 ^ param_3[0x1c];
  uVar6 = uVar9 ^ param_3[0x1d] ^ uVar4;
  uVar6 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar6 >> 0x18) * 4);
  uVar4 = uVar6 + uVar4;
  uVar4 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar4 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar4 >> 0x18) * 4);
  uVar6 = uVar4 + uVar6;
  uVar6 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar6 >> 0x18) * 4);
  uVar7 = uVar6 ^ uVar7;
  uVar5 = uVar6 + uVar4 ^ uVar5;
  uVar4 = uVar5 ^ param_3[0x1a];
  uVar6 = uVar7 ^ param_3[0x1b] ^ uVar4;
  uVar6 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar6 >> 0x18) * 4);
  uVar4 = uVar6 + uVar4;
  uVar4 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar4 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar4 >> 0x18) * 4);
  uVar6 = uVar4 + uVar6;
  uVar6 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar6 >> 0x18) * 4);
  uVar9 = uVar6 ^ uVar9;
  uVar8 = uVar6 + uVar4 ^ uVar8;
  uVar4 = uVar8 ^ param_3[0x18];
  uVar6 = uVar9 ^ param_3[0x19] ^ uVar4;
  uVar6 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar6 >> 0x18) * 4);
  uVar4 = uVar6 + uVar4;
  uVar4 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar4 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar4 >> 0x18) * 4);
  uVar6 = uVar4 + uVar6;
  uVar6 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar6 >> 0x18) * 4);
  uVar7 = uVar6 ^ uVar7;
  uVar5 = uVar6 + uVar4 ^ uVar5;
  uVar4 = uVar5 ^ param_3[0x16];
  uVar6 = uVar7 ^ param_3[0x17] ^ uVar4;
  uVar6 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar6 >> 0x18) * 4);
  uVar4 = uVar6 + uVar4;
  uVar4 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar4 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar4 >> 0x18) * 4);
  uVar6 = uVar4 + uVar6;
  uVar6 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar6 >> 0x18) * 4);
  uVar9 = uVar6 ^ uVar9;
  uVar8 = uVar6 + uVar4 ^ uVar8;
  uVar4 = uVar8 ^ param_3[0x14];
  uVar6 = uVar9 ^ param_3[0x15] ^ uVar4;
  uVar6 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar6 >> 0x18) * 4);
  uVar4 = uVar6 + uVar4;
  uVar4 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar4 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar4 >> 0x18) * 4);
  uVar6 = uVar4 + uVar6;
  uVar6 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar6 >> 0x18) * 4);
  uVar7 = uVar6 ^ uVar7;
  uVar5 = uVar6 + uVar4 ^ uVar5;
  uVar4 = uVar5 ^ param_3[0x12];
  uVar6 = uVar7 ^ param_3[0x13] ^ uVar4;
  uVar6 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar6 >> 0x18) * 4);
  uVar4 = uVar6 + uVar4;
  uVar4 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar4 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar4 >> 0x18) * 4);
  uVar6 = uVar4 + uVar6;
  uVar6 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar6 >> 0x18) * 4);
  uVar9 = uVar6 ^ uVar9;
  uVar8 = uVar6 + uVar4 ^ uVar8;
  uVar4 = uVar8 ^ param_3[0x10];
  uVar6 = uVar9 ^ param_3[0x11] ^ uVar4;
  uVar6 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar6 >> 0x18) * 4);
  uVar4 = uVar6 + uVar4;
  uVar4 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar4 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar4 >> 0x18) * 4);
  uVar6 = uVar4 + uVar6;
  uVar6 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar6 >> 0x18) * 4);
  uVar7 = uVar6 ^ uVar7;
  uVar5 = uVar6 + uVar4 ^ uVar5;
  uVar4 = uVar5 ^ param_3[0xe];
  uVar6 = uVar7 ^ param_3[0xf] ^ uVar4;
  uVar6 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar6 >> 0x18) * 4);
  uVar4 = uVar6 + uVar4;
  uVar4 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar4 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar4 >> 0x18) * 4);
  uVar6 = uVar4 + uVar6;
  uVar6 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar6 >> 0x18) * 4);
  uVar9 = uVar6 ^ uVar9;
  uVar8 = uVar6 + uVar4 ^ uVar8;
  uVar4 = uVar8 ^ param_3[0xc];
  uVar6 = uVar9 ^ param_3[0xd] ^ uVar4;
  uVar6 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar6 >> 0x18) * 4);
  uVar4 = uVar6 + uVar4;
  uVar4 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar4 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar4 >> 0x18) * 4);
  uVar6 = uVar4 + uVar6;
  uVar6 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar6 >> 0x18) * 4);
  uVar7 = uVar6 ^ uVar7;
  uVar5 = uVar6 + uVar4 ^ uVar5;
  uVar4 = uVar5 ^ param_3[10];
  uVar6 = uVar7 ^ param_3[0xb] ^ uVar4;
  uVar6 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar6 >> 0x18) * 4);
  uVar4 = uVar6 + uVar4;
  uVar4 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar4 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar4 >> 0x18) * 4);
  uVar6 = uVar4 + uVar6;
  uVar6 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar6 >> 0x18) * 4);
  uVar9 = uVar6 ^ uVar9;
  uVar8 = uVar6 + uVar4 ^ uVar8;
  uVar4 = uVar8 ^ param_3[8];
  uVar6 = uVar9 ^ param_3[9] ^ uVar4;
  uVar6 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar6 >> 0x18) * 4);
  uVar4 = uVar6 + uVar4;
  uVar4 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar4 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar4 >> 0x18) * 4);
  uVar6 = uVar4 + uVar6;
  uVar6 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar6 >> 0x18) * 4);
  uVar7 = uVar6 ^ uVar7;
  uVar5 = uVar6 + uVar4 ^ uVar5;
  uVar4 = uVar5 ^ param_3[6];
  uVar6 = uVar7 ^ param_3[7] ^ uVar4;
  uVar6 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar6 >> 0x18) * 4);
  uVar4 = uVar6 + uVar4;
  uVar4 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar4 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar4 >> 0x18) * 4);
  uVar6 = uVar4 + uVar6;
  uVar6 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar6 >> 0x18) * 4);
  uVar9 = uVar6 ^ uVar9;
  uVar8 = uVar6 + uVar4 ^ uVar8;
  uVar4 = uVar8 ^ param_3[4];
  uVar6 = uVar9 ^ param_3[5] ^ uVar4;
  uVar6 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar6 >> 0x18) * 4);
  uVar4 = uVar6 + uVar4;
  uVar4 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar4 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar4 >> 0x18) * 4);
  uVar6 = uVar4 + uVar6;
  uVar6 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar6 >> 0x18) * 4);
  uVar7 = uVar6 ^ uVar7;
  uVar5 = uVar6 + uVar4 ^ uVar5;
  uVar4 = uVar5 ^ param_3[2];
  uVar6 = uVar7 ^ param_3[3] ^ uVar4;
  uVar6 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar6 >> 0x18) * 4);
  uVar4 = uVar6 + uVar4;
  uVar4 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar4 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar4 >> 0x18) * 4);
  uVar6 = uVar4 + uVar6;
  uVar6 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar6 >> 0x18) * 4);
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar9 = uVar6 ^ uVar9;
  uVar8 = uVar6 + uVar4 ^ uVar8;
  param_2[0xc] = (char)(uVar9 >> 0x18);
  uVar4 = uVar9 ^ uVar2 ^ uVar8 ^ uVar1;
  param_2[0xb] = (char)uVar8;
  param_2[0xd] = (char)(uVar9 >> 0x10);
  param_2[8] = (char)(uVar8 >> 0x18);
  param_2[9] = (char)(uVar8 >> 0x10);
  uVar6 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar4 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar4 >> 0x18) * 4);
  uVar4 = uVar6 + (uVar8 ^ uVar1);
  uVar4 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03a213d0 + (ulong)(uVar4 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21bd0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03a21fd0 + (ulong)(uVar4 >> 0x18) * 4);
  uVar6 = uVar4 + uVar6;
  uVar1 = *(uint *)(&DAT_03a213d0 + (ulong)(uVar6 & 0xff) * 4);
  uVar2 = *(uint *)(&DAT_03a217d0 + (ulong)(uVar6 >> 8 & 0xff) * 4);
  uVar3 = *(uint *)(&DAT_03a21bd0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4);
  uVar6 = *(uint *)(&DAT_03a21fd0 + (ulong)(uVar6 >> 0x18) * 4);
  param_2[10] = (char)(uVar8 >> 8);
  param_2[0xf] = (char)uVar9;
  uVar6 = uVar2 ^ uVar1 ^ uVar3 ^ uVar6;
  uVar7 = uVar6 ^ uVar7;
  param_2[7] = (char)uVar7;
  uVar5 = uVar6 + uVar4 ^ uVar5;
  param_2[4] = (char)(uVar7 >> 0x18);
  param_2[6] = (char)(uVar7 >> 8);
  param_2[3] = (char)uVar5;
  param_2[5] = (char)(uVar7 >> 0x10);
  *param_2 = (char)(uVar5 >> 0x18);
  param_2[2] = (char)(uVar5 >> 8);
  param_2[1] = (char)(uVar5 >> 0x10);
  param_2[0xe] = (char)(uVar9 >> 8);
  return;
}


