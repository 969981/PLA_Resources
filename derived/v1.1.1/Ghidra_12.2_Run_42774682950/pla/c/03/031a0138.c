/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a0138; name: FUN_031a0138
 */


void FUN_031a0138(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  iVar5 = *(int *)(param_1 + 0x20);
  if (0 < iVar5) {
    lVar7 = 0;
    lVar1 = tpidr_el0;
    do {
      lVar8 = *(long *)(*(long *)(param_1 + 0x18) + lVar7 * 0x38 + 0x30);
      if (lVar8 != 0) {
        do {
          lVar9 = *(long *)(lVar8 + 0x20);
          lVar6 = *(long *)(lVar1 + 0x38d490);
          if (lVar6 == 0) {
            lVar6 = FUN_0333d16c(0,1);
            *(long *)(lVar1 + 0x38d490) = lVar6;
          }
          plVar4 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
          (**(code **)(*plVar4 + 0x18))(plVar4,lVar8,0x28);
          lVar8 = lVar9;
        } while (lVar9 != 0);
        iVar5 = *(int *)(param_1 + 0x20);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  puVar3 = PTR_PTR_0434a090;
  *(undefined4 *)(param_1 + 0x70) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x74)) && (*(long *)(param_1 + 0x68) != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,*(long *)(param_1 + 0x68),((ulong)*(uint *)(param_1 + 0x74) & 0x3fffffff) << 3
              );
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0x80000000;
  puVar2 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x5c)) && (*(long *)(param_1 + 0x50) != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,*(long *)(param_1 + 0x50),((ulong)*(uint *)(param_1 + 0x5c) & 0x3fffffff) << 3
              );
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x4c)) && (*(long *)(param_1 + 0x40) != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,*(long *)(param_1 + 0x40),((ulong)*(uint *)(param_1 + 0x4c) & 0x3fffffff) << 3
              );
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x3c)) && (*(long *)(param_1 + 0x30) != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,*(long *)(param_1 + 0x30),
               ((ulong)*(uint *)(param_1 + 0x3c) & 0x3fffffff) * 0xc);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x24)) && (*(long *)(param_1 + 0x18) != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,*(long *)(param_1 + 0x18),
               ((ulong)*(uint *)(param_1 + 0x24) & 0x3fffffff) * 0x38);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  return;
}


