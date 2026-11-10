/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027a66f0; name: FUN_027a66f0
 */


void FUN_027a66f0(int param_1,ushort *param_2,uint param_3,uint param_4,int param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_6 & 1) == 0) {
    param_3 = FUN_027a6780(param_3,param_5);
  }
  if (param_5 != 0) {
    uVar3 = (uint)*param_2;
    do {
      uVar1 = param_3 & 1;
      param_3 = param_3 >> 1 & 0x7fff;
      uVar2 = (uint)(1L << ((ulong)(param_1 - 1) & 0x3f));
      uVar3 = -uVar1 & uVar2 ^ uVar3;
      uVar1 = 0;
      if ((uVar3 & uVar2 & 0xffff) != 0) {
        uVar1 = param_4;
      }
      param_5 = param_5 + -1;
      uVar3 = uVar1 ^ uVar3 << 1;
    } while (param_5 != 0);
    *param_2 = (ushort)uVar3;
  }
  return;
}


