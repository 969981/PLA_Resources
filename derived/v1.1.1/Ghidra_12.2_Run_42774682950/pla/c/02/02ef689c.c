/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef689c; name: FUN_02ef689c
 */


void FUN_02ef689c(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  char local_24 [4];
  
  *param_1 = &PTR_FUN_042ab6c8;
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar3 = FUN_02ef7dac(param_1 + 0xc,*(int *)(param_1 + 0x14),local_24);
    if (((lVar3 != 0) && (local_24[0] != '\0')) &&
       (iVar1 = *(int *)(lVar3 + 4) + -1, *(int *)(lVar3 + 4) = iVar1, iVar1 == 0)) {
      FUN_02ef6ee8(param_1 + 0xc,*(undefined4 *)(param_1 + 0x14));
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined1 *)(param_1 + 0x1f) = 1;
  }
  if (param_1[4] != 0) {
    *(undefined4 *)(param_1 + 5) = 0;
    (*DAT_0442d150)(0);
    param_1[4] = 0;
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
  }
  if (param_1[6] != 0) {
    *(undefined4 *)(param_1 + 7) = 0;
    (*DAT_0442d150)(0);
    param_1[6] = 0;
    *(undefined4 *)((long)param_1 + 0x3c) = 0;
  }
  if (param_1[8] != 0) {
    *(undefined4 *)(param_1 + 9) = 0;
    (*DAT_0442d150)(0);
    param_1[8] = 0;
    *(undefined4 *)((long)param_1 + 0x4c) = 0;
  }
  if (param_1[10] != 0) {
    *(undefined4 *)(param_1 + 0xb) = 0;
    (*DAT_0442d150)(0);
    param_1[10] = 0;
    *(undefined4 *)((long)param_1 + 0x5c) = 0;
  }
  if (param_1[0xc] == 0) {
    lVar3 = param_1[0xe];
  }
  else {
    *(undefined4 *)(param_1 + 0xd) = 0;
    (*DAT_0442d150)(0);
    param_1[0xc] = 0;
    *(undefined4 *)((long)param_1 + 0x6c) = 0;
    lVar3 = param_1[0xe];
  }
  if (lVar3 != 0) {
    *(undefined4 *)(param_1 + 0xf) = 0;
    (*DAT_0442d150)(0);
    param_1[0xe] = 0;
    *(undefined4 *)((long)param_1 + 0x7c) = 0;
  }
  *param_1 = &PTR_LAB_042ab6f0;
  if (param_1[2] == 0) {
    uVar4 = 0;
  }
  else {
    *(undefined8 *)(param_1[2] + 0x18) = param_1[3];
    uVar4 = param_1[2];
  }
  puVar2 = PTR_DAT_043885e8;
  lVar3 = param_1[3];
  puVar5 = (undefined8 *)(PTR_DAT_043885e8 + 0x10);
  if ((undefined8 *)*puVar5 != param_1) {
    puVar5 = (undefined8 *)(lVar3 + 0x10);
  }
  *puVar5 = uVar4;
  if (*(undefined8 **)(puVar2 + 8) == param_1) {
    *(long *)(puVar2 + 8) = lVar3;
  }
  *(int *)puVar2 = *(int *)puVar2 + -1;
  return;
}


