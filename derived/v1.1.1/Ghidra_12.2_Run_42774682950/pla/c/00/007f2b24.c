/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f2b24; name: FUN_007f2b24
 */


void FUN_007f2b24(undefined8 param_1,long *param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  int local_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  if ((char)param_2[1] == '\0') {
    plVar1 = (long *)param_2[3];
    if (plVar1 == (long *)0x0) {
      plVar1 = (long *)(**(code **)(*param_2 + 0x1d8))(param_2);
      param_2[3] = (long)plVar1;
    }
    (**(code **)(*plVar1 + 0x10))(plVar1,param_3);
    PTR_DAT_043773b8[0x199] = *(undefined1 *)(param_3 + 8);
    (**(code **)(*param_2 + 0x1b8))(local_38,param_2,param_3);
    if (local_38[0] == 0) {
      *(undefined1 *)(param_2 + 1) = 1;
      local_48[0] = 0;
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
      piVar2 = local_48;
    }
    else {
      piVar2 = local_38;
    }
  }
  else {
    local_38[0] = 0x10402;
    local_48[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_48);
    piVar2 = local_38;
  }
  FUN_007ee578(param_1,piVar2);
  return;
}


