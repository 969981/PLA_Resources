/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d3360; name: FUN_003d3360
 */


void FUN_003d3360(undefined8 param_1,undefined4 param_2,undefined4 param_3,long *param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  byte local_58 [16];
  ulong local_48;
  
  uVar2 = *(undefined8 *)(*param_4 + 0x50);
  FUN_003d22a0(local_58,param_5);
  uVar1 = (ulong)local_58 | 1;
  if ((local_58[0] & 1) != 0) {
    uVar1 = local_48;
  }
                    /* try { // try from 003d33b0 to 003d33cf has its CatchHandler @ 003d3400 */
  FUN_002ebea0(param_1,param_2,param_3,"OP[%s:%p]: %s",uVar2,param_4,uVar1);
  if ((local_58[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_48);
  }
  return;
}


