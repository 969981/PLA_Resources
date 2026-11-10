/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d9ea0; name: FUN_003d9ea0
 */


undefined8 * FUN_003d9ea0(undefined8 *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long local_80 [4];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38 [4];
  char local_14 [4];
  
  local_14[0] = '\0';
  uStack_58 = param_1[1];
  local_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  FUN_003da860(local_38,&local_60,local_14);
  uStack_98 = param_1[5];
  local_a0 = param_1[4];
  uStack_88 = param_1[7];
  uStack_90 = param_1[6];
  FUN_003da860(local_80,&local_a0,local_14);
  if (local_14[0] != '\0') {
    param_1 = (undefined8 *)0x0;
  }
  if (local_38[0] == 0) {
    bVar1 = true;
  }
  else {
    bVar1 = 1 < *(uint *)(local_38[0] + 8);
  }
  if ((local_80[0] != 0) && ((bool)(*(uint *)(local_80[0] + 8) < 2 & (bVar1 ^ 1U)))) {
    puVar2 = (undefined8 *)FUN_003d9b00(local_38,local_80);
    return puVar2;
  }
  if (param_1 != (undefined8 *)0x0) {
    return param_1;
  }
  uVar3 = FUN_002e2e80(PTR_FUN_04373078,0x80);
  if (uVar3 != 0) {
    FUN_003d833c(uVar3,local_38,local_80);
  }
  return (undefined8 *)(uVar3 | 2);
}


