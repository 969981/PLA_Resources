/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e20c4; name: FUN_007e20c4
 */


void FUN_007e20c4(undefined8 param_1,undefined8 param_2,long param_3,uint param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  lVar2 = FUN_00847424();
  puVar1 = PTR_DAT_043773c0;
  if (lVar2 != 0) {
    if ((param_3 == 0) ||
       ((*(int *)(lVar2 + 0x34) + (uint)*(ushort *)(*(long *)PTR_DAT_043773c0 + 0x50) * -2) - 0x38 <
        param_4)) {
      local_40[0] = 0x10407;
      goto LAB_007e2158;
    }
    lVar2 = FUN_00847388(param_2);
    if (lVar2 == 0) {
      local_40[0] = 0x2c27;
      goto LAB_007e2158;
    }
    if (*(char *)(*(long *)puVar1 + 0xc0) != '\0') {
      local_40[0] = 0;
      goto LAB_007e2158;
    }
  }
  local_40[0] = 0x10408;
LAB_007e2158:
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_40);
  return;
}


