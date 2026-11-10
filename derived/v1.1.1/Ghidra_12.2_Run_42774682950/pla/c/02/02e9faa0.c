/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9faa0; name: FUN_02e9faa0
 */


void FUN_02e9faa0(undefined8 param_1)

{
  ulong uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 uVar10;
  
  uVar6 = (ulong)DAT_0440a388;
  if (DAT_0440a388 != 0) {
    puVar3 = (undefined8 *)(*DAT_0442d138)(0,uVar6 << 3);
    if (DAT_0440a388 != 0) {
      if (puVar3 == (undefined8 *)0x0) {
        uVar6 = 0;
      }
      uVar9 = 0;
      puVar8 = DAT_0440a380;
      do {
        uVar10 = *puVar8;
        uVar5 = (uint)uVar6;
        uVar1 = uVar6;
        puVar4 = puVar3;
        if (uVar9 < uVar5) {
joined_r0x02e9fb80:
          puVar3 = puVar4;
          uVar6 = uVar1;
          if (uVar9 < uVar5) {
            uVar1 = (ulong)uVar9;
            uVar9 = uVar9 + 1;
            if (puVar3 + uVar1 != (undefined8 *)0x0) {
              puVar3[uVar1] = uVar10;
            }
          }
        }
        else {
          iVar2 = uVar5 + (uVar5 >> 1);
          if (uVar5 == 0) {
            iVar2 = 1;
          }
          uVar5 = iVar2 + uVar5;
          puVar4 = (undefined8 *)FUN_02f59e50(0,puVar3,(ulong)uVar5 << 3);
          uVar1 = (ulong)uVar5;
          if (puVar4 != (undefined8 *)0x0) goto joined_r0x02e9fb80;
        }
        puVar4 = puVar8 + 1;
        (**(code **)(*(long *)*puVar8 + 0x10))();
        puVar8 = puVar4;
      } while (puVar4 != DAT_0440a380 + DAT_0440a388);
      if (uVar9 != 0) {
        lVar7 = (ulong)uVar9 << 3;
        puVar8 = puVar3;
        do {
          (**(code **)(*(long *)*puVar8 + 0xa8))((long *)*puVar8,param_1);
          (**(code **)(*(long *)*puVar8 + 0x18))();
          lVar7 = lVar7 + -8;
          puVar8 = puVar8 + 1;
        } while (lVar7 != 0);
      }
    }
    if (puVar3 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02e9fbec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_0442d150)(0,puVar3);
      return;
    }
  }
  return;
}


