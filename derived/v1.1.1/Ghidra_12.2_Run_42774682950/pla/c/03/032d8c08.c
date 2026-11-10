/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d8c08; name: FUN_032d8c08
 */


void FUN_032d8c08(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  
  *param_1 = &PTR_FUN_0434ac00;
  if (*(int *)(param_1 + 0x3d) != 0) {
    lVar5 = (long)*(int *)(param_1 + 0x3d) << 3;
    lVar4 = param_1[0x3c];
    do {
      puVar6 = *(undefined8 **)(lVar4 + -8 + lVar5);
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6);
        (**(code **)(param_1[1] + 0x18))(param_1 + 1,puVar6,0x230);
      }
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  puVar2 = PTR_PTR_0434a090;
  *(undefined4 *)(param_1 + 0x43) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x21c)) && (param_1[0x42] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,param_1[0x42],((ulong)*(uint *)((long)param_1 + 0x21c) & 0x3fffffff) << 3);
  }
  param_1[0x42] = 0;
  *(undefined4 *)((long)param_1 + 0x21c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1ec)) && (param_1[0x3c] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,param_1[0x3c],((ulong)*(uint *)((long)param_1 + 0x1ec) & 0x3fffffff) << 3);
  }
  param_1[0x3c] = 0;
  *(undefined4 *)((long)param_1 + 0x1ec) = 0x80000000;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1dc)) && (param_1[0x3a] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,param_1[0x3a],((ulong)*(uint *)((long)param_1 + 0x1dc) & 0x3fffffff) << 4);
  }
  param_1[0x3a] = 0;
  *(undefined4 *)((long)param_1 + 0x1dc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x35) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1ac)) && (param_1[0x34] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,param_1[0x34],((ulong)*(uint *)((long)param_1 + 0x1ac) & 0x3fffffff) << 4);
  }
  param_1[0x34] = 0;
  *(undefined4 *)((long)param_1 + 0x1ac) = 0x80000000;
  if (*(int *)(param_1 + 0x33) != 0) {
    lVar5 = (long)*(int *)(param_1 + 0x33) * 0x38;
    lVar4 = param_1[0x32];
    do {
      lVar1 = lVar4 + lVar5;
      *(undefined4 *)(lVar1 + -0x10) = 0;
      if ((-1 < (int)*(uint *)(lVar1 + -0xc)) && (*(long *)(lVar1 + -0x18) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x18))
                  (puVar2,*(long *)(lVar1 + -0x18),
                   ((ulong)*(uint *)(lVar1 + -0xc) & 0x3fffffff) << 3);
      }
      lVar5 = lVar5 + -0x38;
      *(undefined8 *)(lVar1 + -0x18) = 0;
      *(undefined4 *)(lVar1 + -0xc) = 0x80000000;
    } while (lVar5 != 0);
  }
  *(undefined4 *)(param_1 + 0x33) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x19c)) && (param_1[0x32] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,param_1[0x32],((ulong)*(uint *)((long)param_1 + 0x19c) & 0x3fffffff) * 0x38);
  }
  *(undefined4 *)((long)param_1 + 0x19c) = 0x80000000;
  param_1[0x32] = 0;
  if (*(int *)(param_1 + 0x31) != 0) {
    lVar4 = param_1[0x30];
    lVar5 = (long)*(int *)(param_1 + 0x31) * 0x18;
    do {
      while (uVar3 = *(ulong *)(lVar4 + -8 + lVar5), (uVar3 & 1) == 0) {
        lVar5 = lVar5 + -0x18;
        if (lVar5 == 0) goto LAB_032d8cbc;
      }
      FUN_032e0c40(uVar3 & 0xfffffffffffffffe);
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != 0);
  }
LAB_032d8cbc:
  *(undefined4 *)(param_1 + 0x31) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x18c)) && (param_1[0x30] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,param_1[0x30],((ulong)*(uint *)((long)param_1 + 0x18c) & 0x3fffffff) * 0x18);
  }
  param_1[1] = &PTR_FUN_0434af50;
  param_1[0x30] = 0;
  *(undefined4 *)((long)param_1 + 0x18c) = 0x80000000;
  FUN_032da7c8(param_1 + 1);
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  return;
}


