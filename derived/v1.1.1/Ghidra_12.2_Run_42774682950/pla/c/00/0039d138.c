/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0039d138; name: FUN_0039d138
 */


void FUN_0039d138(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long *plVar9;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 *local_28;
  undefined8 uStack_18;
  
  local_38 = param_2;
  uStack_30 = param_3;
  uStack_18 = param_4;
  if (*(ushort *)(param_1 + 8) < 0x101) {
    puVar6 = *(undefined4 **)(param_1 + 0x10);
    local_28 = &uStack_18;
    uVar1 = *(ushort *)(param_1 + 10);
    if ((ulong)uVar1 != 0) {
      puVar7 = puVar6;
      do {
        puVar8 = puVar7 + 8;
        FUN_0039ed64(&local_38,*puVar7,puVar7 + 2);
        puVar7 = puVar8;
      } while (puVar8 != puVar6 + (ulong)uVar1 * 8);
    }
  }
  else {
    plVar9 = *(long **)(param_1 + 0x10);
    local_28 = &uStack_18;
    plVar3 = (long *)*plVar9;
    while (plVar3 != plVar9 + 1) {
      FUN_0039ed64(&local_38,*(undefined4 *)(plVar3 + 4),plVar3 + 5);
      plVar4 = (long *)plVar3[1];
      if ((long *)plVar3[1] == (long *)0x0) {
        plVar4 = plVar3 + 2;
        bVar2 = (long *)*(long *)*plVar4 != plVar3;
        plVar3 = (long *)*plVar4;
        if (bVar2) {
          do {
            lVar5 = *plVar4;
            plVar4 = (long *)(lVar5 + 0x10);
            plVar3 = (long *)*plVar4;
          } while (*(long *)*plVar4 != lVar5);
        }
      }
      else {
        do {
          plVar3 = plVar4;
          plVar4 = (long *)*plVar3;
        } while (plVar4 != (long *)0x0);
      }
    }
  }
  return;
}


