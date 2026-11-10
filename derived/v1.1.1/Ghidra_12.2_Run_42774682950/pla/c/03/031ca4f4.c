/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031ca4f4; name: FUN_031ca4f4
 */


void FUN_031ca4f4(long param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  void *__s;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long *plVar12;
  ulong uVar13;
  int local_68 [2];
  
  uVar6 = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  if ((param_3 != 0) && (*(long *)(param_3 + 8) != 0)) {
    plVar5 = (long *)(param_3 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = *plVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar5 = *(long **)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = param_3;
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar7 = plVar5 + 2;
    do {
      lVar10 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  if (param_3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(uint *)(param_3 + 0x40);
    if ((int)(*(uint *)(param_1 + 0x2c) & 0x3fffffff) < (int)uVar11) {
      uVar6 = FUN_031cdb80(PTR_PTR_0434a080,uVar11,*(undefined8 *)(param_1 + 0x20),
                           *(undefined4 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x20) = uVar6;
    }
  }
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 < (int)uVar11) {
    __s = (void *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 8);
    *(uint *)(param_1 + 0x28) = uVar11;
    memset(__s,0,(*(long *)(param_1 + 0x20) + (long)(int)uVar11 * 8) - (long)__s &
                 0xfffffffffffffff8);
  }
  else if ((int)uVar11 < iVar2) {
    plVar5 = (long *)(*(long *)(param_1 + 0x20) + (long)(int)uVar11 * 8);
    *(uint *)(param_1 + 0x28) = uVar11;
    plVar12 = (long *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 8 + -8);
    plVar7 = (long *)*plVar12;
    if (plVar7 != (long *)0x0) goto LAB_031ca638;
LAB_031ca628:
    if (plVar12 != plVar5) {
      while( true ) {
        plVar12 = plVar12 + -1;
        plVar7 = (long *)*plVar12;
        if (plVar7 == (long *)0x0) break;
LAB_031ca638:
        if (plVar7[1] == 0) break;
        plVar1 = plVar7 + 2;
        do {
          lVar10 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 + -1 != 0) break;
        (**(code **)(*plVar7 + 0x18))();
        if (plVar12 == plVar5) goto LAB_031ca5d4;
      }
      goto LAB_031ca628;
    }
  }
LAB_031ca5d4:
  if (0 < (int)uVar11) {
    uVar13 = 0;
    lVar10 = tpidr_el0;
    do {
      if (*(long *)(*(long *)(param_3 + 0x38) + uVar13 * 0xf0) != 0) {
        lVar9 = *(long *)(lVar10 + 0x38d490);
        if (lVar9 == 0) {
          lVar9 = FUN_0333d16c(0,1);
          *(long *)(lVar10 + 0x38d490) = lVar9;
        }
        plVar5 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
        puVar8 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,0x108,0);
        *puVar8 = &PTR_LAB_0430aa18;
        local_68[0] = (int)uVar13;
        *(int *)(puVar8 + 4) = local_68[0];
        puVar8[1] = 0xffffffff;
        puVar8[2] = 1;
        puVar8[3] = param_3;
        *(undefined4 *)(puVar8 + 10) = 0;
        puVar8[0xd] = &DAT_03aad864;
        *(undefined4 *)(puVar8 + 0xe) = 0;
        puVar8[0x11] = &DAT_03aad864;
        *(undefined4 *)(puVar8 + 0x12) = 0;
        puVar8[0x19] = &DAT_03aad864;
        *(undefined4 *)(puVar8 + 0x1a) = 0;
        puVar8[0x1d] = &DAT_03aad864;
        *(undefined4 *)(puVar8 + 0x1e) = 0;
        puVar8[6] = 0;
        puVar8[7] = 0;
        puVar8[8] = 0x8000000000000000;
        puVar8[9] = &DAT_03aad864;
        puVar8[0xb] = 0;
        puVar8[0xc] = 0x8000000000000000;
        puVar8[0xf] = 0;
        puVar8[0x10] = 0x8000000000000000;
        puVar8[0x13] = 0;
        puVar8[0x14] = 0x8000000000000000;
        puVar8[0x15] = 0;
        puVar8[0x16] = 0x8000000000000000;
        puVar8[0x17] = 0;
        puVar8[0x18] = 0x8000000000000000;
        puVar8[0x1b] = 0;
        puVar8[0x1c] = 0x8000000000000000;
        puVar8[0x1f] = 0;
        puVar8[0x20] = 0x8000000000000000;
        FUN_031d6788(puVar8 + 5,local_68,
                     *(undefined8 *)
                      (*(long *)(*(long *)(*(long *)(param_3 + 0x38) + (long)local_68[0] * 0xf0) +
                                0x20) + 0x68));
        plVar5 = *(long **)(*(long *)(param_1 + 0x20) + uVar13 * 8);
        *(undefined8 **)(*(long *)(param_1 + 0x20) + uVar13 * 8) = puVar8;
        if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
          plVar7 = plVar5 + 2;
          do {
            lVar9 = *plVar7;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 + -1 == 0) {
            (**(code **)(*plVar5 + 0x18))();
          }
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar11);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x34) = 3;
  return;
}


