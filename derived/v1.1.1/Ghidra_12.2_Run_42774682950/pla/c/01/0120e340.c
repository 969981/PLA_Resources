/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0120e340; name: FUN_0120e340
 */


void FUN_0120e340(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  long *local_18;
  
  if (param_2 == 8) {
    uVar2 = 0x7c9b0cb1f86179bd;
  }
  else {
    switch(param_2) {
    case 0:
      uVar2 = 0x7ca1f6b1f8677309;
      break;
    case 1:
      uVar2 = 0x7ca1f5b1f8677156;
      if (*(int *)(param_1 + 0x5d8) != 1) {
        uVar2 = 0x7ca200b1f8678407;
      }
      break;
    case 2:
      uVar2 = 0x7c9e72b1f8645ce6;
      break;
    case 3:
      uVar2 = 0x7c9e76b1f86463b2;
      break;
    case 4:
      uVar2 = 0x7c9e77b1f8646565;
      break;
    case 5:
      uVar2 = 0x7c9e75b1f86461ff;
      break;
    case 6:
    case 7:
      uVar1 = 0x7ca1ffb1f8678254;
      if (*(int *)(param_1 + 0x5d8) != 3) {
        uVar1 = 0x7c9b0cb1f86179bd;
      }
      uVar2 = 0x7ca1f3b1f8676df0;
      if (*(int *)(param_1 + 0x5d8) != 0) {
        uVar2 = uVar1;
      }
      break;
    default:
      uVar2 = 0;
    }
  }
  local_30 = 0x7dc9fc953a6a55f2;
  pcStack_28 = "pane_T_search_message_00";
  local_20 = 0x18;
  local_18 = (long *)0x0;
  FUN_01210648(param_1,0,uVar2,&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


