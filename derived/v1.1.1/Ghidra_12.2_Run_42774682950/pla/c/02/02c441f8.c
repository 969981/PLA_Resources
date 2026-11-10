/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c441f8; name: FUN_02c441f8
 */


void FUN_02c441f8(float param_1,long param_2,uint param_3)

{
  ushort uVar1;
  ulong uVar2;
  
  if ((param_3 < *(uint *)(param_2 + 0x278)) &&
     (*(char *)(*(long *)(param_2 + 600) + (ulong)param_3 * 0x48 + 8) != '\0')) {
    uVar2 = (ulong)param_3;
    if (0.0 <= param_1) {
      uVar1 = FUN_00227728(*(undefined8 *)(*(long *)(param_2 + 600) + uVar2 * 0x48 + 0x10));
      if ((float)uVar1 < param_1) {
        uVar1 = FUN_00227728(*(undefined8 *)(*(long *)(param_2 + 600) + uVar2 * 0x48 + 0x10));
        param_1 = (float)uVar1;
      }
    }
    else {
      param_1 = 0.0;
    }
    *(float *)(*(long *)(*(long *)(param_2 + 600) + uVar2 * 0x48 + 0x10) + 0x20) = param_1;
    *(undefined1 *)(param_2 + 0x671) = 1;
  }
  return;
}


