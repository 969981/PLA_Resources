/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005301dc; name: FUN_005301dc
 */


void FUN_005301dc(ulong *param_1)

{
  ulong *__s;
  ulong uVar1;
  
  if ((*param_1 & 1) == 0) {
    __s = param_1 + 1;
  }
  else {
    __s = (ulong *)param_1[1];
    uVar1 = 0;
    if (__s == (ulong *)0x0) goto LAB_00530224;
  }
  memset(__s,0xab,(*param_1 & 0x3ffffffffffffffe) << 2);
  if ((*param_1 & 1) == 0) {
    return;
  }
  uVar1 = param_1[1];
LAB_00530224:
  FUN_002e2ea0(PTR_LAB_04373088,uVar1);
  return;
}


