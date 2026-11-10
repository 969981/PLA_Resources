/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00847b54; name: FUN_00847b54
 */


void FUN_00847b54(undefined8 param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined4 local_50 [4];
  undefined4 local_38 [2];
  
  if ((param_3 == 0) || (param_4 == 0)) {
    local_50[0] = 0x10407;
  }
  else if (*(char *)(param_2 + 0x28) == '\0') {
    if (*(long *)(param_2 + 0x18) != param_2 + 0x10) {
      iVar1 = *(int *)(param_2 + 0x24);
      lVar2 = *(long *)(param_2 + 0x18) - (long)iVar1;
      do {
        FUN_0084742c(lVar2,param_3);
        FUN_0084743c(lVar2,param_4);
        lVar2 = *(long *)(lVar2 + *(int *)(param_2 + 0x24) + 8) - (long)*(int *)(param_2 + 0x24);
      } while (lVar2 != (param_2 + 0x10) - (long)iVar1);
    }
    *(undefined1 *)(param_2 + 0x28) = 1;
    local_50[0] = 0;
  }
  else {
    local_50[0] = 0x10408;
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_38);
  FUN_007ee578(param_1,local_50);
  return;
}


