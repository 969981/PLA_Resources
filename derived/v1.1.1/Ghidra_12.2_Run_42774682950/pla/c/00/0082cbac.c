/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082cbac; name: FUN_0082cbac
 */


void FUN_0082cbac(undefined8 param_1,long *param_2,long param_3,long param_4,long param_5)

{
  int *piVar1;
  long *plVar2;
  int local_60 [4];
  int local_50 [4];
  undefined4 local_38 [2];
  
  piVar1 = local_60;
  if ((((param_3 == 0) || (param_4 == 0)) || (param_5 == 0)) || (param_2[0xb] != 0)) {
LAB_0082cbf4:
    local_50[0] = 0x10407;
    local_60[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
  }
  else {
    plVar2 = param_2 + 0xc;
    if ((int)*plVar2 == 1) goto LAB_0082cbf4;
    FUN_007e5bd8(plVar2);
    (**(code **)(**(long **)(*(long *)PTR_DAT_04377550 + 0x18) + 0x20))
              (local_50,*(long **)(*(long *)PTR_DAT_04377550 + 0x18),plVar2,param_4,param_5);
    if (local_50[0] == 0) {
      param_2[0xb] = param_3;
      FUN_007e5c2c(param_3);
      (**(code **)(*param_2 + 0x10))(param_2,1);
      param_2[8] = (long)"BrowseSessionJob::WaitSearchNetwork";
      param_2[6] = (long)PTR_LAB_04377da0;
      param_2[7] = 0;
      local_60[0] = 0;
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_38);
      goto LAB_0082cc18;
    }
  }
  piVar1 = local_50;
LAB_0082cc18:
  FUN_007ee578(param_1,piVar1);
  return;
}


