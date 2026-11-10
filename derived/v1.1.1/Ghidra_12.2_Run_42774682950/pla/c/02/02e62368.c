/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e62368; name: FUN_02e62368
 */


undefined8 FUN_02e62368(long *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  uVar2 = *(uint *)(param_1 + 1);
  uVar6 = (ulong)uVar2;
  if (uVar2 <= param_2) {
    if ((*(uint *)((long)param_1 + 0xc) < param_2) &&
       (uVar3 = FUN_02e4ddb4(param_1,param_2 - uVar2), (uVar3 & 1) == 0)) {
      return 0;
    }
    if (uVar2 < param_2) {
      uVar3 = ~uVar6;
      if ((param_2 - uVar2 & 1) != 0) {
        if (*param_1 + uVar6 * 0x20 != 0) {
          lVar5 = *param_1 + uVar6 * 0x20;
          *(undefined8 *)(lVar5 + 0x10) = 0;
          *(undefined8 *)(lVar5 + 0x18) = 0;
        }
        uVar6 = uVar6 + 1;
      }
      if (uVar3 + param_2 != 0) {
        lVar4 = param_2 - uVar6;
        lVar5 = uVar6 << 5;
        do {
          if (*param_1 + lVar5 != 0) {
            lVar1 = *param_1 + lVar5;
            *(undefined8 *)(lVar1 + 0x10) = 0;
            *(undefined8 *)(lVar1 + 0x18) = 0;
          }
          lVar1 = *param_1 + lVar5;
          if (lVar1 != -0x20) {
            *(undefined8 *)(lVar1 + 0x30) = 0;
            *(undefined8 *)(lVar1 + 0x38) = 0;
          }
          lVar4 = lVar4 + -2;
          lVar5 = lVar5 + 0x40;
        } while (lVar4 != 0);
      }
    }
  }
  *(uint *)(param_1 + 1) = param_2;
  return 1;
}


