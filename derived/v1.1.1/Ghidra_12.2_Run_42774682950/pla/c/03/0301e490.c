/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0301e490; name: FUN_0301e490
 */


void FUN_0301e490(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (*(long *)(param_1 + 8) != 0) {
    plVar2 = *(long **)(*(long *)(param_1 + 8) + 0x658);
    (**(code **)(*plVar2 + 0x38))(plVar2,param_1 + 0x4e8,3);
  }
  FUN_032beab0(param_1 + 0x520,param_2);
  FUN_032beab0(param_1 + 0x620,param_2);
  lVar4 = *(long *)(param_1 + 0x4b0);
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  lVar1 = tpidr_el0;
  if (lVar4 != 0) {
    lVar3 = *(long *)(lVar1 + 0x38d490);
    if (lVar3 == 0) {
      lVar3 = FUN_0333d16c(0,1);
      *(long *)(lVar1 + 0x38d490) = lVar3;
    }
    plVar2 = *(long **)(*(long *)(lVar3 + 8) + 0x58);
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,0x80);
  }
  puVar5 = *(undefined8 **)(param_1 + 0x4e0);
  if (puVar5 != (undefined8 *)0x0) {
    if (*(int *)(puVar5 + 0xb) != 0) {
      (**(code **)(*(long *)*puVar5 + 0x28))((long *)*puVar5,puVar5[1]);
      *(undefined4 *)(puVar5 + 0xb) = 0;
    }
    *(undefined4 *)(puVar5 + 2) = 0;
    if ((-1 < (int)*(uint *)((long)puVar5 + 0x14)) && (puVar5[1] != 0)) {
      (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                (PTR_PTR_0434a080,puVar5[1],
                 ((ulong)*(uint *)((long)puVar5 + 0x14) & 0x3fffffff) << 3);
    }
    puVar5[1] = 0;
    *(undefined4 *)((long)puVar5 + 0x14) = 0x80000000;
    lVar4 = *(long *)(lVar1 + 0x38d490);
    if (lVar4 == 0) {
      lVar4 = FUN_0333d16c(0,1);
      *(long *)(lVar1 + 0x38d490) = lVar4;
    }
    plVar2 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
    (**(code **)(*plVar2 + 0x18))(plVar2,puVar5,0x60);
  }
  *(undefined8 *)(param_1 + 0x4e0) = 0;
  return;
}


