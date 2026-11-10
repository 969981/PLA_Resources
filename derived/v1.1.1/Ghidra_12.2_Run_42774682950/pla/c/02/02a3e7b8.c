/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a3e7b8; name: FUN_02a3e7b8
 */


void FUN_02a3e7b8(uint *param_1,undefined4 param_2,undefined1 param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar5 = *param_1;
  uVar6 = uVar5 + 2;
  *(char *)((long)param_1 + (ulong)uVar5 + 8) = (char)((uint)param_2 >> 8);
  *param_1 = uVar6;
  *(char *)((long)param_1 + (ulong)(uVar5 + 1) + 8) = (char)param_2;
  switch(param_3) {
  case 1:
    uVar7 = *param_4;
    iVar8 = 3;
    break;
  case 2:
    uVar7 = *param_4;
    *param_1 = uVar5 + 3;
    *(char *)((long)param_1 + (ulong)uVar6 + 8) = (char)uVar7;
    uVar7 = param_4[1];
    goto LAB_02a3f0a8;
  case 3:
    uVar7 = *param_4;
    uVar1 = param_4[1];
    *param_1 = uVar5 + 3;
    *(byte *)((long)param_1 + (ulong)uVar6 + 8) = (byte)uVar1 & 7 | (byte)(uVar7 << 3);
    uVar7 = param_4[2];
    goto LAB_02a3f0a8;
  case 4:
    uVar7 = *param_4;
    uVar1 = param_4[1];
    *param_1 = uVar5 + 3;
    *(byte *)((long)param_1 + (ulong)uVar6 + 8) = (byte)uVar1 & 7 | (byte)(uVar7 << 3);
    uVar6 = param_4[2];
    *param_1 = uVar5 + 4;
    *(char *)((long)param_1 + (ulong)(uVar5 + 3) + 8) = (char)uVar6;
    uVar7 = param_4[3];
    goto LAB_02a3ed1c;
  case 5:
    uVar7 = param_4[1];
    uVar1 = param_4[2];
    *(byte *)((long)param_1 + (ulong)uVar6 + 8) =
         (byte)((uVar7 << 5) >> 8) & 3 | (byte)(((*param_4 & 0x1f) << 10) >> 8);
    *param_1 = uVar5 + 4;
    *(byte *)((long)param_1 + (ulong)(uVar5 + 3) + 8) = (byte)(uVar7 << 5) | (byte)uVar1 & 0x1f;
    uVar6 = param_4[3];
    *(char *)((long)param_1 + (ulong)(uVar5 + 4) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 6;
    *(char *)((long)param_1 + (ulong)(uVar5 + 5) + 8) = (char)uVar6;
    uVar7 = param_4[4];
    uVar6 = uVar5 + 7;
    *(char *)((long)param_1 + (ulong)(uVar5 + 6) + 8) = (char)(uVar7 >> 8);
    iVar8 = 8;
    break;
  case 6:
    uVar3 = param_4[1];
    uVar1 = param_4[4];
    uVar7 = param_4[5];
    uVar2 = param_4[2];
    uVar4 = param_4[3];
    *(byte *)((long)param_1 + (ulong)uVar6 + 8) =
         (byte)((uVar3 << 5) >> 8) & 3 | (byte)(((*param_4 & 0x1f) << 10) >> 8);
    uVar7 = uVar1 << 5 | uVar7 & 0x1f;
    *(byte *)((long)param_1 + (ulong)(uVar5 + 3) + 8) = (byte)(uVar3 << 5) | (byte)uVar2 & 0x1f;
    uVar6 = uVar5 + 5;
    *(byte *)((long)param_1 + (ulong)(uVar5 + 4) + 8) =
         (byte)((uVar1 << 5) >> 8) & 3 | (byte)(((uVar4 & 0x1f) << 10) >> 8);
    iVar8 = 6;
    break;
  case 7:
    uVar7 = *param_4;
    *param_1 = uVar5 + 3;
    *(char *)((long)param_1 + (ulong)uVar6 + 8) = (char)uVar7;
    uVar6 = param_4[1];
    *param_1 = uVar5 + 4;
    *(char *)((long)param_1 + (ulong)(uVar5 + 3) + 8) = (char)uVar6;
    uVar6 = param_4[2];
    *param_1 = uVar5 + 5;
    *(char *)((long)param_1 + (ulong)(uVar5 + 4) + 8) = (char)uVar6;
    uVar6 = param_4[3];
    *param_1 = uVar5 + 6;
    *(char *)((long)param_1 + (ulong)(uVar5 + 5) + 8) = (char)uVar6;
    uVar6 = param_4[4];
    *param_1 = uVar5 + 7;
    *(char *)((long)param_1 + (ulong)(uVar5 + 6) + 8) = (char)uVar6;
    uVar7 = param_4[5];
    uVar6 = uVar5 + 8;
    *param_1 = uVar6;
    *(char *)((long)param_1 + (ulong)(uVar5 + 7) + 8) = (char)uVar7;
    uVar7 = param_4[6];
    iVar8 = 9;
    break;
  case 8:
    uVar7 = *param_4;
    *param_1 = uVar5 + 3;
    *(char *)((long)param_1 + (ulong)uVar6 + 8) = (char)uVar7;
    uVar6 = param_4[1];
    *param_1 = uVar5 + 4;
    *(char *)((long)param_1 + (ulong)(uVar5 + 3) + 8) = (char)uVar6;
    uVar6 = param_4[2];
    *param_1 = uVar5 + 5;
    *(char *)((long)param_1 + (ulong)(uVar5 + 4) + 8) = (char)uVar6;
    uVar6 = param_4[3];
    *param_1 = uVar5 + 6;
    *(char *)((long)param_1 + (ulong)(uVar5 + 5) + 8) = (char)uVar6;
    uVar6 = param_4[4];
    *param_1 = uVar5 + 7;
    *(char *)((long)param_1 + (ulong)(uVar5 + 6) + 8) = (char)uVar6;
    uVar6 = param_4[5];
    *param_1 = uVar5 + 8;
    *(char *)((long)param_1 + (ulong)(uVar5 + 7) + 8) = (char)uVar6;
    uVar7 = param_4[6];
    uVar6 = uVar5 + 9;
    *param_1 = uVar6;
    *(char *)((long)param_1 + (ulong)(uVar5 + 8) + 8) = (char)uVar7;
    uVar7 = param_4[7];
    iVar8 = 10;
    break;
  case 9:
    uVar7 = *param_4;
    *param_1 = uVar5 + 3;
    *(char *)((long)param_1 + (ulong)uVar6 + 8) = (char)uVar7;
    uVar6 = param_4[1];
    *param_1 = uVar5 + 4;
    *(char *)((long)param_1 + (ulong)(uVar5 + 3) + 8) = (char)uVar6;
    uVar6 = param_4[2];
    *param_1 = uVar5 + 5;
    *(char *)((long)param_1 + (ulong)(uVar5 + 4) + 8) = (char)uVar6;
    uVar6 = param_4[3];
    *param_1 = uVar5 + 6;
    *(char *)((long)param_1 + (ulong)(uVar5 + 5) + 8) = (char)uVar6;
    uVar6 = param_4[4];
    *param_1 = uVar5 + 7;
    *(char *)((long)param_1 + (ulong)(uVar5 + 6) + 8) = (char)uVar6;
    uVar6 = param_4[5];
    *param_1 = uVar5 + 8;
    *(char *)((long)param_1 + (ulong)(uVar5 + 7) + 8) = (char)uVar6;
    uVar6 = param_4[6];
    *param_1 = uVar5 + 9;
    *(char *)((long)param_1 + (ulong)(uVar5 + 8) + 8) = (char)uVar6;
    uVar7 = param_4[7];
    uVar6 = uVar5 + 10;
    *param_1 = uVar6;
    *(char *)((long)param_1 + (ulong)(uVar5 + 9) + 8) = (char)uVar7;
    uVar7 = param_4[8];
    iVar8 = 0xb;
    break;
  default:
    goto switchD_02a3e7fc_caseD_a;
  case 0x10:
  case 0x20:
    uVar7 = *param_4;
    *(char *)((long)param_1 + (ulong)uVar6 + 8) = (char)(uVar7 >> 8);
    *param_1 = uVar5 + 4;
    *(char *)((long)param_1 + (ulong)(uVar5 + 3) + 8) = (char)uVar7;
    uVar6 = param_4[1];
    *(char *)((long)param_1 + (ulong)(uVar5 + 4) + 8) = (char)(uVar6 >> 0x18);
    *(char *)((long)param_1 + (ulong)(uVar5 + 5) + 8) = (char)(uVar6 >> 0x10);
    *(char *)((long)param_1 + (ulong)(uVar5 + 6) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 8;
    *(char *)((long)param_1 + (ulong)(uVar5 + 7) + 8) = (char)uVar6;
    uVar6 = param_4[2];
    *(char *)((long)param_1 + (ulong)(uVar5 + 8) + 8) = (char)(uVar6 >> 0x18);
    *(char *)((long)param_1 + (ulong)(uVar5 + 9) + 8) = (char)(uVar6 >> 0x10);
    *(char *)((long)param_1 + (ulong)(uVar5 + 10) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 0xc;
    *(char *)((long)param_1 + (ulong)(uVar5 + 0xb) + 8) = (char)uVar6;
    uVar6 = param_4[3];
    *(char *)((long)param_1 + (ulong)(uVar5 + 0xc) + 8) = (char)(uVar6 >> 0x18);
    *(char *)((long)param_1 + (ulong)(uVar5 + 0xd) + 8) = (char)(uVar6 >> 0x10);
    *(char *)((long)param_1 + (ulong)(uVar5 + 0xe) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 0x10;
    *(char *)((long)param_1 + (ulong)(uVar5 + 0xf) + 8) = (char)uVar6;
    uVar6 = param_4[4];
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x10) + 8) = (char)(uVar6 >> 0x18);
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x11) + 8) = (char)(uVar6 >> 0x10);
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x12) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 0x14;
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x13) + 8) = (char)uVar6;
    uVar6 = param_4[5];
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x14) + 8) = (char)(uVar6 >> 0x18);
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x15) + 8) = (char)(uVar6 >> 0x10);
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x16) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 0x18;
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x17) + 8) = (char)uVar6;
    uVar6 = param_4[6];
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x18) + 8) = (char)(uVar6 >> 0x18);
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x19) + 8) = (char)(uVar6 >> 0x10);
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x1a) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 0x1c;
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x1b) + 8) = (char)uVar6;
    uVar6 = param_4[7];
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x1c) + 8) = (char)(uVar6 >> 0x18);
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x1d) + 8) = (char)(uVar6 >> 0x10);
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x1e) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 0x20;
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x1f) + 8) = (char)uVar6;
    uVar7 = param_4[8];
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x20) + 8) = (char)(uVar7 >> 0x18);
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x21) + 8) = (char)(uVar7 >> 0x10);
    uVar6 = uVar5 + 0x23;
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x22) + 8) = (char)(uVar7 >> 8);
    iVar8 = 0x24;
    break;
  case 0x11:
    uVar7 = *param_4;
    uVar1 = uVar7;
    goto LAB_02a3f09c;
  case 0x12:
    uVar7 = *param_4;
    *param_1 = uVar5 + 3;
    *(char *)((long)param_1 + (ulong)uVar6 + 8) = (char)uVar7;
    uVar7 = param_4[1];
    goto LAB_02a3f124;
  case 0x13:
    uVar7 = *param_4;
    uVar1 = param_4[1];
    *param_1 = uVar5 + 3;
    *(byte *)((long)param_1 + (ulong)uVar6 + 8) = (byte)uVar1 & 7 | (byte)(uVar7 << 3);
    uVar7 = param_4[2];
    uVar6 = uVar5 + 4;
    *(char *)((long)param_1 + (ulong)(uVar5 + 3) + 8) = (char)(uVar7 >> 8);
    iVar8 = 5;
    break;
  case 0x14:
    uVar7 = *param_4;
    uVar1 = param_4[1];
    *param_1 = uVar5 + 3;
    *(byte *)((long)param_1 + (ulong)uVar6 + 8) = (byte)uVar1 & 7 | (byte)(uVar7 << 3);
    uVar7 = param_4[3] & 7 | param_4[2] << 3;
    goto LAB_02a3f0a8;
  case 0x15:
    uVar7 = param_4[2];
    uVar1 = param_4[3];
    *(byte *)((long)param_1 + (ulong)uVar6 + 8) = (byte)param_4[1] & 7 | (byte)(*param_4 << 3);
    *param_1 = uVar5 + 4;
    *(byte *)((long)param_1 + (ulong)(uVar5 + 3) + 8) = (byte)uVar1 & 1 | (byte)(uVar7 << 1);
    uVar7 = param_4[4];
