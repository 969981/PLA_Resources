/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086ee64; name: FUN_0086ee64
 */


undefined8 FUN_0086ee64(undefined2 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  undefined2 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  long local_40 [4];
  
  if ((param_1[0x1ee] == 0) || (param_1[0x20e] == 0)) {
    return 0;
  }
  **(undefined2 **)(param_1 + 0x4fc) = *param_1;
  FUN_0086fc38(local_40,param_1 + 0x208);
  FUN_007e346c(*(long *)(param_1 + 0x4fc) + 8,local_40);
  FUN_007e34a4(local_40);
  lVar6 = *(long *)(param_1 + 0x4fc);
  uVar1 = *(uint *)(param_1 + 0x20e);
  *(short *)(lVar6 + 0x20) = (short)uVar1;
  uVar1 = uVar1 & 0xffff;
  *(undefined4 *)(lVar6 + 0x3c) = *(undefined4 *)(param_1 + 0x502);
  *(undefined1 *)(lVar6 + 0x41) = *(undefined1 *)(param_1 + 0x50c);
  *(undefined1 *)(lVar6 + 0x38) = 0;
  uVar8 = 1;
  if (param_1[0x1fe] == 0) {
    uVar8 = 2;
  }
  *(undefined4 *)(lVar6 + 0x2c) = uVar8;
  uVar9 = (uint)(ushort)param_1[0x1ee];
  if (uVar9 == uVar1) {
    *(undefined4 *)(lVar6 + 0x28) = 1;
    lVar6 = FUN_0086faa0();
    iVar2 = *(int *)(lVar6 + 0x14);
  }
  else {
    *(undefined4 *)(lVar6 + 0x28) = 2;
    *(uint *)(lVar6 + 0x34) = uVar1 - uVar9;
    if (uVar1 < uVar9) {
      *(undefined4 *)(lVar6 + 0x30) = 1;
      *(undefined1 *)(lVar6 + 0x40) = 0;
      lVar6 = FUN_0086faa0();
      iVar2 = *(int *)(lVar6 + 0x14);
    }
    else {
      *(uint *)(lVar6 + 0x30) = uVar1 - uVar9;
      lVar6 = FUN_0086faa0();
      iVar2 = *(int *)(lVar6 + 0x14);
    }
  }
  if (iVar2 == -1) {
    puVar7 = *(undefined2 **)(param_1 + 0x4fc);
    uVar8 = *(undefined4 *)(puVar7 + 0x14);
  }
  else {
    lVar6 = FUN_0086faa0();
    uVar8 = *(undefined4 *)(lVar6 + 0x14);
    puVar7 = *(undefined2 **)(param_1 + 0x4fc);
    *(undefined4 *)(puVar7 + 0x14) = uVar8;
  }
  puVar4 = PTR_DAT_043773b8;
  PTR_DAT_043773b8[0x19c] = (char)uVar8;
  puVar4[0xef] = *(undefined1 *)((long)puVar7 + 0x41);
  puVar4[0x19d] = (char)*(undefined4 *)(puVar7 + 0x16);
  *(short *)(puVar4 + 0x19e) = (short)*(undefined4 *)(puVar7 + 0x1a);
  *(undefined2 *)(puVar4 + 0x1ac) = puVar7[0x10];
  *(undefined2 *)(puVar4 + 0x1ae) = *puVar7;
  puVar4[0x20e] = *(undefined1 *)(puVar7 + 0x1c);
  *(short *)(puVar4 + 0x1b0) = (short)*(undefined4 *)(param_1 + 0x50a);
  *(undefined2 *)(puVar4 + 0x1b2) = param_1[0x508];
  *(short *)(puVar4 + 0x1b4) = (short)*(undefined4 *)(puVar7 + 0x1e);
  local_40[0] = 0;
  puVar4[0x1b6] = (char)*(undefined4 *)(param_1 + 0x500);
  FUN_007ecf14(local_40);
  lVar6 = local_40[0] - *(long *)(param_1 + 0x504);
  plVar5 = (long *)FUN_007ecfa4();
  uVar3 = 0;
  if (*plVar5 != 0) {
    uVar3 = (undefined2)(lVar6 / *plVar5);
  }
  param_1[0x508] = uVar3;
  return 1;
}


