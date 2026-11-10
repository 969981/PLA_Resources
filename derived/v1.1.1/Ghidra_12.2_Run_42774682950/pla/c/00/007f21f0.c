/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f21f0; name: FUN_007f21f0
 */


void FUN_007f21f0(undefined8 param_1,long *param_2,void *param_3,uint param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 local_50 [4];
  undefined4 local_38 [2];
  
  if (param_3 == (void *)0x0) {
    local_50[0] = 0x10407;
  }
  else {
    puVar5 = (undefined1 *)param_2[4];
    if ((puVar5 != (undefined1 *)0x0) && ((int)param_2[5] != 0)) {
      uVar1 = *puVar5;
      uVar2 = puVar5[1];
      uVar3 = (**(code **)(*param_2 + 0x58))(param_2);
      uVar4 = (uint)CONCAT11(uVar1,uVar2);
      if ((uVar4 - 1 < uVar3) &&
         (uVar3 = *(uint *)(param_2 + 5) - uVar4, uVar4 <= *(uint *)(param_2 + 5))) {
        uVar4 = (**(code **)(*param_2 + 0x60))(param_2);
        if (uVar4 < uVar3) {
          uVar3 = (**(code **)(*param_2 + 0x60))(param_2);
        }
        if (param_4 < uVar3) {
          local_50[0] = 0x10404;
        }
        else {
          memcpy(param_3,(void *)(param_2[4] + (ulong)CONCAT11(uVar1,uVar2)),(ulong)uVar3);
          local_50[0] = 0;
        }
        goto LAB_007f227c;
      }
    }
    local_50[0] = 0x10408;
  }
LAB_007f227c:
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_38);
  FUN_007ee578(param_1,local_50);
  return;
}


