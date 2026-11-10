/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee3548; name: FUN_02ee3548
 */


void FUN_02ee3548(long *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint *puVar6;
  uint *local_40;
  undefined1 local_34 [4];
  
  local_34[0] = 1;
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 != 0) {
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = param_2 / uVar2;
    }
    for (puVar6 = *(uint **)(*param_1 + (ulong)(param_2 - uVar3 * uVar2) * 8); puVar6 != (uint *)0x0
        ; puVar6 = *(uint **)(puVar6 + 2)) {
      if (*puVar6 == param_2) {
        uVar4 = FUN_02edf43c(puVar6,param_3);
        local_40 = (uint *)0x0;
        lVar5 = FUN_02ee3a38(puVar6 + 8,param_3,&local_40,local_34);
        if (((uVar4 & 1) == 0) && (lVar5 == 0)) {
          return;
        }
        puVar1 = puVar6 + 4;
        if (local_40 != (uint *)0x0) {
          puVar1 = local_40;
        }
        FUN_02ee0fe0(*puVar1,puVar6,lVar5,local_40,param_3,param_4,1,local_34[0]);
        return;
      }
    }
  }
  return;
}


