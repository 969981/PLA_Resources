/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004aac30; name: FUN_004aac30
 */


void FUN_004aac30(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = param_2[0x11] ^ *param_1;
  uVar2 = param_2[0x10] ^ param_1[1] ^
          (param_2[(ulong)(uVar1 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar1 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar1 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar1 & 0xff | 0x300) + 0x12];
  uVar1 = param_2[0xf] ^ uVar1 ^
          (param_2[(ulong)(uVar2 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar2 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar2 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar2 & 0xff | 0x300) + 0x12];
  uVar2 = param_2[0xe] ^ uVar2 ^
          (param_2[(ulong)(uVar1 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar1 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar1 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar1 & 0xff | 0x300) + 0x12];
  uVar1 = param_2[0xd] ^ uVar1 ^
          (param_2[(ulong)(uVar2 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar2 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar2 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar2 & 0xff | 0x300) + 0x12];
  uVar2 = param_2[0xc] ^ uVar2 ^
          (param_2[(ulong)(uVar1 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar1 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar1 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar1 & 0xff | 0x300) + 0x12];
  uVar1 = param_2[0xb] ^ uVar1 ^
          (param_2[(ulong)(uVar2 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar2 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar2 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar2 & 0xff | 0x300) + 0x12];
  uVar2 = param_2[10] ^ uVar2 ^
          (param_2[(ulong)(uVar1 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar1 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar1 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar1 & 0xff | 0x300) + 0x12];
  uVar1 = param_2[9] ^ uVar1 ^
          (param_2[(ulong)(uVar2 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar2 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar2 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar2 & 0xff | 0x300) + 0x12];
  uVar2 = param_2[8] ^ uVar2 ^
          (param_2[(ulong)(uVar1 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar1 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar1 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar1 & 0xff | 0x300) + 0x12];
  uVar1 = param_2[7] ^ uVar1 ^
          (param_2[(ulong)(uVar2 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar2 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar2 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar2 & 0xff | 0x300) + 0x12];
  uVar2 = param_2[6] ^ uVar2 ^
          (param_2[(ulong)(uVar1 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar1 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar1 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar1 & 0xff | 0x300) + 0x12];
  uVar1 = param_2[5] ^ uVar1 ^
          (param_2[(ulong)(uVar2 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar2 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar2 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar2 & 0xff | 0x300) + 0x12];
  uVar2 = param_2[4] ^ uVar2 ^
          (param_2[(ulong)(uVar1 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar1 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar1 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar1 & 0xff | 0x300) + 0x12];
  uVar1 = param_2[3] ^ uVar1 ^
          (param_2[(ulong)(uVar2 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar2 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar2 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar2 & 0xff | 0x300) + 0x12];
  uVar2 = param_2[2] ^ uVar2 ^
          (param_2[(ulong)(uVar1 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar1 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar1 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar1 & 0xff | 0x300) + 0x12];
  uVar3 = param_2[1];
  uVar4 = param_2[(ulong)(uVar2 >> 0x10 & 0xff | 0x100) + 0x12];
  uVar5 = param_2[(ulong)(uVar2 >> 0x18) + 0x12];
  uVar6 = param_2[(ulong)(uVar2 >> 8 & 0xff | 0x200) + 0x12];
  uVar7 = param_2[(ulong)(uVar2 & 0xff | 0x300) + 0x12];
  *param_1 = *param_2 ^ uVar2;
  param_1[1] = uVar3 ^ uVar1 ^ (uVar4 + uVar5 ^ uVar6) + uVar7;
  return;
}


