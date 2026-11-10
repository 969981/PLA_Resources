/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0010b7b0; name: FUN_0010b7b0
 */


int FUN_0010b7b0(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_1 + 4U & 0xfffffffc;
  uVar2 = uVar1 * 2 + 0xf & 0xfffffff0;
  if (0 < (int)param_2) {
    uVar2 = (3 << (ulong)(param_2 & 0x1f)) + uVar2 + 0x10;
  }
  uVar3 = uVar1 * 4;
  if ((int)(uVar1 * 4) <= (int)uVar2) {
    uVar3 = uVar2;
  }
  return (uVar1 + 0x2ef & 0xfffffff0) + uVar3;
}


