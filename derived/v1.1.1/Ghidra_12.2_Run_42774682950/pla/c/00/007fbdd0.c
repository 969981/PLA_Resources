/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fbdd0; name: FUN_007fbdd0
 */


void FUN_007fbdd0(undefined8 param_1,long param_2)

{
  ulong uVar1;
  int *piVar2;
  int local_50 [4];
  int local_40 [4];
  undefined4 local_28 [2];
  
  piVar2 = local_50;
  FUN_007fa3fc(local_40,param_2,*(undefined8 *)(param_2 + 0x168));
  if (local_40[0] == 0) {
    uVar1 = FUN_007f0ee4(param_2 + 0xb8);
    if ((uVar1 & 1) != 0) {
      uVar1 = FUN_007f0ee4(param_2 + 0x98);
      if (((uVar1 & 1) != 0) &&
         (uVar1 = FUN_007f0f48(param_2 + 0x98,param_2 + 0xb8), (uVar1 & 1) != 0)) {
        if ((*(int *)(param_2 + 0x1148) != 0) && (*(int *)(param_2 + 0x1118) != 1)) {
          FUN_007e5bd8(param_2 + 0x1118);
          *(undefined4 *)(param_2 + 0x1148) = 0;
        }
        FUN_007ffb40(local_50,*(undefined8 *)(param_2 + 0x168),param_2 + 0x1118);
        FUN_007ee660(local_40,local_50);
        if (local_40[0] == 0) {
          *(undefined4 *)(param_2 + 0x1148) = 0xc;
          FUN_007e5e70(*(undefined8 *)(param_2 + 0x168),0);
        }
        goto LAB_007fbdfc;
      }
    }
    local_50[0] = 0x10408;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
  }
  else {
LAB_007fbdfc:
    piVar2 = local_40;
  }
  FUN_007ee578(param_1,piVar2);
  return;
}


