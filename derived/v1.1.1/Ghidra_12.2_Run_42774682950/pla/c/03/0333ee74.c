/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333ee74; name: FUN_0333ee74
 */


void FUN_0333ee74(undefined4 *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  FUN_032c53d8(param_2,"%.8x-%.4x-%.4x-%.2x%.2x-%.2x%.2x%.2x%.2x%.2x%.2x",*param_1,
               param_1[1] & 0xffff,(uint)param_1[1] >> 0x10,uVar1 & 0xff,uVar1 >> 8 & 0xff,
               uVar1 >> 0x10 & 0xff,uVar1 >> 0x18,uVar2 & 0xff,uVar2 >> 8 & 0xff,
               uVar2 >> 0x10 & 0xff,uVar2 >> 0x18);
  return;
}


