/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011d7128; name: FUN_011d7128
 */


void FUN_011d7128(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (*(int *)((long)param_1 + 0x3c) == 1) {
    puVar4 = &DAT_041f87a8;
  }
  else {
    puVar4 = &DAT_041f8460;
    switch(*(int *)((long)param_1 + 0x3c)) {
    case 0:
      break;
    default:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    case 2:
      puVar4 = &DAT_041f8af0;
      break;
    case 3:
      puVar4 = &DAT_041f8e38;
      break;
    case 4:
      puVar4 = &DAT_041f9180;
      break;
    case 5:
      puVar4 = &DAT_041f94c8;
    }
  }
  uVar1 = puVar4[0xf];
  uVar2 = puVar4[0x10];
  uVar5 = puVar4[0x11];
  iVar3 = FUN_02c6f5e8(*(undefined8 *)(param_2 + 0x98));
  uStack_48 = 0;
  local_60 = uVar1;
  uStack_58 = uVar2;
  local_50 = uVar5;
  FUN_0283b1e8(*param_1,&local_60);
  uStack_48 = 0;
  local_60 = uVar1;
  uStack_58 = uVar2;
  local_50 = uVar5;
  FUN_0283b748((float)iVar3,*param_1,&local_60);
  return;
}


