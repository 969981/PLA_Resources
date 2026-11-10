/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0120bc6c; name: FUN_0120bc6c
 */


undefined8 FUN_0120bc6c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_18;
  
  if (*(long *)(param_1 + 0x290) == 0) {
    local_18 = *(undefined8 *)(param_1 + 8);
    FUN_0120bdb0(&local_40,local_18,&local_18);
    uVar2 = local_40;
    local_40 = 0;
    lVar3 = *(long *)(param_1 + 0x290);
    *(undefined8 *)(param_1 + 0x290) = uVar2;
    if (lVar3 == 0) {
      *(undefined8 *)(param_1 + 0x2a8) = local_28;
    }
    else {
      FUN_0120c12c(param_1 + 0x298);
      *(undefined8 *)(param_1 + 0x2a8) = local_28;
      uVar2 = *(undefined8 *)(param_1 + 0x290);
    }
    *(undefined8 *)(param_1 + 0x2a0) = uStack_30;
    *(undefined8 *)(param_1 + 0x298) = local_38;
    uVar1 = FUN_027dcc74(uVar2);
  }
  else {
    uVar1 = FUN_027dcc74();
  }
  if ((uVar1 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x290);
    *(undefined8 *)(param_1 + 0x290) = 0;
    if (lVar3 != 0) {
      FUN_0120c12c(param_1 + 0x298);
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


