/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00282b44; name: FUN_00282b44
 */


bool FUN_00282b44(long param_1,long *param_2,undefined8 param_3,int param_4,byte param_5,
                 undefined8 param_6)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x98) + (long)param_4 * 8);
  if (lVar1 != 0) {
    FUN_00277e20(lVar1,param_2);
    lVar1 = (long)param_4 * 8;
    (**(code **)(*param_2 + 0x18))(param_2,*(undefined8 *)(*(long *)(param_1 + 0x98) + lVar1));
    *(undefined8 *)(*(long *)(param_1 + 0x98) + lVar1) = 0;
    FUN_00271770("vfx system deleted the registered binary. resource id : %d.\n",param_4);
  }
  lVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x540,0x80);
  if (lVar1 != 0) {
    FUN_002775d0(lVar1,*(undefined8 *)(param_1 + 0x38),param_2,param_3,0,0,0,param_4,param_1,
                 param_5 & 1,param_6);
    *(long *)(*(long *)(param_1 + 0x98) + (long)param_4 * 8) = lVar1;
  }
  return lVar1 != 0;
}


