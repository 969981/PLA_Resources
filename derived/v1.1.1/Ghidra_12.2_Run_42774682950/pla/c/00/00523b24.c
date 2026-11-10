/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00523b24; name: FUN_00523b24
 */


void FUN_00523b24(undefined8 param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  
  if (param_2 == (ulong *)0x0) {
    return;
  }
  uVar2 = param_2[0x12];
  param_2[0x12] = 0;
  if (uVar2 != 0) {
    FUN_00523bb8(uVar2);
    FUN_002e2ea0(PTR_LAB_04373088,uVar2);
  }
  if ((*param_2 & 1) == 0) {
    puVar1 = param_2 + 1;
  }
  else {
    puVar1 = (ulong *)param_2[1];
  }
                    /* try { // try from 00523b7c to 00523b83 has its CatchHandler @ 00523bb4 */
  FUN_00523d40(param_2,puVar1,*param_2 >> 1);
  if ((*param_2 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,param_2[1]);
  }
  FUN_002e2ea0(PTR_LAB_04373088,param_2);
  return;
}


