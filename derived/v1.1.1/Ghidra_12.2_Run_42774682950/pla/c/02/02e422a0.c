/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e422a0; name: FUN_02e422a0
 */


void FUN_02e422a0(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  uVar1 = *(uint *)(DAT_0440a140 + 0x38);
  if (uVar1 != 0) {
    uVar3 = 0;
    uVar5 = (uint)*(long *)(param_1 + 0x16);
    if (uVar1 != 0) {
      uVar3 = uVar5 / uVar1;
    }
    for (plVar6 = *(long **)(*(long *)(DAT_0440a140 + 0x30) + (ulong)(uVar5 - uVar3 * uVar1) * 8);
        plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6[1] == *(long *)(param_1 + 0x16)) {
        *(int *)(plVar6[2] + 0x50) = *(int *)(plVar6[2] + 0x50) + 1;
        puVar7 = (undefined8 *)plVar6[2];
        if (puVar7 != (undefined8 *)0x0) {
          lVar4 = FUN_02e43210(puVar7);
          if ((lVar4 != 0) && (lVar4 = FUN_02e4358c(puVar7), lVar4 != 0)) {
            FUN_02e5be50(lVar4,param_1[0x14],*param_1,*(undefined8 *)(param_1 + 0x12),param_1 + 2);
          }
          iVar2 = *(int *)(puVar7 + 10);
          *(int *)(puVar7 + 10) = iVar2 + -1;
          if (iVar2 + -1 == 0) {
            (**(code **)*puVar7)(puVar7);
            (*DAT_0442d150)(4,puVar7);
            lVar4 = *(long *)(param_1 + 0xe);
            goto joined_r0x02e423a0;
          }
        }
        break;
      }
    }
  }
  lVar4 = *(long *)(param_1 + 0xe);
joined_r0x02e423a0:
  if ((lVar4 != 0) && (*(char *)(param_1 + 0x10) != '\0')) {
    (*DAT_0442d150)(9);
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  *(undefined8 *)(param_1 + 0xe) = 0;
  return;
}


