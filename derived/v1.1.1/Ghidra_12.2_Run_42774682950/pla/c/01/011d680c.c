/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011d680c; name: FUN_011d680c
 */


void FUN_011d680c(undefined8 *param_1,byte param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (*(int *)((long)param_1 + 0x3c) == 1) {
    puVar1 = &DAT_041f87a8;
  }
  else {
    puVar1 = &DAT_041f8460;
    switch(*(int *)((long)param_1 + 0x3c)) {
    case 0:
      break;
    default:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    case 2:
      puVar1 = &DAT_041f8af0;
      break;
    case 3:
      puVar1 = &DAT_041f8e38;
      break;
    case 4:
      puVar1 = &DAT_041f9180;
      break;
    case 5:
      puVar1 = &DAT_041f94c8;
    }
  }
  uVar2 = puVar1[0x51];
  uVar4 = puVar1[0x52];
  uVar3 = puVar1[0x53];
  uStack_48 = 0;
  local_60 = uVar2;
  uStack_58 = uVar4;
  local_50 = uVar3;
  FUN_0283b1e8(*param_1,&local_60);
  if ((param_2 & 1) == 0) {
    uVar5 = 0x3f800000;
  }
  else {
    uVar5 = 0;
  }
  uStack_48 = 0;
  local_60 = uVar2;
  uStack_58 = uVar4;
  local_50 = uVar3;
  FUN_0283b748(uVar5,*param_1,&local_60);
  *(byte *)(param_1 + 8) = param_2 & 1;
  return;
}


