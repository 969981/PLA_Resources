/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00637454; name: FUN_00637454
 */


void FUN_00637454(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long local_80;
  long lStack_78;
  long local_70;
  long *local_60 [4];
  long local_40 [2];
  
  lStack_78 = param_2[1];
  local_80 = *param_2;
  local_70 = param_2[2];
  if (local_80 != *param_3) {
    do {
      local_40[0] = *(long *)(local_80 + 8);
      FUN_006342a8(local_60,*(undefined8 *)(param_1 + 0x10),local_40,0);
      if (local_60[0] == (long *)0x0) {
        lVar3 = *(long *)(local_80 + 8);
        local_40[1] = 0;
        local_40[0] = lVar3;
        FUN_00634d1c(local_60,*(undefined8 *)(param_1 + 0x10),local_40);
        plVar1 = local_60[0];
        lVar2 = local_60[0][1];
        if (lVar2 == 0) {
          lVar2 = FUN_00634be0(param_1,lVar3);
          *plVar1 = lVar2;
          plVar1[1] = lVar2;
        }
        FUN_002e03d4(lVar2 + 0x18,lVar3 + 0x18);
      }
      FUN_00635b48(&local_80);
    } while (local_80 != *param_3);
  }
  return;
}


