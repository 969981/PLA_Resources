/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0284358c; name: FUN_0284358c
 */


void FUN_0284358c(undefined8 *param_1,long param_2,ulong param_3,undefined4 param_4)

{
  long *plVar1;
  long *plVar2;
  char *pcVar3;
  long *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  long *local_40;
  undefined4 local_38;
  long local_28;
  
  local_28 = param_2;
  FUN_009f1b84(&local_60,&local_28);
  plVar2 = local_40;
  plVar1 = local_60;
  if ((param_3 & 1) == 0) {
switchD_02843644_default:
    local_60 = (long *)0x0;
    *param_1 = plVar1;
    param_1[1] = uStack_58;
    local_40 = (long *)0x0;
    param_1[4] = plVar2;
    *(undefined4 *)(param_1 + 5) = local_38;
    param_1[2] = local_50;
    param_1[3] = local_48;
  }
  else {
    switch(param_4) {
    case 2:
      plVar1 = (long *)PTR_PTR_04379d00;
      if (local_60 != (long *)0x0) {
        plVar1 = local_60 + 0xc;
      }
      local_28 = *plVar1;
      pcVar3 = "_eng.arc";
      break;
    case 3:
      plVar1 = (long *)PTR_PTR_04379d00;
      if (local_60 != (long *)0x0) {
        plVar1 = local_60 + 0xc;
      }
      local_28 = *plVar1;
      pcVar3 = "_fre.arc";
      break;
    case 4:
      plVar1 = (long *)PTR_PTR_04379d00;
      if (local_60 != (long *)0x0) {
        plVar1 = local_60 + 0xc;
      }
      local_28 = *plVar1;
      pcVar3 = "_ita.arc";
      break;
    case 5:
      plVar1 = (long *)PTR_PTR_04379d00;
      if (local_60 != (long *)0x0) {
        plVar1 = local_60 + 0xc;
      }
      local_28 = *plVar1;
      pcVar3 = "_ger.arc";
      break;
    case 6:
      plVar1 = (long *)PTR_PTR_04379d00;
      if (local_60 != (long *)0x0) {
        plVar1 = local_60 + 0xc;
      }
      local_28 = *plVar1;
      pcVar3 = "_spa.arc";
      break;
    case 7:
      plVar1 = (long *)PTR_PTR_04379d00;
      if (local_60 != (long *)0x0) {
        plVar1 = local_60 + 0xc;
      }
      local_28 = *plVar1;
      pcVar3 = "_kor.arc";
      break;
    case 8:
      plVar1 = (long *)PTR_PTR_04379d00;
      if (local_60 != (long *)0x0) {
        plVar1 = local_60 + 0xc;
      }
      local_28 = *plVar1;
      pcVar3 = "_sch.arc";
      break;
    case 9:
      plVar1 = (long *)PTR_PTR_04379d00;
      if (local_60 != (long *)0x0) {
        plVar1 = local_60 + 0xc;
      }
      local_28 = *plVar1;
      pcVar3 = "_tch.arc";
      break;
    default:
      goto switchD_02843644_default;
    }
    FUN_028446f4(param_1,&local_28,pcVar3,local_38);
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 0x20))();
    }
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  return;
}


