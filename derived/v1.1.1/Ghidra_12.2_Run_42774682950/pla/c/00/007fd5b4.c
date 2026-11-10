/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fd5b4; name: FUN_007fd5b4
 */


void FUN_007fd5b4(undefined8 param_1,long param_2,undefined1 *param_3,uint param_4)

{
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if (param_3 != (undefined1 *)0x0) {
    *(undefined1 *)(param_2 + 8) = *param_3;
    *(undefined1 *)(param_2 + 9) = param_3[1];
    *(ushort *)(param_2 + 10) = *(ushort *)(param_3 + 2) >> 8 | *(ushort *)(param_3 + 2) << 8;
    if (3 < param_4) {
      local_30[0] = 0;
      goto LAB_007fd60c;
    }
  }
  local_30[0] = 0x10407;
LAB_007fd60c:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


