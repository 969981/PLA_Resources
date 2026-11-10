/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e79824; name: FUN_02e79824
 */


void FUN_02e79824(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)(param_2 >> 0xc);
  uVar2 = (uint)param_2;
  uVar1 = uVar3 & 0xfffff;
  if ((((uint)(param_2 >> 0x10) & 0xffff ^ uVar2 >> 0x15) & 1) != 0) {
    uVar1 = uVar3 & 0xff9cf | 0x600;
  }
  uVar3 = (uint)param_3;
  if ((uVar2 & 0xf00) == 0x100) {
    uVar2 = uVar2 & 0xfff | uVar1 << 0xc;
  }
  uVar1 = uVar3 >> 0xc;
  if ((((uint)((ulong)param_3 >> 0x10) & 0xffff ^ uVar3 >> 0x15) & 1) != 0) {
    uVar1 = uVar3 >> 0xc & 0xff9cf | 0x600;
  }
  if ((uVar3 & 0xf00) == 0x100) {
    uVar3 = uVar3 & 0xfff | uVar1 << 0xc;
  }
  FUN_02efd0dc(uVar2,uVar3,param_4);
  return;
}


