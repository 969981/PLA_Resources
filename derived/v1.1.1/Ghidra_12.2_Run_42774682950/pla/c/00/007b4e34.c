/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007b4e34; name: FUN_007b4e34
 */


void FUN_007b4e34(long param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long local_80;
  long lStack_78;
  long local_70;
  long *local_60 [4];
  long local_40;
  undefined8 uStack_38;
  
  lStack_78 = param_2[1];
  local_80 = *param_2;
  local_70 = param_2[2];
  if (local_80 != *param_3) {
    do {
      local_40 = *(long *)(local_80 + 8);
      FUN_007944ac(local_60,*(undefined8 *)(param_1 + 0x10),&local_40,0);
      if (local_60[0] == (long *)0x0) {
        lVar5 = *(long *)(local_80 + 8);
        uStack_38 = 0;
        local_40 = lVar5;
        FUN_0079410c(local_60,*(undefined8 *)(param_1 + 0x10),&local_40);
        plVar3 = local_60[0];
        lVar4 = local_60[0][1];
        if (lVar4 == 0) {
          lVar4 = FUN_00793f40(param_1,lVar5);
          *plVar3 = lVar4;
          plVar3[1] = lVar4;
        }
        if (lVar4 != lVar5) {
          uVar1 = *(ulong *)(lVar5 + 0x20);
          lVar2 = *(long *)(lVar5 + 0x28);
          if ((*(byte *)(lVar5 + 0x18) & 1) == 0) {
            lVar2 = lVar5 + 0x19;
            uVar1 = (ulong)(*(byte *)(lVar5 + 0x18) >> 1);
          }
          FUN_00291910(lVar4 + 0x18,lVar2,uVar1);
        }
      }
      FUN_007b34d8(&local_80);
    } while (local_80 != *param_3);
  }
  return;
}


