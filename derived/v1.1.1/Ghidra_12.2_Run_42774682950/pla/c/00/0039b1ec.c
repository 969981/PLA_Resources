/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0039b1ec; name: FUN_0039b1ec
 */


void FUN_0039b1ec(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long local_80;
  long lStack_78;
  long local_70;
  long local_60 [2];
  long *local_50 [4];
  
  lStack_78 = param_2[1];
  local_80 = *param_2;
  local_70 = param_2[2];
  if (local_80 != *param_3) {
    do {
      local_60[0] = *(long *)(local_80 + 8);
      FUN_00399880(local_50,*(undefined8 *)(param_1 + 0x10),local_60,0);
      if (local_50[0] == (long *)0x0) {
        lVar4 = *(long *)(local_80 + 8);
        local_60[1] = 0;
        local_60[0] = lVar4;
        FUN_00399fb4(local_50,*(undefined8 *)(param_1 + 0x10),local_60);
        plVar1 = local_50[0];
        lVar2 = local_50[0][1];
        if (lVar2 == 0) {
          lVar2 = FUN_00399f10(param_1,lVar4);
          *plVar1 = lVar2;
          plVar1[1] = lVar2;
        }
        uVar3 = *(undefined8 *)(lVar4 + 0x20);
        *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(lVar4 + 0x28);
        *(undefined8 *)(lVar2 + 0x20) = uVar3;
      }
      FUN_0039ae40(&local_80);
    } while (local_80 != *param_3);
  }
  return;
}


