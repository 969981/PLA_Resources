/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e24d6c; name: FUN_02e24d6c
 */


undefined8 FUN_02e24d6c(float param_1,long *param_2,long *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  
  *(undefined4 *)(param_2 + 2) = 0;
  uVar7 = (ulong)param_4;
  *(uint *)(param_2 + 3) = (int)(param_1 * 0.001 * (float)param_5) + 3U & 0xfffffffc;
  lVar3 = (**(code **)(*param_3 + 0x10))(param_3,uVar7 << 3);
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    lVar3 = (**(code **)(*param_3 + 0x10))(param_3,uVar7 * 0x18);
    *param_2 = lVar3;
    if (lVar3 != 0) {
      if (param_4 == 0) {
        *(undefined4 *)((long)param_2 + 0x14) = 0;
      }
      else {
        lVar6 = 0;
        lVar2 = lVar3;
        while( true ) {
          if (lVar2 != 0) {
            puVar4 = (undefined8 *)(lVar3 + lVar6);
            *(undefined4 *)(puVar4 + 2) = 0;
            *puVar4 = 0;
            puVar4[1] = 0;
          }
          if (uVar7 * 0x18 + -0x18 == lVar6) break;
          lVar3 = *param_2;
          lVar6 = lVar6 + 0x18;
          lVar2 = lVar3 + lVar6;
        }
        uVar7 = 0;
        *(uint *)((long)param_2 + 0x14) = param_4;
        do {
          *(undefined4 *)(param_2[1] + uVar7 * 4) = 0;
          lVar3 = param_2[3];
          if ((int)lVar3 != 0) {
            lVar6 = *param_2;
            plVar8 = (long *)(lVar6 + uVar7 * 0x18);
            puVar4 = (undefined8 *)(**(code **)(*param_3 + 0x10))(param_3,8);
            *plVar8 = (long)puVar4;
            if (puVar4 == (undefined8 *)0x0) {
              return 0x34;
            }
            lVar6 = lVar6 + uVar7 * 0x18;
            uVar1 = (int)lVar3 + 3U & 0xfffffffc;
            *puVar4 = 0;
            *(uint *)(lVar6 + 8) = uVar1;
            *(undefined8 *)(lVar6 + 0xc) = 0x100000000;
            if (uVar1 != 0) {
              uVar5 = (**(code **)(*param_3 + 0x10))(param_3,(ulong)uVar1 << 2);
              *(undefined8 *)*plVar8 = uVar5;
              if (*(long *)*plVar8 == 0) {
                return 0x34;
              }
              uVar9 = 1;
              while (uVar9 < *(uint *)(lVar6 + 0x10)) {
                uVar5 = (**(code **)(*param_3 + 0x10))(param_3,(ulong)*(uint *)(lVar6 + 8) << 2);
                lVar3 = uVar9 * 8;
                uVar9 = uVar9 + 1;
                *(undefined8 *)(*plVar8 + lVar3) = uVar5;
                if (*(long *)(*plVar8 + lVar3) == 0) {
                  return 0x34;
                }
              }
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(uint *)((long)param_2 + 0x14));
      }
      return 1;
    }
  }
  return 0x34;
}


