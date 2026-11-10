/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e97b04; name: FUN_02e97b04
 */


undefined8 FUN_02e97b04(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (((*(uint *)(param_1 + 8) < 0xc) && (*(uint *)(param_1 + 0xc) < 0xb)) &&
     (uVar1 = FUN_02e97b60(param_1,0xb - *(uint *)(param_1 + 8)), (uVar1 & 1) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    *(undefined4 *)(param_1 + 8) = 0xb;
  }
  return uVar2;
}


