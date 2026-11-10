/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6d41c; name: FUN_02e6d41c
 */


undefined8 FUN_02e6d41c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  
  *(undefined8 *)(param_1 + 0x360) = param_3;
  uVar1 = *(uint *)(param_2 + 1);
  uVar2 = *(uint *)((long)param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x20) = 0;
  uVar5 = 0;
  if (uVar2 != 0) {
    uVar5 = uVar1 / uVar2;
  }
  if (uVar5 * uVar2 != 0) {
    uVar4 = 0x200;
    do {
      uVar8 = uVar4;
      uVar4 = uVar8 << 1;
    } while (uVar8 < *(uint *)((long)param_2 + 0xc));
    uVar3 = *(uint *)((long)param_2 + 0x14);
    uVar7 = uVar8;
    if (uVar8 < uVar3) {
      if (uVar4 < uVar3) {
        uVar7 = uVar8 << 2;
        if (((uVar8 << 2 < uVar3) && (uVar7 = uVar8 << 3, uVar8 << 3 < uVar3)) &&
           (uVar7 = uVar8 << 4, uVar8 << 4 < uVar3)) {
          uVar4 = uVar8 << 5;
          do {
            uVar7 = uVar4;
            uVar4 = uVar7 << 1;
          } while (uVar7 < uVar3);
        }
      }
      else {
        uVar7 = uVar4;
      }
    }
    FUN_02e6d528(param_1 + 0x38,uVar5 * uVar2,uVar7,uVar8,*(undefined4 *)(param_2 + 2),*param_2);
  }
  if (uVar2 <= uVar1) {
    lVar6 = (*DAT_0442d138)(7,(ulong)uVar5 << 3);
    *(long *)(param_1 + 0x28) = lVar6;
    if (lVar6 == 0) {
      return 2;
    }
    *(uint *)(param_1 + 0x34) = uVar5;
  }
  *(undefined1 *)(param_1 + 0x358) = *(undefined1 *)(param_2 + 9);
  return 1;
}


