/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f235c; name: FUN_007f235c
 */


void FUN_007f235c(undefined8 param_1,long *param_2,void *param_3,uint param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_28 [2];
  
  if (param_3 == (void *)0x0) {
    uVar4 = 0x10407;
  }
  else if (param_4 < 0x10) {
    uVar4 = 0x10404;
  }
  else {
    puVar5 = (undefined1 *)param_2[4];
    if ((puVar5 != (undefined1 *)0x0) && ((int)param_2[5] != 0)) {
      uVar1 = *puVar5;
      uVar2 = puVar5[1];
      uVar3 = (**(code **)(*param_2 + 0x58))(param_2);
      if ((CONCAT11(uVar1,uVar2) - 1 < uVar3) &&
         ((uint)CONCAT11(uVar1,uVar2) <= *(uint *)(param_2 + 5))) {
        memcpy(param_3,(void *)(param_2[4] + 5),0x10);
        local_40 = (ulong)local_40._4_4_ << 0x20;
      }
      else {
        local_38 = 0;
        local_40 = 0x40;
        (**(code **)(*param_2 + 0x50))(param_2,&local_40);
        local_40 = CONCAT44(local_40._4_4_,0x10408);
      }
      goto LAB_007f242c;
    }
    uVar4 = 0x10408;
  }
  local_40 = CONCAT44(local_40._4_4_,uVar4);
LAB_007f242c:
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_40 | 4),(Result *)local_28);
  FUN_007ee578(param_1,&local_40);
  return;
}


