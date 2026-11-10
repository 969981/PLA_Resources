/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00250274; name: FUN_00250274
 */


void FUN_00250274(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x30))();
  if ((uVar1 & 1) != 0) {
    FUN_0087e970(param_1 + 0x11,param_2);
    FUN_0087edf8(param_1 + 8,param_2);
    (**(code **)PTR_DAT_04372d80)
              (param_1[3],param_1[4],param_1[5],param_1[6],*(undefined8 *)PTR_DAT_04372d78,
               *(undefined4 *)((long)param_1 + 0xd4));
    *(undefined4 *)(param_1 + 0x1a) = 0;
    param_1[5] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return;
}


