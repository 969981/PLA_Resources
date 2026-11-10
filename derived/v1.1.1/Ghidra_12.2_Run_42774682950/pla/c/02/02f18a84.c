/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f18a84; name: FUN_02f18a84
 */


undefined8 FUN_02f18a84(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_28;
  
  uVar2 = (**(code **)(*(long *)param_1[0x2d] + 0x130))((long *)param_1[0x2d],1);
  if ((uVar2 & 1) == 0) {
    uVar3 = 2;
  }
  else {
    lVar4 = param_1[0x2d];
    local_28 = (**(code **)(*param_1 + 0x28))(param_1);
    uVar1 = (**(code **)(*param_1 + 0x30))(param_1);
    if (lVar4 != 0) {
      FUN_02ed8974(lVar4,param_1,&local_28,uVar1 & 1);
      FUN_02ee8c8c(param_1,lVar4);
    }
    lVar4 = FUN_02ef7fa0(param_1);
    param_1[0x2e] = lVar4;
    uVar3 = 1;
  }
  return uVar3;
}


