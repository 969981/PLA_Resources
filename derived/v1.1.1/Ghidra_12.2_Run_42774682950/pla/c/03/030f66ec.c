/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030f66ec; name: FUN_030f66ec
 */


void FUN_030f66ec(long param_1,long param_2,int param_3,ulong param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  long lVar11;
  undefined4 *puVar12;
  uint *puVar13;
  long lVar14;
  long lVar15;
  
  lVar11 = tpidr_el0;
  if (param_3 < *(int *)(param_1 + 0x20)) {
    lVar15 = (long)param_3;
    do {
      FUN_030f6088(*(undefined8 *)(*(long *)(param_1 + 0x18) + lVar15 * 8));
      lVar14 = *(long *)(*(long *)(param_1 + 0x18) + lVar15 * 8);
      if (lVar14 != 0) {
        FUN_030f6350(lVar14);
        lVar8 = *(long *)(lVar11 + 0x38d490);
        if (lVar8 == 0) {
          lVar8 = FUN_0333d16c(0,1);
          *(long *)(lVar11 + 0x38d490) = lVar8;
        }
        plVar5 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
        (**(code **)(*plVar5 + 0x18))(plVar5,lVar14,2000);
      }
      iVar10 = *(int *)(param_1 + 0x20);
      lVar15 = lVar15 + 1;
    } while (lVar15 < iVar10);
    if ((int)(*(uint *)(param_1 + 0x24) & 0x3fffffff) < param_3) {
      uVar6 = FUN_030f6d28(PTR_PTR_0434a080,param_3,*(undefined8 *)(param_1 + 0x18));
      iVar10 = *(int *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x18) = uVar6;
    }
    if ((iVar10 < param_3) || (param_3 < iVar10)) {
      *(int *)(param_1 + 0x20) = param_3;
    }
  }
  puVar12 = *(undefined4 **)(param_1 + 0x530);
  if (puVar12 == (undefined4 *)0x0) {
    uVar2 = *(undefined4 *)(*(long *)(param_2 + 0x498) + 0x4c);
    uVar6 = FUN_032cf5b0(0x28);
    FUN_030f6db0(uVar6,uVar2);
    lVar15 = *(long *)(param_1 + 0x530);
    *(undefined8 *)(param_1 + 0x530) = uVar6;
    if (lVar15 != 0) {
      *(undefined4 *)(lVar15 + 0x20) = 0;
      if ((-1 < (int)*(uint *)(lVar15 + 0x24)) && (*(long *)(lVar15 + 0x18) != 0)) {
        (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                  (PTR_PTR_0434a080,*(long *)(lVar15 + 0x18),
                   ((ulong)*(uint *)(lVar15 + 0x24) & 0x3fffffff) << 6);
      }
      *(undefined8 *)(lVar15 + 0x18) = 0;
      *(undefined4 *)(lVar15 + 0x24) = 0x80000000;
      FUN_030fb874(lVar15);
      lVar14 = *(long *)(lVar11 + 0x38d490);
      if (lVar14 == 0) {
        lVar14 = FUN_0333d16c(0,1);
        *(long *)(lVar11 + 0x38d490) = lVar14;
      }
      plVar5 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar15,0x28);
    }
  }
  else if ((param_4 & 1) != 0) {
    FUN_032c4b00(*(undefined8 *)(puVar12 + 6),0xff,puVar12[8] << 6);
    *puVar12 = 1;
  }
  puVar3 = PTR_PTR_0434a080;
  iVar10 = *(int *)(param_1 + 0x20);
  if (iVar10 < param_3) {
    puVar13 = (uint *)(param_1 + 0x24);
    if ((int)(*puVar13 & 0x3fffffff) < param_3) {
      uVar6 = FUN_030f6d28(PTR_PTR_0434a080,param_3,*(undefined8 *)(param_1 + 0x18),iVar10,puVar13);
      *(undefined8 *)(param_1 + 0x18) = uVar6;
    }
    lVar15 = (long)iVar10 << 3;
    do {
      uVar6 = FUN_032cf5b0(2000);
      FUN_030f5d64(uVar6,iVar10,*(undefined8 *)(param_1 + 0x530));
      iVar7 = *(int *)(param_1 + 0x20);
      lVar14 = *(long *)(param_1 + 0x18);
      iVar1 = iVar7 + 1;
      if ((int)(*(uint *)(param_1 + 0x24) & 0x3fffffff) <= iVar7) {
        lVar14 = FUN_030f6d28(puVar3,iVar1,lVar14,iVar7,puVar13);
        iVar7 = *(int *)(param_1 + 0x20);
        *(long *)(param_1 + 0x18) = lVar14;
      }
      *(undefined8 *)(lVar14 + (long)iVar7 * 8) = uVar6;
      *(int *)(param_1 + 0x20) = iVar1;
      FUN_030f5ff8(*(undefined8 *)(*(long *)(param_1 + 0x18) + lVar15),param_2);
      iVar10 = iVar10 + 1;
      lVar15 = lVar15 + 8;
    } while (param_3 != iVar10);
  }
  lVar15 = *(long *)(lVar11 + 0x38d490);
  if (lVar15 == 0) {
    lVar15 = FUN_0333d16c(0,1);
    *(long *)(lVar11 + 0x38d490) = lVar15;
  }
  if (*(ulong *)(*(long *)(lVar15 + 0x10) + 8) < *(ulong *)(*(long *)(lVar15 + 0x10) + 0x18)) {
    bVar4 = *(int *)(param_2 + 0x858) != 0;
  }
  else {
    bVar4 = false;
  }
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar11 = 0;
    do {
      lVar15 = *(long *)(*(long *)(param_1 + 0x18) + lVar11 * 8);
      *(undefined8 *)(lVar15 + 0x3b0) = 0xffffffff00ffffff;
      *(undefined4 *)(lVar15 + 0x3b8) = 0;
      *(undefined8 *)(lVar15 + 0x38) = 0xffffffff00ffffff;
      *(bool *)(lVar15 + 0x388) = bVar4;
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(param_1 + 0x20));
  }
  lVar11 = -0x100;
  piVar9 = (int *)(param_1 + 0x138);
  do {
    iVar10 = (int)lVar11;
    piVar9[-3] = iVar10 + 0x101;
    piVar9[-2] = iVar10 + 0x102;
    piVar9[-1] = iVar10 + 0x103;
    lVar11 = lVar11 + 4;
    *piVar9 = iVar10 + 0x104;
    piVar9 = piVar9 + 4;
  } while (lVar11 != 0);
  *(undefined4 *)(param_1 + 0x528) = 0x1ff;
  *(undefined4 *)(param_1 + 0x128) = 0;
  return;
}


