/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0071e9e4; name: FUN_0071e9e4
 */


void FUN_0071e9e4(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *local_80;
  long lStack_78;
  long *local_60;
  long lStack_58;
  long local_40 [2];
  
  lStack_58 = *(long *)(param_2 + 0x10);
  FUN_006fb578(&local_60,*(undefined8 *)(lStack_58 + 0x18));
  lStack_78 = lStack_58;
  local_80 = local_60;
  while (local_80 != (long *)0x0) {
    lVar3 = local_80[1];
    local_40[1] = 0;
    local_40[0] = lVar3;
    FUN_00726a0c(&local_60,*(undefined8 *)(param_1 + 0x10),local_40);
    plVar1 = local_60;
    lVar2 = local_60[1];
    if (lVar2 == 0) {
      lVar2 = FUN_007268d0(param_1,lVar3);
      *plVar1 = lVar2;
      plVar1[1] = lVar2;
    }
    FUN_0030c5d8(lVar2 + 0x18,lVar3 + 0x18);
    FUN_006fb6e8(&local_80);
  }
  return;
}


