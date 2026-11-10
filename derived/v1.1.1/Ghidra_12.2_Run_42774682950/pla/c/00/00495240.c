/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00495240; name: FUN_00495240
 */


void FUN_00495240(uint *param_1,uint *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  if ((param_3 >> 0x1c & 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("b <= mask","external/openssl/crypto/ec/curve448/arch_32/f_impl.c",0x48,
                  "nnopenssl_gf_mulw_unsigned");
  }
  uVar3 = *param_2;
  param_3 = param_3 & 0xffffffff;
  uVar4 = param_2[8];
  *param_1 = (uint)(uVar3 * param_3) & 0xfffffff;
  param_1[8] = (uint)(uVar4 * param_3) & 0xfffffff;
  uVar1 = param_2[1] * param_3 + (uVar3 * param_3 >> 0x1c);
  uVar2 = param_2[9] * param_3 + (uVar4 * param_3 >> 0x1c);
  param_1[1] = (uint)uVar1 & 0xfffffff;
  param_1[9] = (uint)uVar2 & 0xfffffff;
  uVar1 = param_2[2] * param_3 + (uVar1 >> 0x1c);
  uVar2 = param_2[10] * param_3 + (uVar2 >> 0x1c);
  param_1[2] = (uint)uVar1 & 0xfffffff;
  param_1[10] = (uint)uVar2 & 0xfffffff;
  uVar1 = param_2[3] * param_3 + (uVar1 >> 0x1c);
  uVar2 = param_2[0xb] * param_3 + (uVar2 >> 0x1c);
  param_1[3] = (uint)uVar1 & 0xfffffff;
  param_1[0xb] = (uint)uVar2 & 0xfffffff;
  uVar1 = param_2[4] * param_3 + (uVar1 >> 0x1c);
  uVar2 = param_2[0xc] * param_3 + (uVar2 >> 0x1c);
  param_1[4] = (uint)uVar1 & 0xfffffff;
  param_1[0xc] = (uint)uVar2 & 0xfffffff;
  uVar1 = param_2[5] * param_3 + (uVar1 >> 0x1c);
  uVar2 = param_2[0xd] * param_3 + (uVar2 >> 0x1c);
  param_1[5] = (uint)uVar1 & 0xfffffff;
  param_1[0xd] = (uint)uVar2 & 0xfffffff;
  uVar3 = param_2[7];
  uVar1 = param_2[6] * param_3 + (uVar1 >> 0x1c);
  uVar2 = param_2[0xe] * param_3 + (uVar2 >> 0x1c);
  param_1[6] = (uint)uVar1 & 0xfffffff;
  param_1[0xe] = (uint)uVar2 & 0xfffffff;
  uVar1 = uVar3 * param_3 + (uVar1 >> 0x1c);
  uVar2 = param_2[0xf] * param_3 + (uVar2 >> 0x1c);
  param_1[7] = (uint)uVar1 & 0xfffffff;
  uVar5 = uVar2 >> 0x1c;
  param_1[0xf] = (uint)uVar2 & 0xfffffff;
  uVar2 = uVar5 + *param_1;
  uVar1 = uVar5 + (uVar1 >> 0x1c) + (ulong)param_1[8];
  param_1[8] = (uint)uVar1 & 0xfffffff;
  param_1[9] = param_1[9] + (int)(uVar1 >> 0x1c);
  *param_1 = (uint)uVar2 & 0xfffffff;
  param_1[1] = param_1[1] + (int)(uVar2 >> 0x1c);
  return;
}


