/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00859040; name: FUN_00859040
 */


void FUN_00859040(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  long lVar1;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  if ((param_3 == 0) || (param_4 == 0)) {
LAB_0085908c:
    local_38[0] = 0x10407;
    goto LAB_008590a0;
  }
  lVar1 = FUN_00847424();
  if (lVar1 == 0) {
    if (param_4 != 0) goto LAB_0085908c;
  }
  else if ((*(int *)(lVar1 + 0x34) + (uint)*(ushort *)(*(long *)PTR_DAT_043773c0 + 0x50) * -2) -
           0x2a < param_4) goto LAB_0085908c;
  if (((*(long *)(param_2 + 0x68) != 0) && (lVar1 = FUN_00847424(param_2), lVar1 != 0)) &&
     (lVar1 = FUN_00847434(param_2), lVar1 != 0)) {
    lVar1 = FUN_00847388(param_2);
    if (lVar1 == 0) {
      local_38[0] = 0x2c27;
      goto LAB_008590a0;
    }
    if (*(char *)(*(long *)PTR_DAT_043773c0 + 0xc0) != '\0') {
      local_38[0] = 0;
      goto LAB_008590a0;
    }
  }
  local_38[0] = 0x10408;
LAB_008590a0:
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_38);
  return;
}


