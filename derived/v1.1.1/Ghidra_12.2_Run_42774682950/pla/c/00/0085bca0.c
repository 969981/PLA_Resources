/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085bca0; name: FUN_0085bca0
 */


void FUN_0085bca0(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined2 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  void *pvVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  void *pvVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined4 local_78 [4];
  undefined4 local_68 [2];
  
  FUN_007f4b24(local_78);
  if ((*(long *)(param_2 + 0x1320) == 0) && (*(long *)(param_2 + 0x1338) == 0)) {
    uVar1 = *(int *)(param_3 + 0x140) + 1;
    uVar9 = (ulong)uVar1;
    *(uint *)(param_2 + 0x1328) = uVar1;
    uVar5 = FUN_007e336c();
    pvVar6 = (void *)FUN_0081a750((ulong)uVar1 * 0x5d0,uVar5);
    if ((pvVar6 != (void *)0x0) && (uVar1 != 0)) {
      uVar12 = uVar9 & 3;
      if (uVar9 - 1 < 3) {
        lVar13 = 0;
      }
      else {
        lVar13 = 0;
        pvVar10 = pvVar6;
        do {
          memset(pvVar10,0,0x5d0);
          memset((void *)((long)pvVar10 + 0x5d0),0,0x5d0);
          memset((void *)((long)pvVar10 + 0xba0),0,0x5d0);
          memset((void *)((long)pvVar10 + 0x1170),0,0x5d0);
          lVar13 = lVar13 + 4;
          pvVar10 = (void *)((long)pvVar10 + 0x1740);
        } while (uVar9 - uVar12 != lVar13);
      }
      if ((uVar1 & 3) != 0) {
        pvVar10 = (void *)((long)pvVar6 + lVar13 * 0x5d0);
        do {
          memset(pvVar10,0,0x5d0);
          uVar12 = uVar12 - 1;
          pvVar10 = (void *)((long)pvVar10 + 0x5d0);
        } while (uVar12 != 0);
      }
    }
    *(void **)(param_2 + 0x1320) = pvVar6;
    uVar1 = *(int *)(param_3 + 0x140) + 1;
    uVar9 = (ulong)uVar1;
    *(uint *)(param_2 + 0x1340) = uVar1;
    uVar5 = FUN_007e336c();
    pvVar6 = (void *)FUN_0081a750((ulong)uVar1 * 0x5d0,uVar5);
    if (pvVar6 == (void *)0x0) {
      *(undefined8 *)(param_2 + 0x1338) = 0;
    }
    else {
      if (uVar1 != 0) {
        uVar12 = uVar9 & 3;
        if (uVar9 - 1 < 3) {
          lVar13 = 0;
        }
        else {
          lVar13 = 0;
          pvVar10 = pvVar6;
          do {
            memset(pvVar10,0,0x5d0);
            memset((void *)((long)pvVar10 + 0x5d0),0,0x5d0);
            memset((void *)((long)pvVar10 + 0xba0),0,0x5d0);
            memset((void *)((long)pvVar10 + 0x1170),0,0x5d0);
            lVar13 = lVar13 + 4;
            pvVar10 = (void *)((long)pvVar10 + 0x1740);
          } while (uVar9 - uVar12 != lVar13);
        }
        if ((uVar1 & 3) != 0) {
          pvVar10 = (void *)((long)pvVar6 + lVar13 * 0x5d0);
          do {
            memset(pvVar10,0,0x5d0);
            uVar12 = uVar12 - 1;
            pvVar10 = (void *)((long)pvVar10 + 0x5d0);
          } while (uVar12 != 0);
        }
      }
      lVar13 = *(long *)(param_2 + 0x1320);
      *(void **)(param_2 + 0x1338) = pvVar6;
      if (lVar13 != 0) {
        if (0 < *(int *)(param_2 + 0x1328)) {
          lVar8 = 0;
          lVar11 = 0;
          do {
            memset((void *)(lVar13 + lVar8),0,0x5c0);
            lVar13 = *(long *)(param_2 + 0x1320);
            lVar2 = lVar13 + lVar8;
            lVar8 = lVar8 + 0x5d0;
            *(undefined4 *)(lVar2 + 0x5c0) = 0;
            *(undefined8 *)(lVar2 + 0x5c8) = 0;
            lVar11 = lVar11 + 1;
          } while (lVar11 < *(int *)(param_2 + 0x1328));
        }
        if (0 < *(int *)(param_2 + 0x1340)) {
          lVar11 = *(long *)(param_2 + 0x1338);
          lVar13 = 0;
          lVar8 = 0;
          do {
            memset((void *)(lVar11 + lVar13),0,0x5c0);
            lVar11 = *(long *)(param_2 + 0x1338);
            lVar2 = lVar11 + lVar13;
            lVar13 = lVar13 + 0x5d0;
            *(undefined4 *)(lVar2 + 0x5c0) = 0;
            *(undefined8 *)(lVar2 + 0x5c8) = 0;
            lVar8 = lVar8 + 1;
          } while (lVar8 < *(int *)(param_2 + 0x1340));
        }
        puVar4 = PTR_DAT_043773c0;
        plVar7 = (long *)FUN_00855064(*(undefined8 *)PTR_DAT_043773c0);
        uVar5 = (**(code **)(*plVar7 + 0x118))();
        *(undefined8 *)(param_2 + 0x1318) = uVar5;
        FUN_00805e48(*(undefined8 *)(param_2 + 0x188),200);
        uVar3 = *(undefined2 *)(*(long *)puVar4 + 0x50);
        uVar5 = FUN_007e336c();
        lVar13 = FUN_0081a750(0x30,uVar5);
        if (lVar13 != 0) {
          FUN_0085e200(lVar13,uVar3);
        }
        *(long *)(param_2 + 0x1308) = lVar13;
        local_78[0] = 0;
        goto LAB_0085bcf0;
      }
    }
    local_78[0] = 0x10408;
  }
  else {
    local_78[0] = 0x10408;
  }
LAB_0085bcf0:
  local_68[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_68);
  FUN_007ee578(param_1,local_78);
  return;
}


