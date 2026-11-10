/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00420da0; name: FUN_00420da0
 */


undefined8 FUN_00420da0(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_8;
  
  uVar2 = 0;
  if (param_1 != (int *)0x0) {
    if ((param_1[1] & 0xfffffeffU) != 10) {
      return 0xffffffffffffffff;
    }
    if (8 < *param_1) {
      return 0xffffffff;
    }
    iVar1 = FUN_004207f0(&local_8,param_1,10);
    if (iVar1 == 0) {
      local_8 = 0xffffffffffffffff;
    }
    uVar2 = local_8;
  }
  return uVar2;
}


