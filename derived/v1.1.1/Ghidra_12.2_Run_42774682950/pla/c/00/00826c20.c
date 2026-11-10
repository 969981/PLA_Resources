/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00826c20; name: FUN_00826c20
 */


void FUN_00826c20(undefined8 param_1,long param_2,undefined8 *param_3,char param_4)

{
  long lVar1;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if (param_3 == (undefined8 *)0x0) {
    local_30[0] = 0x10407;
  }
  else {
    if (*(int *)(param_2 + 0xb8) != 0) {
      for (lVar1 = *(long *)(param_2 + 0xb0); lVar1 != param_2 + 0xa8; lVar1 = *(long *)(lVar1 + 8))
      {
        if (*(char *)(lVar1 + 0x38) == param_4) {
          *param_3 = *(undefined8 *)(lVar1 + 0x40);
          local_30[0] = 0;
          goto LAB_00826c7c;
        }
      }
    }
    local_30[0] = 0x2c0a;
  }
LAB_00826c7c:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