LAB_02a3ed1c:
    uVar6 = uVar5 + 5;
    *(char *)((long)param_1 + (ulong)(uVar5 + 4) + 8) = (char)(uVar7 >> 8);
    iVar8 = 6;
    break;
  case 0x16:
    uVar7 = *param_4;
    uVar2 = param_4[1];
    uVar1 = param_4[2];
    uVar3 = param_4[3];
    uVar4 = param_4[4];
    *param_1 = uVar5 + 3;
    *(byte *)((long)param_1 + (ulong)uVar6 + 8) =
         (byte)(uVar7 << 5) | (byte)((uVar2 & 3) << 3) | (byte)((uVar1 & 1) << 2) |
         (byte)((uVar3 & 1) << 1) | (byte)uVar4 & 1;
    uVar7 = param_4[5];
    goto LAB_02a3f124;
  case 0x17:
    uVar7 = *param_4;
    *(char *)((long)param_1 + (ulong)uVar6 + 8) = (char)(uVar7 >> 8);
    *param_1 = uVar5 + 4;
    *(char *)((long)param_1 + (ulong)(uVar5 + 3) + 8) = (char)uVar7;
    uVar6 = param_4[1];
    *(char *)((long)param_1 + (ulong)(uVar5 + 4) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 6;
    *(char *)((long)param_1 + (ulong)(uVar5 + 5) + 8) = (char)uVar6;
    uVar6 = param_4[2];
    *(char *)((long)param_1 + (ulong)(uVar5 + 6) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 8;
    *(char *)((long)param_1 + (ulong)(uVar5 + 7) + 8) = (char)uVar6;
    uVar6 = param_4[3];
    *(char *)((long)param_1 + (ulong)(uVar5 + 8) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 10;
    *(char *)((long)param_1 + (ulong)(uVar5 + 9) + 8) = (char)uVar6;
    uVar6 = param_4[4];
    *(char *)((long)param_1 + (ulong)(uVar5 + 10) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 0xc;
    *(char *)((long)param_1 + (ulong)(uVar5 + 0xb) + 8) = (char)uVar6;
    uVar6 = param_4[5];
    *(char *)((long)param_1 + (ulong)(uVar5 + 0xc) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 0xe;
    *(char *)((long)param_1 + (ulong)(uVar5 + 0xd) + 8) = (char)uVar6;
    uVar7 = param_4[6];
    uVar6 = uVar5 + 0xf;
    *(char *)((long)param_1 + (ulong)(uVar5 + 0xe) + 8) = (char)(uVar7 >> 8);
    iVar8 = 0x10;
    break;
  case 0x18:
    uVar7 = *param_4;
    *(char *)((long)param_1 + (ulong)uVar6 + 8) = (char)(uVar7 >> 8);
    *param_1 = uVar5 + 4;
    *(char *)((long)param_1 + (ulong)(uVar5 + 3) + 8) = (char)uVar7;
    uVar6 = param_4[1];
    *(char *)((long)param_1 + (ulong)(uVar5 + 4) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 6;
    *(char *)((long)param_1 + (ulong)(uVar5 + 5) + 8) = (char)uVar6;
    uVar6 = param_4[2];
    *(char *)((long)param_1 + (ulong)(uVar5 + 6) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 8;
    *(char *)((long)param_1 + (ulong)(uVar5 + 7) + 8) = (char)uVar6;
    uVar6 = param_4[3];
    *(char *)((long)param_1 + (ulong)(uVar5 + 8) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 10;
    *(char *)((long)param_1 + (ulong)(uVar5 + 9) + 8) = (char)uVar6;
    uVar6 = param_4[4];
    *(char *)((long)param_1 + (ulong)(uVar5 + 10) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 0xc;
    *(char *)((long)param_1 + (ulong)(uVar5 + 0xb) + 8) = (char)uVar6;
    uVar6 = param_4[5];
    *(char *)((long)param_1 + (ulong)(uVar5 + 0xc) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 0xe;
    *(char *)((long)param_1 + (ulong)(uVar5 + 0xd) + 8) = (char)uVar6;
    uVar6 = param_4[6];
    *(char *)((long)param_1 + (ulong)(uVar5 + 0xe) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 0x10;
    *(char *)((long)param_1 + (ulong)(uVar5 + 0xf) + 8) = (char)uVar6;
    uVar7 = param_4[7];
    uVar6 = uVar5 + 0x11;
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x10) + 8) = (char)(uVar7 >> 8);
    iVar8 = 0x12;
    break;
  case 0x19:
    uVar7 = *param_4;
    *(char *)((long)param_1 + (ulong)uVar6 + 8) = (char)(uVar7 >> 8);
    *param_1 = uVar5 + 4;
    *(char *)((long)param_1 + (ulong)(uVar5 + 3) + 8) = (char)uVar7;
    uVar6 = param_4[1];
    *(char *)((long)param_1 + (ulong)(uVar5 + 4) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 6;
    *(char *)((long)param_1 + (ulong)(uVar5 + 5) + 8) = (char)uVar6;
    uVar6 = param_4[2];
    *(char *)((long)param_1 + (ulong)(uVar5 + 6) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 8;
    *(char *)((long)param_1 + (ulong)(uVar5 + 7) + 8) = (char)uVar6;
    uVar6 = param_4[3];
    *(char *)((long)param_1 + (ulong)(uVar5 + 8) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 10;
    *(char *)((long)param_1 + (ulong)(uVar5 + 9) + 8) = (char)uVar6;
    uVar6 = param_4[4];
    *(char *)((long)param_1 + (ulong)(uVar5 + 10) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 0xc;
    *(char *)((long)param_1 + (ulong)(uVar5 + 0xb) + 8) = (char)uVar6;
    uVar6 = param_4[5];
    *(char *)((long)param_1 + (ulong)(uVar5 + 0xc) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 0xe;
    *(char *)((long)param_1 + (ulong)(uVar5 + 0xd) + 8) = (char)uVar6;
    uVar6 = param_4[6];
    *(char *)((long)param_1 + (ulong)(uVar5 + 0xe) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 0x10;
    *(char *)((long)param_1 + (ulong)(uVar5 + 0xf) + 8) = (char)uVar6;
    uVar6 = param_4[7];
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x10) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 0x12;
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x11) + 8) = (char)uVar6;
    uVar7 = param_4[8];
    uVar6 = uVar5 + 0x13;
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x12) + 8) = (char)(uVar7 >> 8);
    iVar8 = 0x14;
    break;
  case 0x21:
    uVar7 = *param_4;
    *(char *)((long)param_1 + (ulong)uVar6 + 8) = (char)(uVar7 >> 0x18);
    *(char *)((long)param_1 + (ulong)(uVar5 + 3) + 8) = (char)(uVar7 >> 0x10);
    uVar6 = uVar5 + 5;
    *(char *)((long)param_1 + (ulong)(uVar5 + 4) + 8) = (char)(uVar7 >> 8);
    iVar8 = 6;
    break;
  case 0x22:
    uVar7 = *param_4;
    *param_1 = uVar5 + 3;
    *(char *)((long)param_1 + (ulong)uVar6 + 8) = (char)uVar7;
    uVar7 = param_4[1];
    *(char *)((long)param_1 + (ulong)(uVar5 + 3) + 8) = (char)(uVar7 >> 0x18);
    *(char *)((long)param_1 + (ulong)(uVar5 + 4) + 8) = (char)(uVar7 >> 0x10);
    uVar6 = uVar5 + 6;
    *(char *)((long)param_1 + (ulong)(uVar5 + 5) + 8) = (char)(uVar7 >> 8);
    iVar8 = 7;
    break;
  case 0x23:
    uVar7 = param_4[1] << 5 | param_4[2] & 0x1f;
    uVar1 = param_4[1] << 5 & 0x300 | (*param_4 & 0x1f) << 10;
LAB_02a3f09c:
    *(char *)((long)param_1 + (ulong)uVar6 + 8) = (char)(uVar1 >> 8);
LAB_02a3f0a8:
    uVar6 = uVar5 + 3;
    iVar8 = 4;
    break;
  case 0x24:
    uVar7 = param_4[1];
    uVar1 = param_4[2];
    *(byte *)((long)param_1 + (ulong)uVar6 + 8) =
         (byte)((uVar7 << 0xe) >> 0x10) & 7 | (byte)((*param_4 << 0x13) >> 0x10);
    *(byte *)((long)param_1 + (ulong)(uVar5 + 3) + 8) =
         (byte)((uVar7 << 0xe) >> 8) | (byte)(uVar1 >> 8) & 0x3f;
    *param_1 = uVar5 + 5;
    *(char *)((long)param_1 + (ulong)(uVar5 + 4) + 8) = (char)uVar1;
    goto LAB_02a3f7f4;
  case 0x25:
    uVar7 = *param_4;
    uVar2 = param_4[1];
    uVar1 = param_4[2];
    uVar3 = param_4[3];
    *param_1 = uVar5 + 3;
    *(byte *)((long)param_1 + (ulong)uVar6 + 8) =
         (byte)(uVar7 << 5) | (byte)((uVar2 & 7) << 2) | (byte)((uVar1 & 1) << 1) | (byte)uVar3 & 1;
    uVar7 = param_4[4];
LAB_02a3f124:
    uVar6 = uVar5 + 4;
    *(char *)((long)param_1 + (ulong)(uVar5 + 3) + 8) = (char)(uVar7 >> 8);
    iVar8 = 5;
    break;
  case 0x26:
    uVar7 = *param_4;
    uVar2 = param_4[1];
    uVar1 = param_4[2];
    uVar3 = param_4[3];
    *(byte *)((long)param_1 + (ulong)uVar6 + 8) = (byte)(uVar7 >> 1) & 0xf;
    *(byte *)((long)param_1 + (ulong)(uVar5 + 3) + 8) =
         (byte)((uVar7 << 0xf) >> 8) | (byte)(((uVar2 & 0x1f) << 10) >> 8) |
         (byte)((uVar1 << 5) >> 8) & 3;
    *param_1 = uVar5 + 5;
    *(byte *)((long)param_1 + (ulong)(uVar5 + 4) + 8) = (byte)(uVar1 << 5) | (byte)uVar3 & 0x1f;
    uVar6 = param_4[4];
    *(char *)((long)param_1 + (ulong)(uVar5 + 5) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 7;
    *(char *)((long)param_1 + (ulong)(uVar5 + 6) + 8) = (char)uVar6;
    uVar7 = param_4[5];
    goto LAB_02a3f20c;
  case 0x27:
    uVar7 = *param_4;
    uVar2 = param_4[1];
    uVar1 = param_4[2];
    uVar3 = param_4[3];
    uVar4 = param_4[4];
    *(byte *)((long)param_1 + (ulong)uVar6 + 8) = (byte)(uVar7 >> 4) & 1;
    *(byte *)((long)param_1 + (ulong)(uVar5 + 3) + 8) =
         (byte)((uVar2 << 7) >> 8) & 0xf | (byte)((uVar7 << 0xc) >> 8);
    *param_1 = uVar5 + 5;
    *(byte *)((long)param_1 + (ulong)(uVar5 + 4) + 8) =
         (byte)(uVar2 << 7) | (byte)((uVar1 & 0x1f) << 2) | (byte)((uVar3 & 1) << 1) |
         (byte)uVar4 & 1;
    uVar6 = param_4[5];
    *(char *)((long)param_1 + (ulong)(uVar5 + 5) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 7;
    *(char *)((long)param_1 + (ulong)(uVar5 + 6) + 8) = (char)uVar6;
    uVar7 = param_4[6];
LAB_02a3f20c:
    uVar6 = uVar5 + 8;
    *(char *)((long)param_1 + (ulong)(uVar5 + 7) + 8) = (char)(uVar7 >> 8);
    iVar8 = 9;
    break;
  case 0x28:
    uVar7 = *param_4;
    *(char *)((long)param_1 + (ulong)uVar6 + 8) = (char)(uVar7 >> 0x18);
    *(char *)((long)param_1 + (ulong)(uVar5 + 3) + 8) = (char)(uVar7 >> 0x10);
    *(char *)((long)param_1 + (ulong)(uVar5 + 4) + 8) = (char)(uVar7 >> 8);
    *param_1 = uVar5 + 6;
    *(char *)((long)param_1 + (ulong)(uVar5 + 5) + 8) = (char)uVar7;
    uVar6 = param_4[1];
    *(char *)((long)param_1 + (ulong)(uVar5 + 6) + 8) = (char)(uVar6 >> 0x18);
    *(char *)((long)param_1 + (ulong)(uVar5 + 7) + 8) = (char)(uVar6 >> 0x10);
    *(char *)((long)param_1 + (ulong)(uVar5 + 8) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 10;
    *(char *)((long)param_1 + (ulong)(uVar5 + 9) + 8) = (char)uVar6;
    uVar6 = param_4[2];
    *(char *)((long)param_1 + (ulong)(uVar5 + 10) + 8) = (char)(uVar6 >> 0x18);
    *(char *)((long)param_1 + (ulong)(uVar5 + 0xb) + 8) = (char)(uVar6 >> 0x10);
    *(char *)((long)param_1 + (ulong)(uVar5 + 0xc) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 0xe;
    *(char *)((long)param_1 + (ulong)(uVar5 + 0xd) + 8) = (char)uVar6;
    uVar6 = param_4[3];
    *(char *)((long)param_1 + (ulong)(uVar5 + 0xe) + 8) = (char)(uVar6 >> 0x18);
    *(char *)((long)param_1 + (ulong)(uVar5 + 0xf) + 8) = (char)(uVar6 >> 0x10);
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x10) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 0x12;
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x11) + 8) = (char)uVar6;
    uVar6 = param_4[4];
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x12) + 8) = (char)(uVar6 >> 0x18);
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x13) + 8) = (char)(uVar6 >> 0x10);
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x14) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 0x16;
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x15) + 8) = (char)uVar6;
    uVar6 = param_4[5];
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x16) + 8) = (char)(uVar6 >> 0x18);
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x17) + 8) = (char)(uVar6 >> 0x10);
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x18) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 0x1a;
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x19) + 8) = (char)uVar6;
    uVar6 = param_4[6];
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x1a) + 8) = (char)(uVar6 >> 0x18);
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x1b) + 8) = (char)(uVar6 >> 0x10);
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x1c) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 0x1e;
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x1d) + 8) = (char)uVar6;
    uVar7 = param_4[7];
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x1e) + 8) = (char)(uVar7 >> 0x18);
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x1f) + 8) = (char)(uVar7 >> 0x10);
    uVar6 = uVar5 + 0x21;
    *(char *)((long)param_1 + (ulong)(uVar5 + 0x20) + 8) = (char)(uVar7 >> 8);
    iVar8 = 0x22;
    break;
  case 0x32:
    uVar7 = param_4[1] & 0xf | *param_4 << 4;
    iVar8 = 3;
    break;
  case 0x33:
    uVar1 = param_4[1];
    uVar7 = param_4[2];
    *(byte *)((long)param_1 + (ulong)uVar6 + 8) =
         (byte)((uVar1 << 0xe) >> 0x10) & 7 | (byte)((*param_4 << 0x13) >> 0x10);
    uVar6 = uVar5 + 4;
    *(byte *)((long)param_1 + (ulong)(uVar5 + 3) + 8) =
         (byte)((uVar1 << 0xe) >> 8) | (byte)(uVar7 >> 8) & 0x3f;
    iVar8 = 5;
    break;
  case 0x34:
    uVar7 = param_4[1];
    uVar1 = param_4[2];
    *(byte *)((long)param_1 + (ulong)uVar6 + 8) =
         (byte)((uVar7 << 0xe) >> 0x10) & 7 | (byte)((*param_4 << 0x13) >> 0x10);
    *(byte *)((long)param_1 + (ulong)(uVar5 + 3) + 8) =
         (byte)((uVar7 << 0xe) >> 8) | (byte)(uVar1 >> 8) & 0x3f;
    *param_1 = uVar5 + 5;
    *(char *)((long)param_1 + (ulong)(uVar5 + 4) + 8) = (char)uVar1;
    uVar7 = param_4[3];
    uVar6 = uVar5 + 6;
    *(char *)((long)param_1 + (ulong)(uVar5 + 5) + 8) = (char)(uVar7 >> 8);
    iVar8 = 7;
    break;
  case 0x35:
    uVar7 = *param_4;
    *(char *)((long)param_1 + (ulong)uVar6 + 8) = (char)(uVar7 >> 8);
    *param_1 = uVar5 + 4;
    *(char *)((long)param_1 + (ulong)(uVar5 + 3) + 8) = (char)uVar7;
    uVar6 = param_4[1];
    *(char *)((long)param_1 + (ulong)(uVar5 + 4) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 6;
    *(char *)((long)param_1 + (ulong)(uVar5 + 5) + 8) = (char)uVar6;
    uVar6 = param_4[2];
    *(char *)((long)param_1 + (ulong)(uVar5 + 6) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 8;
    *(char *)((long)param_1 + (ulong)(uVar5 + 7) + 8) = (char)uVar6;
    uVar6 = param_4[3];
    *(char *)((long)param_1 + (ulong)(uVar5 + 8) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 10;
    *(char *)((long)param_1 + (ulong)(uVar5 + 9) + 8) = (char)uVar6;
    uVar7 = param_4[4];
    *(char *)((long)param_1 + (ulong)(uVar5 + 10) + 8) = (char)(uVar7 >> 8);
    goto LAB_02a3f9f0;
  case 0x36:
    uVar7 = param_4[1];
    uVar1 = param_4[2];
    *(byte *)((long)param_1 + (ulong)uVar6 + 8) =
         (byte)((uVar7 << 6) >> 8) & 7 | (byte)((*param_4 << 0xb) >> 8);
    *param_1 = uVar5 + 4;
    *(byte *)((long)param_1 + (ulong)(uVar5 + 3) + 8) = (byte)(uVar7 << 6) | (byte)uVar1 & 0x3f;
    uVar6 = param_4[3];
    *(char *)((long)param_1 + (ulong)(uVar5 + 4) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 6;
    *(char *)((long)param_1 + (ulong)(uVar5 + 5) + 8) = (char)uVar6;
    uVar6 = param_4[4];
    *(char *)((long)param_1 + (ulong)(uVar5 + 6) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 8;
    *(char *)((long)param_1 + (ulong)(uVar5 + 7) + 8) = (char)uVar6;
    uVar7 = param_4[5];
    uVar6 = uVar5 + 9;
    *(char *)((long)param_1 + (ulong)(uVar5 + 8) + 8) = (char)(uVar7 >> 8);
    iVar8 = 10;
    break;
  case 0x37:
    uVar7 = *param_4;
    uVar2 = param_4[1];
    uVar1 = param_4[2];
    uVar3 = param_4[3];
    uVar4 = param_4[4];
    *(byte *)((long)param_1 + (ulong)uVar6 + 8) = (byte)(uVar7 >> 4) & 1;
    *(byte *)((long)param_1 + (ulong)(uVar5 + 3) + 8) =
         (byte)((uVar2 << 0xf) >> 0x10) & 0xf | (byte)((uVar7 << 0x14) >> 0x10);
    *(byte *)((long)param_1 + (ulong)(uVar5 + 4) + 8) =
         (byte)((uVar2 << 0xf) >> 8) | (byte)(((uVar1 & 0x1f) << 10) >> 8) |
         (byte)((uVar3 << 5) >> 8) & 3;
    *param_1 = uVar5 + 6;
    *(byte *)((long)param_1 + (ulong)(uVar5 + 5) + 8) = (byte)(uVar3 << 5) | (byte)uVar4 & 0x1f;
    uVar6 = param_4[5];
    *(char *)((long)param_1 + (ulong)(uVar5 + 6) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 8;
    *(char *)((long)param_1 + (ulong)(uVar5 + 7) + 8) = (char)uVar6;
    uVar7 = param_4[6];
    uVar6 = uVar5 + 9;
    *(char *)((long)param_1 + (ulong)(uVar5 + 8) + 8) = (char)(uVar7 >> 8);
    iVar8 = 10;
    break;
  case 0x42:
    uVar7 = param_4[1] & 7 | *param_4 << 3;
    iVar8 = 3;
    break;
  case 0x43:
    uVar7 = *param_4;
    *param_1 = uVar5 + 3;
    *(char *)((long)param_1 + (ulong)uVar6 + 8) = (char)uVar7;
    uVar7 = param_4[1];
    uVar6 = uVar5 + 4;
    *param_1 = uVar6;
    *(char *)((long)param_1 + (ulong)(uVar5 + 3) + 8) = (char)uVar7;
    uVar7 = param_4[2];
    iVar8 = 5;
    break;
  case 0x44:
    uVar7 = param_4[1];
    uVar1 = param_4[2];
    *(byte *)((long)param_1 + (ulong)uVar6 + 8) =
         (byte)((uVar7 << 6) >> 8) & 7 | (byte)((*param_4 << 0xb) >> 8);
    *param_1 = uVar5 + 4;
    *(byte *)((long)param_1 + (ulong)(uVar5 + 3) + 8) = (byte)(uVar7 << 6) | (byte)uVar1 & 0x3f;
    uVar7 = param_4[3];
    uVar6 = uVar5 + 5;
    *(char *)((long)param_1 + (ulong)(uVar5 + 4) + 8) = (char)(uVar7 >> 8);
    iVar8 = 6;
    break;
  case 0x46:
    uVar7 = *param_4;
    *param_1 = uVar5 + 3;
    *(char *)((long)param_1 + (ulong)uVar6 + 8) = (char)uVar7;
    uVar6 = param_4[1];
    *param_1 = uVar5 + 4;
    *(char *)((long)param_1 + (ulong)(uVar5 + 3) + 8) = (char)uVar6;
    uVar6 = param_4[2];
    *param_1 = uVar5 + 5;
    *(char *)((long)param_1 + (ulong)(uVar5 + 4) + 8) = (char)uVar6;
    uVar6 = param_4[3];
    *param_1 = uVar5 + 6;
    *(char *)((long)param_1 + (ulong)(uVar5 + 5) + 8) = (char)uVar6;
    uVar6 = param_4[4];
    *(char *)((long)param_1 + (ulong)(uVar5 + 6) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 8;
    *(char *)((long)param_1 + (ulong)(uVar5 + 7) + 8) = (char)uVar6;
    uVar7 = param_4[5];
    uVar6 = uVar5 + 9;
    *(char *)((long)param_1 + (ulong)(uVar5 + 8) + 8) = (char)(uVar7 >> 8);
    iVar8 = 10;
    break;
  case 0x47:
    uVar7 = *param_4;
    *param_1 = uVar5 + 3;
    *(char *)((long)param_1 + (ulong)uVar6 + 8) = (char)uVar7;
    uVar6 = param_4[1];
    *param_1 = uVar5 + 4;
    *(char *)((long)param_1 + (ulong)(uVar5 + 3) + 8) = (char)uVar6;
    uVar6 = param_4[2];
    *param_1 = uVar5 + 5;
    *(char *)((long)param_1 + (ulong)(uVar5 + 4) + 8) = (char)uVar6;
    uVar6 = param_4[3];
    *param_1 = uVar5 + 6;
    *(char *)((long)param_1 + (ulong)(uVar5 + 5) + 8) = (char)uVar6;
    uVar6 = param_4[4];
    *param_1 = uVar5 + 7;
    *(char *)((long)param_1 + (ulong)(uVar5 + 6) + 8) = (char)uVar6;
    uVar6 = param_4[5];
    *(char *)((long)param_1 + (ulong)(uVar5 + 7) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 9;
    *(char *)((long)param_1 + (ulong)(uVar5 + 8) + 8) = (char)uVar6;
    uVar7 = param_4[6];
    goto LAB_02a3f964;
  case 0x53:
    uVar7 = *param_4;
    *param_1 = uVar5 + 3;
    *(char *)((long)param_1 + (ulong)uVar6 + 8) = (char)uVar7;
    uVar6 = param_4[1];
    *param_1 = uVar5 + 4;
    *(char *)((long)param_1 + (ulong)(uVar5 + 3) + 8) = (char)uVar6;
    uVar7 = param_4[2];
    uVar6 = uVar5 + 5;
    *(char *)((long)param_1 + (ulong)(uVar5 + 4) + 8) = (char)(uVar7 >> 8);
    iVar8 = 6;
    break;
  case 0x54:
    uVar7 = *param_4;
    *param_1 = uVar5 + 3;
    *(char *)((long)param_1 + (ulong)uVar6 + 8) = (char)uVar7;
    uVar6 = param_4[1];
    *param_1 = uVar5 + 4;
    *(char *)((long)param_1 + (ulong)(uVar5 + 3) + 8) = (char)uVar6;
    uVar6 = param_4[2];
    *param_1 = uVar5 + 5;
    *(char *)((long)param_1 + (ulong)(uVar5 + 4) + 8) = (char)uVar6;
LAB_02a3f7f4:
    uVar6 = uVar5 + 5;
    uVar7 = param_4[3];
    iVar8 = 6;
    break;
  case 0x56:
    uVar3 = param_4[1];
    uVar1 = param_4[2];
    uVar4 = param_4[3];
    uVar2 = param_4[4];
    uVar7 = param_4[5];
    *(byte *)((long)param_1 + (ulong)uVar6 + 8) =
         (byte)((uVar3 << 0xe) >> 0x10) & 7 | (byte)((*param_4 << 0x13) >> 0x10);
    *(byte *)((long)param_1 + (ulong)(uVar5 + 3) + 8) =
         (byte)((uVar3 << 0xe) >> 8) | (byte)(uVar1 >> 8) & 0x3f;
    *(char *)((long)param_1 + (ulong)(uVar5 + 4) + 8) = (char)uVar1;
    uVar6 = uVar5 + 6;
    *(byte *)((long)param_1 + (ulong)(uVar5 + 5) + 8) = (byte)uVar2 & 1 | (byte)(uVar4 << 1);
    iVar8 = 7;
    break;
  case 99:
    uVar7 = *param_4;
    *param_1 = uVar5 + 3;
    *(char *)((long)param_1 + (ulong)uVar6 + 8) = (char)uVar7;
    uVar6 = param_4[1];
    *param_1 = uVar5 + 4;
    *(char *)((long)param_1 + (ulong)(uVar5 + 3) + 8) = (char)uVar6;
    uVar7 = param_4[2];
    *(char *)((long)param_1 + (ulong)(uVar5 + 4) + 8) = (char)(uVar7 >> 0x18);
    *(char *)((long)param_1 + (ulong)(uVar5 + 5) + 8) = (char)(uVar7 >> 0x10);
    goto LAB_02a3f8ec;
  case 100:
    uVar7 = *param_4;
    *param_1 = uVar5 + 3;
    *(char *)((long)param_1 + (ulong)uVar6 + 8) = (char)uVar7;
    uVar6 = param_4[1];
    *param_1 = uVar5 + 4;
    *(char *)((long)param_1 + (ulong)(uVar5 + 3) + 8) = (char)uVar6;
    uVar6 = param_4[2];
    *(char *)((long)param_1 + (ulong)(uVar5 + 4) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 6;
    *(char *)((long)param_1 + (ulong)(uVar5 + 5) + 8) = (char)uVar6;
    uVar7 = param_4[3];
LAB_02a3f8ec:
    uVar6 = uVar5 + 7;
    *(char *)((long)param_1 + (ulong)(uVar5 + 6) + 8) = (char)(uVar7 >> 8);
    iVar8 = 8;
    break;
  case 0x73:
    uVar7 = *param_4;
    *param_1 = uVar5 + 3;
    *(char *)((long)param_1 + (ulong)uVar6 + 8) = (char)uVar7;
    uVar6 = param_4[1];
    *(char *)((long)param_1 + (ulong)(uVar5 + 3) + 8) = (char)(uVar6 >> 0x18);
    *(char *)((long)param_1 + (ulong)(uVar5 + 4) + 8) = (char)(uVar6 >> 0x10);
    *(char *)((long)param_1 + (ulong)(uVar5 + 5) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 7;
    *(char *)((long)param_1 + (ulong)(uVar5 + 6) + 8) = (char)uVar6;
    uVar7 = param_4[2];
    *(char *)((long)param_1 + (ulong)(uVar5 + 7) + 8) = (char)(uVar7 >> 0x18);
    *(char *)((long)param_1 + (ulong)(uVar5 + 8) + 8) = (char)(uVar7 >> 0x10);
LAB_02a3f964:
    uVar6 = uVar5 + 10;
    *(char *)((long)param_1 + (ulong)(uVar5 + 9) + 8) = (char)(uVar7 >> 8);
    iVar8 = 0xb;
    break;
  case 0x74:
    uVar7 = *param_4;
    *param_1 = uVar5 + 3;
    *(char *)((long)param_1 + (ulong)uVar6 + 8) = (char)uVar7;
    uVar6 = param_4[1];
    *param_1 = uVar5 + 4;
    *(char *)((long)param_1 + (ulong)(uVar5 + 3) + 8) = (char)uVar6;
    uVar6 = param_4[2];
    *(char *)((long)param_1 + (ulong)(uVar5 + 4) + 8) = (char)(uVar6 >> 0x18);
    *(char *)((long)param_1 + (ulong)(uVar5 + 5) + 8) = (char)(uVar6 >> 0x10);
    *(char *)((long)param_1 + (ulong)(uVar5 + 6) + 8) = (char)(uVar6 >> 8);
    *param_1 = uVar5 + 8;
    *(char *)((long)param_1 + (ulong)(uVar5 + 7) + 8) = (char)uVar6;
    uVar7 = param_4[3];
    *(char *)((long)param_1 + (ulong)(uVar5 + 8) + 8) = (char)(uVar7 >> 0x18);
    *(char *)((long)param_1 + (ulong)(uVar5 + 9) + 8) = (char)(uVar7 >> 0x10);
    *(char *)((long)param_1 + (ulong)(uVar5 + 10) + 8) = (char)(uVar7 >> 8);
LAB_02a3f9f0:
    uVar6 = uVar5 + 0xb;
    iVar8 = 0xc;
  }
  *param_1 = uVar5 + iVar8;
  *(char *)((long)param_1 + (ulong)uVar6 + 8) = (char)uVar7;
switchD_02a3e7fc_caseD_a:
  return;
}


