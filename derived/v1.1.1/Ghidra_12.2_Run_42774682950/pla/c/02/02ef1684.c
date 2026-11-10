/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef1684; name: FUN_02ef1684
 */


undefined8 FUN_02ef1684(long *param_1,uint param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar4 = *(uint *)(param_1 + 1);
  uVar8 = (ulong)uVar4;
  if (uVar4 <= param_2) {
    if (*(uint *)((long)param_1 + 0xc) < param_2) {
      uVar1 = *(uint *)((long)param_1 + 0xc) + (param_2 - uVar4);
      lVar5 = (*DAT_0442d148)(0,*param_1,(ulong)uVar1 << 4);
      if (lVar5 == 0) {
        return 0;
      }
      *param_1 = lVar5;
      *(uint *)((long)param_1 + 0xc) = uVar1;
    }
    if (uVar4 < param_2) {
      uVar7 = ~uVar8;
      if ((param_2 - uVar4 & 1) != 0) {
        puVar2 = (undefined8 *)(*param_1 + uVar8 * 0x10);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = 0;
          puVar2[1] = 0;
        }
        uVar8 = uVar8 + 1;
      }
      if (uVar7 + param_2 != 0) {
        lVar6 = param_2 - uVar8;
        lVar5 = uVar8 << 4;
        do {
          if (*param_1 + lVar5 != 0) {
            puVar2 = (undefined8 *)(*param_1 + lVar5);
            *puVar2 = 0;
            puVar2[1] = 0;
          }
          lVar3 = *param_1 + lVar5;
          if (lVar3 != -0x10) {
            *(undefined8 *)(lVar3 + 0x10) = 0;
            *(undefined8 *)(lVar3 + 0x18) = 0;
          }
          lVar6 = lVar6 + -2;
          lVar5 = lVar5 + 0x20;
        } while (lVar6 != 0);
      }
    }
  }
  *(uint *)(param_1 + 1) = param_2;
  return 1;
}


