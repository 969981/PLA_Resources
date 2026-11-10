/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332ea84; name: FUN_0332ea84
 */


void FUN_0332ea84(undefined8 *param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  
  *param_1 = &PTR_LAB_0435e778;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = &PTR_LAB_0435e850;
  *(undefined4 *)(param_1 + 6) = 1;
  param_1[7] = 0;
  param_1[8] = 0x8000000000000000;
  iVar8 = param_2[2];
  if (0x3f < iVar8) {
    iVar8 = 0x40;
  }
  *(int *)(param_1 + 9) = iVar8;
  param_1[0x4a] = param_1 + 0x4c;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  *(undefined4 *)((long)param_1 + 0x25c) = 0x80000040;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  param_1[0x6e] = &PTR_LAB_04350ae8;
  *(undefined4 *)(param_1 + 0x70) = 0;
  iVar8 = *param_2;
  *(int *)((long)param_1 + 900) = iVar8;
  if (iVar8 == 0) {
    lVar2 = tpidr_el0;
    lVar6 = *(long *)(lVar2 + 0x38d490);
    if (lVar6 == 0) {
      lVar6 = FUN_0333d16c(0,1);
      *(long *)(lVar2 + 0x38d490) = lVar6;
    }
    plVar3 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,0x28,0);
    *puVar4 = &PTR_LAB_04350b48;
    nn::os::InitializeMutex((MutexType *)(puVar4 + 1),true,0);
  }
  else if (iVar8 == 2) {
    lVar2 = tpidr_el0;
    lVar6 = *(long *)(lVar2 + 0x38d490);
    if (lVar6 == 0) {
      lVar6 = FUN_0333d16c(0,1);
      *(long *)(lVar2 + 0x38d490) = lVar6;
    }
    plVar3 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,0x40,0);
    puVar4[1] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[7] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_LAB_04350be8;
    FUN_0332cf84();
    puVar4[6] = 0;
    puVar4[7] = 0;
  }
  else {
    if (iVar8 != 1) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    lVar2 = tpidr_el0;
    lVar6 = *(long *)(lVar2 + 0x38d490);
    if (lVar6 == 0) {
      lVar6 = FUN_0333d16c(0,1);
      *(long *)(lVar2 + 0x38d490) = lVar6;
    }
    plVar3 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,0x40,0);
    *puVar4 = &PTR_LAB_04350ba0;
    *(undefined4 *)(puVar4 + 1) = 0;
  }
  param_1[4] = puVar4;
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x38d490);
  if (lVar6 == 0) {
    lVar6 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar6;
  }
  plVar3 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
  uVar5 = (**(code **)(*plVar3 + 0x10))(plVar3,0x30,0);
  FUN_0332f008();
  param_1[5] = uVar5;
  if ((*(uint *)((long)param_1 + 0x44) & 0x3fffff00) == 0) {
    uVar9 = (*(uint *)((long)param_1 + 0x44) & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar9) {
      uVar9 = 0x3fffffff;
    }
    if (uVar9 < 0x101) {
      uVar9 = 0x100;
    }
    uVar5 = FUN_032bd1d4(PTR_PTR_0434a080,uVar9,0x10,param_1[7],*(undefined4 *)(param_1 + 8),
                         (long)param_1 + 0x44);
    param_1[7] = uVar5;
  }
  iVar8 = *(int *)(param_1 + 9);
  if (0 < iVar8) {
    iVar10 = -1;
    lVar6 = 0;
    do {
      iVar8 = *(int *)((long)param_1 + 900);
      uVar11 = (undefined4)lVar6;
      if (iVar8 == 0) {
        lVar7 = *(long *)(lVar2 + 0x38d490);
        if (lVar7 == 0) {
          lVar7 = FUN_0333d16c(0,1);
          *(long *)(lVar2 + 0x38d490) = lVar7;
        }
        plVar3 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
        puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,0x178,0);
        *(undefined4 *)(puVar4 + 1) = uVar11;
        *(undefined4 *)((long)puVar4 + 0xc) = 0;
        *(undefined1 *)(puVar4 + 2) = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        *(undefined1 *)(puVar4 + 5) = 0;
        puVar4[6] = puVar4 + 8;
        *(undefined4 *)(puVar4 + 7) = 0;
        *(undefined4 *)((long)puVar4 + 0x3c) = 0x80000020;
        puVar4[0x28] = 0;
        puVar4[0x29] = 0;
        *puVar4 = &PTR_LAB_04350c30;
        nn::os::InitializeSemaphore((SemaphoreType *)(puVar4 + 0x2a),0,1);
      }
      else if (iVar8 == 2) {
        lVar7 = *(long *)(lVar2 + 0x38d490);
        if (lVar7 == 0) {
          lVar7 = FUN_0333d16c(0,1);
          *(long *)(lVar2 + 0x38d490) = lVar7;
        }
        plVar3 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
        puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,0x168,0);
        uVar5 = *(undefined8 *)(param_2 + 4);
        *(undefined4 *)(puVar4 + 1) = uVar11;
        *(undefined4 *)((long)puVar4 + 0xc) = 0;
        *(undefined1 *)(puVar4 + 2) = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        *(undefined1 *)(puVar4 + 5) = 0;
        puVar4[6] = puVar4 + 8;
        *(undefined4 *)(puVar4 + 7) = 0;
        *(undefined4 *)((long)puVar4 + 0x3c) = 0x80000020;
        *puVar4 = &PTR_LAB_04350cd0;
        *(undefined4 *)(puVar4 + 0x2c) = 0xffffffff;
        puVar4[0x28] = 0;
        puVar4[0x29] = 0;
        puVar4[0x2a] = 0;
        puVar4[0x2b] = uVar5;
      }
      else {
        if (iVar8 != 1) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        lVar7 = *(long *)(lVar2 + 0x38d490);
        if (lVar7 == 0) {
          lVar7 = FUN_0333d16c(0,1);
          *(long *)(lVar2 + 0x38d490) = lVar7;
        }
        plVar3 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
        puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,0x1c0,0);
        *(undefined4 *)(puVar4 + 1) = uVar11;
        *(undefined4 *)((long)puVar4 + 0xc) = 0;
        *(undefined1 *)(puVar4 + 2) = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        *(undefined1 *)(puVar4 + 5) = 0;
        puVar4[6] = puVar4 + 8;
        *(undefined4 *)(puVar4 + 7) = 0;
        *(undefined4 *)((long)puVar4 + 0x3c) = 0x80000020;
        *puVar4 = &PTR_FUN_04350c98;
        *(undefined4 *)(puVar4 + 0x30) = 0;
        puVar4[0x28] = 0;
        puVar4[0x29] = 0;
      }
      lVar7 = lVar6 + 1;
      param_1[lVar6 + 10] = puVar4;
      puVar4[0x28] = param_1;
      iVar1 = *(int *)(param_1 + 0x4b);
      iVar8 = iVar10 + *(int *)(param_1 + 9);
      iVar10 = iVar10 + -1;
      *(int *)(param_1[0x4a] + (long)iVar1 * 4) = iVar8;
      *(int *)(param_1 + 0x4b) = iVar1 + 1;
      iVar8 = *(int *)(param_1 + 9);
      lVar6 = lVar7;
    } while (lVar7 < iVar8);
    if (0x3f < iVar8) goto LAB_0332edb4;
  }
  memset(param_1 + (long)iVar8 + 10,0,(ulong)(0x3f - iVar8) * 8 + 8);
LAB_0332edb4:
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  return;
}


