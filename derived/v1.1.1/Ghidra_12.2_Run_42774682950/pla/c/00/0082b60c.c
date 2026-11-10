/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082b60c; name: FUN_0082b60c
 */


undefined8 FUN_0082b60c(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  int *piVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  undefined1 auStack_48 [16];
  ulong local_38 [2];
  undefined4 local_28 [2];
  
  puVar2 = PTR_DAT_04377550;
  FUN_0082a238(*(undefined8 *)PTR_DAT_04377550);
  FUN_0082b398(*(undefined8 *)puVar2,0);
  if ((*(long *)(param_1 + 0x58) != 0) && (*(char *)(*(long *)(param_1 + 0x58) + 0x28) != '\0')) {
    local_38[0] = CONCAT44(local_38[0]._4_4_,0x6c05);
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
    FUN_007ee660(param_1 + 0xa0,local_38);
  }
  local_38[0] = CONCAT44(local_38[0]._4_4_,0x6c05);
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  piVar4 = (int *)(param_1 + 0xa0);
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  if (*piVar4 == (int)local_38[0]) {
    FUN_007e5d18(uVar5);
  }
  else {
    FUN_007ee578(auStack_48,piVar4);
    FUN_007e5cac(uVar5,auStack_48);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  local_38[0] = 0;
  FUN_007ecf14(local_38);
  lVar6 = local_38[0] - *(long *)(param_1 + 0xb0);
  plVar3 = (long *)FUN_007ecfa4();
  puVar2 = PTR_DAT_043773b8;
  uVar1 = 0;
  if (*plVar3 != 0) {
    uVar1 = (undefined4)(lVar6 / *plVar3);
  }
  *(undefined4 *)(PTR_DAT_043773b8 + 0x3e0) = uVar1;
  *(undefined4 *)(puVar2 + 0x3dc) = *(undefined4 *)(param_1 + 0xa0);
  puVar2[0x3f1] = (char)*(undefined4 *)(param_1 + 0x94);
  if (*(int **)(param_1 + 0x58) != (int *)0x0) {
    if (**(int **)(param_1 + 0x58) == 1) {
      FUN_007e5d18();
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  piVar7 = (int *)(param_1 + 0x60);
  if (*piVar7 == 1) {
    FUN_007e5d18(piVar7);
  }
  FUN_007e5bd8(piVar7);
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  local_38[0] = local_38[0] & 0xffffffff00000000;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_007ee660(piVar4,local_38);
  *(undefined8 *)(param_1 + 0x98) = 0;
  return 1;
}


