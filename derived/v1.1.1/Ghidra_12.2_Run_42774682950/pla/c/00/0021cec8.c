/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0021cec8; name: FUN_0021cec8
 */


undefined8 FUN_0021cec8(uint *param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  FUN_00876ba8(&local_50);
  local_50._4_4_ = *param_3;
  uVar2 = FUN_00877190(param_2,&local_50);
  *(undefined8 *)(param_1 + 8) = uVar2;
  if (*(char *)((long)param_3 + 0x39) == '\0') {
    uVar2 = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)(param_1 + 6) = uVar2;
    uVar1 = param_3[4];
    param_1[10] = uVar1;
    local_50 = CONCAT44(local_50._4_4_,(int)uVar2);
    uVar2 = (**(code **)(param_3 + 10))((ulong)uVar1 * 0x48,4,*(undefined8 *)(param_3 + 0xc));
    *(undefined8 *)(param_1 + 2) = uVar2;
    uVar2 = (**(code **)(param_3 + 10))((ulong)param_1[10] << 4,4,*(undefined8 *)(param_3 + 0xc));
    *(undefined8 *)(param_1 + 4) = uVar2;
    if (param_1[10] != 0) {
      lVar3 = 0;
      lVar4 = 0;
      uVar5 = 0;
      do {
        FUN_008772a4(*(long *)(param_1 + 2) + lVar3);
        FUN_008772c0(*(long *)(param_1 + 2) + lVar3,param_2,&local_50,*(undefined8 *)(param_3 + 6),
                     *(long *)(param_3 + 8) +
                     ((*(long *)(param_1 + 6) + *(long *)(param_1 + 8)) - 1U &
                     -*(long *)(param_1 + 8)) * uVar5);
        FUN_00877434(*(long *)(param_1 + 2) + lVar3,*(long *)(param_1 + 4) + lVar4);
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x10;
        lVar3 = lVar3 + 0x48;
      } while (uVar5 < param_1[10]);
    }
    if (*(char *)(param_3 + 0xe) != '\0') {
      *param_1 = *param_1 | 1;
      uVar2 = (**(code **)(param_3 + 10))(8,4,*(undefined8 *)(param_3 + 0xc));
      *(undefined8 *)(param_1 + 0x10) = uVar2;
      uVar2 = (**(code **)(param_3 + 10))(8,4,*(undefined8 *)(param_3 + 0xc));
      *(undefined8 *)(param_1 + 0x12) = uVar2;
    }
  }
  else {
    *param_1 = *param_1 | 2;
  }
  return 1;
}


