/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031bf21c; name: FUN_031bf21c
 */


void FUN_031bf21c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 local_40;
  undefined8 uStack_38;
  
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  *param_1 = param_2;
  local_40 = *param_4;
  uStack_38 = param_4[1];
  piVar6 = (int *)param_4[4];
  uVar1 = *(uint *)(param_4 + 5);
  uVar5 = (ulong)uVar1;
  uVar2 = *(undefined4 *)(param_4 + 3);
  puVar4 = (undefined8 *)param_4[2];
  param_1[0x10] = param_2;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(int *)(param_1 + 0x14) = *piVar6;
  uVar7 = *puVar4;
  param_1[0x13] = puVar4[1];
  param_1[0x12] = uVar7;
  *(undefined4 *)(param_1 + 0x11) = 1;
  FUN_031bf2e8(param_1,uVar2,&local_40);
  if (0 < (int)uVar1) {
    do {
      if (*piVar6 != -1) {
        lVar3 = FUN_031befdc(param_1 + 2);
        *(undefined4 *)(lVar3 + 4) = 0;
        *(ushort *)(lVar3 + 0xe) = *(ushort *)(lVar3 + 0xe) | 8;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 1;
    } while (uVar5 != 0);
  }
  param_1[0x22] = param_1 + 2;
  param_1[0x23] = *param_1;
  return;
}


