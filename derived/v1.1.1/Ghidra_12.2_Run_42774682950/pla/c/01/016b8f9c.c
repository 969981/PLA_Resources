/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016b8f9c; name: FUN_016b8f9c
 */


void FUN_016b8f9c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  undefined8 local_28;
  
  uVar1 = FUN_016b8e38(*(long *)(*(long *)PTR_DAT_043806f8 + 0x48) + 8);
  lVar3 = *(long *)(*(long *)PTR_DAT_0437e368 + 8);
  local_28 = uVar1;
  uVar2 = FUN_0094cba4(lVar3 + 8);
  if ((uVar2 & 1) == 0) {
    lVar3 = 0;
  }
  local_38 = lVar3;
  FUN_016b9070(&local_58,uVar1,&local_28,&local_38);
  uVar1 = local_58;
  local_58 = 0;
  lVar3 = *(long *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  if (lVar3 == 0) {
    *(undefined8 *)(param_1 + 0xd0) = uStack_48;
    *(undefined8 *)(param_1 + 0xd8) = local_40;
    *(undefined8 *)(param_1 + 200) = local_50;
  }
  else {
    FUN_0107e1fc(param_1 + 200);
    *(undefined8 *)(param_1 + 0xd0) = uStack_48;
    *(undefined8 *)(param_1 + 0xd8) = local_40;
    *(undefined8 *)(param_1 + 200) = local_50;
    uVar1 = *(undefined8 *)(param_1 + 0xc0);
  }
  local_58 = 0;
  FUN_016b9188(uVar1);
  return;
}


