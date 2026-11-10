/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e24f64; name: FUN_02e24f64
 */


void FUN_02e24f64(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  uint *puVar7;
  ulong uVar8;
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    if (*(int *)((long)param_1 + 0x14) != 0) {
      uVar5 = 0;
      while( true ) {
        plVar6 = (long *)(lVar4 + uVar5 * 0x18);
        plVar1 = (long *)*plVar6;
        if (plVar1 != (long *)0x0) {
          puVar7 = (uint *)(lVar4 + uVar5 * 0x18 + 0x10);
          uVar3 = *puVar7;
          if (uVar3 != 0) {
            uVar8 = 0;
            lVar2 = *plVar1;
            while( true ) {
              if (lVar2 != 0) {
                (**(code **)(*param_2 + 0x18))(param_2);
                *(undefined8 *)(*plVar6 + uVar8 * 8) = 0;
                uVar3 = *puVar7;
              }
              uVar8 = uVar8 + 1;
              if (uVar3 <= uVar8) break;
              lVar2 = *(long *)(*plVar6 + uVar8 * 8);
            }
            plVar1 = (long *)*plVar6;
          }
          (**(code **)(*param_2 + 0x18))(param_2,plVar1);
        }
        lVar4 = lVar4 + uVar5 * 0x18;
        uVar5 = uVar5 + 1;
        *(undefined4 *)(lVar4 + 8) = 0;
        *(undefined4 *)(lVar4 + 0x10) = 0;
        if (*(uint *)((long)param_1 + 0x14) <= uVar5) break;
        lVar4 = *param_1;
      }
      lVar4 = *param_1;
    }
    (**(code **)(*param_2 + 0x18))(param_2,lVar4);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    param_1[1] = 0;
  }
  return;
}


