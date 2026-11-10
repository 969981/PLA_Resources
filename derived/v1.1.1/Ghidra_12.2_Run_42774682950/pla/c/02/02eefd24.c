/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eefd24; name: FUN_02eefd24
 */


void FUN_02eefd24(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_042ab188;
  if (param_1[8] != 0) {
    *(undefined4 *)(param_1 + 9) = 0;
    (*DAT_0442d150)(0);
    param_1[8] = 0;
    *(undefined4 *)((long)param_1 + 0x4c) = 0;
  }
  if (param_1[4] != 0) {
    *(undefined2 *)(param_1 + 7) = 0;
    (*DAT_0442d150)(5);
    param_1[4] = 0;
  }
  lVar2 = param_1[5];
  uVar3 = *(uint *)(param_1 + 6);
  if (uVar3 != 0) {
    lVar6 = lVar2;
    do {
      if (*(long *)(lVar6 + 8) != 0) {
        *(undefined4 *)(lVar6 + 0x10) = 0;
        (*DAT_0442d150)(0,*(long *)(lVar6 + 8));
        *(undefined8 *)(lVar6 + 8) = 0;
        *(undefined4 *)(lVar6 + 0x14) = 0;
        lVar2 = param_1[5];
        uVar3 = *(uint *)(param_1 + 6);
      }
      lVar6 = lVar6 + 0x18;
    } while (lVar6 != lVar2 + (ulong)uVar3 * 0x18);
  }
  if (lVar2 != 0) {
    *(undefined4 *)(param_1 + 6) = 0;
    (*DAT_0442d150)(0);
    param_1[5] = 0;
    *(undefined4 *)((long)param_1 + 0x34) = 0;
  }
  *param_1 = &PTR_LAB_042ab1d8;
  if (param_1[2] == 0) {
    uVar4 = 0;
  }
  else {
    *(undefined8 *)(param_1[2] + 0x18) = param_1[3];
    uVar4 = param_1[2];
  }
  puVar1 = PTR_DAT_04388730;
  lVar2 = param_1[3];
  puVar5 = (undefined8 *)(PTR_DAT_04388730 + 0x10);
  if ((undefined8 *)*puVar5 != param_1) {
    puVar5 = (undefined8 *)(lVar2 + 0x10);
  }
  *puVar5 = uVar4;
  if (*(undefined8 **)(puVar1 + 8) == param_1) {
    *(long *)(puVar1 + 8) = lVar2;
  }
  *(int *)puVar1 = *(int *)puVar1 + -1;
  return;
}


